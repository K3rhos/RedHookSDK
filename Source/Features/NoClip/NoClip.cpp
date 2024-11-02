#include <pch.h>



static Vector3 GET_FORWARD_VECTOR(Actor _Actor)
{
	Vector3 forward;
	float heading = GET_HEADING(_Actor) + 90.0f;

	heading *= Math<float>::DegToRad;

	forward.x = std::cos(heading) * -1.0f;
	forward.y = 0.0f;
	forward.z = std::sin(heading);

	return forward;
}



static Vector3 GET_RIGHT_VECTOR(Actor _Actor)
{
	Vector3 right;
	float heading = GET_HEADING(_Actor) + 180.0f;

	heading *= Math<float>::DegToRad;

	right.x = std::cos(heading) * -1.0f;
	right.y = 0.0f;
	right.z = std::sin(heading);

	return right;
}



static void _PRINT_BOTTOM_FORMAT(const char* _Format, ...)
{
	char buffer[UCHAR_MAX];

	va_list vaBuffer;

	va_start(vaBuffer, _Format);
	_vsnprintf_s(buffer, sizeof(buffer), _Format, vaBuffer);
	va_end(vaBuffer);

	_PRINT_BOTTOM(buffer, 0.5f, true, 0, 0, 0, 0);
}



void NoClip::Update()
{
	Actor localPlayerActor = GET_PLAYER_ACTOR(-1);

	if (Input::IsKeyJustPressed(KEY_F5) || (IS_BUTTON_DOWN(0, BUTTON_DPAD_DOWN) && IS_BUTTON_PRESSED(0, BUTTON_B)))
	{
		s_NoClip ^= true;

		SET_MOVER_FROZEN(localPlayerActor, s_NoClip);

		if (s_NoClip)
		{
			_PRINT_BOTTOM("No Clip <green>On", 0.5f, true, 0, 0, 0, 0);
		}
		else
		{
			_PRINT_BOTTOM("No Clip <red>Off", 0.5f, true, 0, 0, 0, 0);
		}
	}

	if (s_NoClip)
	{
		float leftStickX = GET_STICK_X(0, false, 0);
		float leftStickY = GET_STICK_Y(0, false, 0);

		Vector3 position = GET_POSITION(localPlayerActor);
		float cameraHeading = GET_OBJECT_HEADING(GET_GAME_CAMERA());

		const float stickDeadZone = 0.02f;

		float speed = s_NoClipSpeeds[s_NoClipSpeedIndex];

		// Handle no clip different speed levels
		if (Input::IsKeyJustPressed(KEY_Q))
		{
			if (s_NoClipSpeedIndex > 0)
			{
				s_NoClipSpeedIndex--;

				speed = s_NoClipSpeeds[s_NoClipSpeedIndex];

				_PRINT_BOTTOM_FORMAT("No Clip Speed <blue>x%d", (int)speed);
			}
		}
		else if (Input::IsKeyJustPressed(KEY_E))
		{
			if (s_NoClipSpeedIndex < (s_NoClipSpeeds.size() - 1))
			{
				s_NoClipSpeedIndex++;

				speed = s_NoClipSpeeds[s_NoClipSpeedIndex];

				_PRINT_BOTTOM_FORMAT("No Clip Speed <blue>x%d", (int)speed);
			}
		}

		// Handle speed boost
		if (Input::IsKeyPressed(KEY_LEFT_SHIFT) || IS_BUTTON_DOWN(0, BUTTON_STICK_LEFT))
			speed *= 2.0f;

		float movementSpeed = TIMESTEP() * speed;

		// Handle forward/backward/left/right movements
		// NOTE: This support keyboard region, as an example is you're
		// using an AZERTY keyboard layout like me, it will
		// automatically be in ZQSD instead of WASD.
		if (Input::IsKeyPressed(KEY_W))
			position -= GET_FORWARD_VECTOR(localPlayerActor) * movementSpeed;

		if (Input::IsKeyPressed(KEY_S))
			position += GET_FORWARD_VECTOR(localPlayerActor) * movementSpeed;

		if (Input::IsKeyPressed(KEY_A))
			position -= GET_RIGHT_VECTOR(localPlayerActor) * movementSpeed;

		if (Input::IsKeyPressed(KEY_D))
			position += GET_RIGHT_VECTOR(localPlayerActor) * movementSpeed;

		if (leftStickY < -stickDeadZone || leftStickY > stickDeadZone)
			position += GET_FORWARD_VECTOR(localPlayerActor) * leftStickY * movementSpeed;

		if (leftStickX < -stickDeadZone || leftStickX > stickDeadZone)
			position += GET_RIGHT_VECTOR(localPlayerActor) * leftStickX * movementSpeed;

		// Handle going up/down
		if (Input::IsKeyPressed(KEY_SPACE) || IS_BUTTON_DOWN(0, BUTTON_A))
		{
			position.y += movementSpeed;
		}
		else if (Input::IsKeyPressed(KEY_LEFT_CTRL) || IS_BUTTON_DOWN(0, BUTTON_X))
		{
			position.y -= movementSpeed;
		}

		TELEPORT_ACTOR(localPlayerActor, &position, false, false, false);
		SET_ACTOR_HEADING(localPlayerActor, cameraHeading, false);
	}
}