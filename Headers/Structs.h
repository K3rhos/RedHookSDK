#pragma once

// © Copyright K3rhos 2024
// https://discord.gg/8b7NVWnthY



struct Vector2
{
	float x;
	float y;

	Vector2() : x(0.0f), y(0.0f) {}
	Vector2(float _X, float _Y) : x(_X), y(_Y) {}

	Vector2 operator + (const Vector2& _Vector) const
	{
		return Vector2(x, y) += _Vector;
	}

	Vector2 operator - (const Vector2& _Vector) const
	{
		return Vector2(x, y) -= _Vector;
	}

	Vector2 operator * (float _Scalar) const
	{
		return Vector2(x, y) *= _Scalar;
	}

	Vector2 operator / (float _Scalar) const
	{
		return Vector2(x, y) /= _Scalar;
	}

	Vector2& operator += (const Vector2& _Vector)
	{
		x += _Vector.x;
		y += _Vector.y;

		return *this;
	}

	Vector2& operator -= (const Vector2& _Vector)
	{
		x -= _Vector.x;
		y -= _Vector.y;

		return *this;
	}

	Vector2& operator *= (float _Scalar)
	{
		x *= _Scalar;
		y *= _Scalar;

		return *this;
	}

	Vector2& operator /= (float _Scalar)
	{
		x /= _Scalar;
		y /= _Scalar;

		return *this;
	}

	static float Distance(const Vector2& _First, const Vector2& _Second)
	{
		Vector2 result = _First - _Second;

		return result.GetMagnitude();
	}

	static Vector2 Lerp(const Vector2& _Start, const Vector2& _End, float _Time)
	{
		Vector2 result;

		result.x = std::lerp(_Start.x, _End.x, _Time);
		result.y = std::lerp(_Start.y, _End.y, _Time);

		return result;
	}

	float GetMagnitude() const
	{
		return sqrtf(x * x + y * y);
	}

	void Normalize()
	{
		float magnitude = GetMagnitude();

		if (magnitude > 0.0f)
		{
			x /= magnitude;
			y /= magnitude;
		}
	}

	bool IsNull() const
	{
		return x == 0.0f && y == 0.0f;
	}
};



struct Vector3
{
	float x;
	float y;
	float z;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
	Vector3(float _X, float _Y, float _Z) : x(_X), y(_Y), z(_Z) {}

	Vector3 operator + (const Vector3& _Vector) const
	{
		return Vector3(x, y, z) += _Vector;
	}

	Vector3 operator - (const Vector3& _Vector) const
	{
		return Vector3(x, y, z) -= _Vector;
	}

	Vector3 operator * (float _Scalar) const
	{
		return Vector3(x, y, z) *= _Scalar;
	}

	Vector3 operator / (float _Scalar) const
	{
		return Vector3(x, y, z) /= _Scalar;
	}

	Vector3& operator += (const Vector3& _Vector)
	{
		x += _Vector.x;
		y += _Vector.y;
		z += _Vector.z;

		return *this;
	}

	Vector3& operator -= (const Vector3& _Vector)
	{
		x -= _Vector.x;
		y -= _Vector.y;
		z -= _Vector.z;

		return *this;
	}

	Vector3& operator *= (float _Scalar)
	{
		x *= _Scalar;
		y *= _Scalar;
		z *= _Scalar;

		return *this;
	}

	Vector3& operator /= (float _Scalar)
	{
		x /= _Scalar;
		y /= _Scalar;
		z /= _Scalar;

		return *this;
	}

	static Vector3 Cross(const Vector3& _First, const Vector3& _Second)
	{
		Vector3 result;

		result.x = _First.y * _Second.z - _First.z * _Second.y;
		result.y = _First.z * _Second.x - _First.x * _Second.z;
		result.z = _First.x * _Second.y - _First.y * _Second.x;

		return result;
	}

	static float Distance(const Vector3& _First, const Vector3& _Second)
	{
		Vector3 result = _First - _Second;

		return result.GetMagnitude();
	}

	static Vector3 Lerp(const Vector3& _Start, const Vector3& _End, float _Time)
	{
		Vector3 result;

		result.x = std::lerp(_Start.x, _End.x, _Time);
		result.y = std::lerp(_Start.y, _End.y, _Time);
		result.z = std::lerp(_Start.z, _End.z, _Time);

		return result;
	}

	float GetMagnitude() const
	{
		return sqrtf(x * x + y * y + z * z);
	}

	void Normalize()
	{
		float magnitude = GetMagnitude();

		if (magnitude > 0.0f)
		{
			x /= magnitude;
			y /= magnitude;
			z /= magnitude;
		}
	}

	Vector3 Rotate(float _Angle)
	{
		Normalize();

		float c = cosf(_Angle);
		float s = sinf(_Angle);

		return Vector3(c * x - s * z, y, s * x + c * z);
	}

	bool IsNull() const
	{
		return x == 0.0f && y == 0.0f && z == 0.0f;
	}
};