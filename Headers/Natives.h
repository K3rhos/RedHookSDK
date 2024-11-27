#pragma once

// © Copyright K3rhos 2024
// https://github.com/K3rhos/RDR-PC-Natives-DB
// https://discord.gg/8b7NVWnthY



using Player = int;
using Actor = int;
using Vehicle = int;
using Object = int;
using Train = int;
using Pickup = int;
using Blip = int;
using Camera = int;
using Controller = int;
using Layout = int;
using Iterator = int;
using IterationSet = int;
using GUIWindow = int;
using FireHandle = int;

using Hash = uint32_t;
using Time = float;

namespace AUDIO
{
	// TODO: Check and complete this list...

	static void AUDIO_SET_VEHICLE_DAMAGED(Vehicle _Vehicle, bool _IsDamaged) { return Invoke<0xBD0E8EBA, void>(_Vehicle, _IsDamaged); }
}

namespace BUILTIN
{
	static void WAIT(int _Ms) { ScriptWait(_Ms); } // Replaced with our own wait function.
	static void WAITUNWARPED(int _Ms) { ScriptWait(_Ms); } // Replaced with our own wait function.
	static void WAITUNPAUSED(int _Ms) { ScriptWait(_Ms); } // Replaced with our own wait function.
	static int START_NEW_SCRIPT(const char* _ScriptPath, int _StackSize) { return Invoke<0x3F166D0E, int>(_ScriptPath, _StackSize); }
	static int START_NEW_SCRIPT_WITH_ARGS(const char* _ScriptPath, int* _Args, int _ArgCount, int _StackSize) { return Invoke<0x4A2100E4, int>(_ScriptPath, _Args, _ArgCount, _StackSize); }
	static void SETTIMERA(int _Value) { Invoke<0x35785333, void>(_Value); }
	static float TIMESTEP() { return Invoke<0x50597EE2, float>(); }
	static void PRINTSTRING(const char* _Str) { Invoke<0xECF8EB5F, void>(_Str); }
	static void PRINTFLOAT(float _Value) { Invoke<0xD48B90B6, void>(_Value); }
	static void PRINTINT(int _Value) { Invoke<0x63651F03, void>(_Value); }
	static void PRINTNL() { Invoke<0x868997DA, void>(); }
	static void PRINTVECTOR(float _X, float _Y, float _Z) { Invoke<0x085F31FB, void>(_X, _Y, _Z); }
	static float SQRT(float _Value) { return Invoke<0x145C7701, float>(_Value); }
	static float POW(float _Base, float _Exponent) { return Invoke<0x85D134F8, float>(_Base, _Exponent); }
	static float EXP(float _Base, float _Exponent) { return Invoke<0xE2313450, float>(_Base, _Exponent); }
	static float VMAG(float _X, float _Y, float _Z) { return Invoke<0x1FCF1ECD, float>(_X, _Y, _Z); }
	static float VDIST(float _X1, float _Y1, float _Z1, float _X2, float _Y2, float _Z2) { return Invoke<0x3C08ECB7, float>(_X1, _Y1, _Z1, _X2, _Y2, _Z2); }
	static float VDIST2(float _X1, float _Y1, float _Z1, float _X2, float _Y2, float _Z2) { return Invoke<0xC85DEF1F, float>(_X1, _Y1, _Z1, _X2, _Y2, _Z2); }
	static int SHIFT_LEFT(int _Value, int _BitShift) { return Invoke<0x314CC6CD, int>(_Value, _BitShift); }
	static int SHIFT_RIGHT(int _Value, int _BitShift) { return Invoke<0x352633CA, int>(_Value, _BitShift); }
	static int FLOOR(float _Value) { return Invoke<0x32E9BE04, int>(_Value); }
	static int CEIL(float _Value) { return Invoke<0xD536A1DF, int>(_Value); }
	static int ROUND(float _Value) { return Invoke<0x323B0E24, int>(_Value); }
	static float TO_FLOAT(int _Value) { return Invoke<0x67116627, float>(_Value); }
	static void SNAPSHOT_GLOBALS() { Invoke<0x5A25520E, void>(); }
	static int GET_LATEST_CONSOLE_COMMAND() { return Invoke<0x2B547FE6, int>(); }
	static void RESET_LATEST_CONSOLE_COMMAND() { Invoke<0xAA3EC981, void>(); }
	static int GET_CONSOLE_COMMAND_TOKEN(int _Unk0) { return Invoke<0x9DE3DE24, int>(_Unk0); }
	static int GET_NUM_CONSOLE_COMMAND_TOKENS() { return Invoke<0x608F5BC6, int>(); }
}

namespace CORE
{
	static const char* _0x14993D3B(Vector3* _Vector) { return Invoke<0x14993D3B, const char*>(_Vector); }
	static const char* _0xE8AB1D5B(Vector3* _Vector) { return Invoke<0xE8AB1D5B, const char*>(_Vector); }
	static void SET_DEBUG_DRAW(int _Unk0) { Invoke<0x505A8057, void>(_Unk0); }
	static int GET_DEBUG_DRAW_STATE() { return Invoke<0xFF0B53EF, int>(); }
	static int _0x6DE957C6() { return Invoke<0x6DE957C6, int>(); }
	static void SCRIPT_BREAKPOINT(int _Unk0) { Invoke<0xA81DABA3, void>(_Unk0); }
	static void GRINGO_DEBUG_CHECK_SOUND(int _Unk0) { Invoke<0x5AC72FCC, void>(_Unk0); }
	static void DISABLE_ACTOR_REFCOUNTING(int _Unk0) { Invoke<0x9FEFA743, void>(_Unk0); }
	static const char* GET_SCRIPT_NAME() { return Invoke<0x0BC52445, const char*>(); }
	static const char* GET_SHORT_SCRIPT_NAME() { return Invoke<0x960DB7A5, const char*>(); }
	static void TERMINATE_THIS_SCRIPT() { Invoke<0x245B6AB6, void>(); }
	static int GET_THIS_SCRIPT_ID() { return Invoke<0x9C424E0D, int>(); }
	static bool IS_SCRIPT_VALID(int _ScriptId) { return Invoke<0x45F7D589, bool>(_ScriptId); }
	static bool DOES_SCRIPT_EXIST(const char* _ScriptPath) { return Invoke<0xDEAB87AB, bool>(_ScriptPath); }
	static bool IS_EXITFLAG_SET() { return Invoke<0x687ECC3C, bool>(); }
	static bool _IS_GAME_PATH_VALID(const char* _Str) { return Invoke<0x4417C9F2, bool>(_Str); }
	static void _0x05719022(const char* _Str) { Invoke<0x05719022, void>(_Str); }
	static void TERMINATE_SCRIPT(int _ScriptId) { Invoke<0x60A7FF09, void>(_ScriptId); }
	static void ADD_PERSISTENT_SCRIPT(int _ScriptId) { Invoke<0x2F109475, void>(_ScriptId); }
	static void REMOVE_PERSISTENT_SCRIPT(int _ScriptId) { Invoke<0xC605E92F, void>(_ScriptId); }
	static int _RETURN_500000() { return Invoke<0x4C48EA4D, int>(); }
	static int _0xD058BD70() { return Invoke<0xD058BD70, int>(); }
	static int _0x26884138() { return Invoke<0x26884138, int>(); }
	static void RAND_SET_SEED(int _Seed) { Invoke<0xC0C6245E, void>(_Seed); }
	static int RAND_INT_RANGE(int _Min, int _Max) { return Invoke<0xF8D0D165, int>(_Min, _Max); }
	static float RAND_FLOAT_RANGE(float _Min, float _Max) { return Invoke<0xCA6229BF, float>(_Min, _Max); }
	static int RAND_INT_RANGE_DIFFERENT(int _Min, int _Max, int _Unk2) { return Invoke<0x1D69F321, int>(_Min, _Max, _Unk2); }
	static float RAND_FLOAT_GAUSSIAN(float _Min, float _Max) { return Invoke<0x5D934CCB, float>(_Min, _Max); }
	static void FILE_START_PATH(int _Unk0) { Invoke<0x973BC454, void>(_Unk0); }
	static void FILE_ADD_TO_PATH(int _Unk0) { Invoke<0x63CDBB01, void>(_Unk0); }
	static void FILE_END_PATH() { Invoke<0x9A202E1B, void>(); }
	static int FILE_GET_CURRENT_PATH() { return Invoke<0x6F323C5F, int>(); }
	static float GET_X(Actor _Actor) { return Invoke<0x436CE75A, float>(_Actor); }
	static float GET_Y(Actor _Actor) { return Invoke<0x0B0FF6A1, float>(_Actor); }
	static float GET_Z(Actor _Actor) { return Invoke<0x25A02BC1, float>(_Actor); }
	static void VNORMALIZE(Vector3* _Vector) { Invoke<0x836466F8, void>(_Vector); }
	static void VCROSS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4D629653, void>(_Unk0, _Unk1, _Unk2); }
	static int VDOT(int _Unk0, int _Unk1) { return Invoke<0x30A9FA0A, int>(_Unk0, _Unk1); }
	static void VSCALE(Vector3* _Vector, float _Scale) { Invoke<0x13530581, void>(_Vector, _Scale); }
	static bool _0xF1A53C41(Vector3* _VectorA, Vector3* _VectorB, bool _Unk0, int _Unk1) { return Invoke<0xF1A53C41, bool>(_VectorA, _VectorB, _Unk0, _Unk1); }
	static void _0xF76F2BB3(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xF76F2BB3, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void _0x65DAA654(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x65DAA654, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void _0x1BD78730(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1BD78730, void>(_Unk0, _Unk1, _Unk2); }
	static int _0x141201A3(float _Unk0, float _Unk1, float _Unk2, float _Unk3, float _Unk4, float _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0x141201A3, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static float FABS(float _Value) { return Invoke<0xACF9A5E4, float>(_Value); }
	static int ABS(int _Value) { return Invoke<0x5AABFA97, int>(_Value); }
	static float SIN_DEGREE(float _X) { return Invoke<0x55842354, float>(_X); }
	static float COS_DEGREE(float _X) { return Invoke<0x430207A4, float>(_X); }
	static float TAN_DEGREE(float _X) { return Invoke<0x9BD37A3D, float>(_X); }
	static float ATAN_DEGREE(float _X) { return Invoke<0x69BE2817, float>(_X); }
	static float ATAN2_DEGREE(float _X, float _Y) { return Invoke<0x8A0D25F2, float>(_X, _Y); }
	static float _0x9C40E671(Vector3* _Vector) { return Invoke<0x9C40E671, float>(_Vector); }
	static int _0xADF7D54B(int _Unk0) { return Invoke<0xADF7D54B, int>(_Unk0); }
	static int GET_ANGLE_BETWEEN_VECTORS_DEGS(int _Unk0, int _Unk1) { return Invoke<0x3DD1DC3F, int>(_Unk0, _Unk1); }
	static void _0x44986367(int _Unk0, int _Unk1) { Invoke<0x44986367, void>(_Unk0, _Unk1); }
	static float _TRANSFORM_WORLD_TO_SCREEN(Vector3* _Position, float* _ScreenX, float* _ScreenY) { return Invoke<0xBB3CDF72, float>(_Position, _ScreenX, _ScreenY); }
	static float GET_CURRENT_GAME_TIME() { return Invoke<0x5842B9D1, float>(); }
	static float GET_CURRENT_UNWARPED_TIME() { return Invoke<0xF83666A6, float>(); }
	static int GET_SYSTEM_TIME() { return Invoke<0x17CEE67A, int>(); }
	static int GET_TIMESTAMP() { return Invoke<0xD66B6C8E, int>(); }
	static int GET_UTC_TIME() { return Invoke<0xC589CD7D, int>(); }
	static float GET_UNWARPED_REALTIME_SECONDS() { return Invoke<0x49F96787, float>(); }
	static float GET_PROFILE_TIME() { return Invoke<0x6E189771, float>(); }
	static float GET_LAST_FRAME_TIME() { return Invoke<0x59466B4D, float>(); }
	static void LOG_MESSAGE(const char* _Message) { Invoke<0x676167C3, void>(_Message); }
	static void LOG_WARNING(const char* _Message) { Invoke<0xFD25473E, void>(_Message); }
	static void LOG_ERROR(const char* _Message) { Invoke<0x906C42FD, void>(_Message); }
	static Actor GET_TARGET_ACTOR() { return Invoke<0x0EF7427B, Actor>(); }
	static void GRINGO_SET_TARGET_OBJECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x00776356, void>(_Unk0, _Unk1, _Unk2); }
	static Object GET_TARGET_OBJECT() { return Invoke<0x533AD3F2, Object>(); }
	static bool IS_GRINGO_VALID(int _Unk0) { return Invoke<0x7C858A47, bool>(_Unk0); }
	static void GET_GRINGO_ACTIVATION_SPHERE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xADA2EA30, void>(_Unk0, _Unk1, _Unk2); }
	static void DISABLE_GRINGO_STREAMING_CHECKS() { Invoke<0xFD0AA999, void>(); }
	static void ENABLE_GRINGO_STREAMING_CHECKS() { Invoke<0x71BE51F4, void>(); }
	static void GRINGO_ALLOW_ACTIVATION(int _Unk0, int _Unk1) { Invoke<0x5E586923, void>(_Unk0, _Unk1); }
	static bool GRINGO_IS_ACTIVATION_ALLOWED(int _Unk0) { return Invoke<0x52261CE0, bool>(_Unk0); }
	static bool IS_DEBUGKEY_DOWN(KeyCode _KeyCode) { return Invoke<0x358F874F, bool>(_KeyCode); }
	static bool IS_DEBUGKEY_PRESSED(KeyCode _KeyCode) { return Invoke<0xCBC97619, bool>(_KeyCode); }
	static bool IS_BUTTON_DOWN(Controller _Controller, Button _Button) { return Invoke<0xC3297B50, bool>(_Controller, _Button); }
	static bool IS_BUTTON_PRESSED(Controller _Controller, Button _Button) { return Invoke<0x7BCB3F15, bool>(_Controller, _Button); }
	static bool IS_BUTTON_RELEASED(Controller Controller, Button Button, int Unk1, int Unk0) { return Invoke<0xB04EB731, bool>(Controller, Button, Unk1, Unk0); }
	static float GET_ANALOG_BUTTON_VALUE(Controller Controller, Button Analog, bool Unk1) { return Invoke<0x23C9C74A, float>(Controller, Analog, Unk1); }
	static bool _IS_ACTION_PRESSED(const char* _ActionName, bool _Unk0, int _Unk1) { return Invoke<0x62C5047, bool>(_ActionName, _Unk0, _Unk1); }
	static bool _IS_ACTION_JUST_PRESSED(const char* _ActionName, bool _Unk0, int _Unk1) { return Invoke<0xDA674AE0, bool>(_ActionName, _Unk0, _Unk1); }
	static bool _IS_ACTION_RELEASED(const char* _ActionName, bool _Unk0, int _Unk1) { return Invoke<0x973F30EE, bool>(_ActionName, _Unk0, _Unk1); }
	static float GET_ANALOGUE_ACTION(const char* _ActionName, bool _Unk0, int _Unk1) { return Invoke<0xC1F9AC6B, float>(_ActionName, _Unk0, _Unk1); }
	static int _0x4586516D(int _Unk0) { return Invoke<0x4586516D, int>(_Unk0); }
	static int _0x7E452200(int _Unk0) { return Invoke<0x7E452200, int>(_Unk0); }
	static float GET_STICK_X(Controller _Controller, bool _IsRightStick, int _Unk0) { return Invoke<0x9AAF7E28, float>(_Controller, _IsRightStick, _Unk0); }
	static float GET_STICK_Y(Controller _Controller, bool _IsRightStick, int _Unk0) { return Invoke<0x7C6D41A4, float>(_Controller, _IsRightStick, _Unk0); }
	static void RESET_TIME_SINCE_LAST_INPUT(int _Unk0) { Invoke<0x52B2F3F0, void>(_Unk0); }
	static int GET_TIME_SINCE_LAST_INPUT(int _Unk0) { return Invoke<0xD4DEBC08, int>(_Unk0); }
	static int GET_TIME_SINCE_LAST_MOVESTICK_INPUT(int _Unk0) { return Invoke<0xBEC2871A, int>(_Unk0); }
	static int GET_TIME_SINCE_LAST_BUTTON_INPUT(int _Unk0) { return Invoke<0xEF4F4F20, int>(_Unk0); }
	static bool IS_RIGHT_MOUSE_DOWN(int _Unk0) { return Invoke<0x5598C970, bool>(_Unk0); }
	static bool IS_RIGHT_MOUSE_PRESSED(int _Unk0) { return Invoke<0xDC4B85A8, bool>(_Unk0); }
	static bool IS_RIGHT_MOUSE_RELEASED(int _Unk0) { return Invoke<0xB59B352A, bool>(_Unk0); }
	static bool IS_LEFT_MOUSE_DOWN(int _Unk0) { return Invoke<0x5AC5CE22, bool>(_Unk0); }
	static bool IS_LEFT_MOUSE_PRESSED(int _Unk0) { return Invoke<0x7D4535A1, bool>(_Unk0); }
	static float GET_MOUSE_AXIS_X(int _Unk) { return Invoke<0x55ADBA8B, float>(_Unk); }
	static float GET_MOUSE_AXIS_Y(int _Unk) { return Invoke<0x455A19E4, float>(_Unk); }
	static float _GET_MOUSE_DELTA_X() { return Invoke<0x88F07597, float>(); }
	static float _GET_MOUSE_DELTA_Y() { return Invoke<0x3A62D87D, float>(); }
	static float GET_MOUSE_SENSITIVITY() { return Invoke<0x5FE80264, float>(); }
	static int DEBUG_DRAW_VECTOR(int _Unk0, int _Unk1) { return Invoke<0xF7974EBA, int>(_Unk0, _Unk1); }
	static void DEBUG_DRAW_LINE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x7C55C775, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int DEBUG_DRAW_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x4A1BAD30, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void DEBUG_DRAW_STRING() { Invoke<0x993E45D8, void>(); }
	static void DRAW_STRING_CURRENT_FONT(float _X, float _Y, const char* _Text, float _R, float _G, float _B, float _A) { Invoke<0x3C2D93C1, void>(_X, _Y, _Text, _R, _G, _B, _A); }
	static void SET_DEBUG_FADE_STATE(int _Unk0) { Invoke<0x73BE57AF, void>(_Unk0); }
	static int _0xD1D88EB8(int _Unk0) { return Invoke<0xD1D88EB8, int>(_Unk0); }
	static int _0x21E19CD5(int _Unk0) { return Invoke<0x21E19CD5, int>(_Unk0); }
	static int _0x1B6FE39B(int _Unk0) { return Invoke<0x1B6FE39B, int>(_Unk0); }
	static int _0xAAEBAC28(int _Unk0) { return Invoke<0xAAEBAC28, int>(_Unk0); }
	static int _0x913A5CB6() { return Invoke<0x913A5CB6, int>(); }
	static int _0xD34F7B3A() { return Invoke<0xD34F7B3A, int>(); }
	static int _0x191658C0() { return Invoke<0x191658C0, int>(); }
	static int _0x95132289() { return Invoke<0x95132289, int>(); }
	static void _0xEB8325B3(int _Unk0) { Invoke<0xEB8325B3, void>(_Unk0); }
	static int _0xD3FE15FB() { return Invoke<0xD3FE15FB, int>(); }
	static int _0x32D1DEB0() { return Invoke<0x32D1DEB0, int>(); }
	static void RETRIEVE_GAME_STATE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x48FBB83D, void>(_Unk0, _Unk1, _Unk2); }
	static void STORE_GAME_STATE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x800D6D89, void>(_Unk0, _Unk1, _Unk2); }
	static void RESET_STORED_DATA() { Invoke<0xE1124E00, void>(); }
	static void RESET_GAME() { Invoke<0x07045C4E, void>(); }
	static bool IS_GAME_RESETTING() { return Invoke<0x3B1B6407, bool>(); }
	static const char* _GET_PARAM_VALUE(const char* _Unk0, const char* _Unk1) { return Invoke<0xC7612A79, const char*>(_Unk0, _Unk1); }
	static const char* GET_DISTRICTS_NAME() { return Invoke<0x0B2D5E4B, const char*>(); }
	static bool LOAD_GAME(const char* _Name) { return Invoke<0x7C5901EF, bool>(_Name); }
	static bool LOAD_SOFT_SAVE(int _Slot) { return Invoke<0x0234F932, bool>(_Slot); }
	static bool SAVE_GAME(const char* _Name) { return Invoke<0x09C5D8D5, bool>(_Name); }
	static void SAVE_SOFT_SAVE(int _Slot) { Invoke<0x1A3BAC68, void>(_Slot); }
	static void SAVE_MANAGER_HARD_SAVE(const char* _Name) { Invoke<0xED40F27D, void>(_Name); }
	static bool SAVE_MANAGER_HARD_LOAD(const char* _Name) { return Invoke<0x8C710D3E, bool>(_Name); }
	static void SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(const char* _DisplayName) { Invoke<0x17F34613, void>(_DisplayName); }
	static void SAVE_MANAGER_REGISTER_DATA(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x20CE8AA8, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static const char* SAVE_MANAGER_SET_SAVE_VERSION(const char* _Unk0) { Invoke<0x8E867DDD, const char*>(_Unk0); }
	static const char* SAVE_MANAGER_SET_SAVE_VERSION_FOR_TYPE(int _Unk0, int _Unk1) { Invoke<0x6E79F939, const char*>(_Unk0, _Unk1); }
	static void SAVE_MANAGER_CREATE_SAVE_FILE(int _Unk0, const char* _Unk1, const char* _Unk2) { Invoke<0x3E647734, void>(_Unk0, _Unk1, _Unk2); }
	static void SAVE_MANAGER_REGISTER_STATS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xE8637D2B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SAVE_MANAGER_REGISTER_PROFILE_STATS(int _Unk0, int _Unk1) { Invoke<0x6D59A25F, void>(_Unk0, _Unk1); }
	static bool SAVE_MANAGER_IS_SAVING_DISABLED() { return Invoke<0x1D177160, bool>(); }
	static bool SAVE_MANAGER_IS_SP_SAVING_DISABLED() { return Invoke<0x1ADA1769, bool>(); }
	static int _0x580D21D9(int _Unk0) { return Invoke<0x580D21D9, int>(_Unk0); }
	static bool DOES_FILE_EXIST(const char* _Path) { return Invoke<0xAABE1330, bool>(_Path); }
	static void WRITE_TO_FILE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xD44F7102, void>(_Unk0, _Unk1, _Unk2); }
	static bool IS_DEV_BUILD() { return Invoke<0x6D9AA768, bool>(); }
	static bool IS_PS3() { return Invoke<0xA369B36F, bool>(); }
	static bool IS_PS4() { return Invoke<0x99989FCD, bool>(); }
	static bool IS_SWITCH() { return Invoke<0x92E03425, bool>(); }
	static int _0xFC7766A0(int _Unk0) { return Invoke<0xFC7766A0, int>(_Unk0); }
	static bool IS_PC() { return Invoke<0x16C54BC5, bool>(); }
	static bool _0xB427CB25() { return Invoke<0xB427CB25, bool>(); }
	static bool IS_DISK_CACHE_PRIMED() { return Invoke<0x4BA92498, bool>(); }
	static int _0xFB46B5D6(int _Unk0) { return Invoke<0xFB46B5D6, int>(_Unk0); }
	static float GET_LAST_MOUSE_MOVEMENT() { return Invoke<0xFDDB1BFA, float>(); }
	static bool IS_PLAYER_SIGNED_IN() { return Invoke<0xC3C0F1F2, bool>(); }
	static const char* GET_LOCAL_PLAYER_NAME() { return Invoke<0xA183D927, const char*>(); }
	static int GET_NUM_WORLD_CAMERAS() { return Invoke<0x8BD88B43, int>(); }
	static int GET_WORLD_CAMERA_AT_INDEX(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1C7C0F86, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_CLOSEST_WORLD_CAMERA(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x836F42DA, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void PAUSE_GAME(int _Unk0) { Invoke<0x6F32A4E2, void>(_Unk0); }
	static void UNPAUSE_GAME() { Invoke<0x0BF2CD82, void>(); }
	static bool IS_GAME_PAUSED() { return Invoke<0x57246C02, bool>(); }
	static void SET_SCRIPT_CUTSCENE_ACTIVE(int _Unk0) { Invoke<0xF0DDF83D, void>(_Unk0); }
	static int SET_TREE_COST_MODIFIER(int _Unk0) { return Invoke<0x81A7CDB6, int>(_Unk0); }
	static int SET_USES_QUAD_IK_FIX(int _Unk0) { return Invoke<0x2A04518E, int>(_Unk0); }
	static int SET_VISIBILITY_FOV_CLAMP(int _Unk0) { return Invoke<0x4FC61E5F, int>(_Unk0); }
	static void SET_MISSION_INFO(int _Unk0, int _Unk1) { Invoke<0x3B417D4E, void>(_Unk0, _Unk1); }
	static void CLEAR_MISSION_INFO() { Invoke<0x02092A6E, void>(); }
	static const char* GET_COMMANDLINE_START_POS(int _Unk0, int _Unk1) { Invoke<0x6CD7DCE1, const char*>(_Unk0, _Unk1); }
	static void SET_START_POS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x0CB93120, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static bool IS_STARTPOS_IN_COMMANDLINE() { return Invoke<0x814D97E8, bool>(); }
	static bool _WAS_LAST_RESET_FOR_MULTIPLAYER() { return Invoke<0x3B004817, bool>(); }
	static void SCRIPT_DONE_LOADING() { Invoke<0x5401F0CA, void>(); }
	static int LAUNCH_NEW_SCRIPT(const char* _ScriptPath, int _StackSize) { return Invoke<0x85A30503, int>(_ScriptPath, _StackSize); }
	static int LAUNCH_NEW_SCRIPT_WITH_ARGS(const char* _ScriptPath, int* _Args, int _ArgCount, int _StackSize) { return Invoke<0xA602F586, int>(_ScriptPath, _Args, _ArgCount, _StackSize); }
	static bool IS_LAUNCH_RETAIL() { return Invoke<0x7CE2C2E1, bool>(); }
	static bool IS_SIMULATE_START_PRESS() { return Invoke<0xD8E31D42, bool>(); }
	static bool IS_SIMULATE_START_MULTIPLAYER() { return Invoke<0x9A73C2CD, bool>(); }
	static bool IS_D11_CUTSCENE_HACK() { return Invoke<0xD90DB78D, bool>(); }
	static bool IS_DISPLAY_WIDESCREEN() { return Invoke<0x554FC5E0, bool>(); }
	static int GET_EXP_MODE_PROMPT_STATE() { return Invoke<0x6226328F, int>(); }
	static void SET_EXP_MODE_PROMPT_STATE(int _Unk0) { Invoke<0x59F98CA9, void>(_Unk0); }
	static int GET_GAME_EDITION() { return Invoke<0xB5401D4A, int>(); }
}

namespace COVER
{
	static int FIND_NEAREST_COVER_LOCATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x50AE988A, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int FIND_COVER_LOCATIONS_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x9265B24B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int GET_COVER_LOCATION_BASE_POSITION(int _Unk0, int _Unk1) { return Invoke<0x8DFF31DF, int>(_Unk0, _Unk1); }
	static int GET_COVER_LOCATION_DIRECTION(int _Unk0) { return Invoke<0x620178B3, int>(_Unk0); }
	static int GET_COVER_LOCATION_POSITION(int _Unk0, int _Unk1) { return Invoke<0xA7F84C2F, int>(_Unk0, _Unk1); }
	static bool IS_COVER_LOCATION_VALID(int _Unk0) { return Invoke<0x90AD2C2D, bool>(_Unk0); }
	static int ADD_AI_COVERSET_FOR_PROPSET(int _Unk0) { return Invoke<0x6BA6BC9B, int>(_Unk0); }
}

namespace DLC
{
	static const char* DLC_PRE_INIT_CONTENT() { return Invoke<0x0728B211, const char*>(); }
	static int DLC_INIT_CONTENT() { return Invoke<0xEC86DB0E, int>(); }
	static int _DLC_FRAGMENT(const char* _Unk0) { return Invoke<0x57D9950B, int>(_Unk0); }
	static int DLC_INIT_STRINGTABLE_STREAMABLES(int _Unk0, int _Unk1) { return Invoke<0xF4D0807E, int>(_Unk0, _Unk1); }
	static bool DLC_IS_CONTENT_PURCHASED_FLAGS(int _Unk0) { return Invoke<0x853F71F6, bool>(_Unk0); }
	static int DLC_UNMOUNT_PACK(int _Unk0) { return Invoke<0x2F78AEFA, int>(_Unk0); }
}

namespace HEALTH
{
	static Actor GET_LAST_ATTACKER(Actor _Actor) { return Invoke<0x2C0F211D, Actor>(_Actor); }
	static int GET_LAST_HIT_TIME(Actor _Actor) { return Invoke<0x3A207AF2, int>(_Actor); }
	static WeaponModel GET_LAST_HIT_WEAPON(Actor _Actor) { return Invoke<0x07B7AA6B, WeaponModel>(_Actor); }
	static int GET_LAST_HIT_FLAGS(Actor _Actor) { return Invoke<0x08308EBA, int>(_Actor); }
	static int GET_LAST_DAMAGE(Actor _Actor) { return Invoke<0x45556269, int>(_Actor); }
	static bool GET_LAST_HIT_ZONE(Actor _Actor, int* _Out) { return Invoke<0x855F9A3B, bool>(_Actor, _Out); }
	static int GET_CORPSE_LAST_HIT_WEAPON() { return Invoke<0x4747F219, int>(); }
	static int GET_CORPSE_LAST_HIT_ZONE() { return Invoke<0xF75FE17F, int>(); }
	static void CLEAR_LAST_HIT(Actor _Actor) { Invoke<0x8D696237, void>(_Actor); }
	static void KILL_ACTOR(Actor _Actor) { Invoke<0x8B08ECA2, void>(_Actor); }
	static void KILL_ACTOR_WITH_KILLER(Actor _Actor, Actor _Killer) { Invoke<0x6085F7AC, void>(_Actor, _Killer); }
	static bool IS_ACTOR_ALIVE(Actor _Actor) { return Invoke<0x2F232639, bool>(_Actor); }
	static bool IS_ACTOR_DEAD(Actor _Actor) { return Invoke<0x0D798FFE, bool>(_Actor); }
	static bool IS_ACTOR_RAGDOLL(Actor _Actor) { return Invoke<0x3918D335, bool>(_Actor); }
	static void SET_ACTOR_HEALTH(Actor _Actor, float _Health) { Invoke<0xFA090024, void>(_Actor, _Health); }
	static float GET_ACTOR_HEALTH(Actor _Actor) { return Invoke<0xF246F15D, float>(_Actor); }
	static float GET_ACTOR_MAX_HEALTH(Actor _Actor) { return Invoke<0xB69A84AF, float>(_Actor); }
	static void SET_ACTOR_MAX_HEALTH(Actor _Actor, float _MaxHealth) { Invoke<0x165BD4C5, void>(_Actor, _MaxHealth); }
	static int _0x7A207FFE(int _Unk0) { return Invoke<0x7A207FFE, int>(_Unk0); }
	static void SET_ACTOR_KO_POINTS(Actor _Actor, int _Unk1) { Invoke<0x3A2D7759, void>(_Actor, _Unk1); }
	static int GET_ACTOR_KO_POINTS(Actor _Actor) { return Invoke<0x44787A58, int>(_Actor); }
	static int GET_ACTOR_MAX_KO_POINTS(Actor _Actor) { return Invoke<0xAFC96669, int>(_Actor); }
	static void _SET_ACTOR_HEALTH_3(Actor _Actor, float _Health) { Invoke<0x4EEC6628, void>(_Actor, _Health); }
	static void _SET_ACTOR_HEALTH_4(Actor _Actor, float _Health) { Invoke<0x479B997B, void>(_Actor, _Health); }
	static bool IS_ACTOR_DRUNK(Actor _Actor) { return Invoke<0xFF07D58C, bool>(_Actor); }
	static void SET_ACTOR_DRUNK(Actor _Actor, bool _IsDrunk) { Invoke<0x9F57742C, void>(_Actor, _IsDrunk); }
	static void SET_ACTOR_PASSED_OUT(Actor _Actor, int _Unk1) { Invoke<0x2A9FD09F, void>(_Actor, _Unk1); }
	static void SET_ACTOR_HANGING_FROM_NOOSE(Actor _Actor, int _Unk1) { Invoke<0x5262C0F7, void>(_Actor, _Unk1); }
	static void _0x6287203C(int _Unk0) { Invoke<0x6287203C, void>(_Unk0); }
	static void _0x1082715D() { Invoke<0x1082715D, void>(); }
}

namespace TARGETING
{
	static Actor GET_ACTOR_UNDER_RETICLE(Actor _Actor, int _Flag) { return Invoke<0x86BAAC6C, Actor>(_Actor, _Flag); }
	static bool GET_RETICLE_TARGET_POINT(Actor _Actor, Vector3* _Position) { return Invoke<0x8AE7281E, bool>(_Actor, _Position); }
	static void SET_PLAYER_PERFECT_ACCURACY(Player _Player, bool _Enabled) { Invoke<0x5F566576, void>(_Player, _Enabled); }
	static void OVERRIDE_PLAYER_TARGETING_WEIGHTS(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD95C01D2, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_ACTOR_BASE_SCORE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x91220723, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_HARDLOCK_BIAS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x856C3A8A, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_USE_FULLSCREEN_ACQUISITION(int _Unk0, int _Unk1) { Invoke<0x6400E005, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_TARGETED(int _Unk0, int _Unk1) { Invoke<0xF1607937, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_TARGETED_CASUAL_ONLY(int _Unk0, int _Unk1) { Invoke<0x0753A098, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_HARDLOCKED(int _Unk0, int _Unk1) { Invoke<0xF4429710, void>(_Unk0, _Unk1); }
	static bool ACTOR_CAN_BE_HARDLOCKED(int _Unk0, int _Unk1) { return Invoke<0x1468DD56, bool>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_SOFTLOCKED(int _Unk0, int _Unk1) { Invoke<0x327E4426, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_AIMASSISTED(int _Unk0, int _Unk1) { Invoke<0xAC8D3A0C, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CAN_BE_BUMPTARGETED(int _Unk0, int _Unk1) { Invoke<0x57055A7D, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(int _Unk0, int _Unk1) { Invoke<0x5CC16A49, void>(_Unk0, _Unk1); }
	static bool IS_ACTOR_IN_ACCURACY_RANGE(Actor _Actor) { return Invoke<0x7E124E62, bool>(_Actor); }
	static void SET_CAN_ACTOR_HARDLOCK_NEUTRALS(int _Unk0, int _Unk1) { Invoke<0x1EEE7494, void>(_Unk0, _Unk1); }
	static float CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(int _Unk0, int _Unk1) { return Invoke<0xD19EFFC1, float>(_Unk0, _Unk1); }
}

namespace UNSORTED
{
	static void SET_AGRESSIVE_EVENT_ON(int _Unk0) { Invoke<0xF037DCA2, void>(_Unk0); }
	static void SET_DLC_FALLBACK_AVATAR(int _Unk0) { Invoke<0x1F0CD262, void>(_Unk0); }
	static void UI_DISABLE(const char* _UILayer) { Invoke<0xC4532F84, void>(_UILayer); }
	static void UI_EXCLUDE(const char* _UILayer) { Invoke<0x4A005F2A, void>(_UILayer); }
	static void UI_ENABLE(const char* _UILayer) { Invoke<0xE576DCAD, void>(_UILayer); }
	static void UI_INCLUDE(const char* _UILayer) { Invoke<0x209255AD, void>(_UILayer); }
	static void STREAMING_ENABLE_POI_STREAMING(int _Unk0) { Invoke<0x49E4EB10, void>(_Unk0); }
	static void TOGGLE_COVER_PROPS(int _Unk0) { Invoke<0x288E4BFB, void>(_Unk0); }
	static bool UI_ISACTIVE(const char* UiLayer) { return Invoke<0xB1FDB70D, bool>(UiLayer); }
	static void UI_ACTIVATE(const char* UiLayer) { Invoke<0xD11BD55A, void>(UiLayer); }
	static int REQUEST_ASSET(const char* AssetDir, AssetType _AssetType) { return Invoke<0x9AA02DA7, int>(AssetDir, _AssetType); }
	static Layout FIND_NAMED_LAYOUT(const char* _LayoutName) { return Invoke<0x5699DE7E, Layout>(_LayoutName); }
	static bool IS_LAYOUTREF_VALID(Layout Layout) { return Invoke<0xFC8E55ED, bool>(Layout); }
	static Actor FIND_ACTOR_IN_LAYOUT(Layout Layout, const char* ActorName) { return Invoke<0x53A761DE, Actor>(Layout, ActorName); }
	static bool IS_ACTOR_VALID(Actor _Actor) { return Invoke<0xBA6C3E92, bool>(_Actor); }
	static Time MAKE_TIME_OF_DAY(int Hour, int Minute, int Second) { return Invoke<0xC09EAB6E, Time>(Hour, Minute, Second); }
	static void SET_WEATHER(Weather _Weather, float _TransitionTime) { Invoke<0x456D7F38, void>(_Weather, _TransitionTime); }
	static int STREAMING_IS_WORLD_LOADED() { return Invoke<0x87B74064, int>(); }
	static void HUD_FADE_IN(int _Unk0, int _Unk1) { Invoke<0xF90F6C51, void>(_Unk0, _Unk1); }
	static void CAMERA_RESET(int _Unk0) { Invoke<0xCE956B28, void>(_Unk0); }
	static void STREAMING_SET_CUTSCENE_MODE(int _Unk0) { Invoke<0x83088F62, void>(_Unk0); }
	static Layout CREATE_LAYOUT(const char* _LayoutName) { return Invoke<0x6CA53214, Layout>(_LayoutName); }
	static void CLEAR_REGIONS() { Invoke<0xB1DAEF0C, void>(); }
	static void SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(int _Unk0) { Invoke<0x7ABDE1F0, void>(_Unk0); }
	static void SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(int _Unk0) { Invoke<0x7D7F9770, void>(_Unk0); }
	static int UI_GET_NUM_CHILDREN(int _Unk0) { return Invoke<0xD3C7AEFA, int>(_Unk0); }
	static void UI_ADD_CHILD(int _Unk0, int _Unk1) { Invoke<0x13F156A4, void>(_Unk0, _Unk1); }
	static void UI_SET_DATA(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x00B89B46, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ALL_DOOR_LOCKS_VISIBLE(int _Unk0) { Invoke<0x3B25299D, void>(_Unk0); }
	static void SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(int _Unk0, int _Unk1) { Invoke<0x1C8CA53C, void>(_Unk0, _Unk1); }
	static void SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(int _Unk0) { Invoke<0xE8960298, void>(_Unk0); }
	static void ENABLE_AMBIENT_SPAWNING(bool _Enable) { Invoke<0xA8ADCAEB, void>(_Enable); }
	static int NET_GET_LOCAL_GAMER_NAME() { return Invoke<0x95CDCE7A, int>(); }
	static void UI_SET_STRING(const char* _Entry, const char* _String) { Invoke<0xE457546C, void>(_Entry, _String); }
	static Layout GET_AMBIENT_LAYOUT() { return Invoke<0xB52A3D48, Layout>(); }
	static void ITERATE_IN_LAYOUT(int _Unk0, int _Unk1) { Invoke<0xF3ABE99C, void>(_Unk0, _Unk1); }
	static void SET_PAUSE_SCRIPT(int _Unk0) { Invoke<0x9B71351C, void>(_Unk0); }
	static void SET_TIME_ACCELERATION(float _Unk0) { Invoke<0xB98C7AA5, void>(_Unk0); }
	static void LIGHTS_SET_ON_TIME(int _Unk0, int _Unk1) { Invoke<0x3774465F, void>(_Unk0, _Unk1); }
	static void LIGHTS_SET_OFF_TIME(int _Unk0, int _Unk1) { Invoke<0xD0CDEED4, void>(_Unk0, _Unk1); }
	static int SET_DUST_LEVEL_MID(int _Unk0) { return Invoke<0x8BA565F7, int>(_Unk0); }
	static int SET_DUST_LEVEL_FAR(int _Unk0) { return Invoke<0xB8E09389, int>(_Unk0); }
	static int MAKE_TIME_OF_DAY_EX(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0E453CF0, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_TIME_OF_DAY(Time UnixTime) { Invoke<0xAD03186C, void>(UnixTime); }
	static void SET_AMBIENT_FORCE_WAIT_STATE(int _Unk0) { Invoke<0xB35C0660, void>(_Unk0); }
	static int DECOR_GET_INT(int _Unk0, int _Unk1) { return Invoke<0xDDDE59B5, int>(_Unk0, _Unk1); }
	static void GIVE_WEAPON_TO_ACTOR(Actor _Actor, WeaponModel _WeaponModel, int _Unk, bool _Notify, bool _IsHidden) { Invoke<0x6AA0EAF2, void>(_Actor, _WeaponModel, _Unk, _Notify, _IsHidden); }
	static int ADD_ITEM(const char* ItemName, Actor Actor, int Unk1) { return Invoke<0xBAA5D41B, int>(ItemName, Actor, Unk1); }
	static void SET_PLAYER_DEADEYE_POINTS(Actor _Actor, float _Value, bool _Unk) { Invoke<0x50D8C840, void>(_Actor, _Value, _Unk); }
	static void SET_DISABLE_DEADEYE(Actor _Actor, bool _Value) { Invoke<0x09716951, void>(_Actor, _Value); }
	static void SET_DEADEYE_MULTILOCK_ENABLE(Actor _Actor, bool _Value) { Invoke<0x4E6E5E78, void>(_Actor, _Value); }
	static void SET_DEADEYE_TARGETPAINT_ENABLE(Actor _Actor, bool _Value) { Invoke<0x5CD6E2C3, void>(_Actor, _Value); }
	static void DELETE_WEAPON_FROM_ACTOR(Actor _Actor, WeaponModel _WeaponModel) { Invoke<0xCB017277, void>(_Actor, _WeaponModel); }
	static void _ADD_AMMO_OF_TYPE(Actor _Actor, int _AmmoType, float _AmmoCount, bool _Unk0, bool _Notify) { Invoke<0x98B3ABFA, void>(_Actor, _AmmoType, _AmmoCount, _Unk0, _Notify); }
	static int ACTOR_SET_NEXT_EQUIP_SLOT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x3417766E, int>(_Unk0, _Unk1, _Unk2); }
	static void STREAMING_RELEASE_MAIN_POI() { Invoke<0x7D5C0C4D, void>(); }
	static void HUD_FADE_IN_NOW(int _Unk0, int _Unk1) { Invoke<0x7E4A92CF, void>(_Unk0, _Unk1); }
	static void UI_SET_MONEY(const char* _GXTEntry1, const char* _GXTEntry2, float _Amount) { Invoke<0xF71BD93A, void>(_GXTEntry1, _GXTEntry2, _Amount); }
	static const char* I2STR(const char* _Unk0) { return Invoke<0x47EF426D, const char*>(_Unk0); }
	static const char* UI_GET_STRING(const char* _GXTEntry) { return Invoke<0xCCCFF80B, const char*>(_GXTEntry); }
	static bool GET_USER_DEFINED_WAYPOINT(Vector3* _Position) { return Invoke<0x82F63365, bool>(_Position); }
	static void SET_PLAYER_CONTROL_RUMBLE(int _Unk0, int _Unk1) { Invoke<0x4590CE00, void>(_Unk0, _Unk1); }
	static void CLEAR_PRINTED_OBJECTIVE() { Invoke<0xB9D95B4C, void>(); }
	static int SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(int _Unk0) { return Invoke<0x5C8DD257, int>(_Unk0); }
	static Time GET_TIME_OF_DAY() { return Invoke<0x4E1DE7A5, Time>(); }
	static int GET_HOUR(Time T) { return Invoke<0x2765C37E, int>(T); }
	static bool HUD_IS_FADED() { return Invoke<0x4EFFFC06, bool>(); }
	static bool HUD_IS_FADING() { return Invoke<0xE5CC6F08, bool>(); }
	static void PREVENT_DESPAWN_CLEAR() { Invoke<0x2E5F186B, void>(); }
	static int NET_IS_UNLOCKED(int _Unk0) { return Invoke<0xC8B680B3, int>(_Unk0); }
	static void HUD_FADE_OUT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x52963366, void>(_Unk0, _Unk1, _Unk2); }
	static void RELEASE_LAYOUT_REF(int _Unk0) { Invoke<0xD9AC8830, void>(_Unk0); }
	static void DESTROY_GC_OBJECTS(int _Unk0, int _Unk1) { Invoke<0x86B0B004, void>(_Unk0, _Unk1); }
	static bool IS_BLIP_VALID(Blip _Blip) { return Invoke<0xDCC10BA9, bool>(_Blip); }
	static void REMOVE_BLIP(Blip _Blip) { Invoke<0xD8C3C1CD, void>(_Blip); }
	static void ANIMAL_SPECIES_GRINGO_CLEAR_ALL() { Invoke<0xD4DDC119, void>(); }
	static void STREAMING_EVICT_PROP(int _Unk0) { Invoke<0xA8D12960, void>(_Unk0); }
	static void STREAMING_EVICT_PROPSET(int _Unk0) { Invoke<0x4A5E4C13, void>(_Unk0); }
	static void STREAMING_EVICT_ACTOR(int _Unk0, int _Unk1) { Invoke<0x6661CF89, void>(_Unk0, _Unk1); }
	static int GET_ASSET_NAME(int _Unk0, int _Unk1) { return Invoke<0x9EDBBB84, int>(_Unk0, _Unk1); }
	static void REMOVE_ANIM_SET(int _Unk0) { Invoke<0xD04A817A, void>(_Unk0); }
	static void STREAMING_EVICT_GRINGO(int _Unk0) { Invoke<0xA02B6AAE, void>(_Unk0); }
	static void REMOVE_ACTION_TREE(int _Unk0) { Invoke<0xBF4D0EFE, void>(_Unk0); }
	static void REMOVE_STRING_TABLE(int _Unk0) { Invoke<0x6857E514, void>(_Unk0); }
	static void STREAMING_EVICT_SCRIPT(int _Unk0) { Invoke<0x570163E2, void>(_Unk0); }
	static void STREAMING_UNREQUEST_MOVABLE_NAV_MESH(int _Unk0) { Invoke<0xC329E1DB, void>(_Unk0); }
	static void STREAMING_EVICT_GRINGO_DICTIONARY(int _Unk0) { Invoke<0x32FCA813, void>(_Unk0); }
	static void REMOVE_COLLECTABLE(int _Unk0, int _Unk1) { Invoke<0x5889EBB7, void>(_Unk0, _Unk1); }
	static int F2STR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFA6BDD8E, int>(_Unk0, _Unk1, _Unk2); }
	static const char* _FLOAT_TO_STRING(float Flt, int unk3, int Precision) { return Invoke<0x8ED1FF95, const char*>(Flt, unk3, Precision); }
	static const char* INT_TO_STRING(int i) { return Invoke<0xA883AFCC, const char*>(i); }
	static void CLEAR_STAT_MESSAGE() { Invoke<0x906E0138, void>(); }
	static Hash STRING_TO_HASH(const char* _Str) { return Invoke<0x84415E28, Hash>(_Str); }
	static void SET_STAT_MESSAGE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12) { Invoke<0x73DA6AF1, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12); }
	static bool IS_STRING_VALID(const char* _Unk0) { return Invoke<0xBDC61056, bool>(_Unk0); }
	static int ADD_COLLECTABLE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xF05D1566, int>(_Unk0, _Unk1, _Unk2); }
	static void SET_WEAPON_GOLD(Actor _Actor, WeaponModel _WeaponModel, bool _Gold) { Invoke<0xAE44869D, void>(_Actor, _WeaponModel, _Gold); }
	static void UI_CHEAT_SET_STATE(int _CheatId, bool _Enabled) { Invoke<0x7D6A8D4A, void>(_CheatId, _Enabled); }
	static bool HAS_ACHIEVEMENT_BEEN_PASSED(int _Id) { return Invoke<0x136A5BE9, bool>(_Id); }
	static void AWARD_ACHIEVEMENT(int _Id) { Invoke<0xCAA24B1A, void>(_Id); }
	static int AWARD_AVATAR(int _Unk0) { return Invoke<0xDD33E221, int>(_Unk0); }
	static bool DECOR_CHECK_EXIST(Object _Object, const char* _DecorName) { return Invoke<0xA0773F5C, bool>(_Object, _DecorName); }
	static const char* SS_GET_STRING(int _Unk0, int _Unk1) { return Invoke<0x20D34AC5, const char*>(_Unk0, _Unk1); }
	static bool UI_HAS_CHEATED() { return Invoke<0xBAB151CB, bool>(); }
	static int _0x5545C218(int _Unk0) { return Invoke<0x5545C218, int>(_Unk0); }
	static int _0xE623B382(int _Unk0) { return Invoke<0xE623B382, int>(_Unk0); }
	static int GET_PLAYER_DEADEYE_POINTS(int _Unk0) { return Invoke<0x86B5C9E1, int>(_Unk0); }
	static int GET_NUM_JOURNAL_ENTRIES_IN_LIST(int _Unk0) { return Invoke<0x3E84D766, int>(_Unk0); }
	static int GET_JOURNAL_ENTRY_IN_LIST(int _Unk0, int _Unk1) { return Invoke<0x49B02E18, int>(_Unk0, _Unk1); }
	static int GET_JOURNAL_ENTRY_TYPE(int _Unk0) { return Invoke<0xF6FEC269, int>(_Unk0); }
	static int GET_JOURNAL_ENTRY_MISC_FLAG(int _Unk0) { return Invoke<0x8020011E, int>(_Unk0); }
	static int IS_JOURNAL_ENTRY_UPDATED(int _Unk0) { return Invoke<0x078F9B43, int>(_Unk0); }
	static int GET_TARGETED_JOURNAL_ENTRY() { return Invoke<0x8A9B8F0C, int>(); }
	static int GET_NUM_WEAPONS_IN_INVENTORY(int _Unk0) { return Invoke<0x118D085E, int>(_Unk0); }
	static WeaponModel GET_WEAPON_IN_HAND(Actor _Actor) { return Invoke<0xA4B2016D, WeaponModel>(_Actor); }
	static int GET_WEAPON_IS_EXTERNALLY_CREATED(int _Unk0, int _Unk1) { return Invoke<0x6262DC5E, int>(_Unk0, _Unk1); }
	static int GET_WEAPON_IN_HAND_CRC(int _Unk0) { return Invoke<0x0CDD6F94, int>(_Unk0); }
	static int ACTOR_GET_ITEM_CRC_AT_INDEX(int _Unk0, int _Unk1) { return Invoke<0x7BF75BCE, int>(_Unk0, _Unk1); }
	static int GET_ITEM_COUNT_BY_CRC(int _Unk0, int _Unk1) { return Invoke<0x4BB2BC20, int>(_Unk0, _Unk1); }
	static int GET_NUM_ACCESSORIES_IN_INVENTORY(int _Unk0) { return Invoke<0x78A3CD3D, int>(_Unk0); }
	static int ACTOR_GET_ACCESSORY_CRC_AT_INDEX(int _Unk0, int _Unk1) { return Invoke<0x7F4D5AE0, int>(_Unk0, _Unk1); }
	static int IS_FRONTEND_DEATH(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE224AC6F, int>(_Unk0, _Unk1, _Unk2); }
	static WeaponModel GET_WEAPON_EQUIPPED(Actor _Actor, int _WeaponWheelIndex) { return Invoke<0x42C0FAAA, WeaponModel>(_Actor, _WeaponWheelIndex); }
	static int GET_ITEM_EQUIPSLOT(int _Unk0) { return Invoke<0x0E0EFB13, int>(_Unk0); }
	static int GET_NUM_COLLECTABLES_IN_INVENTORY(int _Unk0) { return Invoke<0x2C23CBE7, int>(_Unk0); }
	static int ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(int _Unk0, int _Unk1) { return Invoke<0x608DCAEF, int>(_Unk0, _Unk1); }
	static int ACTOR_GET_NEXT_EQUIP_SLOT(int _Unk0) { return Invoke<0xCC02BBD3, int>(_Unk0); }
	static int ACTOR_GET_CURRENT_EQUIP_SLOT(int _Unk0) { return Invoke<0xA8040D70, int>(_Unk0); }
	static bool IS_LOCAL_PLAYER_VALID(Actor actorId) { return Invoke<0x0ADC17E9, bool>(actorId); }
	static Actor GET_PLAYER_ACTOR(int _PlayerId) { return Invoke<0xE8CFDD53, Actor>(_PlayerId); }
	static int GET_DAY(Time T) { return Invoke<0x63D13FB0, int>(T); }
	static int _0x6CC9CCE7() { return Invoke<0x6CC9CCE7, int>(); }
	static int GET_ITEM_COUNT(int _Unk0, int _Unk1) { return Invoke<0xD91ED898, int>(_Unk0, _Unk1); }
	static void PRINT_OBJECTIVE_FORMAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { Invoke<0x283B4EFC, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static int DECOR_SET_INT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xDB718B21, int>(_Unk0, _Unk1, _Unk2); }
	static bool IS_OBJECT_VALID(Object _Object) { return Invoke<0xD7E7187B, bool>(_Object); }
	static Vector3 GET_OBJECT_POSITION(Object _Object) { Vector3 position; Invoke<0x31201B4C, bool>(_Object, &position); return position; }
	static ObjectType GET_OBJECT_TYPE(Object _Object) { return Invoke<0x261ECB20, ObjectType>(_Object); }
	static void GET_VOLUME_SCALE(int _Unk0, int _Unk1) { Invoke<0xE9C34ACC, void>(_Unk0, _Unk1); }
	static Blip ADD_BLIP_FOR_COORD(Vector3* _Position, BlipId _BlipId, float _Unk0, bool _Unk1, int _Unk2) { return Invoke<0xC6F43D0E, Blip>(_Position, _BlipId, _Unk0, _Unk1, _Unk2); }
	static Blip ADD_BLIP_FOR_ACTOR(Actor _Actor, BlipId _BlipId, float _Unk0, bool _Unk1, int _Unk2) { return Invoke<0xEFB9362F, Blip>(_Actor, _BlipId, _Unk0, _Unk1, _Unk2); }
	static Blip ADD_BLIP_FOR_OBJECT(Object _Object, BlipId _BlipId, float _Unk0, bool _Unk1, int _Unk2) { return Invoke<0x0E5372EC, Blip>(_Object, _BlipId, _Unk0, _Unk1, _Unk2); }
	static void SET_BLIP_SCALE(Blip _Blip, float _Scale) { Invoke<0x1E6EC434, void>(_Blip, _Scale); }
	static void SET_BLIP_COLOR(Blip _Blip, float _R, float _G, float _B, float _A) { Invoke<0xA2B8A736, void>(_Blip, _R, _G, _B, _A); }
	static void SET_BLIP_PRIORITY(Blip _Blip, int _Priority) { Invoke<0xCE87DA6F, void>(_Blip, _Priority); }
	static void SET_BLIP_NAME(Blip _Blip, const char* _GXTEntry) { Invoke<0xDC249B12, void>(_Blip, _GXTEntry); }
	static int IS_JOURNAL_ENTRY_IN_LIST(int _Unk0, int _Unk1) { return Invoke<0xC17FE40A, int>(_Unk0, _Unk1); }
	static int CREATE_JOURNAL_ENTRY(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x761FD935, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void APPEND_JOURNAL_ENTRY(int _Unk0, int _Unk1) { Invoke<0x9C40CFAB, void>(_Unk0, _Unk1); }
	static void PREPEND_JOURNAL_ENTRY_DETAIL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x81470AFE, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SET_JOURNAL_ENTRY_DETAIL_STYLE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x539D0404, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_JOURNAL_ENTRY_PROGRESS(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x5DC073DE, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x2AA8E2FA, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_JOURNAL_ENTRY_TARGETED(int _Unk0) { return Invoke<0xF0C4E96F, int>(_Unk0); }
	static void REMOVE_JOURNAL_ENTRY(int _Unk0, int _Unk1) { Invoke<0x01BF35BD, void>(_Unk0, _Unk1); }
	static void PREPEND_JOURNAL_ENTRY(int _Unk0, int _Unk1) { Invoke<0x87DC7F5B, void>(_Unk0, _Unk1); }
	static void TARGET_JOURNAL_ENTRY(int _Unk0) { Invoke<0xC3DC9490, void>(_Unk0); }
	static void CLEAR_JOURNAL_ENTRY(int _Unk0) { Invoke<0xB8B7B818, void>(_Unk0); }
	static int HUD_IS_SHOWING_BIG_TEXT() { return Invoke<0x60135878, int>(); }
	static int HUD_IS_SHOWING_HELP_TEXT() { return Invoke<0x4B2FCAF6, int>(); }
	static int HUD_IS_SHOWING_OBJECTIVE() { return Invoke<0x2F0E7DE7, int>(); }
	static int HUD_IS_SHOWING_SMALL_TEXT() { return Invoke<0x710B3A83, int>(); }
	static int _GET_MAX_AMMO_AMOUNT(int _Unk0, int _Unk1) { return Invoke<0x7AB368CF, int>(_Unk0, _Unk1); }
	static void _0x1E98AFEC(int _Unk0, int _Unk1) { Invoke<0x1E98AFEC, void>(_Unk0, _Unk1); }
	static void _0xFF3DB575(int _Unk0, int _Unk1) { Invoke<0xFF3DB575, void>(_Unk0, _Unk1); }
	static int IS_SCRIPT_USE_CONTEXT_VALID(int _Unk0) { return Invoke<0x115CD0CC, int>(_Unk0); }
	static void RELEASE_SCRIPT_USE_CONTEXT(int _Unk0) { Invoke<0x4F52CB58, void>(_Unk0); }
	static void DESTROY_OBJECT(Object Object) { Invoke<0x21144994, void>(Object); }
	static int IS_DOOR_VALID(int _Unk0) { return Invoke<0x7F0F079B, int>(_Unk0); }
	static int DECOR_GET_OBJECT(int _Unk0, int _Unk1) { return Invoke<0x24F2E859, int>(_Unk0, _Unk1); }
	static int IS_DOOR_LOCKED(int _Unk0) { return Invoke<0x19FB9518, int>(_Unk0); }
	static int GET_VOLUME_FROM_OBJECT(int _Unk0) { return Invoke<0x502DAC62, int>(_Unk0); }
	static int IS_ACTOR_IN_VOLUME(int _Unk0, int _Unk1) { return Invoke<0xF5593A78, int>(_Unk0, _Unk1); }
	static int GATEWAY_UPDATE(int _Unk0) { return Invoke<0x96BD89B6, int>(_Unk0); }
	static int ADD_SCRIPT_USE_CONTEXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xD7591B0E, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(int _Unk0) { return Invoke<0x971559CA, int>(_Unk0); }
	static int CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12, int _Unk13, int _Unk14, int _Unk15, int _Unk16, int _Unk17) { return Invoke<0x64BEDDEA, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12, _Unk13, _Unk14, _Unk15, _Unk16, _Unk17); }
	static void SET_BLIP_MAX_DISTANCE(int _Unk0, int _Unk1) { Invoke<0xCE79F8E2, void>(_Unk0, _Unk1); }
	static int GET_GRINGO_FROM_OBJECT(int _Unk0) { return Invoke<0x8A01B64B, int>(_Unk0); }
	static bool DECOR_REMOVE(Object _Object, const char* _DecorName) { return Invoke<0xE0E2640B, bool>(_Object, _DecorName); }
	static int LOCATE_NAMED_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xCB3F7DA5, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int DECOR_SET_BOOL(Actor _Actor, const char* _DecorName, bool _Set) { return Invoke<0x8E101F5C, int>(_Actor, _DecorName, _Set); }
	static void PRINT_MONEY(const char* _Message, int _Unk0, int _Unk1, float _Time, int _Unk4, const char* _Unk5) { Invoke<0x51948EA6, void>(_Message, _Unk0, _Unk1, _Time, _Unk4, _Unk5); }
	static void SET_DOOR_LOCK(int _Unk0, int _Unk1) { Invoke<0x184924E2, void>(_Unk0, _Unk1); }
	static int STRING_CONTAINS_STRING(int _Unk0, int _Unk1) { return Invoke<0xFCAFC819, int>(_Unk0, _Unk1); }
	static int GET_CURVE_BY_NAME(int _Unk0, int _Unk1) { return Invoke<0x8C37CA1A, int>(_Unk0, _Unk1); }
	static int _0x39286DE5(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x39286DE5, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int _0x6745191B(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x6745191B, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void CLEAN_CACHE_ENTRIES() { Invoke<0x4C02E1E5, void>(); }
	static void REQUEST_ANIM_SET(int _Unk0, int _Unk1) { Invoke<0x2988B3FC, void>(_Unk0, _Unk1); }
	static int REQUEST_ACTION_TREE(int _Unk0) { return Invoke<0xB3039DB7, int>(_Unk0); }
	static int HAS_ANIM_SET_LOADED(int _Unk0) { return Invoke<0x4FFF397D, int>(_Unk0); }
	static int HAS_ACTION_TREE_LOADED(int _Unk0) { return Invoke<0xEEECD85E, int>(_Unk0); }
	static int SET_ANIM_SET_FOR_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x39C1E1C0, int>(_Unk0, _Unk1, _Unk2); }
	static int SET_ACTION_NODE_FOR_ACTOR(int _Unk0, int _Unk1) { return Invoke<0x5A795F3A, int>(_Unk0, _Unk1); }
	static int SET_REACT_NODE_FOR_ACTOR(int _Unk0, int _Unk1) { return Invoke<0xF90F737E, int>(_Unk0, _Unk1); }
	static int FIND_VOLUME_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0xAC830865, int>(_Unk0, _Unk1); }
	static void GET_VOLUME_CENTER(int _Unk0, int _Unk1) { Invoke<0x6729EEFE, void>(_Unk0, _Unk1); }
	static bool FIND_GROUND_INTERSECTION(Vector3* _PositionA, Vector3* _Output, Vector3* _PositionB, int _Unk3) { return Invoke<0x6AD8EEAF, bool>(_PositionA, _Output, _PositionB, _Unk3); }
	static void AMBIENT_RESET_FILTER(int _Unk0) { Invoke<0x19B26C78, void>(_Unk0); }
	static void AMBIENT_SET_SEARCH_CENTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x272D756C, void>(_Unk0, _Unk1, _Unk2); }
	static void AMBIENT_ENABLE_OFFSCREEN_FILTER(int _Unk0) { Invoke<0x76341F1A, void>(_Unk0); }
	static void AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(int _Unk0, int _Unk1) { Invoke<0x5A6418A2, void>(_Unk0, _Unk1); }
	static void AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBCD4979C, void>(_Unk0, _Unk1, _Unk2); }
	static void _0x30C67D05(int _Unk0) { Invoke<0x30C67D05, void>(_Unk0); }
	static void AMBIENT_ENABLE_DISTANCE_FILTER(int _Unk0) { Invoke<0x762192EB, void>(_Unk0); }
	static void AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(int _Unk0) { Invoke<0x309D058C, void>(_Unk0); }
	static void AMBIENT_SET_ELEVATION_FILTER(int _Unk0, int _Unk1) { Invoke<0x1900A97E, void>(_Unk0, _Unk1); }
	static void AMBIENT_ENABLE_QUADRANT_FILTER(int _Unk0) { Invoke<0xAA99E18E, void>(_Unk0); }
	static void AMBIENT_ENABLE_SLOPE_FILTER(int _Unk0) { Invoke<0x2CCE1115, void>(_Unk0); }
	static float STRING_TO_FLOAT(const char* Str) { return Invoke<0x43BE70B5, float>(Str); }
	static Iterator CREATE_OBJECT_ITERATOR(Layout layout) { return Invoke<0xD8A12B74, Iterator>(layout); }
	static void ITERATE_ON_OBJECT_TYPE(Iterator Iterator, int Type) { Invoke<0xBE553F84, void>(Iterator, Type); }
	static Object START_OBJECT_ITERATOR(Iterator Iterator) { return Invoke<0xE96A0318, Object>(Iterator); }
	static int GET_PERS_CHAR_FROM_OBJECT(int _Unk0) { return Invoke<0x024B2FFC, int>(_Unk0); }
	static int IS_PERS_CHAR_VALID(int _Unk0) { return Invoke<0x36CC24A4, int>(_Unk0); }
	static void DESTROY_PERS_CHAR(int _Unk0) { Invoke<0x4028CE77, void>(_Unk0); }
	static int OBJECT_ITERATOR_NEXT(int _Unk0) { return Invoke<0xD88DC865, int>(_Unk0); }
	static void DESTROY_ITERATOR(int _Unk0) { Invoke<0xE284A10C, void>(_Unk0); }
	static int STRING_LENGTH(const char* _Unk0) { return Invoke<0x6CE4B233, int>(_Unk0); }
	static int STRING_UPPER(int _Unk0) { return Invoke<0xBC5B2116, int>(_Unk0); }
	static bool STRINGS_ARE_EQUAL(const char* Str1, const char* Str2) { return Invoke<0x8218D693, bool>(Str1, Str2); }
	static int STRING_TO_INT(const char* _Unk0) { return Invoke<0x590A8160, int>(_Unk0); }
	static Vector3 GET_POSITION(Actor _Actor) { Vector3 position; Invoke<0x99BD9D6F, void>(_Actor, &position); return position; }
	static float GET_HEADING(Actor _Actor) { return Invoke<0x42DE39F0, float>(_Actor); }
	static void NET_LOG(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x48275716, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static Camera GET_GAME_CAMERA() { return Invoke<0x6B7677BF, Camera>(); }
	static Vector3 GET_CAMERA_DIRECTION(Camera _Camera) { Vector3 direction; Invoke<0xBBD1078A, void>(_Camera, &direction); return direction; }
	static Vector3 GET_CAMERA_POSITION(Camera _Camera) { Vector3 position; Invoke<0x4A65F0B7, void>(_Camera, &position); return position; }
	static int GET_ACTORENUM_FROM_STRING(const char* _ActorName) { return Invoke<0x8B217CAC, int>(_ActorName); }
	static void STREAMING_REQUEST_ACTOR(ActorModel _ActorModel, bool _Unk0, bool _Unk1) { Invoke<0xB0A79FEE, void>(_ActorModel, _Unk0, _Unk1); }
	static bool STREAMING_IS_ACTOR_LOADED(ActorModel _ActorModel, int _Unk) { return Invoke<0x7DF72579, bool>(_ActorModel, _Unk); }
	static bool GET_OBJECT_ORIENTATION(Object _Object, Vector3* _Rotation) { return Invoke<0x27B7D6D6, bool>(_Object, _Rotation); }
	static Layout GET_GC_LAYOUT() { return Invoke<0xADE13224, Layout>(); }
	static Actor CREATE_ACTOR_IN_LAYOUT(Layout _Layout, const char* _ActorName, ActorModel _ActorModel, Vector2 _PositionXY, float _PositionZ, Vector2 _RotationXY, float _RotationZ) { return Invoke<0x8D67F397, Actor>(_Layout, _ActorName, _ActorModel, _PositionXY, _PositionZ, _RotationXY, _RotationZ); }
	static void TASK_STAND_STILL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x6F80965D, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int STRING_LOWER(int _Unk0) { return Invoke<0x3E785560, int>(_Unk0); }
	static void PRINT_FRAME_TIME(int _Unk0) { Invoke<0xB84DE79E, void>(_Unk0); }
	static int GET_ACTOR_AXIS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x294A5549, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_GRINGO_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x025C9845, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static Object CREATE_PROP_IN_LAYOUT(Layout _Layout, const char* _PropName, const char* _FragmentPath, Vector3 _Position, Vector3 _Rotation, bool _Frozen) { return Invoke<0xE351587D, Object>(_Layout, _PropName, _FragmentPath, _Position, _Rotation, _Frozen); }
	static int FIND_OBJECT_IN_OBJECT(int _Unk0, int _Unk1) { return Invoke<0x070F9693, int>(_Unk0, _Unk1); }
	static int IN_TARGETTING_POSSE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x88087384, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int SNAP_ACTOR_TO_GRINGO(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xD0A845E9, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void AUDIO_MUSIC_FORCE_TRACK(const char* SongName, const char* Mood, int _Unk2, int _Unk3, int _Unk4, float _Unk5, int _Unk6) { Invoke<0xA2A356A7, void>(SongName, Mood, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static bool AI_IGNORE_ACTOR(Actor _Actor) { return Invoke<0x8D1FC73C, bool>(_Actor); }
	static void AI_STOP_IGNORING_ACTORS() { Invoke<0x4DF3C5D1, void>(); }
	static void DELETE_ALL_INVENTORY_FROM_ACTOR(Actor _Actor) { Invoke<0x5AEB2E4F, void>(_Actor); }
	static int GET_AMMOENUM_FOR_WEAPONENUM(int _Unk0) { return Invoke<0x17883570, int>(_Unk0); }
	static void STRING_CLEAR_TOKENIZER() { Invoke<0x10873616, void>(); }
	static int SET_OWNERSHIP_STRAGGLER(int _Unk0, int _Unk1) { return Invoke<0x346E91C2, int>(_Unk0, _Unk1); }
	static int STRING_NUM_TOKENS() { return Invoke<0x7FB72180, int>(); }
	static int STRING_GET_TOKEN(int _Unk0) { return Invoke<0xEE2791E5, int>(_Unk0); }
	static int GET_ACTOR_ENUM_STRING_FROM_ENUM(int _Unk0) { return Invoke<0x990614C1, int>(_Unk0); }
	static int IS_VOLUME_VALID(int _Unk0) { return Invoke<0xBC33CEB5, int>(_Unk0); }
	static int GET_ACTOR_ENUM_FACTION(int _Unk0) { return Invoke<0x2803BDA8, int>(_Unk0); }
	static int SNAP_OBJECT_TO_GROUND(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xF437B3D9, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool GET_OBJECT_RELATIVE_POSITION(Object _Object, Vector3* _Input, int _Unused, Vector3* _Output) { return Invoke<0x2243EA59, bool>(_Object, _Input, _Unused, _Output); }
	static bool GET_OBJECT_RELATIVE_ORIENTATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x919583DC, bool>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int STREAMING_ARE_BOUNDS_LOADED(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xC07681C1, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_ASSET_ID(const char* _AssetPath, AssetType _AssetType) { return Invoke<0x6005B514, int>(_AssetPath, _AssetType); }
	static void STREAMING_REQUEST_PROPSET(int _Unk0) { Invoke<0xEC1F14C8, void>(_Unk0); }
	static int STREAMING_IS_PROPSET_LOADED(int _Unk0) { return Invoke<0xF7D65903, int>(_Unk0); }
	static int CREATE_PROPSET_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x779267C3, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GET_LAYOUT_FROM_OBJECT(int _Unk0) { return Invoke<0x51D6DA2C, int>(_Unk0); }
	static int GET_MATERIAL_AT_VECTOR(Vector3* _Position) { return Invoke<0x5219B7D0, int>(_Position); }
	static int DECOR_CHECK_STRING(Object decor, const char* EventType, const char* EventName) { return Invoke<0xEDF99C77, int>(decor, EventType, EventName); }
	static void NET_OBJECT_SET_REPLICATION_MODE(int _Unk0, int _Unk1) { Invoke<0x3E509DF1, void>(_Unk0, _Unk1); }
	static int GET_PHYSINST_FROM_OBJECT(int _Unk0) { return Invoke<0xDB70DF0C, int>(_Unk0); }
	static void SET_PHYSINST_FROZEN(int _Unk0, int _Unk1) { Invoke<0x2C0AF634, void>(_Unk0, _Unk1); }
	static int GET_MOBILE_LAYOUT_FROM_OBJECT(int _Unk0) { return Invoke<0x6B72661F, int>(_Unk0); }
	static int STORE_MOBILE_LAYOUT_TRANSFORMS(int _Unk0) { return Invoke<0x3CD2C250, int>(_Unk0); }
	static Vehicle GET_VEHICLE(Actor _Actor) { return Invoke<0xA0936EB6, Vehicle>(_Actor); }
	static void DELETE_ALL_WEAPONS_FROM_ACTOR(Actor _Actor) { Invoke<0xD695F857, void>(_Actor); }
	static void ACTOR_PUT_WEAPON_IN_HAND(Actor _Actor, WeaponModel _WeaponModel, bool _InHand) { Invoke<0x8F4B473D, void>(_Actor, _WeaponModel, _InHand); }
	static void TASK_KILL_CHAR(int _Unk0, int _Unk1) { Invoke<0x1AE4B75B, void>(_Unk0, _Unk1); }
	static void TASK_MELEE_ATTACK(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4FEADDD9, void>(_Unk0, _Unk1, _Unk2); }
	static int ACTOR_MOUNT_ACTOR(int _Unk0, int _Unk1) { return Invoke<0xC28242F4, int>(_Unk0, _Unk1); }
	static void RESET_ANALOG_POSITIONS(int _Unk0, int _Unk1) { Invoke<0x4710FD93, void>(_Unk0, _Unk1); }
	static void ITERATE_IN_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x2243FA6E, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_NUM_ITERATOR_MATCHES(int _Unk0) { return Invoke<0xA3874D8A, int>(_Unk0); }
	static bool IS_ITERATOR_VALID(Iterator iterator) { return Invoke<0x5A9CC0B0, bool>(iterator); }
	static void ITERATE_EVERYWHERE(int _Unk0) { Invoke<0xF35C5859, void>(_Unk0); }
	static int GET_CRIME_FROM_OBJECT(int _Unk0) { return Invoke<0xB578DB52, int>(_Unk0); }
	static int GET_CRIME_WITNESSED(int _Unk0) { return Invoke<0xE07C2D99, int>(_Unk0); }
	static void SET_CRIME_WITNESSED(int _Unk0, int _Unk1) { Invoke<0x6761D53A, void>(_Unk0, _Unk1); }
	static int IS_CRIME_IN_PROGRESS(int _Unk0) { return Invoke<0x85C58BE1, int>(_Unk0); }
	static void SET_CRIME_IN_PROGRESS(int _Unk0, int _Unk1) { Invoke<0x2D6CD106, void>(_Unk0, _Unk1); }
	static int CREATE_CRIME_IN_LAYOUT(int _Unk0) { return Invoke<0xD60032F6, int>(_Unk0); }
	static Object FIND_OBJECT_IN_LAYOUT(Layout Layout, const char* ObjectName) { return Invoke<0xCF875EFA, Object>(Layout, ObjectName); }
	static int IS_CRIME_VALID(int _Unk0) { return Invoke<0x4CC5681D, int>(_Unk0); }
	static void SET_CRIME_TYPE(int _Unk0, int _Unk1) { Invoke<0x85425011, void>(_Unk0, _Unk1); }
	static void SET_CRIME_VICTIM(int _Unk0, int _Unk1) { Invoke<0x7B917033, void>(_Unk0, _Unk1); }
	static void SET_CRIME_CRIMINAL(int _Unk0, int _Unk1) { Invoke<0xBA02916B, void>(_Unk0, _Unk1); }
	static void SET_CRIME_BEGIN_TIMESTAMP(int _Unk0, int _Unk1) { Invoke<0x2AE7D51F, void>(_Unk0, _Unk1); }
	static void SET_CRIME_END_TIMESTAMP(int _Unk0, int _Unk1) { Invoke<0x898B00F4, void>(_Unk0, _Unk1); }
	static int SET_CRIME_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xB3F4043B, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int CREATE_OBJECTSET_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x921B5F2B, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_CRIME_OBJECTSET(int _Unk0, int _Unk1) { Invoke<0xD60B8F77, void>(_Unk0, _Unk1); }
	static void SET_CRIME_FACTION(int _Unk0, int _Unk1) { Invoke<0x1E552B26, void>(_Unk0, _Unk1); }
	static void SET_CRIME_TALLIED(int _Unk0, int _Unk1) { Invoke<0x54E7F26B, void>(_Unk0, _Unk1); }
	static void SET_CRIME_COUNTER(int _Unk0, int _Unk1) { Invoke<0xCC14DC8D, void>(_Unk0, _Unk1); }
	static void SET_CRIME_WORLD_REGION(int _Unk0, int _Unk1) { Invoke<0x8521A685, void>(_Unk0, _Unk1); }
	static int GET_OBJECT_FROM_CRIME(int _Unk0) { return Invoke<0x831338D9, int>(_Unk0); }
	static int GET_OBJECTSET_FROM_OBJECT(int _Unk0) { return Invoke<0x2CB3B980, int>(_Unk0); }
	static int ADD_OBJECT_TO_OBJECTSET(int _Unk0, int _Unk1) { return Invoke<0x43FBBDE1, int>(_Unk0, _Unk1); }
	static int SET_ACTOR_TIME_OF_LAST_CRIME(int _Unk0, int _Unk1) { return Invoke<0xE9D86A7A, int>(_Unk0, _Unk1); }
	static void ITERATE_IN_SET(Iterator Iterator, IterationSet IterationSet) { Invoke<0xDF6B5E94, void>(Iterator, IterationSet); }
	static int GET_ITERATOR_PARENT(int _Unk0) { return Invoke<0x12AA009F, int>(_Unk0); }
	static int GET_MINUTES_FROM_TIME_OF_DAY(int _Unk0) { return Invoke<0x7C3D1193, int>(_Unk0); }
	static void ADD_TIME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xBA4FEEBC, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SET_RAIN_AMOUNT(float _Amount) { Invoke<0xB788D24A, void>(_Amount); }
	static void SET_LIGHTNING_AMOUNT(float _Amount) { Invoke<0xF0C9645A, void>(_Amount); }
	static void AUDIO_PLAY_DISTANT_THUNDER() { Invoke<0xEB866555, void>(); }
	static void SET_WIND(float _Intensity, float _Direction) { Invoke<0xC6294698, void>(_Intensity, _Direction); }
	static void SET_AUTO_WIND() { Invoke<0x5D37C383, void>(); }
	static void SET_LOOKSTICK_INVERT_Y(int _Unk0) { Invoke<0x063F900A, void>(_Unk0); }
	static int _0x4417C9F2(int _Unk0) { return Invoke<0x4417C9F2, int>(_Unk0); }
	static void _0x05719022(int _Unk0) { Invoke<0x05719022, void>(_Unk0); }
	static int NET_START_NEW_SCRIPT(int _Unk0, int _Unk1) { return Invoke<0x84D6F8A7, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_ENUM_FROM_STRING(int _Unk0) { return Invoke<0xC739D1D2, int>(_Unk0); }
	static int GET_ACTOR_ENUM_VARIATION_COUNT(int _Unk0) { return Invoke<0xB50E95D7, int>(_Unk0); }
	static void SWITCH_PLAYER_TO_ENUM(int _Unk0, int _Unk1) { Invoke<0x95FBA0B0, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_CONTROL(Player _Player, bool _AllowAllControls, int _Flags, int _Unk3) { Invoke<0xD17AFCD8, void>(_Player, _AllowAllControls, _Flags, _Unk3); }
	static int TIME_IS_IN_RANGE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x243AF970, int>(_Unk0, _Unk1, _Unk2); }
	static void _0x598815BD(int _Unk0) { Invoke<0x598815BD, void>(_Unk0); }
	static void PRINT_HELP_B(const char* _Text, float _Time, bool _IsLiteral, int _PrintType, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xE42A8278, void>(_Text, _Time, _IsLiteral, _PrintType, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int IS_EARLIER_THAN(int _Unk0, int _Unk1) { return Invoke<0x9C9529D8, int>(_Unk0, _Unk1); }
	static int GET_MINUTE(Time T) { return Invoke<0x1020BF6D, int>(T); }
	static int GET_SECOND(Time T) { return Invoke<0xBA8077CF, int>(T); }
	static int IS_OBJECTSET_VALID(int _Unk0) { return Invoke<0x552189FD, int>(_Unk0); }
	static int GET_OBJECTSET_SIZE(int _Unk0) { return Invoke<0xE09DE8A0, int>(_Unk0); }
	static void CLEAN_OBJECTSET(int _Unk0) { Invoke<0x11EE07B5, void>(_Unk0); }
	static int _0x50D39153(int _Unk0, int _Unk1) { return Invoke<0x50D39153, int>(_Unk0, _Unk1); }
	static void REMOVE_OBJECT_FROM_OBJECTSET(int _Unk0, int _Unk1) { Invoke<0xA3E05BAE, void>(_Unk0, _Unk1); }
	static int GET_CURVE_FROM_OBJECT(int _Unk0) { return Invoke<0x49D0DF2E, int>(_Unk0); }
	static void RELEASE_CURVE(int _Unk0) { Invoke<0x8270CE81, void>(_Unk0); }
	static int _0x214AFB8C(int _Unk0) { return Invoke<0x214AFB8C, int>(_Unk0); }
	static void SET_PLAYER_CURRENT_HONOR(float _Level) { Invoke<0x4D918005, void>(0, _Level); }
	static int HAS_ITEM(int _Unk0, int _Unk1) { return Invoke<0xB426267D, int>(_Unk0, _Unk1); }
	static void DELETE_ITEM(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xEFECF4F9, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(int _Unk0, int _Unk1) { Invoke<0x40121E4F, void>(_Unk0, _Unk1); }
	static void SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(int _Unk0, int _Unk1) { Invoke<0xDE84B637, void>(_Unk0, _Unk1); }
	static void AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(int _Unk0, int _Unk1) { Invoke<0x10DDB016, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_SHOULD_TAUNT(int _Unk0, int _Unk1) { Invoke<0x199600FA, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_CURRENT_NOTORIETY(float _Level) { Invoke<0x4B0D6152, void>(0, _Level); }
	static int IS_ACTOR_FULLY_FADED_EXT(int _Unk0, int _Unk1) { return Invoke<0x0CC3D8F6, int>(_Unk0, _Unk1); }
	static int DECOR_GET_FLOAT_VERBOSE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFAC315B7, int>(_Unk0, _Unk1, _Unk2); }
	static int DECOR_SET_FLOAT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xBC7BD5CB, int>(_Unk0, _Unk1, _Unk2); }
	static void UPDATE_PROFILE_STAT(const char* stat, float val, int unk) { Invoke<0xF2FA1DE8, void>(stat, val, unk); }
	static void SET_JOURNAL_ENTRY_TROPHY(int _Unk0, int _Unk1) { Invoke<0x5CB9D376, void>(_Unk0, _Unk1); }
	static int _0x5CAFCBD4(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x5CAFCBD4, int>(_Unk0, _Unk1, _Unk2); }
	static void _SET_AMMO_OF_TYPE(Actor _Actor, int _AmmoType, float _AmmoCount, bool _Unk0) { Invoke<0x4372593E, void>(_Actor, _AmmoType, _AmmoCount, _Unk0); }
	static int IS_POINT_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xB85BB21B, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool IS_ACTOR_RIDING(Actor _Actor) { return Invoke<0xA6BBE769, bool>(_Actor); }
	static bool IS_ANY_SPEECH_PLAYING(Actor _Actor) { return Invoke<0x2B74A6D6, bool>(_Actor); }
	static void SAY_SINGLE_LINE_CONTEXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0x31BAF169, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static bool GET_ACTOR_VELOCITY(Actor _Actor, Vector3* _Velocity) { return Invoke<0xAD6AF65C, bool>(_Actor, _Velocity); }
	static int GET_CAMERA_CHANNEL_POSITION(int _Unk0, int _Unk1) { return Invoke<0xE017E2F7, int>(_Unk0, _Unk1); }
	static bool IS_ACTOR_IN_WATER(Actor _Actor) { return Invoke<0x7D65D9C7, bool>(_Actor); }
	static void SET_BLIP_BLINK(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x04B8C8C6, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool IS_ACTOR_DRIVING_VEHICLE(Actor _Actor) { return Invoke<0xDC99C124, bool>(_Actor); }
	static int IS_ACTOR_DRAFT_VEHICLE(int _Unk0) { return Invoke<0x5D41D423, int>(_Unk0); }
	static void SET_PLAYER_VEHICLE_INPUT(Player _Player, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xE1160B04, void>(_Player, _Unk1, _Unk2, _Unk3); }
	static int FLASH_SET_FLOAT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xDF024C94, int>(_Unk0, _Unk1, _Unk2); }
	static void HUD_CLEAR_OBJECTIVE() { Invoke<0x160BDC7A, void>(); }
	static void HUD_CLEAR_HELP() { Invoke<0x95B908, void>(); }
	static void HUD_CLEAR_OBJECTIVE_QUEUE() { Invoke<0xE4DACF40, void>(); }
	static void PRINT_OBJECTIVE_B(const char* _Text, float _Time, bool _IsLiteral, int _PrintType, int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x32394BB6, void>(_Text, _Time, _IsLiteral, _PrintType, _Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_DEADEYE_POINT_MODIFIER(int _Unk0, int _Unk1) { Invoke<0x0486955B, void>(_Unk0, _Unk1); }
	static void SET_MAX_DEADEYE_POINTS(int _Unk0, int _Unk1) { Invoke<0x526D45B7, void>(_Unk0, _Unk1); }
	static void AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(int _Unk0, int _Unk1) { Invoke<0x27A96719, void>(_Unk0, _Unk1); }
	static void SET_WEATHER_COMPLEX(Time _Time, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12, int _Unk13, int _Unk14) { Invoke<0xC157CA40, void>(_Time, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12, _Unk13, _Unk14); }
	static void ITERATE_ON_PARTIAL_NAME(int _Unk0, int _Unk1) { Invoke<0x9624A938, void>(_Unk0, _Unk1); }
	static void ITERATE_ON_PARTIAL_MODEL_NAME(int _Unk0, int _Unk1) { Invoke<0xD117DF0D, void>(_Unk0, _Unk1); }
	static void HUD_CLEAR_BIG_TEXT() { Invoke<0xD6DFA6FC, void>(); }
	static void HUD_CLEAR_COUNTER() { Invoke<0x050EFAAB, void>(); }
	static void HUD_CLEAR_SMALL_TEXT() { Invoke<0x585F008A, void>(); }
	static void HUD_CLEAR_BIG_TEXT_QUEUE() { Invoke<0x777A1CA2, void>(); }
	static void HUD_CLEAR_HELP_QUEUE() { Invoke<0x495164AD, void>(); }
	static void HUD_CLEAR_SMALL_TEXT_QUEUE() { Invoke<0x02E1E708, void>(); }
	static void CLEAR_GPS_PATH(int _Unk0) { Invoke<0xD077D8B6, void>(_Unk0); }
	static int ADD_PLAYLIST_TO_DB(int _Unk0, int _Unk1) { return Invoke<0x5C51D43C, int>(_Unk0, _Unk1); }
	static int _IS_TYPE_ID_VALID_BY_STRING(int _Unk0, int _Unk1) { return Invoke<0xFDF42AAC, int>(_Unk0, _Unk1); }
	static void NET_SET_QUICKMATCH_PLAYLIST_RANGE(int _Unk0, int _Unk1) { Invoke<0xD923CD1B, void>(_Unk0, _Unk1); }
	static int GET_PLAYLIST_FROM_DB(int _Unk0, int _Unk1) { return Invoke<0x0E2C4B68, int>(_Unk0, _Unk1); }
	static int _0xFAD5A270(int _Unk0, int _Unk1) { return Invoke<0xFAD5A270, int>(_Unk0, _Unk1); }
	static void NET_REGISTER_PLAYLIST_TYPE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA9459BB6, void>(_Unk0, _Unk1, _Unk2); }
	static void NET_SET_PLAYLIST_LOCKED(int _Unk0, int _Unk1) { Invoke<0x9D9784B8, void>(_Unk0, _Unk1); }
	static void PLAYSTAT_DEED_NAMED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x9C80A3A4, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void EQUIP_ACCESSORY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x5A80659D, void>(_Unk0, _Unk1, _Unk2); }
	static bool ACTOR_HAS_WEAPON(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x0D47CFBD, bool>(_Actor, _WeaponModel); }
	static int IS_WEATHER_SPHERE_ENABLED(int _Unk0) { return Invoke<0xFEEC4EE2, int>(_Unk0); }
	static void ENABLE_WEATHER_SPHERE(int _Unk0, int _Unk1) { Invoke<0x17BCED9F, void>(_Unk0, _Unk1); }
	static void AMBIENCE_AUDIO_VALIDATE_REGION(int _Unk0, int _Unk1) { Invoke<0xC0556FB8, void>(_Unk0, _Unk1); }
	static int APPEND_REGION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x95666EE0, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int CREATE_VOLUME_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11) { return Invoke<0xA17311E4, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11); }
	static int CREATE_VOLUME_SET_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0x177A3843, int>(_Unk0, _Unk1); }
	static void ADD_TO_VOLUME_SET(int _Unk0, int _Unk1) { Invoke<0xB104FF3E, void>(_Unk0, _Unk1); }
	static int AI_PREDICATE_FIND_NAMED(int _Unk0, int _Unk1) { return Invoke<0x31D76951, int>(_Unk0, _Unk1); }
	static int AI_PREDICATE_IS_VALID(int _Unk0) { return Invoke<0x1FEECD4C, int>(_Unk0); }
	static int CREATE_EVENT_TRAP(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x24C18749, int>(_Unk0, _Unk1, _Unk2); }
	static void EVENT_TRAP_STORE_EVENTS(int _Unk0, int _Unk1) { Invoke<0x08765C6B, void>(_Unk0, _Unk1); }
	static void ANIMAL_SPECIES_GRINGO_LOAD_ALL() { Invoke<0xBFB65BE8, void>(); }
	static int IS_MISSION_SCRIPT() { return Invoke<0x5A9D0738, int>(); }
	static int STREAMING_REQUEST_PROP(int _Unk0, int _Unk1) { return Invoke<0x38DC1F50, int>(_Unk0, _Unk1); }
	static void STREAMING_REQUEST_GRINGO(int _Unk0) { Invoke<0x563E2E79, void>(_Unk0); }
	static void REQUEST_STRING_TABLE(const char* StringTablePath) { Invoke<0x82B4DCCE, void>(StringTablePath); }
	static void STREAMING_REQUEST_SCRIPT(int _Unk0) { Invoke<0x11E57A92, void>(_Unk0); }
	static void STREAMING_REQUEST_MOVABLE_NAV_MESH(int _Unk0) { Invoke<0x63334F63, void>(_Unk0); }
	static void STREAMING_REQUEST_GRINGO_DICTIONARY(int _Unk0) { Invoke<0x620649B4, void>(_Unk0); }
	static int STREAMING_IS_PROP_LOADED(int _Unk0) { return Invoke<0xD7F80035, int>(_Unk0); }
	static int STREAMING_IS_GRINGO_LOADED(int _Unk0) { return Invoke<0xA6C9DCEA, int>(_Unk0); }
	static bool HAS_STRING_TABLE_LOADED(const char* StringTablePath) { return Invoke<0x12D77EEC, bool>(StringTablePath); }
	static int STREAMING_IS_SCRIPT_LOADED(int _Unk0) { return Invoke<0xB5B4AEAD, int>(_Unk0); }
	static int STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(int _Unk0) { return Invoke<0x8A0D3339, int>(_Unk0); }
	static int STREAMING_IS_GRINGO_DICTIONARY_LOADED(int _Unk0) { return Invoke<0x67994764, int>(_Unk0); }
	static bool UI_CHEAT_GET_STATE(int _CheatId) { return Invoke<0x01309706, bool>(_CheatId); }
	static void UI_CHEAT_SET_CODE(int _CheatId, int _Unk1) { Invoke<0x90CD8795, void>(_CheatId, _Unk1); }
	static void UI_CHEAT_SET_VALUE(int _CheatId, int _Unk1) { Invoke<0x9E88643A, void>(_CheatId, _Unk1); }
	static void RESET_GLOBAL_ACTOR_WEAPON_BIAS() { Invoke<0xDAD46FAB, void>(); }
	static void HORSE_SET_INFINITE_FRESHNESS_CHEAT(bool _Toggle) { Invoke<0xB731EB45, void>(_Toggle); }
	static void FIRE_SET_GUNS_BLAZING_ACTIVE(bool _IsActive) { Invoke<0x3F67DEDB, void>(_IsActive); }
	static void UI_SET_HAS_CHEATED(int _Unk0) { Invoke<0x7D0EFDD8, void>(_Unk0); }
	static void PUSH_COMMAND_HANDLE(int _Unk0, int _Unk1) { Invoke<0x2104B1C0, void>(_Unk0, _Unk1); }
	static void _0xF1A723D0(int _Unk0, int _Unk1) { Invoke<0xF1A723D0, void>(_Unk0, _Unk1); }
	static void CREATE_STAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x32A3A7AE, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void DISABLE_CHILD_SECTOR(const char* _SectorName) { Invoke<0x9E1AE585, void>(_SectorName); }
	static void ENABLE_CHILD_SECTOR(const char* _SectorName) { Invoke<0x7ECE15BE, void>(_SectorName); }
	static void SET_CURVE_WEIGHT(int _Unk0, int _Unk1) { Invoke<0xA7BB9E5E, void>(_Unk0, _Unk1); }
	static void DISABLE_WORLD_SECTOR(const char* _SectorName) { Invoke<0xB511D087, void>(_SectorName); }
	static void ENABLE_WORLD_SECTOR(const char* _SectorName) { Invoke<0xAD5613FD, void>(_SectorName); }
	static int ENABLE_CURVE(int _Unk0, int _Unk1) { return Invoke<0x0C46DAB3, int>(_Unk0, _Unk1); }
	static const char* VECTOR_TO_STRING(Vector3* _Vector) { return Invoke<0x6B8E4CDD, const char*>(_Vector); }
	static void AUDIO_MUSIC_SET_STATE(int _Unk0) { Invoke<0x789C753C, void>(_Unk0); }
	static int GRINGO_SETUP_PROP_ASSOCIATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0x38771B89, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static int GRINGO_SETUP_ATTR_ASSOCIATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11) { return Invoke<0xC426D16F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11); }
	static void LOAD_AUDIO_BANK(const char* RefName, const char* BankPath) { Invoke<0x08F4B5B8, void>(RefName, BankPath); }
	static bool GET_AUDIO_BANK_LOADING_STATUS(const char* RefName, const char* BankPath) { return Invoke<0x98CD7340, bool>(RefName, BankPath); }
	static void MAKE_AUDIO_SLOT_STATIC(const char* _Unk0) { Invoke<0x176E921C, void>(_Unk0); }
	static int REQUEST_MISSION_AUDIO_BANK(const char* _Unk0) { return Invoke<0x916E37CA, int>(_Unk0); }
	static void DYNAMICMIXER_TRIGGERSTATE_PERSISTENT(int _Unk0, int _Unk1) { Invoke<0xA82D893C, void>(_Unk0, _Unk1); }
	static void DESTROY_VOLUME(int _Unk0) { Invoke<0x8CAB944F, void>(_Unk0); }
	static void ACTOR_SET_NEXT_WEAPON(int _Unk0, int _Unk1) { Invoke<0xBFD6D55F, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_ENDLESS_READYMODE(int _Unk0, int _Unk1) { Invoke<0xD0E08B5E, void>(_Unk0, _Unk1); }
	static void RESET_ANIM_SET_FOR_ACTOR(int _Unk0, int _Unk1) { Invoke<0x7A6C5C2F, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_POSTURE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x3BD4426B, void>(_Unk0, _Unk1, _Unk2); }
	static int ACTOR_DRAW_ANY_WEAPON(int _Unk0, int _Unk1) { return Invoke<0xD86BFBD8, int>(_Unk0, _Unk1); }
	static void SET_AMBIENT_DEAD_COUNT_DECAY_RATE(int _Unk0) { Invoke<0x851F88F6, void>(_Unk0); }
	static void DYNAMICMIXER_DETRIGGERSTATE(int _Unk0, int _Unk1) { Invoke<0xF86010D1, void>(_Unk0, _Unk1); }
	static void _0xBAEC56D1(int _Unk0) { Invoke<0xBAEC56D1, void>(_Unk0); }
	static void APPEND_JOURNAL_ENTRY_DETAIL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xF5DFD684, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_PLAYER_COMBATMODE() { return Invoke<0x86E193B8, int>(); }
	static int DECOR_GET_FLOAT(int _Unk0, int _Unk1) { return Invoke<0x8DE5382F, int>(_Unk0, _Unk1); }
	static void DISBAND_OBJECTSET(int _Unk0) { Invoke<0x179A07DD, void>(_Unk0); }
	static int GET_ITERATOR_FROM_OBJECT(int _Unk0) { return Invoke<0xF5EE5874, int>(_Unk0); }
	static int CREATE_NAMED_OBJECT_ITERATOR(int _Unk0, int _Unk1) { return Invoke<0x2F358B89, int>(_Unk0, _Unk1); }
	static int GET_TIME_OF_DAY_AS_INT() { return Invoke<0x061A2A3C, int>(); }
	static void SET_PHOSPHORUS_AMMO_ACTIVE(int _Unk0) { Invoke<0xCA840DBB, void>(_Unk0); }
	static Camera CREATE_CAMERA_IN_LAYOUT(Layout _Layout, const char* _Unk1, int _Unk2) { return Invoke<0x0B1569C5, Camera>(_Layout, _Unk1, _Unk2); }
	static int NET_AUTHENTICATE_GAMER(int _Unk0, int _Unk1) { return Invoke<0x8E0D7219, int>(_Unk0, _Unk1); }
	static void UI_SEND_EVENT(const char* e) { Invoke<0xB58825F5, void>(e); }
	static void SET_CAMERA_POSITION(Camera _Camera, Vector2 _PositionXY, float _PositionZ) { Invoke<0x0B12CD8C, void>(_Camera, _PositionXY, _PositionZ); }
	static void SET_CAMERA_ORIENTATION(Camera _Camera, Vector2 _RotationXY, float _RotationZ, bool _Unk1) { Invoke<0x486F4461, void>(_Camera, _RotationXY, _RotationZ, _Unk1); }
	static void SET_CAMERA_DIRECTION(Camera _Camera, Vector2 _DirectionXY, float _DirectionZ, bool _Unk1) { Invoke<0xA8642E5E, void>(_Camera, _DirectionXY, _DirectionZ, _Unk1); }
	static void SET_CURRENT_CAMERA_ON_CHANNEL(Camera _Camera, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0x3EA55678, void>(_Camera, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void AMBIENCE_AUDIO_ENTITY_UPDATE_TERRITORY(int _Unk0) { Invoke<0x2A3B1045, void>(_Unk0); }
	static void SET_PLAYER_PADINDEX(int _Unk0, int _Unk1) { Invoke<0x8F82B7D4, void>(_Unk0, _Unk1); }
	static void FLASH_INTRO_FADE_PRESS_START(int _Unk0) { Invoke<0x9E6D7105, void>(_Unk0); }
	static void FLASH_INTRO_FADE_LOGO(int _Unk0) { Invoke<0xBB2EABF9, void>(_Unk0); }
	static void FLASH_INTRO_SHUTDOWN() { Invoke<0x18346D88, void>(); }
	static void MOVIE_PLAYER_STOP_MOVIE() { Invoke<0x0C197810, void>(); }
	static void REMOVE_CAMERA_FROM_CHANNEL(Camera _Camera, int _Channel) { Invoke<0x423DB420, void>(_Camera, _Channel); }
	static void DESTROY_LAYOUT(int _Unk0) { Invoke<0xC1756F39, void>(_Unk0); }
	static void HUD_ENABLE(bool _Value) { Invoke<0x0C180A3F, void>(_Value); }
	static int FLASH_INTRO_ARE_LEGALS_COMPLETED() { return Invoke<0x82A290D4, int>(); }
	static int UI_GET_REBOOT_REASON(int _Unk0) { return Invoke<0x111554E2, int>(_Unk0); }
	static int UI_IS_SHOWING_DIALOG() { return Invoke<0xC64DF45D, int>(); }
	static bool UI_ISFOCUSED(const char* _UILayer) { return Invoke<0x6F2509E8, bool>(_UILayer); }
	static int NET_IS_ONLINE_AVAILABLE() { return Invoke<0x5FF2BAE0, int>(); }
	static int GET_PLAYER_PADINDEX_NO_ACTOR(int _Unk0) { return Invoke<0xCF02D1D6, int>(_Unk0); }
	static void UI_EXIT(const char* uiLayer) { Invoke<0x2DF89C2E, void>(uiLayer); }
	static int _0x03962973() { return Invoke<0x03962973, int>(); }
	static void DESTROY_OBJECTSET(int _Unk0) { Invoke<0x3A71A589, void>(_Unk0); }
	static int GIVE_OBJECT_TO_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0x2D160228, int>(_Unk0, _Unk1); }
	static int SQUAD_IS_VALID(int _Unk0) { return Invoke<0xBDB3061E, int>(_Unk0); }
	static int SQUAD_GET_SIZE(int _Unk0) { return Invoke<0xEEC83187, int>(_Unk0); }
	static int SQUAD_GET_ACTOR_BY_INDEX(int _Unk0, int _Unk1) { return Invoke<0x5126039A, int>(_Unk0, _Unk1); }
	static void AI_CONVERSE_DISABLE(int _Unk0) { Invoke<0xEA86A817, void>(_Unk0); }
	static void AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(int _Unk0) { Invoke<0x1D4786CF, void>(_Unk0); }
	static void CLEAR_ACTOR_STAY_WITHIN_VOLUME(int _Unk0) { Invoke<0xED6D63FE, void>(_Unk0); }
	static int _0xE18028C1(int _Unk0) { return Invoke<0xE18028C1, int>(_Unk0); }
	static void RESET_THIS_TREE_TYPE_CLEARING(int _Unk0) { Invoke<0x25690082, void>(_Unk0); }
	static void RESET_THIS_BREAKABLE_TREE_CLEARING(int _Unk0) { Invoke<0x57478561, void>(_Unk0); }
	static void SQUAD_LEAVE(int _Unk0) { Invoke<0x077591FF, void>(_Unk0); }
	static void DESTROY_ACTOR(Actor _Actor) { Invoke<0x8BD21869, void>(_Actor); }
	static void RELEASE_ACTOR_AS_AMBIENT(int _Unk0) { Invoke<0xC8AD4A8C, void>(_Unk0); }
	static void RELEASE_ACTOR(Actor _Actor) { Invoke<0x32489AFB, void>(_Actor); }
	static int CAMERA_IS_VISIBLE_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xBB6FDF5F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void RELEASE_OBJECT_REF(int _Unk0) { Invoke<0x67DB5ABF, void>(_Unk0); }
	static GUIWindow _GUI_GET_WINDOW(int GUIHandle, const char* WindowName) { return Invoke<0xF6207DF5, GUIWindow>(GUIHandle, WindowName); }
	static int GUI_WINDOW_VALID(int _Unk0) { return Invoke<0xA2E6FECB, int>(_Unk0); }
	static int GUI_CLOSE_WINDOW(int _Unk0) { return Invoke<0xFDED9B11, int>(_Unk0); }
	static void SET_HUD_MAP_DRAW_ENABLED(int _Unk0) { Invoke<0xA094152A, void>(_Unk0); }
	static void SET_ACTOR_INVULNERABILITY(Actor _Actor, bool _Invulnerable) { Invoke<0xE38EF526, void>(_Actor, _Invulnerable); }
	static void AI_CLEAR_DONT_HARM_ACTOR(int _Unk0) { Invoke<0xA737CCAC, void>(_Unk0); }
	static void UI_POP(const char* _Unk0) { Invoke<0xBEE5CF6C, void>(_Unk0); }
	static void STREAMING_UNLOAD_BOUNDS() { Invoke<0x09A67EC6, void>(); }
	static int IS_HUD_MAP_VISIBLE() { return Invoke<0xCE043618, int>(); }
	static void SET_HUD_MAP_DRAW_ENABLED_TIMED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0DFF578A, void>(_Unk0, _Unk1, _Unk2); }
	static int WOULD_ACTOR_BE_VISIBLE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xD8BE8E0C, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_POINT_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x44A34042, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SQUAD_MAKE_EMPTY(int _Unk0) { Invoke<0x90D92CF1, void>(_Unk0); }
	static void TASK_BIRD_LAND_AT_COORD(int _Unk0, int _Unk1) { Invoke<0xAD0E49E3, void>(_Unk0, _Unk1); }
	static int GRINGO_GET_MY_OBJECT_REF() { return Invoke<0x5F7176D6, int>(); }
	static Weather GET_WEATHER() { return Invoke<0xEA026ED9, Weather>(); }
	static int FIND_NAMED_POPULATION_SET(int _Unk0) { return Invoke<0x4646C335, int>(_Unk0); }
	static int IS_POPSET_VALID(int _Unk0) { return Invoke<0x64BAF32C, int>(_Unk0); }
	static int OBJECT_ITERATOR_CURRENT(int _Unk0) { return Invoke<0x191E32C0, int>(_Unk0); }
	static int GRINGO_USABLE_BY_ACTOR_ENUM(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE2DCFF34, int>(_Unk0, _Unk1, _Unk2); }
	static void GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x8EB5CE58, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0DC149BD, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int CREATE_PROP_IN_LAYOUT_BY_ID(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0xD92BA5B6, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int _0xFF8CBD07(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0xFF8CBD07, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GET_LOCATOR_OFFSETS(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0BA5E579, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool SET_OBJECT_POSITION(Object _Object, Vector2 _PositionXY, float _PositionZ) { return Invoke<0xC5D796F8, bool>(_Object, _PositionXY, _PositionZ); }
	static void NET_OBJECT_REPLICATION_MODE_START(int _Unk0, int _Unk1) { Invoke<0x47C5E353, void>(_Unk0, _Unk1); }
	static void NET_OBJECT_REPLICATION_MODE_END(int _Unk0) { Invoke<0x3932B786, void>(_Unk0); }
	static int CREATE_SQUAD_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0xF7277A0F, int>(_Unk0, _Unk1); }
	static int GET_SQUAD_FROM_OBJECT(int _Unk0) { return Invoke<0xD0C471FB, int>(_Unk0); }
	static int GET_ACTOR_FROM_OBJECT(int _Unk0) { return Invoke<0x34F0AD96, int>(_Unk0); }
	static bool IS_ACTOR_VEHICLE(Actor Actor) { return Invoke<0x9751B167, bool>(Actor); }
	static int IS_ACTION_NODE_PLAYING_PARTIAL(int _Unk0, int _Unk1) { return Invoke<0x994F2BD1, int>(_Unk0, _Unk1); }
	static void AI_CONVERSE_ENABLE(int _Unk0) { Invoke<0x43F59172, void>(_Unk0); }
	static void AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(int _Unk0) { Invoke<0x52D984AF, void>(_Unk0); }
	static void AI_GOAL_LOOK_CLEAR(int _Unk0) { Invoke<0x6AF3E54E, void>(_Unk0); }
	static void SAY_SINGLE_LINE_STRING_WITH_REPLY(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x031E983D, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SET_ACTOR_ALLOW_WEAPON_REACTIONS(int _Unk0, int _Unk1) { Invoke<0x003D7C2F, void>(_Unk0, _Unk1); }
	static void AI_QUICK_EXIT_GRINGO(int _Unk0, int _Unk1) { Invoke<0x6FAF13C2, void>(_Unk0, _Unk1); }
	static int GET_RIDER(int _Unk0) { return Invoke<0x88A283E5, int>(_Unk0); }
	static void TASK_CLEAR(int _Unk0) { Invoke<0x16876A25, void>(_Unk0); }
	static void TASK_WANDER(int _Unk0, int _Unk1) { Invoke<0x17BCA08E, void>(_Unk0, _Unk1); }
	static void MEMORY_PREFER_RIDING(int _Unk0, int _Unk1) { Invoke<0x1B72B0DD, void>(_Unk0, _Unk1); }
	static void RELEASE_LAYOUT_OBJECTS(int _Unk0) { Invoke<0xE78E66F0, void>(_Unk0); }
	static bool IS_ACTOR_RIDING_VEHICLE(Actor Actor) { return Invoke<0xDE19A1F9, bool>(Actor); }
	static Actor GET_MOUNT(Actor _Actor) { return Invoke<0xDD31EC4E, Actor>(_Actor); }
	static int GET_ATTACHED_HOGTIE_VICTIM(int _Unk0) { return Invoke<0xF68C926F, int>(_Unk0); }
	static int GET_NUM_DRAFT_POSITIONS(int _Unk0) { return Invoke<0xD85CA776, int>(_Unk0); }
	static int GET_DRAFT_ACTOR(int _Unk0, int _Unk1) { return Invoke<0x48D5121D, int>(_Unk0, _Unk1); }
	static int IS_OBJECT_IN_OBJECTSET(int _Unk0, int _Unk1) { return Invoke<0x0114FCBD, int>(_Unk0, _Unk1); }
	static const char* GET_ACTOR_NAME(Actor _Actor) { return Invoke<0x78CF43C1, const char*>(_Actor); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
	static const char* GET_LAYOUT_NAME(Layout _Layout) { return Invoke<0xBADE22A2, const char*>(_Layout); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
	static const char* GET_SOMETHING_NAME(int _Something) { return Invoke<0xF662EAE1, const char*>(_Something); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
	static const char* GET_OBJECT_NAME(Object _Object) { return Invoke<0xDF40614F, const char*>(_Object); }
	static const char* GET_OBJECT_MODEL_NAME(Object _Object) { return Invoke<0x5C4262F9, const char*>(_Object); }
	static void AI_SET_NAV_MATERIAL_USAGE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x7B00615F, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(int _Unk0, int _Unk1) { Invoke<0x4D0A87BF, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(int _Unk0, int _Unk1) { Invoke<0xED3071A5, void>(_Unk0, _Unk1); }
	static void AI_SET_ENABLE_DEAD_BODY_REACTIONS(int _Unk0, int _Unk1) { Invoke<0x1978C111, void>(_Unk0, _Unk1); }
	static int DECOR_SET_OBJECT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x44F8BCC5, int>(_Unk0, _Unk1, _Unk2); }
	static int DECOR_GET_BOOL(int _Unk0, int _Unk1) { return Invoke<0xDBCE51E0, int>(_Unk0, _Unk1); }
	static int CAMERA_IS_VISIBLE_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xA97770FE, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void MEMORY_IDENTIFY(int _Unk0, int _Unk1) { Invoke<0xBA09085C, void>(_Unk0, _Unk1); }
	static void MEMORY_CONSIDER_AS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x296C01A4, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_AI_ACTOR_UNALERTED(int _Unk0) { return Invoke<0xC4D114A6, int>(_Unk0); }
	static void AI_GOAL_LOOK_AT_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x96928D25, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void FORCE_LOOK_AT_ACTOR(int _Unk0, int _Unk1, float _Unk2) { Invoke<0xFE5715A1, void>(_Unk0, _Unk1, _Unk2); }
	static void AI_GOAL_LOOK_AT_ACTOR_NEW(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x15B7044B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool IS_ACTOR_ON_FOOT(int actor) { return Invoke<0x63D6551C, bool>(actor); }
	static void AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(int _Unk0, int _Unk1) { Invoke<0xDCD2FC0F, void>(_Unk0, _Unk1); }
	static int AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(int _Unk0, int _Unk1) { return Invoke<0x059F64B8, int>(_Unk0, _Unk1); }
	static int AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xD8574E09, int>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_HANDSUP(int _Unk0) { return Invoke<0xA5A24484, int>(_Unk0); }
	static bool IS_PLAYER_WEAPON_ZOOMED(Actor _Actor) { return Invoke<0x0A842786, bool>(_Actor); }
	static int MEMORY_GET_IS_VISIBLE(int _Unk0, int _Unk1) { return Invoke<0x45CE40FD, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_MELEE_TARGETED_BY(int _Unk0) { return Invoke<0x02365961, int>(_Unk0); }
	static int _0x7F454A92(int _Unk0) { return Invoke<0x7F454A92, int>(_Unk0); }
	static void CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Actor _Actor) { Invoke<0x4DBD473B, void>(_Actor); }
	static void AI_SPEECH_SET_ALLOW_FOR_ACTOR(int _Unk0, int _Unk1) { Invoke<0x56421F1A, void>(_Unk0, _Unk1); }
	static void _0x99AFD2D1(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x99AFD2D1, void>(_Unk0, _Unk1, _Unk2); }
	static ActorModel GET_ACTOR_ENUM(Actor _Actor) { return Invoke<0x0B28E9EC, ActorModel>(_Actor); }
	static void AI_SET_CAMPFIRE_STORY_ENABLED(int _Unk0) { Invoke<0xC1F9A360, void>(_Unk0); }
	static void AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(int _Unk0, int _Unk1) { Invoke<0xAD42EABC, void>(_Unk0, _Unk1); }
	static int ACCESSORIZE_HORSE(int _Unk0, int _Unk1) { return Invoke<0x6C939AA7, int>(_Unk0, _Unk1); }
	static void TASK_USE_GRINGO(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xA0E003A7, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SET_ACTOR_STAY_WITHIN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x6A4A1699, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AI_GOAL_LOOK_AT_NEUTRAL(int _Unk0, int _Unk1) { Invoke<0x8456676E, void>(_Unk0, _Unk1); }
	static int GRINGO_ACTOR_CAN_USE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFA37C0FA, int>(_Unk0, _Unk1, _Unk2); }
	static void TASK_PRIORITY_SET(int _Unk0, int _Unk1) { Invoke<0x3A95A656, void>(_Unk0, _Unk1); }
	static void TASK_WANDER_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA5F2BFAA, void>(_Unk0, _Unk1, _Unk2); }
	static void SQUAD_JOIN(int _Unk0, int _Unk1) { Invoke<0xB14302C8, void>(_Unk0, _Unk1); }
	static int ROTATE_OBJECT_UPRIGHT_TO_GROUND(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x7080E24A, int>(_Unk0, _Unk1, _Unk2); }
	static float CLEAR_AREA_OF_TREE_TYPE(float _X, float _Y, float _Z, float _Radius, int _Unk4) { return Invoke<0x9A93E7CA, float>(_X, _Y, _Z, _Radius, _Unk4); }
	static float CLEAR_AREA_OF_BREAKABLE_TREES(float _X, float _Y, float _Z, float _Radius) { return Invoke<0x002B0698, float>(_X, _Y, _Z, _Radius); }
	static float CLEAR_AREA_OF_GRASS(float _X, float _Y, float _Z, float _Radius) { return Invoke<0x9AA8A1B1, float>(_X, _Y, _Z, _Radius); }
	static int CREATE_MOBILE_LAYOUT(int _Unk0) { return Invoke<0x426828CB, int>(_Unk0); }
	static int GRINGO_ENABLE_SPAWN(int _Unk0, int _Unk1) { return Invoke<0xA5EDCA4A, int>(_Unk0, _Unk1); }
	static int ATTACH_OBJECTS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0xE1421B42, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int IS_ATTACHMENT_VALID(int _Unk0) { return Invoke<0x50305244, int>(_Unk0); }
	static int _0x000079CB(int _Unk0) { return Invoke<0x000079CB, int>(_Unk0); }
	static int DECOR_GET_INT_VERBOSE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1F003E6C, int>(_Unk0, _Unk1, _Unk2); }
	static void CREATE_OBJECT_GLOW(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x1065D334, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void RELEASE_VOLUME(int _Unk0) { Invoke<0x81F984F8, void>(_Unk0); }
	static void ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(int _Unk0, int _Unk1) { Invoke<0xEBE88626, void>(_Unk0, _Unk1); }
	static void ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(int _Unk0) { Invoke<0x0ACF7E75, void>(_Unk0); }
	static void REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(int _Unk0, int _Unk1) { Invoke<0x1AED34CA, void>(_Unk0, _Unk1); }
	static void REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(int _Unk0) { Invoke<0x80FF115A, void>(_Unk0); }
	static int GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0xD3503922, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GET_ACTORENUM_SPECIES(int _Unk0) { return Invoke<0x6AC01FCB, int>(_Unk0); }
	static int IS_POPULATION_SET_READY(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFA5EA974, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_NUM_ACTORENUMS_IN_POPULATION(int _Unk0) { return Invoke<0x8FD12F97, int>(_Unk0); }
	static int GET_ACTORENUM_IN_POPULATION(int _Unk0, int _Unk1) { return Invoke<0xABEC5676, int>(_Unk0, _Unk1); }
	static int GET_ACTORENUM_IN_POPULATION_WEIGHT(int _Unk0, int _Unk1) { return Invoke<0xEDD44891, int>(_Unk0, _Unk1); }
	static void TASK_FLEE_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x2CF32A98, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void MEMORY_CLEAR_ALL(int _Unk0) { Invoke<0x4485B246, void>(_Unk0); }
	static int GET_CURRENT_GRINGO(int _Unk0) { return Invoke<0x5D9DB7A5, int>(_Unk0); }
	static int GET_OBJECT_FROM_GRINGO(int _Unk0) { return Invoke<0x111501F7, int>(_Unk0); }
	static int CREATE_CORPSE_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0xE8C04F05, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static int REQUEST_FIXED_CORPSE(int _Unk0, int _Unk1) { return Invoke<0x0D447878, int>(_Unk0, _Unk1); }
	static void SET_OBJECT_COLLIDE_WITH_MOVABLES(int _Unk0, int _Unk1) { Invoke<0x05D69EA6, void>(_Unk0, _Unk1); }
	static int ATTACH_OBJECTS_NO_DRV(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xCC277C0A, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void SET_OBJECT_POSITION_ON_GROUND(Object _Object, Vector2 _PositionXY, float _PositionZ) { Invoke<0x5AB0BBA6, void>(_Object, _PositionXY, _PositionZ); }
	static int CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x7A6146DB, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_CAMERA_FOCUS_PROMPT_TEXT(int _Unk0, int _Unk1) { Invoke<0x21633E5F, void>(_Unk0, _Unk1); }
	static void SET_OBJECT_COLLIDE_WITH_WORLD(int _Unk0, int _Unk1) { Invoke<0x601FC9F4, void>(_Unk0, _Unk1); }
	static void PRINT_SMALL_B(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x04A38C60, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int GET_TOTAL_MINUTES(int _Unk0) { return Invoke<0xC52F07A8, int>(_Unk0); }
	static int ARE_CURVES_IN_RANGE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xA5FF6076, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int START_CURVE_QUERY(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x0E018669, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GET_NUM_POINTS_IN_CURVE_QUERY(int _Unk0) { return Invoke<0x8E551A7C, int>(_Unk0); }
	static int GET_POINT_FROM_CURVE_QUERY(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE531DCAE, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(int _Unk0, int _Unk1) { return Invoke<0xBD4E48A6, int>(_Unk0, _Unk1); }
	static void _0xDF93BD7C(int _Unk0) { Invoke<0xDF93BD7C, void>(_Unk0); }
	static int IS_PERS_CHAR_ALIVE(int _Unk0) { return Invoke<0x5F3A1B81, int>(_Unk0); }
	static int ACTIVATE_ACTOR_FOR_PERS_CHAR(int _Unk0) { return Invoke<0x2CA16327, int>(_Unk0); }
	static void AMBIENT_SET_SEARCH_CENTER_PLAYER() { Invoke<0x21E783AC, void>(); }
	static void AMBIENT_SET_DISTANCE_FILTER(int _Unk0, int _Unk1) { Invoke<0xA89B77A7, void>(_Unk0, _Unk1); }
	static void AMBIENT_SET_QUADRANT_FILTER(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x609514AE, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AMBIENT_SET_SLOPE_FILTER_PRECISE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x45190938, void>(_Unk0, _Unk1, _Unk2); }
	static void AMBIENT_SET_BUMP_FILTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x912EEC43, void>(_Unk0, _Unk1, _Unk2); }
	static void AMBIENT_SET_ONESHOT_QUERIES(int _Unk0) { Invoke<0x9A35520B, void>(_Unk0); }
	static void AMBIENT_SET_RANDOM_SEARCH_ORDER(int _Unk0) { Invoke<0xA337135A, void>(_Unk0); }
	static void _0x0AC99007(int _Unk0, int _Unk1) { Invoke<0x0AC99007, void>(_Unk0, _Unk1); }
	static void AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(int _Unk0, int _Unk1) { Invoke<0x54BD1C65, void>(_Unk0, _Unk1); }
	static void AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(int _Unk0) { Invoke<0xC8B149B4, void>(_Unk0); }
	static int AMBIENT_GET_POINT(int _Unk0, int _Unk1) { return Invoke<0x0C6EF9E1, int>(_Unk0, _Unk1); }
	static void AMBIENT_SET_MATERIAL_AT_POINT_FILTER(int _Unk0) { Invoke<0xB1609063, void>(_Unk0); }
	static void AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9CD2B55F, void>(_Unk0, _Unk1, _Unk2); }
	static void AMBIENT_SET_SLOPE_FILTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x391F3607, void>(_Unk0, _Unk1, _Unk2); }
	static int GET_NUM_CURVES_IN_CURVE_QUERY(int _Unk0) { return Invoke<0xBADCF1E9, int>(_Unk0); }
	static void _0x19D652F9(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x19D652F9, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int CREATE_POPULATION_SET(int _Unk0) { return Invoke<0xAF1D570B, int>(_Unk0); }
	static void LINK_ACTORENUM_TO_POPULATION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0C1B8DEA, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_CAN_PLAY_GESTURES(int _Unk0, int _Unk1) { Invoke<0x50ED77F1, void>(_Unk0, _Unk1); }
	static void AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(int _Unk0, int _Unk1) { Invoke<0xF3D88421, void>(_Unk0, _Unk1); }
	static void AI_DONT_HARM_ACTOR(int _Unk0) { Invoke<0xB421AFCA, void>(_Unk0); }
	static void HOGTIE_ACTOR(int _Unk0) { Invoke<0x4440BCA5, void>(_Unk0); }
	static void TASK_FACE_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x9F3B5B47, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void MEMORY_SET_WEAPON_DRAW_PREFERENCE(int _Unk0, int _Unk1) { Invoke<0xF8CB6260, void>(_Unk0, _Unk1); }
	static void TASK_POINT_GUN_AT_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x95C206C2, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_ACTOR_HOGTIED(int _Unk0) { return Invoke<0xA610DC79, int>(_Unk0); }
	static int GET_HOGTIED_MASTER(int _Unk0) { return Invoke<0x1580F3BF, int>(_Unk0); }
	static int AI_IS_HOSTILE_OR_ENEMY(int _Unk0, int _Unk1) { return Invoke<0x9AB964F4, int>(_Unk0, _Unk1); }
	static int _0xA936E73B(int _Unk0, int _Unk1) { return Invoke<0xA936E73B, int>(_Unk0, _Unk1); }
	static void MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(int _Unk0, int _Unk1) { Invoke<0x8212247D, void>(_Unk0, _Unk1); }
	static void CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(int _Unk0) { Invoke<0xA8BD64D1, void>(_Unk0); }
	static void MEMORY_REPORT_POSITION_AUTO(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x2F589CDF, void>(_Unk0, _Unk1, _Unk2); }
	static void AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST(int _Unk0) { Invoke<0xA4F209D5, void>(_Unk0); }
	static bool IS_AMBIENT_SPEECH_PLAYING(int _Unk0) { return Invoke<0x1972E8AA, int>(_Unk0); }
	static int GET_ACTOR_ENUM_STRING(int _Unk0) { return Invoke<0xD98CB6F6, int>(_Unk0); }
	static int TASK_SEQUENCE_OPEN() { return Invoke<0x8DA34524, int>(); }
	static void TASK_SEQUENCE_CLOSE() { Invoke<0x9EE3053B, void>(); }
	static void TASK_SEQUENCE_PERFORM(int _Unk0, int _Unk1) { Invoke<0x2DF2298C, void>(_Unk0, _Unk1); }
	static void TASK_SEQUENCE_RELEASE(int _Unk0, int _Unk1) { Invoke<0xB2D35E22, void>(_Unk0, _Unk1); }
	static void AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST() { Invoke<0xA343FDBB, void>(); }
	static int ACTOR_START_FORCE_HOLSTER(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x7957CA4F, int>(_Unk0, _Unk1, _Unk2); }
	static void TASK_MOUNT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xB6131204, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_ACTOR_ONE_SHOT_DEATH(int _Unk0, int _Unk1) { Invoke<0xCDC686B2, void>(_Unk0, _Unk1); }
	static void AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(int _Unk0, int _Unk1) { Invoke<0x2EBE540D, void>(_Unk0, _Unk1); }
	static void COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(int _Unk0, int _Unk1) { Invoke<0xF1454677, void>(_Unk0, _Unk1); }
	static void COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x80D51606, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_RIDING_AND_IN_SADDLE(int _Unk0) { return Invoke<0xF270EAC1, int>(_Unk0); }
	static int DECOR_SET_VECTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xAAED0B69, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_OBJECT_FROM_OBJECTSET(int _Unk0) { return Invoke<0xBF680846, int>(_Unk0); }
	static int GET_NTH_TASK_STATUS(int _Unk0, int _Unk1) { return Invoke<0x016C6801, int>(_Unk0, _Unk1); }
	static int ACTORS_IN_RANGE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x50A3BF5D, int>(_Unk0, _Unk1, _Unk2); }
	static void PRINT_HELP_FORMAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0xD8AAF8E0, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GET_DEBUG_PADINDEX() { return Invoke<0xB114332D, int>(); }
	static void SET_SCRIPT_AVOIDS_STRINGTABLE(int _Unk0) { Invoke<0x45589499, void>(_Unk0); }
	static int GUI_SET_TEXT(int TextHandle, const char* MenuName) { return Invoke<0x5F3A1C35, int>(TextHandle, MenuName); }
	static int GUI_MAKE_TEXT(int GUIHandle, int Position, const char* MenuTitle, const char* GXTText, float _Unk4) { return Invoke<0x68FC1001, int>(GUIHandle, Position, MenuTitle, GXTText, _Unk4); }
	static int GUI_SET_TEXT_COLOR(int TextHandle, float* ColorArea) { return Invoke<0x7600ED4B, int>(TextHandle, ColorArea); }
	static Controller _GET_ACTOR_CONTROLLER(int ActorId) { return Invoke<0x524F6981, Controller>(ActorId); }
	static int GUI_SET_TEXT_JUSTIFY(int TextHandle, int JustifyType) { return Invoke<0x9CC6F183, int>(TextHandle, JustifyType); }
	static int GET_TASK_STATUS(int _Unk0, int _Unk1) { return Invoke<0xCCE01E8A, int>(_Unk0, _Unk1); }
	static void MEMORY_CLEAR_EVENTS(int _Unk0, int _Unk1) { Invoke<0x8CD37E9E, void>(_Unk0, _Unk1); }
	static int AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(int _Unk0) { return Invoke<0xAFB1CC55, int>(_Unk0); }
	static int AI_IMPAIRMENT_MASK_MATCHES(int _Unk0, int _Unk1) { return Invoke<0xB4A15D17, int>(_Unk0, _Unk1); }
	static int SQUAD_GET(int _Unk0) { return Invoke<0xB3732081, int>(_Unk0); }
	static int SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(int _Unk0) { return Invoke<0xAEDD7512, int>(_Unk0); }
	static int SAY_SINGLE_LINE_STRING_BEAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x84A909EC, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void SAY_SINGLE_LINE_STRING(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0xBA734A15, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static bool IS_ACTOR_HUMAN(int actor) { return Invoke<0x882C84DC, bool>(actor); }
	static void MEMORY_ALLOW_TAKE_COVER(int _Unk0, int _Unk1) { Invoke<0xE944E5F8, void>(_Unk0, _Unk1); }
	static int GET_ACTORENUM_ACTOR_BASE_TYPE(int _Unk0) { return Invoke<0xEE0AB3DD, int>(_Unk0); }
	static int GET_CRIME_CRIMINAL(int _Unk0) { return Invoke<0xEC2C34A4, int>(_Unk0); }
	static int GET_CRIME_TYPE(int _Unk0) { return Invoke<0xDB2BDEA8, int>(_Unk0); }
	static int IS_ACTOR_ON_TRAIN(int _Unk0, int _Unk1) { return Invoke<0xD36E2D54, int>(_Unk0, _Unk1); }
	static int SET_INTENDED_HOGTIE_MASTER(int _Unk0, int _Unk1) { return Invoke<0xFF5F7D2C, int>(_Unk0, _Unk1); }
	static int ATTACH_HOGTIE_ACTOR_TO_ACTOR(int _Unk0, int _Unk1) { return Invoke<0xCC04895F, int>(_Unk0, _Unk1); }
	static int LOCATE_GRINGO_OF_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xB1FCFFDC, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_UPDATE_OBJECT_REF(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x4685D538, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_UPDATE_INT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0744FEE8, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_ACTOR_UPDATE_PRIORITY(int _Unk0, int _Unk1) { Invoke<0x44C05EF6, void>(_Unk0, _Unk1); }
	static int GET_NUM_FORMATION_LOCATIONS(int _Unk0) { return Invoke<0xBE5D84BF, int>(_Unk0); }
	static void GET_FORMATION_LOCATION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x17FC65A4, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_DRAW_ACTOR(Actor _Actor, bool _ToDraw) { Invoke<0xE6644CE5, void>(_Actor, _ToDraw); }
	static void CLEAR_ACTOR_MAX_SPEED(int _Unk0) { Invoke<0xA9691E66, void>(_Unk0); }
	static bool IS_ACTOR_ANIMAL(Actor Actor) { return Invoke<0x8E0769F3, bool>(Actor); }
	static int ANIMAL_ACTOR_GET_SPECIES(int _Unk0) { return Invoke<0x7D0E25DF, int>(_Unk0); }
	static void ANIMAL_SPECIES_REL_SET_CAN_ATTACK(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC8B4CD3F, void>(_Unk0, _Unk1, _Unk2); }
	static void COMBAT_CLASS_AI_SET_ATTRIB_BOOL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x69C5ADD2, void>(_Unk0, _Unk1, _Unk2); }
	static void MEMORY_ALLOW_SHOOTING(int _Unk0, int _Unk1) { Invoke<0x937E1760, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_MAX_SPEED(Actor _Actor, int _Speed) { Invoke<0x9CB01B27, void>(_Actor, _Speed); }
	static void ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(int _Unk0) { Invoke<0xD1CF9793, void>(_Unk0); }
	static int ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x039E7F1D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int GET_PHYSINST_FROM_ACTOR(int _Unk0) { return Invoke<0x758F993A, int>(_Unk0); }
	static void BREAK_OFF_ABOVE(int _Unk0, int _Unk1) { Invoke<0xB5F9F4CF, void>(_Unk0, _Unk1); }
	static int SET_PROP_VELOCITY(int _Unk0, int _Unk1) { return Invoke<0x28425D8C, int>(_Unk0, _Unk1); }
	static int GET_OBJECT_FROM_VOLUME(int _Unk0) { return Invoke<0xFADF0B96, int>(_Unk0); }
	static void SET_VOLUME_ENABLED(int _Unk0, int _Unk1) { Invoke<0x14D5CFC3, void>(_Unk0, _Unk1); }
	static void SET_MOUNTS_AS_PASSENGER(int _Unk0, int _Unk1) { Invoke<0xDC6DEE92, void>(_Unk0, _Unk1); }
	static void AI_SET_ENABLE_STICKUP_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0x1436588F, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_CUTSCENE_MODE(int _Unk0, int _Unk1) { Invoke<0x76ECD5F1, void>(_Unk0, _Unk1); }
	static void AUDIO_MUSIC_ONE_SHOT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x714DA5BB, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int IS_CURVE_QUERY_VALID(int _Unk0) { return Invoke<0x9398BE8F, int>(_Unk0); }
	static bool ENABLE_VEHICLE_SEAT(Actor Vehicle, int SeatId, bool Enable) { return Invoke<0x6AC8234D, bool>(Vehicle, SeatId, Enable); }
	static int DECOR_SET_STRING(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x53D3FB4A, int>(_Unk0, _Unk1, _Unk2); }
	static Pickup CREATE_WEAPON_PICKUP(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xBF0235B0, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SET_DRAW_OBJECT(int _Unk0, int _Unk1) { Invoke<0xC5A886DC, void>(_Unk0, _Unk1); }
	static int GET_NUM_DRAFTED_ACTORS(int _Unk0) { return Invoke<0xDAB0D820, int>(_Unk0); }
	static int GET_NUM_AVAILABLE_SEATS(int _Unk0) { return Invoke<0x3ACE659E, int>(_Unk0); }
	static Actor GET_ACTOR_IN_VEHICLE_SEAT(Vehicle Veh, int SeatID) { return Invoke<0xE8E94C3B, Actor>(Veh, SeatID); }
	static void _CREATE_EXPLOSION(Vector3* coords, const char* explosionName, bool _Unk2, Vector3* damageVector, bool _Unk4) { Invoke<0xE7023D23, void>(coords, explosionName, _Unk2, damageVector, _Unk4); }
	static int MAKE_ACTOR_READY_FOR_ACTION(int _Unk0, int _Unk1) { return Invoke<0xF04335A6, int>(_Unk0, _Unk1); }
	static int LOCATE_PHYSINST_OF_PARTIAL_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x4FF36FA7, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int IS_PHYSINST_VALID(int _Unk0) { return Invoke<0x16C0A6CB, int>(_Unk0); }
	static int GET_OBJECT_FROM_PHYSINST(int _Unk0) { return Invoke<0x0550E178, int>(_Unk0); }
	static int ACTOR_GET_BEST_WEAPON_OF_TYPE(int _Unk0, int _Unk1) { return Invoke<0x659532FB, int>(_Unk0, _Unk1); }
	static void SET_OBJECT_COLLIDE_WITH_OBJECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9AC1CA75, void>(_Unk0, _Unk1, _Unk2); }
	static int GIVE_OBJECT_TO_ACTOR(int _Unk0, int _Unk1) { return Invoke<0xCBB2267A, int>(_Unk0, _Unk1); }
	static int GET_OBJECT_OWNER(int _Unk0) { return Invoke<0x48B36E07, int>(_Unk0); }
	static int _0x65C3D8F6() { return Invoke<0x65C3D8F6, int>(); }
	static int ATTACH_DRAFT_TO_VEHICLE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xB0A81226, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int ACCESSORIZE_VEHICLE_HORSES(int _Unk0, int _Unk1) { return Invoke<0xB12584C8, int>(_Unk0, _Unk1); }
	static void STREAMING_SET_POI_LIMIT(int _Unk0) { Invoke<0x6F9C399B, void>(_Unk0); }
	static void STREAMING_LOAD_SCENE_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0xCB1E8485, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int IS_ACTOR_INSIDE_VEHICLE(int _Unk0) { return Invoke<0x12325AE7, int>(_Unk0); }
	static void START_VEHICLE(Actor Vehicle) { Invoke<0xE4442AB2, void>(Vehicle); }
	static void STREAMING_UNLOAD_SCENE() { Invoke<0x39E69B1B, void>(); }
	static int IS_ACTOR_ON_LADDER(int _Unk0) { return Invoke<0xE975BE40, int>(_Unk0); }
	static int IS_ACTOR_USING_LEDGE(int _Unk0) { return Invoke<0xEBBE1CAC, int>(_Unk0); }
	static int ACTOR_END_FORCE_HOLSTER(int _Unk0) { return Invoke<0x231E7034, int>(_Unk0); }
	static int ACTOR_DRAW_LAST_WEAPON(int _Unk0, int _Unk1) { return Invoke<0x8FFDCE5C, int>(_Unk0, _Unk1); }
	static void ENABLE_USE_CONTEXTS(bool _Value) { Invoke<0xFEA58D57, void>(_Value); }
	static void AUDIO_ENABLE_PLAYER_TAUNTS() { Invoke<0x15547025, void>(); }
	static void ACTOR_DATA_GRAVITY_LIMIT(int _Unk0) { Invoke<0xF03CC7A7, void>(_Unk0); }
	static int DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(int _Unk0) { return Invoke<0x21C59F4C, int>(_Unk0); }
	static void REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int _Unk0) { Invoke<0x515AC319, void>(_Unk0); }
	static int DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(int _Unk0) { return Invoke<0x02E15363, int>(_Unk0); }
	static void REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int _Unk0) { Invoke<0xD65BAA71, void>(_Unk0); }
	static void UI_PUSH(const char* _Unk0) { Invoke<0x97C5EFC8, void>(_Unk0); }
	static void PREVENT_DESPAWN_SET_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x5C94F6EC, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void PLAY_CUTSCENEOBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0xFB28AE8D, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void RESET_ACTOR_GAITS(int _Unk0, int _Unk1) { Invoke<0xDCC91F8C, void>(_Unk0, _Unk1); }
	static void STOP_VEHICLE(int _Unk0) { Invoke<0xC2232D29, void>(_Unk0); }
	static int CREATE_CUTSCENEOBJECT_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xA923A22D, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int CHECK_CUTSCENE_COLLISIONS(int _Unk0) { return Invoke<0xE147BA8E, int>(_Unk0); }
	static int GET_CAMERA_FROM_CUTSCENEOBJECT(int _Unk0) { return Invoke<0xFDBE95AE, int>(_Unk0); }
	static int SET_CAMERA_LIGHTING_SCHEME(int _Unk0, int _Unk1) { return Invoke<0x7C864F17, int>(_Unk0, _Unk1); }
	static void SET_CUTSCENEOBJECT_PAUSED(int _Unk0, int _Unk1) { Invoke<0x18643DC2, void>(_Unk0, _Unk1); }
	static int GET_CAMERASHOT_FROM_CUTSCENEOBJECT(int _Unk0, int _Unk1) { return Invoke<0x7E9CC966, int>(_Unk0, _Unk1); }
	static void CUTSCENEOBJECT_SET_RECENTER_GAMECAM(int _Unk0, int _Unk1) { Invoke<0xDCD3A7DE, void>(_Unk0, _Unk1); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_HOLD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xC0CD3C96, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_CAMERASHOT_PERSPECTIVE(int _Unk0, int _Unk1) { Invoke<0xD8D27321, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_FOV(int _Unk0, int _Unk1) { Invoke<0x635E5494, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_NEAR_CLIP_PLANE(int _Unk0, int _Unk1) { Invoke<0x4387CDAB, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_COLLISION_PARAMETERS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xF70817E0, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_CAMERASHOT_COLLISION_ENABLED(int _Unk0, int _Unk1) { Invoke<0x3A07F60F, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x0EA022F5, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_CAMERASHOT_ORIENTATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x4FD679BD, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void UI_DUMP_MESSAGE_QUEUE_TO_NOTES(int _Unk0) { Invoke<0x714D6F72, void>(_Unk0); }
	static void UI_CLEAR_MESSAGE_QUEUE(int _Unk0) { Invoke<0x64DDB95D, void>(_Unk0); }
	static int ABORT_SCRIPTED_CONVERSATION(int _Unk0) { return Invoke<0xC842F0C9, int>(_Unk0); }
	static void ADD_COMPANION_PERMANENT() { Invoke<0x45E20057, void>(); }
	static void FREE_FROM_HOGTIE(int _Unk0) { Invoke<0x31AD57FE, void>(_Unk0); }
	static void TASK_OVERRIDE_SET_POSTURE(int _Unk0, int _Unk1) { Invoke<0x52D34567, void>(_Unk0, _Unk1); }
	static bool IS_PLAYER_DEADEYE(Actor _Actor) { return Invoke<0x6148423A, bool>(_Actor); }
	static void CANCEL_DEADEYE() { Invoke<0xCB0BDCE9, void>(); }
	static void CANCEL_TIME_WARP(int _Unk0) { Invoke<0xAF50E8A1, void>(_Unk0); }
	static void FIRE_STOP_FLAMES_IN_VOLUME(int _Unk0) { Invoke<0x11A65FFB, void>(_Unk0); }
	static void DELETE_PROJECTILES_IN_VOLUME(int _Unk0) { Invoke<0x0F474297, void>(_Unk0); }
	static void FIRE_STOP_ALL_FIRES() { Invoke<0x15001332, void>(); }
	static void AI_GLOBAL_CLEAR_ALL_DANGER() { Invoke<0xAF94B7D9, void>(); }
	static void CLEAR_CHARACTER_BLOOD() { Invoke<0x1A676EDF, void>(); }
	static void CLEAR_TUMBLEWEEDS() { Invoke<0x8852F896, void>(); }
	static int GET_CAMERA_FROM_OBJECT(int _Unk0) { return Invoke<0xD4048969, int>(_Unk0); }
	static void DESTROY_CAMERA(Camera _Camera) { Invoke<0x767E08D0, void>(_Camera); }
	static void _0xE6C1DBD9(int _Unk0) { Invoke<0xE6C1DBD9, void>(_Unk0); }
	static void SHOW_PHYSINST(int _Unk0) { Invoke<0x342FDCD6, void>(_Unk0); }
	static void ENABLE_PIP(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA5A6A3E3, void>(_Unk0, _Unk1, _Unk2); }
	static void AUDIO_MUSIC_SUSPEND(int _Unk0) { Invoke<0x56E3D235, void>(_Unk0); }
	static void AUDIO_MUSIC_RELEASE_CONTROL(int _Unk0, int _Unk1) { Invoke<0xA3A2984E, void>(_Unk0, _Unk1); }
	static int GET_CRIME_POSITION(int _Unk0, int _Unk1) { return Invoke<0x391475E3, int>(_Unk0, _Unk1); }
	static void PLAYER_RUMBLE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x2E0EC2F2, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_CRIPPLED(int _Unk0, int _Unk1) { return Invoke<0x38C5F63F, int>(_Unk0, _Unk1); }
	static void MEMORY_PREFER_WALKING(int _Unk0, int _Unk1) { Invoke<0x2F7B60A4, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_FROM_PERS_CHAR(int _Unk0) { return Invoke<0xE04ED21E, int>(_Unk0); }
	static void REFERENCE_ACTOR(int _Unk0) { Invoke<0xE9AABF2F, void>(_Unk0); }
	static void SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(int _Unk0, int _Unk1) { Invoke<0x2A709F33, void>(_Unk0, _Unk1); }
	static void TASK_FOLLOW_OBJECT_AT_DISTANCE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x75A4E05E, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_GO_NEAR_COORD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x55EC940B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_VEHICLE_LEAVE(int _Unk0) { Invoke<0x6C1218A4, void>(_Unk0); }
	static void TASK_SEARCH(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4E17E039, void>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_NAV_QUERY(int _Unk0, int _Unk1) { return Invoke<0xE2F41226, int>(_Unk0, _Unk1); }
	static void NAV_QUERY_START_CAN_PATH_TO_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x07A777D7, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int NAV_QUERY_IS_DONE(int _Unk0) { return Invoke<0xE96D01E5, int>(_Unk0); }
	static int NAV_QUERY_CAN_PATH_TO_POINT(int _Unk0) { return Invoke<0x5A511344, int>(_Unk0); }
	static int GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(int _Unk0) { return Invoke<0xBCC98808, int>(_Unk0); }
	static void SET_USE_CONTEXT_TEXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x3ECD8FEE, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int IS_PLAYER_CONTROLLABLE(int _Unk0) { return Invoke<0x9613C2D0, int>(_Unk0); }
	static int FIND_NEAREST_DOOR(int _Unk0, int _Unk1) { return Invoke<0x9CB5372B, int>(_Unk0, _Unk1); }
	static int IS_PLAYER_IN_COMBAT(int _Unk0) { return Invoke<0x6576AD43, int>(_Unk0); }
	static int IS_ACTOR_MALE(int _Unk0) { return Invoke<0x2091F142, int>(_Unk0); }
	static void SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x91DE3A31, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GET_CRIME_VICTIM(int _Unk0) { return Invoke<0xD2FD7CB6, int>(_Unk0); }
	static void AUDIO_SET_PLAYER_MOOD(int _Unk0, int _Unk1) { Invoke<0xAF6A3160, void>(_Unk0, _Unk1); }
	static int ACTOR_HOLSTER_WEAPON(int _Unk0, int _Unk1) { return Invoke<0xFE9903CC, int>(_Unk0, _Unk1); }
	static void TELEPORT_ACTOR(Actor _Actor, const Vector3* _Position, bool _UnkFlag0, bool _UnkFlag1, bool _UnkFlag2) { Invoke<0x2D54B916, void>(_Actor, _Position, _UnkFlag0, _UnkFlag1, _UnkFlag2); }
	static void DEREFERENCE_ACTOR(Actor _Actor) { Invoke<0x92339B5E, void>(_Actor); }
	static void NAV_QUERY_STOP(int _Unk0) { Invoke<0x50290FB3, void>(_Unk0); }
	static void AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(int _Unk0, int _Unk1) { Invoke<0x7387772C, void>(_Unk0, _Unk1); }
	static void AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(int _Unk0, int _Unk1) { Invoke<0x7F73E1E8, void>(_Unk0, _Unk1); }
	static int GET_OBJECT_FROM_PERS_CHAR(int _Unk0) { return Invoke<0x35B5587D, int>(_Unk0); }
	static int GRINGO_UPDATE_BOOL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x554330CA, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_CRIME_OBJECTSET(int _Unk0) { return Invoke<0x72C52B55, int>(_Unk0); }
	static int GET_CRIME_END_TIMESTAMP(int _Unk0) { return Invoke<0xD96DBABD, int>(_Unk0); }
	static void SET_ACTOR_HEADING(Actor _Actor, float _Heading, bool _UnkFlag) { Invoke<0xECE8520B, void>(_Actor, _Heading, _UnkFlag); }
	static int GET_ACTOR_FACTION(Actor _Actor) { return Invoke<0x52E2A611, int>(_Actor); }
	static void SET_MOVER_FROZEN(Actor _Actor, bool _Value) { Invoke<0x13E6B5EE, void>(_Actor, _Value); }
	static bool IS_MOVER_FROZEN(Actor _Actor) { return Invoke<0x9C12BD5A, bool>(_Actor); }
	static int GET_CRIME_COUNTER(int _Unk0) { return Invoke<0xB52BA7E6, int>(_Unk0); }
	static void TASK_OVERRIDE_CLEAR_MOVETYPE(int _Unk0) { Invoke<0x9B9C8628, void>(_Unk0); }
	static int CAN_ANYONE_OF_FACTION_SEE_OBJECT(int _Unk0, int _Unk1) { return Invoke<0x656D3D26, int>(_Unk0, _Unk1); }
	static int GET_CRIME_BEGIN_TIMESTAMP(int _Unk0) { return Invoke<0xA2DA4D24, int>(_Unk0); }
	static void ITERATE_IN_VOLUME(int _Unk0, int _Unk1) { Invoke<0x6914D904, void>(_Unk0, _Unk1); }
	static int IS_FACTION_VALID(int _Unk0) { return Invoke<0x5E2F718D, int>(_Unk0); }
	static int AI_GET_TASK_RETREAT_FLAG(int _Unk0) { return Invoke<0x9B742D25, int>(_Unk0); }
	static int GET_ACTOR_VEHICLE_STATE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xCEA2449F, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xDB07C72B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_CAMERASHOT_ASPECT_RATIO(int _Unk0, int _Unk1) { Invoke<0x3DEB0933, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_FAR_CLIP_PLANE(int _Unk0, int _Unk1) { Invoke<0x6BA86494, void>(_Unk0, _Unk1); }
	static void RESET_CAMERASHOT_TARGETDOF(int _Unk0) { Invoke<0x42327DAC, void>(_Unk0); }
	static void ITERATE_IN_VOLUME_SET(int _Unk0, int _Unk1) { Invoke<0x8BCB6B86, void>(_Unk0, _Unk1); }
	static int GET_PERS_CHAR_DEATH_TIMESTAMP(int _Unk0) { return Invoke<0xD78D1B4F, int>(_Unk0); }
	static void RELEASE_PERS_CHAR(int _Unk0) { Invoke<0x19C3CF93, void>(_Unk0); }
	static void SET_FACTIONS_STATUS_TWO_WAY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4C28B11E, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_CAMERA_FROM_GAME_CAMERA(Camera _Camera) { Invoke<0x2615309A, void>(_Camera); }
	static void SET_CAMERA_TARGET_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x298BCCA5, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SET_CAMERA_FOV(Camera _Camera, float _FOV) { Invoke<0x57E3242D, void>(_Camera, _FOV); }
	static int SQUAD_GOAL_ADD_GENERAL_TASK(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x83D78A49, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_USE_LASSO(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xC41AAF49, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void AI_SET_NAV_ACTOR_WIDTH(int _Unk0, int _Unk1) { Invoke<0x8404592D, void>(_Unk0, _Unk1); }
	static void MEMORY_CONSIDER_AS_ENEMY(int _Unk0, int _Unk1) { Invoke<0x745A1BA3, void>(_Unk0, _Unk1); }
	static void TASK_GO_TO_COORD(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x8C574832, void>(_Unk0, _Unk1, _Unk2); }
	static void TASK_FOLLOW_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0xFF3E3DCE, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void TASK_SHOOT_AT_COORD(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x601C22E3, void>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_FIRE_PROPERTY() { return Invoke<0x5402321A, int>(); }
	static int CREATE_FIRE_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0xD4799325, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void TASK_FOLLOW_ACTOR(Actor _Actor, Actor _Target) { Invoke<0x12F0911A, void>(_Actor, _Target); }
	static int IS_ACTOR_MOUNTED(int _Unk0) { return Invoke<0xA3AB3708, int>(_Unk0); }
	static void TASK_DISMOUNT(int _Unk0, int _Unk1) { Invoke<0x5DEF5C4A, void>(_Unk0, _Unk1); }
	static int FIND_INTERSECTION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x9CD3AD70, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void TASK_SHOOT_AT_COORD_FROM_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x7B5FC704, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_ACTOR_RELOADING(int _Unk0) { return Invoke<0x39C518DB, int>(_Unk0); }
	static void TASK_SEEK_COVER_FROM_ACTOR(int _Unk0, int _Unk1) { Invoke<0xE1C8A1B3, void>(_Unk0, _Unk1); }
	static void TASK_DIVE(int _Unk0, int _Unk1) { Invoke<0xECAD08C7, void>(_Unk0, _Unk1); }
	static void AMBIENT_SET_SEARCH_CENTER_ACTOR(int _Unk0) { Invoke<0x9A2B05F4, void>(_Unk0); }
	static int MEMORY_GET_IS_IDENTIFIED(int _Unk0, int _Unk1) { return Invoke<0x0810A7BA, int>(_Unk0, _Unk1); }
	static int GET_PERS_CHAR_FROM_ACTOR(int _Unk0) { return Invoke<0x69DA275F, int>(_Unk0); }
	static int REVIVE_PERS_CHAR(int _Unk0, int _Unk1) { return Invoke<0xEDA4B02B, int>(_Unk0, _Unk1); }
	static int CREATE_PERS_CHAR_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x013B3937, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int CREATE_GRINGO_ON_OBJECT_BY_ID(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x80FB8BDE, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GRINGO_UPDATE_STRUCT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x4DE50AD9, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_BLIP_ICON(int _Unk0) { return Invoke<0xEE4F4B7D, int>(_Unk0); }
	static void CHANGE_BLIP_ICON(int _Unk0, int _Unk1) { Invoke<0xABD125F6, void>(_Unk0, _Unk1); }
	static void SET_BLIP_MIN_DISTANCE(int _Unk0, int _Unk1) { Invoke<0xFBA76D7E, void>(_Unk0, _Unk1); }
	static void SET_BLIP_FLAG(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA9A01C70, void>(_Unk0, _Unk1, _Unk2); }
	static int HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(int _Unk0) { return Invoke<0xE78A0469, int>(_Unk0); }
	static void HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(int _Unk0, int _Unk1) { Invoke<0x02755628, void>(_Unk0, _Unk1); }
	static void HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(int _Unk0) { Invoke<0x5EA2E02D, void>(_Unk0); }
	static int GET_BLIP_IMPAIRMENT_MASK(int _Unk0) { return Invoke<0xD76F1E9A, int>(_Unk0); }
	static void SET_BLIP_IMPAIRMENT_MASK(int _Unk0, int _Unk1) { Invoke<0xBC05EBB3, void>(_Unk0, _Unk1); }
	static void TASK_DRAW_HOLSTER_WEAPON(int _Unk0, int _Unk1) { Invoke<0xDB5F6B35, void>(_Unk0, _Unk1); }
	static void MEMORY_ATTACK_ON_SIGHT(int _Unk0, int _Unk1) { Invoke<0x5A83A1EA, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_FACTION(Actor _Actor, int _FactionId) { Invoke<0xCC63951A, void>(_Actor, _FactionId); }
	static void SET_ACTOR_CAN_PLAY_BORED_IDLES(int _Unk0, int _Unk1) { Invoke<0x0B5E1904, void>(_Unk0, _Unk1); }
	static int ACTOR_RESET_ANIMS(int _Unk0, int _Unk1) { return Invoke<0x35D8B4AA, int>(_Unk0, _Unk1); }
	static void PLAY_SOUND_FRONTEND(const char* SoundName) { Invoke<0x2E458F74, void>(SoundName); }
	static void SET_ACTOR_CAN_BUMP(int _Unk0, int _Unk1) { Invoke<0xB9744BE7, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_ALLOW_BUMP_REACTIONS(int _Unk0, int _Unk1) { Invoke<0xC52B5F18, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(int _Unk0, int _Unk1) { Invoke<0xEB7B0FAA, void>(_Unk0, _Unk1); }
	static void PRINT_BIG_FORMAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0xBCB8D17F, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GRINGO_GET_USE_COMPONENT_POSITION_EXT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xCE210220, int>(_Unk0, _Unk1, _Unk2); }
	static float GET_OBJECT_HEADING(Object _Object) { return Invoke<0x1C02D2F8, float>(_Object); }
	static int IS_ACTION_NODE_PLAYING(int _Unk0, int _Unk1) { return Invoke<0x7B19DEC6, int>(_Unk0, _Unk1); }
	static int ATTACH_SLOT_FROM_STRING(int _Unk0) { return Invoke<0x4A61BD63, int>(_Unk0); }
	static int ATTACH_PROP_TO_ANIM(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x0436C0BF, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int _Unk0) { Invoke<0xCF50D509, void>(_Unk0); }
	static void ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int _Unk0) { Invoke<0xD1C09A22, void>(_Unk0); }
	static void CLEAR_AMBIENT_OBJECTS_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xC9365FBC, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x94B288F9, int>(_Unk0, _Unk1, _Unk2); }
	static void RESET_CAMERASHOT_TARGET(int _Unk0, int _Unk1) { Invoke<0xC3DDCE4D, void>(_Unk0, _Unk1); }
	static void TOGGLE_ACTOR_ACTION_SIGNAL_ON(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x415F9BC3, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_IN_HOGTIE(int _Unk0) { return Invoke<0xB24ADC7C, int>(_Unk0); }
	static void ABORT_HUD_MAP_SCALE_OVERRIDE() { Invoke<0x33CE49C9, void>(); }
	static void TOGGLE_ACTOR_ACTION_SIGNAL_OFF(int _Unk0) { Invoke<0x4F605632, void>(_Unk0); }
	static void DESTROY_POPULATION_SET(int _Unk0) { Invoke<0xD064878D, void>(_Unk0); }
	static void SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(int _Unk0) { Invoke<0x95D0FC79, void>(_Unk0); }
	static int IS_ACTOR_HORSE(int _Unk0) { return Invoke<0xDB0D0478, int>(_Unk0); }
	static int SET_ACTOR_VISION_XRAY(int _Unk0, int _Unk1) { return Invoke<0x8D5175A8, int>(_Unk0, _Unk1); }
	static void TASK_FLEE_ACTORSET(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0xCD5E23C3, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SET_BLIP_POS(Blip _Blip, Vector3 _Position) { Invoke<0xB2EAF8DD, void>(_Blip, _Position); }
	static int SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(int _Unk0) { return Invoke<0x55DAC120, int>(_Unk0); }
	static void ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBE39208A, void>(_Unk0, _Unk1, _Unk2); }
	static void TASK_OVERRIDE_SET_MOVETYPE(int _Unk0, int _Unk1) { Invoke<0x172477F0, void>(_Unk0, _Unk1); }
	static void SQUAD_GOALS_CLEAR(int _Unk0) { Invoke<0xCA950EF0, void>(_Unk0); }
	static void TASK_GO_TO_COORD_NONSTOP(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD62D6CE5, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_GOAL_ADD_SHARE_PERCEPTION(int _Unk0, int _Unk1) { return Invoke<0x435A982F, int>(_Unk0, _Unk1); }
	static int SQUAD_GOAL_ADD_COMBAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x4DD06256, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xE775EF0D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void TASK_GO_NEAR_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x3EB7590C, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_SEARCH_FOR_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD9B57910, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1B74CCA1, int>(_Unk0, _Unk1, _Unk2); }
	static void TASK_GO_TO_COORD_AND_STAY(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x8636587A, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_IS_GOAL_CONTROLLING_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x817AC6D6, int>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_GOAL_ADD_MEET_AT_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA2AE53BD, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int SET_LINKED_ANIM_TARGET(int _Unk0, int _Unk1) { return Invoke<0x0A192D09, int>(_Unk0, _Unk1); }
	static void TASK_ACTION_PERFORM(int _Unk0, int _Unk1) { Invoke<0xE32F09B3, void>(_Unk0, _Unk1); }
	static void AUDIO_STOP_PAIN(int _Unk0) { Invoke<0x462B3A65, void>(_Unk0); }
	static void SAY_SINGLE_LINE_STRING_OVER_PAIN(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x12D077CA, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void _HUD_WANTED_METER(int _Unk0) { Invoke<0x31A55281, void>(_Unk0); }
	static void _HUD_WANTED_CRIME(int _Unk0) { Invoke<0x651C1FC2, void>(_Unk0); }
	static void UI_SET_STYLE(int _Unk0, int _Unk1) { Invoke<0x1ECD8B18, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_OFFSET_WORLD_COORDS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB7CE8FCC, int>(_Unk0, _Unk1, _Unk2); }
	static int COS_DEGREE(int _Unk0) { return Invoke<0x430207A4, int>(_Unk0); }
	static int SIN_DEGREE(int _Unk0) { return Invoke<0x55842354, int>(_Unk0); }
	static int CREATE_FORMATION_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x91C6AC0E, int>(_Unk0, _Unk1, _Unk2); }
	static int ADD_FORMATION_LOCATION(int _Unk0, int _Unk1) { return Invoke<0xFBB1BCDF, int>(_Unk0, _Unk1); }
	static int IS_SLOT_VALID(int SlotID) { return Invoke<0xD04480FE, int>(SlotID); }
	static void MEMORY_REPORT_POSITION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x052CC7CE, void>(_Unk0, _Unk1, _Unk2); }
	static int GET_LASSO_TARGET(int _Unk0) { return Invoke<0xAA364907, int>(_Unk0); }
	static int GET_LAST_ATTACK_TIME(int _Unk0) { return Invoke<0x69FA5315, int>(_Unk0); }
	static int MEMORY_GET_POSITION_LAST_KNOWN_TIME(int _Unk0, int _Unk1) { return Invoke<0x7E77DD6C, int>(_Unk0, _Unk1); }
	static void AI_CLEAR_NAV_MATERIAL_USAGE(int _Unk0) { Invoke<0x6ADF2927, void>(_Unk0); }
	static void AI_CLEAR_FIRE_DELAY(int _Unk0) { Invoke<0xD6886191, void>(_Unk0); }
	static void AI_CLEAR_FIRE_DELAY_RANDOMNESS(int _Unk0) { Invoke<0xE8511960, void>(_Unk0); }
	static void AI_CLEAR_BURST_DURATION(int _Unk0) { Invoke<0x01FD4402, void>(_Unk0); }
	static void AI_CLEAR_BURST_DURATION_RANDOMNESS(int _Unk0) { Invoke<0xCA8EE2A4, void>(_Unk0); }
	static void AI_CLEAR_SHOTS_PER_BURST(int _Unk0) { Invoke<0x58A7B2A1, void>(_Unk0); }
	static void COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC30DB881, void>(_Unk0, _Unk1, _Unk2); }
	static Object GET_EVENT_FROM_OBJECT(Object _Unk0) { return Invoke<0x184BD1BC, Object>(_Unk0); }
	static int GET_EVENT_TARGET_AS_OBJECT(int _Unk0) { return Invoke<0xE2ED95CC, int>(_Unk0); }
	static int IS_OBJECT_IN_VOLUME(int _Unk0, int _Unk1) { return Invoke<0x2ECF04F3, int>(_Unk0, _Unk1); }
	static int IS_ACTOR_PERFORMING_LINKED_ANIMATION(int _Unk0) { return Invoke<0xCA9364C5, int>(_Unk0); }
	static int GET_ACTOR_VISION_XRAY(int _Unk0) { return Invoke<0xBFABD82E, int>(_Unk0); }
	static int IS_PLAYER_USING_COVER(int _Unk0) { return Invoke<0x724A2931, int>(_Unk0); }
	static int IS_ACTOR_BEING_DRAGGED(int _Unk0, int _Unk1) { return Invoke<0x5B792331, int>(_Unk0, _Unk1); }
	static bool IS_ACTOR_CROUCHING(Actor _Actor) { return Invoke<0xF6BF4242, bool>(_Actor); }
	static bool FIRE_IS_ACTOR_ON_FIRE(Actor _Actor) { return Invoke<0x30C4CA99, bool>(_Actor); }
	static int GET_LASSO_USER(int _Unk0) { return Invoke<0x3B775037, int>(_Unk0); }
	static void NET_ACTOR_SET_SCRIPT_INT(int _Unk0, int _Unk1) { Invoke<0xA6D794FE, void>(_Unk0, _Unk1); }
	static void NET_ACTOR_SET_ALLOW_BLIP_SYNC(int _Unk0, int _Unk1) { Invoke<0xC09B114B, void>(_Unk0, _Unk1); }
	static void AI_BEHAVIOR_SET_ALLOW(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4A69F264, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_TOUGH_ACTOR(Actor _Actor, bool _Value) { Invoke<0x2A575132, void>(_Actor, _Value); }
	static void AI_SET_RANGE_ACCURACY_MODIFIER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x57F96655, void>(_Unk0, _Unk1, _Unk2); }
	static int SET_ACTOR_VISION_MAX_RANGE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x4E3E9B70, int>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_VISION_FIELD_OF_VIEW(Actor _Actor, int _Value) { Invoke<0xF8F3FE84, void>(_Actor, _Value); }
	static void MEMORY_PREFER_MELEE(int _Unk0, int _Unk1) { Invoke<0x2F929ECD, void>(_Unk0, _Unk1); }
	static void AI_SET_SHOTS_PER_BURST(int _Unk0, int _Unk1) { Invoke<0xE0172E2D, void>(_Unk0, _Unk1); }
	static void AI_SET_BURST_DURATION(int _Unk0, int _Unk1) { Invoke<0x85F2DF87, void>(_Unk0, _Unk1); }
	static void AI_SET_BURST_DURATION_RANDOMNESS(int _Unk0, int _Unk1) { Invoke<0x9E164C44, void>(_Unk0, _Unk1); }
	static void AI_SET_FIRE_DELAY(int _Unk0, int _Unk1) { Invoke<0x05861CF4, void>(_Unk0, _Unk1); }
	static void AI_SET_FIRE_DELAY_RANDOMNESS(int _Unk0, int _Unk1) { Invoke<0xC5873149, void>(_Unk0, _Unk1); }
	static void ACTOR_ENABLE_VARIABLE_MESH(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xDA2F6203, void>(_Unk0, _Unk1, _Unk2); }
	static void COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(int _Unk0) { Invoke<0x13FA7128, void>(_Unk0); }
	static void COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6389CF4B, void>(_Unk0, _Unk1, _Unk2); }
	static void COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE20587E7, void>(_Unk0, _Unk1, _Unk2); }
	static void COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(int _Unk0, int _Unk1) { Invoke<0x1EF0E419, void>(_Unk0, _Unk1); }
	static void COMBAT_CLASS_AI_SET_RANGE_ACCURACY(int _Unk0, int _Unk1) { Invoke<0x60B705A5, void>(_Unk0, _Unk1); }
	static void TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(int _Unk0, int _Unk1) { Invoke<0xB3F5EE8C, void>(_Unk0, _Unk1); }
	static void TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(int _Unk0, int _Unk1) { Invoke<0xDCB9C943, void>(_Unk0, _Unk1); }
	static void AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(int _Unk0, int _Unk1) { Invoke<0x66064774, void>(_Unk0, _Unk1); }
	static void AI_PERCEPTION_SET_VISUAL_ID_TIME(int _Unk0, int _Unk1) { Invoke<0xD786E8C7, void>(_Unk0, _Unk1); }
	static void TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x11542587, void>(_Unk0, _Unk1, _Unk2); }
	static bool IS_ACTOR_PLAYER(Actor _Actor) { return Invoke<0xB27E91E7, bool>(_Actor); }
	static void AI_PREDICATE_OVERRIDE_CLEAR_ALL(int _Unk0) { Invoke<0x3CAC2441, void>(_Unk0); }
	static void AI_PREDICATE_OVERRIDE_SET_BOOL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1117C85A, void>(_Unk0, _Unk1, _Unk2); }
	static void SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(int _Unk0, int _Unk1) { Invoke<0xE7D45FB3, void>(_Unk0, _Unk1); }
	static void SQUAD_SET_FACTION(int _Unk0, int _Unk1) { Invoke<0xAEA4E9AE, void>(_Unk0, _Unk1); }
	static int GET_LAST_ON_SCREEN_TIME_FOR_ACTOR(int _Unk0) { return Invoke<0x2B8C3258, int>(_Unk0); }
	static int GET_LOCAL_SLOT() { return Invoke<0xAD68A22E, int>(); }
	static int GET_MAX_NUM_OBJECTS_OF_TYPE(int _Unk0) { return Invoke<0xA2866F3B, int>(_Unk0); }
	static int GET_NUM_OBJECTS_OF_TYPE(int _Unk0) { return Invoke<0xADB08F12, int>(_Unk0); }
	static int GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(int _Unk0, int _Unk1) { return Invoke<0xB4D1D8A3, int>(_Unk0, _Unk1); }
	static int GET_CURVE_NAME(int _Unk0) { return Invoke<0x9A933060, int>(_Unk0); }
	static void AMBIENT_RESET_USED_CELLS() { Invoke<0x7B07D449, void>(); }
	static int CREATE_POPULATION_SET_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x0B40BBE3, int>(_Unk0, _Unk1, _Unk2); }
	static Actor GET_SLOT_ACTOR(int _SlotId) { return Invoke<0xDB9B49D8, Actor>(_SlotId); }
	static int NET_ACTOR_GET_SCRIPT_INT(int _Unk0) { return Invoke<0x579C2014, int>(_Unk0); }
	static void _0xA6403262(int _Unk0, int _Unk1) { Invoke<0xA6403262, void>(_Unk0, _Unk1); }
	static void UI_ENTER(const char* uiLayer) { Invoke<0x594F2657, void>(uiLayer); }
	static void TASK_SHOOT_FROM_POSITION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x326316DC, void>(_Unk0, _Unk1, _Unk2); }
	static void _0xEF270DC9() { Invoke<0xEF270DC9, void>(); }
	static void MEMORY_EVERYBODY_FORGET_ABOUT_EVERYTHING() { Invoke<0xD1628C57, void>(); }
	static void DEEQUIP_ACCESSORY(int _Unk0, int _Unk1) { Invoke<0xF7696B8B, void>(_Unk0, _Unk1); }
	static int _0xE094DB31(int _Unk0, int _Unk1) { return Invoke<0xE094DB31, int>(_Unk0, _Unk1); }
	static void CLEAR_AMBIENT_OBJECTS_VOLUME(int _Unk0, int _Unk1) { Invoke<0xBB77E597, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_TO_SEAT(int _Unk0, int _Unk1) { Invoke<0xF349D0B6, void>(_Unk0, _Unk1); }
	static void CLOSE_DOOR_FAST(int _Unk0) { Invoke<0xFEEC0767, void>(_Unk0); }
	static void ACTOR_DISABLE_WEAPON_RENDER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x5E38B33C, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_PERS_CHAR_ENABLED(int _Unk0, int _Unk1) { Invoke<0xC85CFEA9, void>(_Unk0, _Unk1); }
	static void SET_DAY(int _Unk0) { Invoke<0x0EBBDC34, void>(_Unk0); }
	static void TELEPORT_ACTOR_WITH_HEADING(Actor _Actor, Vector3* _Position, float _Heading, bool _UnkFlag0, bool _UnkFlag1, bool _UnkFlag2) { Invoke<0xE4DE507C, void>(_Actor, _Position, _Heading, _UnkFlag0, _UnkFlag1, _UnkFlag2); }
	static bool SET_OBJECT_ORIENTATION(Object _Object, Vector2 _OrientationXY, float _OrientationZ) { return Invoke<0xC8A4EE74, bool>(_Object, _OrientationXY, _OrientationZ); }
	static void OPEN_DOOR_FAST(int _Unk0, int _Unk1) { Invoke<0xCF89BC95, void>(_Unk0, _Unk1); }
	static int GET_ART_GRINGO_LAYOUT() { return Invoke<0x76FBF412, int>(); }
	static void _SET_ACTOR_MAX_AMMO_AMOUNT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6ADAAD87, void>(_Unk0, _Unk1, _Unk2); }
	static void RESET_PROPS_IN_WORLD() { Invoke<0xB3E331AC, void>(); }
	static void DESTROY_AMBIENT_ACTORS_IF_POSSIBLE() { Invoke<0xB09D5B43, void>(); }
	static void CLEAR_ALL_CORPSES() { Invoke<0x9028B082, void>(); }
	static void CLEAR_DECALS() { Invoke<0x43939FD8, void>(); }
	static void DESTROY_IMPAIRED_ACTORS() { Invoke<0x2CB5D7AF, void>(); }
	static int IS_ACTORSET_VALID(int _Unk0) { return Invoke<0x76E8975E, int>(_Unk0); }
	static int GET_ACTORSET_SIZE(int _Unk0) { return Invoke<0xA24F4799, int>(_Unk0); }
	static int GET_ACTOR_FROM_ACTORSET(int _Unk0, int _Unk1) { return Invoke<0xC5202810, int>(_Unk0, _Unk1); }
	static int GET_SLOT_POSITION(int _Unk0, Vector3* out) { return Invoke<0x3241158C, int>(_Unk0, *out); }
	static int GET_ACTOR_INCAPACITATED(int _Unk0) { return Invoke<0xEE4E2461, int>(_Unk0); }
	static void EVENT_TRAP_CLEAR_TRAP_FLAG(int _Unk0) { Invoke<0xAA24E0CC, void>(_Unk0); }
	static void EVENT_TRAP_CLEAR_EVENTS(int _Unk0) { Invoke<0xDE9AA6E5, void>(_Unk0); }
	static int EVENT_TRAP_SUCCESSFUL_TRAP(int _Unk0) { return Invoke<0x54F8EAA4, int>(_Unk0); }
	static void ITERATE_IN_EVENT_TRAP(int _Unk0, int _Unk1) { Invoke<0x0D8BA78E, void>(_Unk0, _Unk1); }
	static int GET_EVENT_PERPETRATOR(int _Unk0) { return Invoke<0x0B5431C9, int>(_Unk0); }
	static int IS_ACTOR_IN_ACTORSET(int _Unk0, int _Unk1) { return Invoke<0xC6FE68DF, int>(_Unk0, _Unk1); }
	static int ADD_ACTORSET_MEMBER(int _Unk0, int _Unk1) { return Invoke<0xE09DB6C1, int>(_Unk0, _Unk1); }
	static bool IS_ACTOR_RIDEABLE(Actor _Actor) { return Invoke<0x8842C62D, bool>(_Actor); }
	static int NEW_SCRIPTED_CONVERSATION() { return Invoke<0x1CEA7FCE, int>(); }
	static void ADD_LINE_TO_CONVERSATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x96CD0513, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(int _Unk0, int _Unk1) { Invoke<0x4FAD0D8F, void>(_Unk0, _Unk1); }
	static void START_SCRIPT_CONVERSATION(int _Unk0, int _Unk1) { Invoke<0xE5DE7D9D, void>(_Unk0, _Unk1); }
	static int NET_SCRIPTMSG_SEND(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x5E985228, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void PRINT_BIG(const char* _Message, float _Time, bool _IsLiteral, int _Unk0, int _Unk1) { Invoke<0x637016C9, void>(_Message, _Time, _IsLiteral, _Unk0, _Unk1); }
	static void PRINT_SMALL_B(const char* _Message, float _Time, bool _IsLiteral, int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4A38C60, void>(_Message, _Time, _IsLiteral, _Unk0, _Unk1, _Unk2, _Unk3); }
	static int NET_SCRIPTMSG_ISPENDING(int _Unk0, int _Unk1) { return Invoke<0xE2163ECC, int>(_Unk0, _Unk1); }
	static int NET_SCRIPTMSG_QUERY_HANDLER(int _Unk0, int _Unk1) { return Invoke<0x4957E482, int>(_Unk0, _Unk1); }
	static int NET_SCRIPTMSG_GETNEXT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB13DD691, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_ACTORSET_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x009DFC82, int>(_Unk0, _Unk1, _Unk2); }
	static int NET_SCRIPTMSG_REGISTER_HANDLER(int _Unk0, int _Unk1) { return Invoke<0x9253CC79, int>(_Unk0, _Unk1); }
	static void NET_TICKER_REPORTF(const char* _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0xC73DAD2B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void IS_HORSES_RELATIVE(int _Unk0, int _Unk1) { Invoke<0x4A2E7533, void>(_Unk0, _Unk1); }
	static int STREAMING_IS_WORLD_LOADED_PRIORITY(int _Unk0) { return Invoke<0x943BE053, int>(_Unk0); }
	static int IS_LATER_THAN(int _Unk0, int _Unk1) { return Invoke<0x2DB3AC0F, int>(_Unk0, _Unk1); }
	static void STREAMING_LOAD_BOUNDS(float x, float y, float z, float unk, int _Unk4) { Invoke<0x0F8FC4D0, void>(x, y, z, unk, _Unk4); }
	static void SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(int _Unk0) { Invoke<0x2CCEA76C, void>(_Unk0); }
	static void SET_POP_DENSITY_MULTIPLIER(float _Multiplier) { Invoke<0xE9C41DFE, void>(_Multiplier); }
	static void RESET_FACTIONS() { Invoke<0x28413943, void>(); }
	static void HUD_COUNTER_DISPLAY(int _Unk0) { Invoke<0x9A35DFC6, void>(_Unk0); }
	static void HUD_TIMER_DISPLAY(int _Unk0) { Invoke<0x149F9E46, void>(_Unk0); }
	static void SET_ACTOR_MIN_SPEED(int _Unk0, int _Unk1) { Invoke<0xA854EE99, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_RIDEABLE(Actor Actor, bool Rideable) { Invoke<0x19F3CB6B, void>(Actor, Rideable); }
	static void TASK_FOLLOW_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x973DCC5B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void TASK_SEQUENCE_PERFORM_REPEATEDLY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA7A50E4D, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_ACTOR_SET_DOMESTICATION(Actor _Actor, bool _Domestication) { Invoke<0x58C36502, void>(_Actor, _Domestication); }
	static void ANIMAL_TUNING_SET_ATTRIB_BOOL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x11150810, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(int _Unk0) { return Invoke<0x9A4CD54B, int>(_Unk0); }
	static void AUDIO_MUSIC_SET_MOOD(const char* Mood, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x633B8905, void>(Mood, _Unk1, _Unk2, _Unk3); }
	static int IS_WEAPON_DRAWN(int _Unk0) { return Invoke<0xAB5FB5AC, int>(_Unk0); }
	static int ACTOR_HAS_WEAPON_IN_HAND(int _Unk0, int _Unk1) { return Invoke<0x09950C1B, int>(_Unk0, _Unk1); }
	static void OPEN_DOOR_DIRECTION(int _Unk0, int _Unk1) { Invoke<0xAACB4435, void>(_Unk0, _Unk1); }
	static int IS_CAMERA_ACTIVE_ON_CHANNEL(int _Unk0, int _Unk1) { return Invoke<0x02BD5362, int>(_Unk0, _Unk1); }
	static void TASK_FACE_COORD(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x31B598FB, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_SCRIPTED_SPEECH_PLAYING(int _Unk0) { return Invoke<0x2C653904, int>(_Unk0); }
	static int GATEWAY_GET_ACTOR(int _Unk0) { return Invoke<0x820699A8, int>(_Unk0); }
	static void SIMULATE_PLAYER_INPUT_GAIT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x0D77CC34, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int _0xB89CC342(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB89CC342, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_GATEWAY_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x4251BF6C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int IS_AI_ACTOR_IN_COMBAT(int _Unk0) { return Invoke<0x08D3CDF9, int>(_Unk0); }
	static int IS_WORLD_SECTOR_LOADED(int _Unk0) { return Invoke<0xBF81A6C4, int>(_Unk0); }
	static int GET_WORLD_SECTOR_CHILD_OBJECT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xA5F229C9, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_DOOR_FROM_OBJECT(int _Unk0) { return Invoke<0x9CE0AA24, int>(_Unk0); }
	static int CREATE_PATH_IN_LAYOUT_FROM_TABLE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB6709FF4, int>(_Unk0, _Unk1, _Unk2); }
	static int FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS() { return Invoke<0x5831679F, int>(); }
	static void STREAMING_EVICT_ALL() { Invoke<0x7D432781, void>(); }
	static void SET_ALLOW_RIDE_BY_PLAYER(Actor _Actor, bool _Ride) { Invoke<0xCF1A1BC5, void>(_Actor, _Ride); }
	static void SET_ALLOW_RIDE(Actor _Actor, bool _Ride) { Invoke<0xF83A8D2B, void>(_Actor, _Ride); }
	static void SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(int _Unk0) { Invoke<0x135EA21D, void>(_Unk0); }
	static void SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(int _Unk0, int _Unk1) { Invoke<0x05CFE1E9, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(int _Unk0, int _Unk1) { Invoke<0xFFDA2D88, void>(_Unk0, _Unk1); }
	static void DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(int _Unk0) { Invoke<0x6F8C238B, void>(_Unk0); }
	static void TASK_GO_TO_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x01BACD08, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int CREATE_CAMERA_FOCUS_POINT_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x76876FEA, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SET_CAMERA_FOCUS_PROMPT_ENABLED(int _Unk0, int _Unk1) { Invoke<0x2148298D, void>(_Unk0, _Unk1); }
	static void TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(int _Unk0, int _Unk1) { Invoke<0xCE843315, void>(_Unk0, _Unk1); }
	static void MEMORY_EVERYBODY_FORGET_ABOUT(int _Unk0) { Invoke<0x7EDD316C, void>(_Unk0); }
	static int GET_ACTORS_HORSE(int _Unk0) { return Invoke<0x8DDE894F, int>(_Unk0); }
	static void ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x699332B0, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void PLAY_SOUND_FROM_POSITION(const char* SoundName, Vector3 Position) { Invoke<0x05BC72D7, void>(SoundName, Position); }
	static void AUDIO_PLAY_VOCAL_EFFECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC9D3A484, void>(_Unk0, _Unk1, _Unk2); }
	static int PLAY_SOUND_FROM_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x628832AD, int>(_Unk0, _Unk1, _Unk2); }
	static void OPEN_DOOR_DIRECTION_FAST(int _Unk0, int _Unk1) { Invoke<0xBA51D02E, void>(_Unk0, _Unk1); }
	static bool GET_OBJECT_AXIS(Object _Object, Vector3* _Axis) { return Invoke<0xCE412E46, bool>(_Object, _Axis); }
	static int CREATE_LEASH_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12, int _Unk13, int _Unk14) { return Invoke<0x9BCC06E2, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12, _Unk13, _Unk14); }
	static int LEASH_ATTACH_TO_OBJECT_BONE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11) { return Invoke<0x82A73B3D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11); }
	static void TASK_ANIMAL_CIRCLE_AGGRESSIVELY(int _Unk0, int _Unk1) { Invoke<0xEACE773D, void>(_Unk0, _Unk1); }
	static int LEASH_DETACH_OBJECT(int _Unk0, int _Unk1) { return Invoke<0x951B8DF7, int>(_Unk0, _Unk1); }
	static bool IS_PLAYER_TARGETTING_ACTOR(Player _Player, Actor _Target, bool _Unk2) { return Invoke<0x87DDCA96, bool>(_Player, _Target, _Unk2); }
	static void TASK_FLEE_COORD(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x826D3459, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static bool AI_STOP_IGNORING_ACTOR(Actor _Actor) { return Invoke<0x98790639, bool>(_Actor); }
	static void TASK_CROUCH(Actor _Actor, float _Durability) { Invoke<0x616C803C, void>(_Actor, _Durability); }
	static int GET_OBJECT_FROM_SQUAD(int _Unk0) { return Invoke<0xEDA897FA, int>(_Unk0); }
	static void MEMORY_CONSIDER_ACCORDING_TO_FACTION(int _Unk0, int _Unk1) { Invoke<0xACD4084D, void>(_Unk0, _Unk1); }
	static int DESTROY_ACTORSET(int _Unk0) { return Invoke<0x147A0BEE, int>(_Unk0); }
	static void SET_MOTIVE_BY_ENUM(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1BED8493, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(int _Unk0, int _Unk1) { Invoke<0x18BA1216, void>(_Unk0, _Unk1); }
	static void CLEAR_LAST_ATTACK(int _Unk0) { Invoke<0x68D4A021, void>(_Unk0); }
	static void SET_ALLOW_EXECUTE(int _Unk0, int _Unk1) { Invoke<0x5896817B, void>(_Unk0, _Unk1); }
	static void SET_ALLOW_COLD_WEATHER_BREATH(int _Unk0, int _Unk1) { Invoke<0xA4677DD2, void>(_Unk0, _Unk1); }
	static void ANIMAL_TUNING_SET_ATTRIB_FLOAT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE36EA080, void>(_Unk0, _Unk1, _Unk2); }
	static void ADD_PLAYER_CONTROL_HORSE_FOLLOW(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x900165CE, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int SET_ACTOR_USE_COARSE_BOUNDS(int _Unk0, int _Unk1) { return Invoke<0x63925367, int>(_Unk0, _Unk1); }
	static void SET_CRIPPLE_ENABLE(int _Unk0, int _Unk1) { Invoke<0x3AD31762, void>(_Unk0, _Unk1); }
	static bool GET_OBJECT_NAMED_BONE_POSITION(Object _Object, const char* _BoneName, Vector3* _Position) { return Invoke<0x30516389, bool>(_Object, _BoneName, _Position); }
	static void TASK_GO_TO_COORD_PRECISELY(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x6BDB3257, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int LOCATE_NAMED_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA36ED4A6, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(int _Unk0) { Invoke<0x1CE58D42, void>(_Unk0); }
	static void AI_SET_NAV_ACTOR_AVOIDANCE_MODE(int _Unk0, int _Unk1) { Invoke<0x5B483036, void>(_Unk0, _Unk1); }
	static int PLAY_WALLA_SOUND_FROM_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x4634B6BE, int>(_Unk0, _Unk1, _Unk2); }
	static void STOP_SOUND(int _Unk0) { Invoke<0xCD7F4030, void>(_Unk0); }
	static void TASK_TAUNT_ACTOR_IN_PLACE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x030FB1FA, void>(_Unk0, _Unk1, _Unk2); }
	static void TASK_HIDE_AT_COVER(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xAB8B96A5, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int REMOVE_ACTORSET_MEMBER(int _Unk0, int _Unk1) { return Invoke<0xD637E449, int>(_Unk0, _Unk1); }
	static void SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6118212B, void>(_Unk0, _Unk1, _Unk2); }
	static void RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(int _Unk0, int _Unk1) { Invoke<0xF9C5DC76, void>(_Unk0, _Unk1); }
	static void FEED_CODE_WARP_DIST(int _Unk0) { Invoke<0xDE0E96F3, void>(_Unk0); }
	static void ADVANCE_TIME_HOURS(int _Unk0) { Invoke<0xD4FECCBC, void>(_Unk0); }
	static void CLEAR_ACTORS_HORSE(int _Unk0) { Invoke<0xFEB74094, void>(_Unk0); }
	static void DELETE_ALL_ACCESSORIES_FROM_ACTOR(Actor _Actor) { Invoke<0x96AC812B, void>(_Actor); }
	static int IS_ACTOR_MULE(int _Unk0) { return Invoke<0x1F739295, int>(_Unk0); }
	static void SET_ACTORS_HORSE(int _Unk0, int _Unk1) { Invoke<0xCFFDF09D, void>(_Unk0, _Unk1); }
	static int FIND_TRAFFIC_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA5BDC21D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void GET_CURVE_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x1CDF1EC4, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x39DA0B3A, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int ADD_SCRIPT_USE_CONTEXT_STICK(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xF48F8F09, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int IS_SWITCH_CAMERA_BUTTON_ENABLED() { return Invoke<0xAE168124, int>(); }
	static void SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(int _Unk0, int _Unk1) { Invoke<0x32CB0E86, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(int _Unk0, int _Unk1) { Invoke<0x7A746D3A, void>(_Unk0, _Unk1); }
	static void SET_SWITCH_CAMERA_BUTTON_ENABLED(int _Unk0) { Invoke<0x9F1F8669, void>(_Unk0); }
	static void FORCE_VEHICLE_CINEMATIC_CAMERA(int _Unk0) { Invoke<0x09737AF7, void>(_Unk0); }
	static void SATCHEL_SET_ENABLED(int _Unk0) { Invoke<0x2692B771, void>(_Unk0); }
	static int GET_VEHICLE_WHEEL_COUNT_INITIAL(int _Unk0) { return Invoke<0x71A3F193, int>(_Unk0); }
	static int GET_VEHICLE_WHEEL_COUNT_CURRENT(int _Unk0) { return Invoke<0xFB252BA9, int>(_Unk0); }
	static void AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(int _Unk0, int _Unk1) { Invoke<0xFCB31704, void>(_Unk0, _Unk1); }
	static int CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x49D2C1DA, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_GOAL_GET_STATUS(int _Unk0, int _Unk1) { return Invoke<0xC6AF3662, int>(_Unk0, _Unk1); }
	static void REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(int _Unk0, int _Unk1) { Invoke<0x4F8FAF8F, void>(_Unk0, _Unk1); }
	static void _0x04D89A35(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x04D89A35, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_CURVE_TYPE(int _Unk0) { return Invoke<0xE1007398, int>(_Unk0); }
	static int SQUAD_GOAL_IS_VALID(int _Unk0) { return Invoke<0xFAD7A113, int>(_Unk0); }
	static int SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xE77B9FC0, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x7FEE2B3C, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x8C8EEEF2, void>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xA4BC2A1B, int>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x8DC095B0, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x041C0802, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_DAMAGE_BY_LOCAL_PLAYER(int _Unk0) { return Invoke<0x8C221B4D, int>(_Unk0); }
	static int AI_GET_IS_RETREATING(int _Unk0) { return Invoke<0x2FABB559, int>(_Unk0); }
	static void REMOVE_OBJECT_ATTACHMENT(int _Unk0) { Invoke<0xE894DC13, void>(_Unk0); }
	static void DEREFERENCE_OBJECT(int _Unk0) { Invoke<0xCEA40973, void>(_Unk0); }
	static int DISBAND_ACTORSET(int _Unk0) { return Invoke<0x2739F04D, int>(_Unk0); }
	static int LOCATE_GRINGOS_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0F701FF7, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_GRINGO_READY(int _Unk0) { return Invoke<0xB9BFCB41, int>(_Unk0); }
	static void FIRE_STOP_ON_ACTOR(Actor _Actor) { Invoke<0xF635B9EA, void>(_Actor); }
	static void CLEAR_ACTOR_MIN_SPEED(int _Unk0) { Invoke<0x036D75D5, void>(_Unk0); }
	static void AI_SET_NAV_PATHFINDING_ENABLED(int _Unk0, int _Unk1) { Invoke<0x4495F5FC, void>(_Unk0, _Unk1); }
	static int IS_CUTSCENEOBJECT_PAUSED(int _Unk0) { return Invoke<0xD5C66699, int>(_Unk0); }
	static void ACTOR_DISMOUNT_NOW(int _Unk0) { Invoke<0x0666B436, void>(_Unk0); }
	static int ROTATE_OBJECT_AROUND_AXIS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x3C45D66A, int>(_Unk0, _Unk1, _Unk2); }
	static void REMOVE_OBJECT_FROM_ATTACHMENT(int _Unk0) { Invoke<0x67FC68DB, void>(_Unk0); }
	static void DELETE_ACCESSORY(int _Unk0, int _Unk1) { Invoke<0xD6A9C9D4, void>(_Unk0, _Unk1); }
	static void _0x2E84E682(int _Unk0, int _Unk1) { Invoke<0x2E84E682, void>(_Unk0, _Unk1); }
	static void AI_GOAL_AIM_AT_OBJECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x3CD232B2, void>(_Unk0, _Unk1, _Unk2); }
	static void OPEN_DOOR(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x30503E81, void>(_Unk0, _Unk1, _Unk2); }
	static int CLEAR_LINKED_ANIM_TARGET(int _Unk0) { return Invoke<0xAC54E120, int>(_Unk0); }
	static void SET_CRIPPLE_FLAG(int _Unk0, int _Unk1) { Invoke<0x0A9A99DF, void>(_Unk0, _Unk1); }
	static int GET_MOST_RECENT_MOUNT(int _Unk0) { return Invoke<0x708E450F, int>(_Unk0); }
	static int GRINGO_GET_USE_COMPONENT_HEADING_EXT(int _Unk0, int _Unk1) { return Invoke<0xD14515A3, int>(_Unk0, _Unk1); }
	static void TASK_VEHICLE_ENTER(Actor _Actor, Vehicle _Vehicle, int _Unk2, int _Unk3) { Invoke<0xB2CD5160, void>(_Actor, _Vehicle, _Unk2, _Unk3); }
	static void SET_VEHICLE_ALLOWED_TO_DRIVE(Actor Vehicle, bool Allowed) { Invoke<0x55A56DF8, void>(Vehicle, Allowed); }
	static bool SET_ACTOR_IN_VEHICLE(Actor Source, Actor Destination, int SeatID) { return Invoke<0x32974F99, bool>(Source, Destination, SeatID); }
	static void SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(int _Unk0, int _Unk1) { Invoke<0x47930AA4, void>(_Unk0, _Unk1); }
	static void REFERENCE_OBJECT(int _Unk0) { Invoke<0x3EEA78A8, void>(_Unk0); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xA9AB9A06, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int ATTACH_CAMERASHOT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11) { return Invoke<0x41514AA0, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11); }
	static void SET_CAMERASHOT_TARGET_OBJECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x3F719473, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x839E9502, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SET_CAMERASHOT_TARGET_OBJECT_ROLL(int _Unk0, int _Unk1) { Invoke<0x8014323A, void>(_Unk0, _Unk1); }
	static int AI_IS_AGGROING(int _Unk0, int _Unk1) { return Invoke<0xC94F9499, int>(_Unk0, _Unk1); }
	static void DETACH_LASSO(int _Unk0) { Invoke<0x32030E7C, void>(_Unk0); }
	static int GET_PREVIOUS_ACTOR_FROM_CORPSE(int _Unk0) { return Invoke<0xAF2597E8, int>(_Unk0); }
	static int IS_ACTOR_HOGTIE_ATTACHED(int _Unk0) { return Invoke<0x16EB367C, int>(_Unk0); }
	static int FIND_WATER_INTERSECTION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x4F193BE4, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(int _Unk0, int _Unk1) { Invoke<0x617C9630, void>(_Unk0, _Unk1); }
	static void TASK_FOLLOW_AND_ATTACK_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0xDA646464, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void TASK_SHOOT_ENEMIES_FROM_ANY_COVER(int _Unk0, int _Unk1) { Invoke<0x3C9875E5, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_VISION_MAX_RANGE(int _Unk0) { return Invoke<0x4A4B4B26, int>(_Unk0); }
	static int MEMORY_GET_WAS_VISIBLE_WITHIN_TIME(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xC407497F, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_OBSTACLE_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0x2703760F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static int COMBAT_CLASS_AI_GET_RANGE_ACCURACY(int _Unk0) { return Invoke<0x983DB127, int>(_Unk0); }
	static void ADD_ACTOR_STAY_WITHIN_VOLUME(int _Unk0, int _Unk1) { Invoke<0xCDEF4316, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_VOLUME_PARAMETERS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x8B46B294, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_CAMERA_ASPECT_RATIO(int _Unk0, int _Unk1) { Invoke<0xFAEE2667, void>(_Unk0, _Unk1); }
	static void SET_CAMERA_NEAR_CLIP_PLANE(int _Unk0, int _Unk1) { Invoke<0x1D29E72A, void>(_Unk0, _Unk1); }
	static void SET_CAMERA_FAR_CLIP_PLANE(int _Unk0, int _Unk1) { Invoke<0xD85EF521, void>(_Unk0, _Unk1); }
	static void SET_CAMERA_COLLISION_PARAMETERS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xB8FAD252, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_CAMERA_COLLISION_ENABLED(int _Unk0, int _Unk1) { Invoke<0x7DA71AA7, void>(_Unk0, _Unk1); }
	static void RESET_CAMERA_TARGET(int _Unk0, int _Unk1) { Invoke<0x313A4E61, void>(_Unk0, _Unk1); }
	static void RESET_CAMERA_TARGETDOF(int _Unk0) { Invoke<0x4643D2C7, void>(_Unk0); }
	static int GRINGO_DEACTIVATE(int _Unk0) { return Invoke<0x25636669, int>(_Unk0); }
	static int MEMORY_GET_MUST_IDENTIFY(int _Unk0, int _Unk1) { return Invoke<0x05B3D34F, int>(_Unk0, _Unk1); }
	static int IS_CAMERA_FOCUS_ENABLED(int _Unk0) { return Invoke<0x80D63DAC, int>(_Unk0); }
	static void SET_CAMERA_FOCUS_ENABLED(int _Unk0, int _Unk1) { Invoke<0x78D29E49, void>(_Unk0, _Unk1); }
	static int IS_CAMERA_FOCUS_ACTIVE(int _Unk0) { return Invoke<0xCA8CC5CE, int>(_Unk0); }
	static void AI_PREDICATE_OVERRIDE_CLEAR(int _Unk0, int _Unk1) { Invoke<0x1A137442, void>(_Unk0, _Unk1); }
	static int IS_SCRIPT_USE_CONTEXT_PRESSED(int _Unk0) { return Invoke<0x45C1C061, int>(_Unk0); }
	static int _0x211DE185(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x211DE185, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void _0x6077F3AE(int _Unk0, int _Unk1) { Invoke<0x6077F3AE, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x1229C536, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(int _Unk0, int _Unk1) { Invoke<0x4A3AE626, void>(_Unk0, _Unk1); }
	static void SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(int _Unk0, int _Unk1) { Invoke<0x6FDE0A8C, void>(_Unk0, _Unk1); }
	static int SET_PROP_AI_OBSTACLE_ENABLED(int _Unk0, int _Unk1) { return Invoke<0x0DC83543, int>(_Unk0, _Unk1); }
	static void RESET_RMPTFX_IN_VOLUME(int _Unk0) { Invoke<0x547166A7, void>(_Unk0); }
	static void FIRE_RELEASE_HANDLE(FireHandle _FireHandle, bool _Deactivate) { Invoke<0xB14B936A, void>(_FireHandle, _Deactivate); }
	static void REMOVE_CORPSE_RETAINMENT_VOLUME_OBJ(int _Unk0) { Invoke<0x983ED842, void>(_Unk0); }
	static void RESET_FACTIONS_STATUS_TWO_WAY(int _Unk0, int _Unk1) { Invoke<0x902781BF, void>(_Unk0, _Unk1); }
	static int CAMERA_IS_VISIBLE_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x965A4652, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int CREATE_CORPSE_IN_LAYOUT_RANDOM(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x40856E8A, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void CREATE_DECAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x21588246, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void ADD_CORPSE_RETAINMENT_VOLUME_OBJ(int _Unk0) { Invoke<0x0E41A6AC, void>(_Unk0); }
	static FireHandle FIRE_CREATE_HANDLE() { return Invoke<0xBBAE9CBD, FireHandle>(); }
	static void FIRE_CREATE_IN_VOLUME(FireHandle _FireHandle, Vector2 _PositionXY, float _PositionZ, int _HeightFlag, int _Flag) { Invoke<0xB65ADFAC, void>(_FireHandle, _PositionXY, _PositionZ, _HeightFlag, _Flag); }
	static void FIRE_SET_DAMAGE_ALLOWED(FireHandle _FireHandle, bool _DamageAllowed) { Invoke<0x3D5D3B26, void>(_FireHandle, _DamageAllowed); }
	static int _0xF1F8AFCA(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xF1F8AFCA, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int IS_SCRIPTED_CONVERSATION_ONGOING() { return Invoke<0xCB8FD96F, int>(); }
	static int GET_JOURNAL_ENTRY(int _Unk0) { return Invoke<0xC450C870, int>(_Unk0); }
	static void CLEAR_JOURNAL_ENTRY_DETAIL_LIST(int _Unk0, int _Unk1) { Invoke<0xD0567D03, void>(_Unk0, _Unk1); }
	static void ADD_NEW_CONVERSATION_SPEAKER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xF1C40BCA, void>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_GOAL_ADD_BATTLE_ALLIES(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x65888454, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AUDIO_ATTACH_MICROPHONE_TO_ACTOR(int _Unk0) { Invoke<0x74CA8E22, void>(_Unk0); }
	static void GRINGO_SET_USABLE_BY_PLAYER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x80317230, void>(_Unk0, _Unk1, _Unk2); }
	static int LOCATE_ACTORS_IN_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x35C8FD4A, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_DOOR_OPENED(int _Unk0) { return Invoke<0x211DD9D2, int>(_Unk0); }
	static int GET_COVER_LOCATION_FROM_OBJECT(int _Unk0) { return Invoke<0x2CF0010F, int>(_Unk0); }
	static void SET_ACTOR_PROOF(int _Unk0, int _Unk1) { Invoke<0xA5875DC8, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_ALLOW_DISARM(int _Unk0, int _Unk1) { Invoke<0x76A72D9A, void>(_Unk0, _Unk1); }
	static int CREATE_COVER_LOCATION_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x708C7D7B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6AAB4CD0, void>(_Unk0, _Unk1, _Unk2); }
	static int NET_MAILBOX_GET_CHALLENGE_BY_ID(int _Unk0) { return Invoke<0xD4FBCCE0, int>(_Unk0); }
	static int SC_CHALLENGE_LAUNCH(int _Unk0) { return Invoke<0xCBBE41DD, int>(_Unk0); }
	static void TASK_SHOOT_ENEMIES_FROM_COVER(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xCE584BCF, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_GO_NEAR_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x5EA4F1FE, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void ATTACH_PLAYER_TO_COVER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x45F2A70A, void>(_Unk0, _Unk1, _Unk2); }
	static void ACTOR_POP_NEXT_GAIT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xEAE75C6F, void>(_Unk0, _Unk1, _Unk2); }
	static void STOP_FORCE_LOOK_AT_COORD(int _Unk0) { Invoke<0x6C194C1F, void>(_Unk0); }
	static void HUD_TIMER_COUNTDOWN(int _Unk0) { Invoke<0xF4209CCC, void>(_Unk0); }
	static void SET_ACTOR_FACE_STYLE(int _Unk0, int _Unk1) { Invoke<0x08654394, void>(_Unk0, _Unk1); }
	static void TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xDC087173, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_LAST_NEAREST_POINT(int _Unk0, int _Unk1) { return Invoke<0xB6E791F6, int>(_Unk0, _Unk1); }
	static int GET_VEHICLE_BUMP_COUNT(int _Unk0) { return Invoke<0x04CF7C3E, int>(_Unk0); }
	static void RESET_VEHICLE_BUMP_COUNT(int _Unk0) { Invoke<0x0E9BA223, void>(_Unk0); }
	static void UI_SET_TEXT(char* entry, char* text) { Invoke<0xC464D5DD, void>(entry, text); }
	static void UI_SET_PROGRESS_BAR_VAL(int _Unk0, int _Unk1) { Invoke<0xE5D53722, void>(_Unk0, _Unk1); }
	static void SET_TRANSITION_COLLISION_PARAMS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x22A746E1, void>(_Unk0, _Unk1, _Unk2); }
	static void ADD_CAMERASHOT_COLLISION_EXCLUSION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x58A0BFBF, void>(_Unk0, _Unk1, _Unk2); }
	static void AI_DISABLE_PERCEPTION(int _Unk0) { Invoke<0x8BBB7B12, void>(_Unk0); }
	static void AI_ENABLE_PERCEPTION(int _Unk0) { Invoke<0xAF77C42E, void>(_Unk0); }
	static void TASK_SHOOT_ENEMIES_FROM_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xCF8DB984, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SET_ACTOR_ANIM_CURRENT_TIME(int _Unk0, int _Unk1) { return Invoke<0x8626C1A0, int>(_Unk0, _Unk1); }
	static void SET_ALLOW_DEADEYE_LOCKS(int _Unk0, int _Unk1) { Invoke<0xA1BFC1A5, void>(_Unk0, _Unk1); }
	static void SET_DEADEYE_LOCKS_ON_HEAD_ONLY(Actor _Actor, bool _Enabled) { Invoke<0x9375946B, void>(_Actor, _Enabled); }
	static int FLOAT_TO_STRING_VERBOSE(int _Unk0) { return Invoke<0x5E339E16, int>(_Unk0); }
	static int ATTACH_OBJECTS_CONTINUOUS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x319D70BD, int>(_Unk0, _Unk1, _Unk2); }
	static void TASK_OVERRIDE_CLEAR_POSTURE(int _Unk0) { Invoke<0x5394CF3B, void>(_Unk0); }
	static int GRINGO_QUERY_NAMED_COMPONENT_USER(int _Unk0, int _Unk1) { return Invoke<0x0208A8E0, int>(_Unk0, _Unk1); }
	static void CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(int _Unk0) { Invoke<0x77402033, void>(_Unk0); }
	static void AI_RESET_FIRING_FSM(int _Unk0) { Invoke<0x46F51754, void>(_Unk0); }
	static void STOP_PED_SPEAKING(int _Unk0, int _Unk1) { Invoke<0xFF92B49D, void>(_Unk0, _Unk1); }
	static int FIND_GROUND_INTERSECTION_WITH_MATERIAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x77964B0C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static bool IS_ACTOR_DRAFTED(int actor) { return Invoke<0xEF2C329D, bool>(actor); }
	static void SET_ACTOR_POSTURE(int _Unk0, int _Unk1) { Invoke<0x708D9BD3, void>(_Unk0, _Unk1); }
	static bool IS_ACTOR_LOCAL_PLAYER(int actor) { return Invoke<0x6542CF26, bool>(actor); }
	static int ATAN2_DEGREE(int _Unk0, int _Unk1) { return Invoke<0x8A0D25F2, int>(_Unk0, _Unk1); }
	static void AI_GOAL_LOOK_AT_COORD(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xB162690D, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int LEASH_CONSTRAIN(int _Unk0) { return Invoke<0x8EA68EB5, int>(_Unk0); }
	static int LEASH_RESTART(int _Unk0) { return Invoke<0xE58339B3, int>(_Unk0); }
	static int LEASH_SET_CONSTRAINT_LENGTH(int _Unk0, int _Unk1) { return Invoke<0x7F190CA3, int>(_Unk0, _Unk1); }
	static int LEASH_SET_LEASH_LENGTH(int _Unk0, int _Unk1) { return Invoke<0x14BEC6F5, int>(_Unk0, _Unk1); }
	static int LEASH_BREAK(int _Unk0, int _Unk1) { return Invoke<0x8640261B, int>(_Unk0, _Unk1); }
	static void TASK_TAUNT_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x9043D092, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(int _Unk0, int _Unk1) { Invoke<0xAFA35FFA, void>(_Unk0, _Unk1); }
	static int LOCATE_PHYSINST_OF_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x734CC17B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int LEASH_IS_BROKEN(int _Unk0) { return Invoke<0x46BE1D43, int>(_Unk0); }
	static int LEASH_RELEASE_CONSTRAINT(int _Unk0) { return Invoke<0x7A1376B0, int>(_Unk0); }
	static void REMOVE_ACTOR_STAY_WITHIN_VOLUME(int _Unk0, int _Unk1) { Invoke<0x2974CAF6, void>(_Unk0, _Unk1); }
	static int LEASH_STAY_CONSTRAINED(int _Unk0, int _Unk1) { return Invoke<0x5A72DD49, int>(_Unk0, _Unk1); }
	static int LEASH_ATTACH_TO_WORLD(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x0FCDB481, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11) { return Invoke<0x4B67B8BB, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11); }
	static void STREAMING_LOAD_BOUNDS_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x1CD960B8, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void UI_REFRESH(const char* _UILayer) { Invoke<0xFAC3DF71, void>(_UILayer); }
	static void EVENT_TRAP_ON_PERPETRATOR(int _Unk0, int _Unk1) { Invoke<0x6B5DF46D, void>(_Unk0, _Unk1); }
	static int GRINGO_GET_TARGET(int _Unk0) { return Invoke<0xC70FDA39, int>(_Unk0); }
	static int GET_CORPSE_ACTOR_ENUM(int _Unk0) { return Invoke<0x1FCC8FEF, int>(_Unk0); }
	static int _0x48588CCB(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x48588CCB, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SQUAD_FLOCK_ADD_EXTERNAL_ALERT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x1F0E5B88, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x53609885, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE4E94286, void>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_GRINGO_IN_LAYOUT_BY_ID(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x66A8AF91, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void SET_ACTOR_PERMANENT_DEAD(int _Unk0) { Invoke<0x731F2C21, void>(_Unk0); }
	static void SET_FORCED_LOOK_ENABLE(int _Unk0, int _Unk1) { Invoke<0xA90A13A5, void>(_Unk0, _Unk1); }
	static void GRINGO_UNLOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x7A759A53, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void FIRE_PROJECTILE(Actor Actor, const char* WeapGroup, float _Unk2, Vector3* Origin, Vector3* Target) { Invoke<0x195A4286, void>(Actor, WeapGroup, _Unk2, Origin, Target); }
	static int ANIMAL_SPECIES_REL_GET_CAN_ATTACK(int _Unk0, int _Unk1) { return Invoke<0x3C5700DC, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_MAX_SPEED_ABSOLUTE(int _Unk0) { return Invoke<0x56DE7F21, int>(_Unk0); }
	static void AI_ACTOR_FORCE_SPEED(int _Unk0, int _Unk1) { Invoke<0x70B409D5, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_MAX_SPEED_ABSOLUTE(Actor _Actor, int _Speed) { Invoke<0x950B8870, void>(_Actor, _Speed); }
	static int IS_ACTOR_ON_GROUND(int actor) { return Invoke<0x709EC06C, int>(actor); }
	static Vehicle GET_ACTOR_MOST_RECENT_VEHICLE(Actor _Actor) { return Invoke<0x58745E4B, Vehicle>(_Actor); }
	static int GET_ACTOR_HOGTIE_STATE(int actor) { return Invoke<0xF45D9723, int>(actor); }
	static int IS_SEAT_OCCUPIED(int _Unk0, int _Unk1) { return Invoke<0xF7400A47, int>(_Unk0, _Unk1); }
	static void REM_PLAYER_CONTROL_HORSE_FOLLOW(int _Unk0, int _Unk1) { Invoke<0xBFC8EF7C, void>(_Unk0, _Unk1); }
	static int CAN_ACTOR_ENUM_PLAY_SPEECH_CONTEXT(int _Unk0, int _Unk1) { return Invoke<0xD02757C1, int>(_Unk0, _Unk1); }
	static void SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0x0871084C, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GET_NUM_OCCUPIED_SEATS(int _Unk0) { return Invoke<0xF0354E46, int>(_Unk0); }
	static void CREATE_DIRECTION_DECAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0xFB4CFBA0, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void ACTIVATE_PHYSINST(int _Unk0) { Invoke<0xC0961D18, void>(_Unk0); }
	static void AI_GLOBAL_SET_PERMANENT_DANGER(int _Unk0, int _Unk1) { Invoke<0x64C177FB, void>(_Unk0, _Unk1); }
	static void REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(int _Unk0, int _Unk1) { Invoke<0x42EF7DB7, void>(_Unk0, _Unk1); }
	static void TASK_SURROUND_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x5DD80BEF, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void AI_GOAL_AIM_CLEAR(int _Unk0) { Invoke<0xD5100DC2, void>(_Unk0); }
	static void MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(int _Unk0) { Invoke<0xDD965D74, void>(_Unk0); }
	static void AI_SET_WEAPON_MIN_RANGE(int _Unk0, int _Unk1) { Invoke<0xE067A925, void>(_Unk0, _Unk1); }
	static void AI_GOAL_SHOOT_CLEAR(int _Unk0) { Invoke<0xC43A9268, void>(_Unk0); }
	static void ACTOR_FORCE_WEAPON_RENDER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1511D111, void>(_Unk0, _Unk1, _Unk2); }
	static void AI_SET_WEAPON_MAX_RANGE(int _Unk0, int _Unk1) { Invoke<0xD2BFA6E4, void>(_Unk0, _Unk1); }
	static int HUD_TIMER_GET() { return Invoke<0x1C6919EF, int>(); }
	static int GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(int _Unk0, int _Unk1) { return Invoke<0xAAC96EFF, int>(_Unk0, _Unk1); }
	static void TASK_BIRD_SOAR_AT_COORD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x69CCFD7C, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_ACTOR_UNKILLABLE(Actor _Actor, bool _Value) { Invoke<0x0D9A35F6, void>(_Actor, _Value); }
	static int LEASH_ATTACH_TO_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x35D8B21E, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void EVENT_TRAP_ON_VOLUME(int _Unk0, int _Unk1) { Invoke<0x88943B5B, void>(_Unk0, _Unk1); }
	static int UI_IS_MESSAGE_QUEUE_EMPTY(int _Unk0) { return Invoke<0x941FC468, int>(_Unk0); }
	static bool IS_PLAYER_TELEPORTING() { return Invoke<0x8EB0B2AD, bool>(); }
	static void SET_CAMERA_TARGET_OBJECT(Camera _Camera, Object _Object, int _Unk2) { Invoke<0xDBD1AE22, void>(_Camera, _Object, _Unk2); }
	static int IS_ACTOR_REACTING(int _Unk0) { return Invoke<0xBFD6AE3D, int>(_Unk0); }
	static int GRINGO_QUERY_PROP(int _Unk0, int _Unk1) { return Invoke<0x2A7B1EFE, int>(_Unk0, _Unk1); }
	static int ATTACH_OBJECTS_USING_LOCATOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xB6506558, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_PROP_VELOCITY(int _Unk0, int _Unk1) { return Invoke<0x5AEA8801, int>(_Unk0, _Unk1); }
	static int _AIATTENTIONATTRACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x945F518F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void STREAMING_OVERRIDE_MAIN_POI(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x338F85D9, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int DOES_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(int _Unk0) { return Invoke<0xFF642652, int>(_Unk0); }
	static int IS_ACTOR_OUTDOORS(int _Unk0) { return Invoke<0xE27EBCBD, int>(_Unk0); }
	static int IS_ACTOR_PLAYING_NODE_IN_TREE(int _Unk0, int _Unk1) { return Invoke<0x4E0300E2, int>(_Unk0, _Unk1); }
	static int CREATE_PATH_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x80B8A1BE, int>(_Unk0, _Unk1, _Unk2); }
	static int ADD_POINT_TO_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xECC40138, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ADD_CORPSE_REMOVAL_VOLUME_OBJ(int _Unk0) { Invoke<0x43E2808B, void>(_Unk0); }
	static void SET_ACTOR_GRINGO_RESTRICTION(int _Unk0, int _Unk1) { Invoke<0x527CB774, void>(_Unk0, _Unk1); }
	static int IS_AREA_OBSTRUCTED2(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x0733E811, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int IS_AREA_OBSTRUCTED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x5F655C68, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void AMBIENT_ENABLE_SLOPE_FILTER_PRECISE(int _Unk0) { Invoke<0x561C9A6D, void>(_Unk0); }
	static void AMBIENT_ENABLE_BUMP_FILTER(int _Unk0) { Invoke<0x528C7F3D, void>(_Unk0); }
	static void REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(int _Unk0) { Invoke<0xE9E8C31A, void>(_Unk0); }
	static void SET_ACTOR_ACTION_SIGNAL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x382E7CCC, void>(_Unk0, _Unk1, _Unk2); }
	static void ADD_BLOOD_TO_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x5685A440, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void GRINGO_SET_ALL_USES_OWNERSHIP(int _Unk0, int _Unk1) { Invoke<0x761BA4BD, void>(_Unk0, _Unk1); }
	static int GRINGO_GET_TASKED_USER_EXTERNAL(int _Unk0, int _Unk1) { return Invoke<0x92FE8D74, int>(_Unk0, _Unk1); }
	static int DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(int _Unk0) { return Invoke<0x08FD1D81, int>(_Unk0); }
	static void LIMIT_BLOOD_ON_ACTOR(int _Unk0, int _Unk1) { Invoke<0x3627F773, void>(_Unk0, _Unk1); }
	static void AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(int _Unk0, int _Unk1) { Invoke<0xC900F0E8, void>(_Unk0, _Unk1); }
	static void MEMORY_CLEAR_RIDING_PREFERENCE(int _Unk0) { Invoke<0x48AA959E, void>(_Unk0); }
	static void SET_ACTOR_IS_COMPANION(int _Unk0, int _Unk1) { Invoke<0x4C94EB9E, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_IS_AMBIENT(int _Unk0, int _Unk1) { Invoke<0x4CB24141, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(int _Unk0, int _Unk1) { Invoke<0xC28A5950, void>(_Unk0, _Unk1); }
	static void SET_ALLOW_JACK(int _Unk0, int _Unk1) { Invoke<0x5D5BD1F0, void>(_Unk0, _Unk1); }
	static void MEMORY_SHOULD_ALWAYS_PATHFIND_IN_FORMATION(int _Unk0, int _Unk1) { Invoke<0x052E865C, void>(_Unk0, _Unk1); }
	static void ACTOR_DRAW_WEAPON(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x953FB7EE, void>(_Unk0, _Unk1, _Unk2); }
	static int IMMEDIATELY_LASSO_TARGET(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x8F8EDCCF, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_GET_AVAILABILITY(int _Unk0, int _Unk1) { return Invoke<0x6ADC74CE, int>(_Unk0, _Unk1); }
	static void STRINGTABLE_APPEND_TABLE(int _Unk0) { Invoke<0xB3E44649, void>(_Unk0); }
	static void TOGGLE_COOP_JOURNAL_UI(int _Unk0) { Invoke<0x44A1ED5C, void>(_Unk0); }
	static void NET_REGISTER_GAME_TYPE(int _Unk0, int _Unk1) { Invoke<0xE822010A, void>(_Unk0, _Unk1); }
	static int _0x55C5BB93(int _Unk0) { return Invoke<0x55C5BB93, int>(_Unk0); }
	static int LOAD_AUDIO_SPEECH_DATA(int _Unk0) { return Invoke<0xBFCF32D9, int>(_Unk0); }
	static int LOAD_AUDIO_METADATA(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE8FFE727, int>(_Unk0, _Unk1, _Unk2); }
	static void HUD_SET_FADE_COLOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4DA5F502, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void _0x2148AC15(int _Unk0, int _Unk1) { Invoke<0x2148AC15, void>(_Unk0, _Unk1); }
	static void STOP_ALL_FIRES() { Invoke<0x9544570A, void>(); }
	static void SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(int _Unk0) { Invoke<0xA393AC4E, void>(_Unk0); }
	static int NET_GET_GAMER_POSSE_LEADER(int _Unk0) { return Invoke<0xFC52BD15, int>(_Unk0); }
	static void MISSION_AUDIO_BANK_NO_LONGER_NEEDED() { Invoke<0x4E92CC7A, void>(); }
	static void ENABLE_GAME_CAMERA_FOCUS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x87E40FB8, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GET_CUTSCENEOBJECT_SEQUENCE(int _Unk0) { return Invoke<0x3D26D852, int>(_Unk0); }
	static void END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(int _Unk0) { Invoke<0xBE3F0168, void>(_Unk0); }
	static void NET_GAMER_ICONS_SHOW_LOCAL(int _Unk0) { Invoke<0x2FB85996, void>(_Unk0); }
	static void STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(int _Unk0) { Invoke<0xB226E8E3, void>(_Unk0); }
	static int GET_CAMERA_CHANNEL_DIRECTION(int _Unk0, int _Unk1) { return Invoke<0x6ED00237, int>(_Unk0, _Unk1); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xCC61CC5F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_LERP(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xFC676413, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_CAMERASHOT_TARGET_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x0D6EC5D5, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void UI_RESTORE(const char* _UILayer) { Invoke<0x7ADB2BE7, void>(_UILayer); }
	static void _0x444C3C32(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x444C3C32, void>(_Unk0, _Unk1, _Unk2); }
	static void NET_START_LB_UPDATE(int _Unk0) { Invoke<0x4D0C8AA4, void>(_Unk0); }
	static void NET_UPDATE_LEADERBOARD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x12304873, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void NET_END_LB_UPDATE() { Invoke<0x89277EA3, void>(); }
	static void _0x7154D15B() { Invoke<0x7154D15B, void>(); }
	static int NET_IS_FRIEND_SCORE_INFO_AVAILABLE() { return Invoke<0xE5C5CE63, int>(); }
	static int _0xA684E813() { return Invoke<0xA684E813, int>(); }
	static void NET_REPORT_FRIEND_SCORES(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x88249424, void>(_Unk0, _Unk1, _Unk2); }
	static int NET_GET_FREE_ROAM_MODE() { return Invoke<0x81F24788, int>(); }
	static int _0xA80C6DE6(int _Unk0) { return Invoke<0xA80C6DE6, int>(_Unk0); }
	static float GET_TIME_ACCELERATION() { return Invoke<0xC87F16A8, float>(); }
	static int GET_NUM_PLAYERS() { return Invoke<0x0F99A8BC, int>(); }
	static void NET_GAMER_ICON_RESET_TIMER(int _Unk0, int _Unk1) { Invoke<0xB5DDEF68, void>(_Unk0, _Unk1); }
	static void UI_REMOVE_MESSAGE_IN_QUEUE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x7725001B, void>(_Unk0, _Unk1, _Unk2); }
	static void ACTOR_REPAIR_INCAPACITATION(int _Unk0) { Invoke<0x437588E6, void>(_Unk0); }
	static void CLEAR_ACTOR_PROOF(int _Unk0, int _Unk1) { Invoke<0xF5B74E20, void>(_Unk0, _Unk1); }
	static int IS_ACTOR_BLINDFIRING(int _Unk0) { return Invoke<0x6396ABB7, int>(_Unk0); }
	static void _0x7E0CDD87() { Invoke<0x7E0CDD87, void>(); }
	static void UI_FOCUS(const char* _UILayer) { Invoke<0x699CC85E, void>(_UILayer); }
	static int HAS_INVENTORY_COMPONENT(int _Unk0) { return Invoke<0x7609A328, int>(_Unk0); }
	static void EVENT_TRAP_ON_OWNER(int _Unk0, int _Unk1) { Invoke<0x1105FB64, void>(_Unk0, _Unk1); }
	static int _UI_IS_MOVIE_LOADED(int _Unk0) { return Invoke<0x9D20BDC4, int>(_Unk0); }
	static int FLASH_GET_INT(const char* scaleformName, const char* scaleformVarName) { return Invoke<0x03568B83, int>(scaleformName, scaleformVarName); }
	static void ACTOR_SET_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel, float _AmmoCount) { Invoke<0x8266C617, void>(_Actor, _WeaponModel, _AmmoCount); }
	static int ADD_ITEM_BY_CRC(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xAB2D8A68, int>(_Unk0, _Unk1, _Unk2); }
	static void SETUP_ASSOCIATED_FRAGMENTS(int _Unk0) { Invoke<0x3E8E7D7B, void>(_Unk0); }
	static int GET_GAME_CAMERA_RESET_POSITION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x0B071844, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static Actor RESPAWN_PLAYER_ACTOR_IN_LAYOUT(Layout _Layout, Actor _Actor, const char* _ActorInLayout, ActorModel _ActorModel, Vector2 _PositionXY, float _PositionZ, Vector2 _RotationXY, float _RotationZ, int _Unk0) { return Invoke<0x637E446B, Actor>(_Layout, _Actor, _ActorInLayout, _ActorModel, _PositionXY, _PositionZ, _RotationXY, _RotationZ, _Unk0); }
	static void _0x6F6D942B(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x6F6D942B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SET_AMBIENT_VOICE_NAME(int _Unk0, int _Unk1) { Invoke<0xBD2EA1A1, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_OVERHEALTH_MODE(int _Unk0, int _Unk1) { Invoke<0xF2F77F44, void>(_Unk0, _Unk1); }
	static void SET_LOCAL_PLAYER_VOICE(int _Unk0) { Invoke<0xF0D28043, void>(_Unk0); }
	static void SET_LOCAL_PLAYER_PAIN_VOICE(int _Unk0) { Invoke<0x33BD1A80, void>(_Unk0); }
	static void START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(int _Unk0) { Invoke<0x1E56BAFD, void>(_Unk0); }
	static void SET_DEADEYE_INVULNERABILITY(Actor _Actor, bool _Value) { Invoke<0xA671FF8E, void>(_Actor, _Value); }
	static void SET_DEADEYE_DAMAGE_SCALING(Actor _Actor, float _Scaling) { Invoke<0x0D583DAF, void>(_Actor, _Scaling); }
	static void SET_DEADEYE_REGENERATION_RATE(Actor _Actor, float _Rate, bool _Unk) { Invoke<0x0415EE4C, void>(_Actor, _Rate, _Unk); }
	static void SET_DEADEYE_TIMESCALE(Actor _Actor, float _TimeScale) { Invoke<0x5740CDC2, void>(_Actor, _TimeScale); }
	static int DECOR_HANDLES_RELATIVE(int _Unk0) { return Invoke<0x8DAC4359, int>(_Unk0); }
	static void GENERATE_RANDOM_POINT_IN_VOLUME(int _Unk0, int _Unk1) { Invoke<0x9FC69F27, void>(_Unk0, _Unk1); }
	static void DETACH_CAMERASHOT(int _Unk0) { Invoke<0x059BBAA8, void>(_Unk0); }
	static int GET_ACTOR_SLOT(int _Unk0) { return Invoke<0xAABF3356, int>(_Unk0); }
	static void GET_CAMERASHOT_POSITION(int _Unk0, int _Unk1) { Invoke<0x4D05D470, void>(_Unk0, _Unk1); }
	static int SET_CAMERA_FOLLOW_ACTOR_EX(int _Unk0, int _Unk1) { return Invoke<0x457A0510, int>(_Unk0, _Unk1); }
	static void GET_CAMERASHOT_DIRECTION(int _Unk0, int _Unk1) { Invoke<0x4670416D, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_DIRECTION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x21B099AB, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_CAMERASHOT_FOV(int _Unk0) { return Invoke<0xEAD6167D, int>(_Unk0); }
	static void INIT_CAMERASHOT_FROM_GAME_CAMERA(int _Unk0) { Invoke<0x99314873, void>(_Unk0); }
	static void STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(int _Unk0) { Invoke<0xBEABC729, void>(_Unk0); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x1AD38A53, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void ADD_CAMERASHOT_COLLISION_BOUNDFLAG(int _Unk0, int _Unk1) { Invoke<0xCD28C63F, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_OBJECT(int _Unk0, int _Unk1) { Invoke<0xB6BDCF62, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(int _Unk0, int _Unk1) { Invoke<0x087B8DCE, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(int _Unk0, int _Unk1) { Invoke<0x0AD50615, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(int _Unk0, int _Unk1) { Invoke<0xEB9E1CB9, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0370451C, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_CAMERASHOT_TARGETDOF_SMOOTHING(int _Unk0, int _Unk1) { Invoke<0x74168B5F, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_FILTERTYPE(int _Unk0, int _Unk1) { Invoke<0x243CF01F, void>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_FSTOP(int _Unk0, int _Unk1) { Invoke<0x9E618676, void>(_Unk0, _Unk1); }
	static void CAMERASHOT_ADD_ARC_BEHAVIOR(int _Unk0, int _Unk1) { Invoke<0xA1C665E0, void>(_Unk0, _Unk1); }
	static void UI_SET_STRING_FORMAT(const char* _GXTName, const char* _Format, const char* _Str) { Invoke<0xEDA84121, void>(_GXTName, _Format, _Str); }
	static int IN_SELECTED_PEDPATH(int _Unk0) { return Invoke<0xE2E6C722, int>(_Unk0); }
	static int _IS_CLIENT_DATA_VALID_FOR_SLOT(int _Unk0, int _Unk1) { return Invoke<0xF81E2097, int>(_Unk0, _Unk1); }
	static int _IS_ACTOR_IN_WATER_OF_DEPTH(int _Unk0, int _Unk1) { return Invoke<0xA6AA7B9E, int>(_Unk0, _Unk1); }
	static void CLEAR_AMBIENT_ALL_RESTRICTIONS() { Invoke<0xC78B7436, void>(); }
	static void PLAY_SOUND_FRONTEND_INITPARAMS(int _Unk0, int _Unk1) { Invoke<0x49053A94, void>(_Unk0, _Unk1); }
	static void UI_UNFOCUS(const char* _UILayer) { Invoke<0x0ACEA059, void>(_UILayer); }
	static int UI_GET_STRING_BY_HASH(int _Unk0) { return Invoke<0xBA89F5EA, int>(_Unk0); }
	static const char* GET_SLOT_NAME(int _SlotId) { return Invoke<0x34CBABAE, const char*>(_SlotId); }
	static bool NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT() { return Invoke<0xC0FC4B57, bool>(); }
	static int NET_IS_HOST_OF_THIS_SCRIPT() { return Invoke<0x6D403720, int>(); }
	static void PLAYSTAT_INT(int _Unk0, int _Unk1) { Invoke<0x2547029C, void>(_Unk0, _Unk1); }
	static void PLAYSTAT_MP_COOP_COMPLETE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x46C39437, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void OBJECT_ITERATOR_RESET(int _Unk0) { Invoke<0x351A482F, void>(_Unk0); }
	static void AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(int _Unk0, int _Unk1) { Invoke<0xEA2A40BC, void>(_Unk0, _Unk1); }
	static void MEMORY_ALLOW_THROWING_EXPLOSIVES(int _Unk0, int _Unk1) { Invoke<0xDBDB57D0, void>(_Unk0, _Unk1); }
	static void TASK_USE_TURRET_AGAINST_COORD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x3B8DBA13, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(int _Unk0, int _Unk1) { return Invoke<0xAAD75024, int>(_Unk0, _Unk1); }
	static int _0xCDA6BB6C() { return Invoke<0xCDA6BB6C, int>(); }
	static int _0xFF1F1730() { return Invoke<0xFF1F1730, int>(); }
	static int GET_CUTSCENE_TUNER_CUTSCENEOBJECT() { return Invoke<0x93050734, int>(); }
	static void CANCEL_CUTSCENE_TUNER_PLAYBACK() { Invoke<0xE7A1C191, void>(); }
	static void ADD_CAMERATRANSITION_EVENT_HUDFADEIN(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x25A58402, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x269F5C75, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_VOLUME_HEADING(int _Unk0) { return Invoke<0x8D5609F2, int>(_Unk0); }
	static void TASK_USE_TURRET(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6484F21E, void>(_Unk0, _Unk1, _Unk2); }
	static void FIRE_SET_CONTROL_VOLUME(int _Unk0, int _Unk1) { Invoke<0x03240324, void>(_Unk0, _Unk1); }
	static void FIRE_SET_EXPIRE_ALLOWED(FireHandle _FireHandle, bool _AllowExpire) { Invoke<0x6471D75C, void>(_FireHandle, _AllowExpire); }
	static void FIRE_SET_GROW_ALLOWED(int _Unk0, int _Unk1) { Invoke<0x53895856, void>(_Unk0, _Unk1); }
	static void FIRE_SET_TARGET_FILL_PERCENT(FireHandle _FireHandle, float _TargetFillPercent) { Invoke<0x9C471E7D, void>(_FireHandle, _TargetFillPercent); }
	static void FIRE_SET_GROW_RATE(FireHandle _FireHandle, float _GrowRate) { Invoke<0x1A82B949, void>(_FireHandle, _GrowRate); }
	static void FIRE_SET_DECAY_RATE(FireHandle _FireHandle, float _DecayRate) { Invoke<0x7906A950, void>(_FireHandle, _DecayRate); }
	static void FIRE_SET_MAX_FLAMES(FireHandle _FireHandle, int _MaxFlames) { Invoke<0xE5E04E83, void>(_FireHandle, _MaxFlames); }
	static void AUDIO_MUSIC_FORCE_TRACK_HASH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x6CEFA97A, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int GET_CURR_ACTION_NODE_PLAY_TIME(int _Unk0) { return Invoke<0x5E84F53E, int>(_Unk0); }
	static void DISABLE_GAME_CAMERA_FOCUS() { Invoke<0x4FA19C01, void>(); }
	static int IS_GAME_CAMERA_FOCUS_ENABLED() { return Invoke<0x5BD2295E, int>(); }
	static void SET_GAME_CAMERA_FOCUS(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x3AE77125, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AI_SET_WEAPON_DESIRED_RANGE(int _Unk0, int _Unk1) { Invoke<0xDA005857, void>(_Unk0, _Unk1); }
	static void _0xA4E29C31(int _Unk0, int _Unk1) { Invoke<0xA4E29C31, void>(_Unk0, _Unk1); }
	static int AUDIO_MUSIC_GET_RANDOM_TRACK_FROM_PLAYLIST(int _Unk0) { return Invoke<0x704DBAC9, int>(_Unk0); }
	static void DESTROY_OBJECT_GLOW(int _Unk0) { Invoke<0xFC261530, void>(_Unk0); }
	static void SET_PROP_COLLIDE_WITH_OBJECT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x77403213, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_PROP_COLLIDE_WITH_MOVABLES(int _Unk0, int _Unk1) { Invoke<0x418A22D5, void>(_Unk0, _Unk1); }
	static void SET_PROP_COLLIDE_WITH_WORLD(int _Unk0, int _Unk1) { Invoke<0xCEC355CE, void>(_Unk0, _Unk1); }
	static int NET_HUD_TUNE_VALUE(int _Unk0, int _Unk1) { return Invoke<0x650A7440, int>(_Unk0, _Unk1); }
	static void SET_FACTIONS_STATUS_ONE_WAY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xD771AF0B, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_READY_FOR_ACTION(int _Unk0) { return Invoke<0xFB2B0CCF, int>(_Unk0); }
	static int ARE_USE_CONTEXTS_ENABLED() { return Invoke<0x2ADA3DD4, int>(); }
	static void NET_ACTOR_SET_EQUIP_TYPE(int _Unk0) { Invoke<0x7837890B, void>(_Unk0); }
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { Invoke<0x66728EFE, void>(); }
	static int _GET_OBJECT_ATTACHMENT(int _Unk0) { return Invoke<0x78B73E47, int>(_Unk0); }
	static int GET_OBJECT_ANIMATOR_ON_OBJECT(int _Unk0) { return Invoke<0x5908F7FE, int>(_Unk0); }
	static int IS_OBJECT_ANIMATOR_VALID(int _Unk0) { return Invoke<0x19BD222F, int>(_Unk0); }
	static void DESTROY_OBJECT_ANIMATOR(int _Unk0) { Invoke<0x1E5A227A, void>(_Unk0); }
	static void TRAIN_SET_ENGINE_ENABLED(int _Unk0, int _Unk1) { Invoke<0x6C62C522, void>(_Unk0, _Unk1); }
	static void TRAIN_SET_AUTOPILOT_ENABLE(int _Unk0, int _Unk1) { Invoke<0xADE865AE, void>(_Unk0, _Unk1); }
	static void VEHICLE_SET_HANDBRAKE(Actor Vehicle, bool Handbreak) { Invoke<0x384BB6AB, void>(Vehicle, Handbreak); }
	static void TRAIN_SET_TARGET_SPEED(int _Unk0, int _Unk1) { Invoke<0xEA2A8B79, void>(_Unk0, _Unk1); }
	static int SHOW_RMPTFX_EFFECT(int _Unk0) { return Invoke<0x5B417C9C, int>(_Unk0); }
	static int SET_RMPTFX_SCALE(int _Unk0, int _Unk1) { return Invoke<0x1A4C98C1, int>(_Unk0, _Unk1); }
	static void GATEWAY_DISABLE(int _Unk0, int _Unk1) { Invoke<0x620A3C17, void>(_Unk0, _Unk1); }
	static void ADD_PLAYER_DEADEYE_POINTS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE2C4AEE7, void>(_Unk0, _Unk1, _Unk2); }
	static void TASK_FOLLOW_PATH_FROM_NEAREST_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x9591A996, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void TRAIN_SET_POSITION_DIRECTION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9C488CB3, void>(_Unk0, _Unk1, _Unk2); }
	static int GATEWAY_GET_VOLUME(int _Unk0) { return Invoke<0x987AD426, int>(_Unk0); }
	static void SET_CUSTOM_ANIM_SPEED(int _Unk0, int _Unk1) { Invoke<0x5FEA3E61, void>(_Unk0, _Unk1); }
	static int GET_ACTORENUM_MP_ANIM_SET_NAME(int _Unk0) { return Invoke<0x7D397CAA, int>(_Unk0); }
	static int GET_OBJECT_ATTACHED_TO(int _Unk0) { return Invoke<0x533475AE, int>(_Unk0); }
	static int NET_GET_GAMER_RGB_COLOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x97931B87, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int NET_IS_GAMER_RADAR_BLIP_VISIBLE(int _Unk0) { return Invoke<0xFE83A4FE, int>(_Unk0); }
	static void NET_OBJECT_SET_SCRIPT_INT(int _Unk0, int _Unk1) { Invoke<0x1C147E14, void>(_Unk0, _Unk1); }
	static void _0x1306549E(int _Unk0, int _Unk1) { Invoke<0x1306549E, void>(_Unk0, _Unk1); }
	static int NET_OBJECT_GET_SCRIPT_INT(int _Unk0) { return Invoke<0xCA6231C1, int>(_Unk0); }
	static void REMOVE_CAMERA_COLLISION_EXCLUSION(int _Unk0, int _Unk1) { Invoke<0x781D5599, void>(_Unk0, _Unk1); }
	static int IS_PHYSINST_READY(int _Unk0) { return Invoke<0xE83E6A41, int>(_Unk0); }
	static void SET_PROP_FIXED(int _Unk0, int _Unk1) { Invoke<0x7DBB277A, void>(_Unk0, _Unk1); }
	static int IS_ACTOR_JUMPING(int _Unk0) { return Invoke<0xDFF96719, int>(_Unk0); }
	static int IS_ACTOR_USING_COVER(int _Unk0) { return Invoke<0xD39C4A9E, int>(_Unk0); }
	static int GET_PLAYER_ZOOM_STATE(int _Unk0) { return Invoke<0xBC521A38, int>(_Unk0); }
	static int NET_OBJECT_LOCK_OWNERSHIP(int _Unk0, int _Unk1) { return Invoke<0x8C7E41E2, int>(_Unk0, _Unk1); }
	static int GET_EVENT_TYPE(int _Unk0) { return Invoke<0x6D660453, int>(_Unk0); }
	static int UI_ANIM_GET_TIME(int _Unk0) { return Invoke<0x7EB1ED99, int>(_Unk0); }
	static void UI_ANIM_SETUP(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xCBDE38C6, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void UI_ANIM_RESTART(int _Unk0) { Invoke<0x4068D2E4, void>(_Unk0); }
	static int NET_IS_SESSION_CLIENT() { return Invoke<0xFF65A07C, int>(); }
	static int SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xD52A28F0, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SCALE_VOLUME(int _Unk0, int _Unk1) { Invoke<0x14DCF1EF, void>(_Unk0, _Unk1); }
	static int GET_SLOT_FOR_HOST() { return Invoke<0x860FCDBD, int>(); }
	static int CREATE_OBJECT_ANIMATOR_ON_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x0D0A66B6, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int LINK_OBJECT_ANIMATOR_TO_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xBEDB066C, int>(_Unk0, _Unk1, _Unk2); }
	static void ADD_CAMERA_COLLISION_EXCLUSION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x5BBFA4D7, void>(_Unk0, _Unk1, _Unk2); }
	static void PRINT_SMALL_FORMAT(const char* _Text1, const char* _Text2, const char* _Text3, const char* _Text4, const char* _Text5, const char* _Text6, int _Unk0, bool _Unk1, int _Unk2) { Invoke<0xBBBDFF7C, void>(_Text1, _Text2, _Text3, _Text4, _Text5, _Text6, _Unk0, _Unk1, _Unk2); }
	static void _SET_ACTOR_INFINITE_AMMO(Actor _Actor, WeaponModel _WeaponModel, bool _Infinite) { Invoke<0x4FE2B586, void>(_Actor, _WeaponModel, _Infinite); }
	static Layout GET_EVENT_LAYOUT() { return Invoke<0xD938B523, Layout>(); }
	static int IS_EVENT_VALID(int _Unk0) { return Invoke<0x4911EB99, int>(_Unk0); }
	static int GET_OBJECT_FROM_EVENT(int _Unk0) { return Invoke<0xB64DDA6F, int>(_Unk0); }
	static int TRAIN_CREATE_NEW_TRAIN(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x8533AC9D, int>(_Unk0, _Unk1, _Unk2); }
	static void TRAIN_ADD_TRAIN_CAR_FROM_ENUM(int _Unk0, int _Unk1) { Invoke<0xA7A672FA, void>(_Unk0, _Unk1); }
	static int TRAIN_GET_CAR(int _Unk0, int _Unk1) { return Invoke<0x41EF2EED, int>(_Unk0, _Unk1); }
	static int CREATE_WORLD_SECTOR(int _Unk0, int _Unk1) { return Invoke<0xC94CC336, int>(_Unk0, _Unk1); }
	static int LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xC5E372BC, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_ATTACHMENT_LOCAL_OFFSET(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD4A54348, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x5F4DEC49, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void TASK_GO_NEAR_ACTORSET(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xF7B01E74, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_DEACTIVATE_AND_RESET_ACTORS(int _Unk0) { return Invoke<0xA9F5CDCB, int>(_Unk0); }
	static void TRAIN_ENABLE_VISUAL_DEBUG(int _Unk0) { Invoke<0x4DF9283F, void>(_Unk0); }
	static void DESTROY_LAYOUT_OBJECTS(int _Unk0) { Invoke<0x28A2A4CC, void>(_Unk0); }
	static void UI_HIDE(const char* uiLayer) { Invoke<0x7508E7F3, void>(uiLayer); }
	static void UI_SHOW(const char* uiLayer) { Invoke<0xD1D1D467, void>(uiLayer); }
	static void UI_LABEL_SET_TEXT(int _Unk0, int _Unk1) { Invoke<0xB3FC8CB7, void>(_Unk0, _Unk1); }
	static void _SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(int _Unk0, int _Unk1) { Invoke<0x5AEA32D1, void>(_Unk0, _Unk1); }
	static void _SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x175BE678, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void _SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0xB4D9B233, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void SQUAD_FLOCK_ADD_EXTERNAL_VELOCITY_MATCH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xE8B7AA08, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x895AA97B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6770774F, void>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_COMPUTE_CENTROID(int _Unk0, int _Unk1) { return Invoke<0x142D9F3A, int>(_Unk0, _Unk1); }
	static int GET_NUM_PATH_POINTS(int _Unk0) { return Invoke<0xBD374C00, int>(_Unk0); }
	static void GET_PATH_POINT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x415F635C, void>(_Unk0, _Unk1, _Unk2); }
	static void AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(int _Unk0, int _Unk1) { Invoke<0x29D07F70, void>(_Unk0, _Unk1); }
	static void SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x224CFE5B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void GATEWAY_SET_ACTOR(int _Unk0, int _Unk1) { Invoke<0x26D24123, void>(_Unk0, _Unk1); }
	static void GRINGO_ENABLE_TYPE(int _Unk0) { Invoke<0xCB58D301, void>(_Unk0); }
	static void TRAIN_RELEASE_TRAIN(int _Unk0, int _Unk1) { Invoke<0x87082991, void>(_Unk0, _Unk1); }
	static void TRAIN_DESTROY_TRAIN(int _Unk0) { Invoke<0x74CECEB3, void>(_Unk0); }
	static int TRAIN_GET_NUM_CARS(int _Unk0) { return Invoke<0xFB2F9989, int>(_Unk0); }
	static int NET_OBJECT_GET_REPLICATION_MODE(int _Unk0) { return Invoke<0x138F38AC, int>(_Unk0); }
	static void TASK_POINT_GUN_AT_COORD(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xAD3729AD, void>(_Unk0, _Unk1, _Unk2); }
	static bool ACTOR_HAS_ANIM_SET(Actor _Actor, const char* _AnimSet) { return Invoke<0x31F5F57D, bool>(_Actor, _AnimSet); }
	static void CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int _Unk0, int _Unk1) { Invoke<0xEF639583, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_STUCK_STATE(int _Unk0) { return Invoke<0x7B4F9EAC, int>(_Unk0); }
	static void NET_GAMER_SET_TEAM(int _Unk0, int _Unk1) { Invoke<0xE79F6CD4, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_CONTROL_CONFIG(int _Unk0, int _Unk1) { Invoke<0x01B84BCA, void>(_Unk0, _Unk1); }
	static void SET_FORCE_PLAYER_AIM_MODE(int _Unk0, int _Unk1) { Invoke<0x1CFAF2EA, void>(_Unk0, _Unk1); }
	static void PPP_UNLOAD_PRESET(const char* _Preset) { Invoke<0xB6CA7EBF, void>(_Preset); }
	static void NET_GAMER_ICON_FORCE_VISIBILITY(int _Unk0, int _Unk1) { Invoke<0x160E79C6, void>(_Unk0, _Unk1); }
	static void PPP_LOAD_PRESET(const char* _Preset) { Invoke<0x6E946AF8, void>(_Preset); }
	static int CREATE_POINT_LIGHT_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xF9CC7F63, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void UI_SUPPRESS(char* uiLayer) { Invoke<0x182EC44A, void>(uiLayer); }
	static int GET_PATH_NUM_POINTS(int _Unk0) { return Invoke<0x42A4CCD5, int>(_Unk0); }
	static void GRINGO_DISABLE_TYPE(int _Unk0) { Invoke<0xCB91CC6E, void>(_Unk0); }
	static void SET_INFINITE_MASS_VS_MOVERS(int _Unk0, int _Unk1) { Invoke<0xFD759593, void>(_Unk0, _Unk1); }
	static void SET_BOAT_EXTRA_STEER(int _Unk0, int _Unk1) { Invoke<0x6BB8BCFB, void>(_Unk0, _Unk1); }
	static void SET_PATH_LOOPING(int _Unk0, int _Unk1) { Invoke<0x44930268, void>(_Unk0, _Unk1); }
	static void HUD_SET_SHOOT_BLIP_MAX_DISTANCE(int _Unk0) { Invoke<0x4FCE7B9D, void>(_Unk0); }
	static void AUDIO_CLEAR_CONVERSATION_HISTORY() { Invoke<0xDD0320CB, void>(); }
	static void SET_DAMAGE_SCALE_ENABLE(int _Unk0, int _Unk1) { Invoke<0xDA0CDC91, void>(_Unk0, _Unk1); }
	static void TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(int _Unk0, int _Unk1) { Invoke<0x96F3BD31, void>(_Unk0, _Unk1); }
	static void SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBC44D31D, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_VEHICLE_EJECTION_ENABLED(int _Unk0, int _Unk1) { Invoke<0x0ABD83C0, void>(_Unk0, _Unk1); }
	static void NET_CREATE_FRIEND_SCORE_READER(int _Unk0) { Invoke<0x2B8F86ED, void>(_Unk0); }
	static int NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(int _Unk0) { return Invoke<0x794F5C21, int>(_Unk0); }
	static int NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(int _Unk0, int _Unk1) { return Invoke<0xC673362C, int>(_Unk0, _Unk1); }
	static int NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(int _Unk0) { return Invoke<0xC09ACD5C, int>(_Unk0); }
	static int NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(int _Unk0) { return Invoke<0x95A543E2, int>(_Unk0); }
	static void NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(int _Unk0) { Invoke<0xBD42097A, void>(_Unk0); }
	static int NET_PLAYER_LIST_ADD_ITEM(const char* _Unk0, int _Unk1) { return Invoke<0xFD355ED1, int>(_Unk0, _Unk1); }
	static int NET_PLAYER_LIST_ADD_GAMER_SLOT(int _Unk0, int _Unk1) { return Invoke<0x805AC16A, int>(_Unk0, _Unk1); }
	static void NET_PLAYER_LIST_RESET() { Invoke<0x67031EDA, void>(); }
	static void NET_PLAYER_LIST_SET_TEMPLATE(int _Unk0) { Invoke<0xD6111569, void>(_Unk0); }
	static void NET_PLAYER_LIST_SET_HIGHLIGHT(int _Unk0) { Invoke<0x0AAE9E6B, void>(_Unk0); }
	static int NET_GET_LOCAL_GAMER_RANK() { return Invoke<0x4F652A00, int>(); }
	static int NET_GET_NEAREST_FRIEND_RANK() { return Invoke<0xFC564903, int>(); }
	static void _0xD7572C68(int _Unk0) { Invoke<0xD7572C68, void>(_Unk0); }
	static int NET_GET_NEAREST_FRIEND_NAME() { return Invoke<0x76F09F04, int>(); }
	static void NET_GET_LOCAL_GAMER_SCORE_INFO(int _Unk0) { Invoke<0x87A3A38D, void>(_Unk0); }
	static int NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(int _Unk0, int _Unk1) { return Invoke<0xEC6F465F, int>(_Unk0, _Unk1); }
	static void NET_PLAYER_LIST_SET_CURRENT_ITEM(int _Unk0) { Invoke<0x98FC68AF, void>(_Unk0); }
	static void NET_PLAYER_LIST_SET_TEAM_SORT(bool disable) { Invoke<0xA56B459C, void>(disable); }
	static void NET_PLAYER_LIST_SET_TOP_TEAM(int _Unk0) { Invoke<0x20B684AB, void>(_Unk0); }
	static void NET_PLAYER_LIST_SET_HEADER(int _Unk0, int _Unk1) { Invoke<0xFA382FCB, void>(_Unk0, _Unk1); }
	static void NET_PLAYER_LIST_SET_TITLE(int _Unk0) { Invoke<0x0547A660, void>(_Unk0); }
	static void NET_PLAYER_LIST_SET_DESCRIPTION(const char* _Unk0) { Invoke<0xCF065186, void>(_Unk0); }
	static void NET_PLAYER_LIST_TIMER_SET(int _Unk0) { Invoke<0xBE7965C8, void>(_Unk0); }
	static void NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(int _Unk0) { Invoke<0xD4C7E0D5, void>(_Unk0); }
	static int PLAY_SOUND_FROM_OBJECT(int _Unk0, int _Unk1) { return Invoke<0x6A515A49, int>(_Unk0, _Unk1); }
	static void RELEASE_SOUND_ID(int _Unk0) { Invoke<0x9C080899, void>(_Unk0); }
	static Object CREATE_MP_TEXT(Object Prop, const char* UnkNullStr, const char* GXTTextToDisplay, Vector3 Position, Vector3 Rotation, bool MaybeIsStringLiteral) { return Invoke<0x5BF5A39C, Object>(Prop, UnkNullStr, GXTTextToDisplay, Position, Rotation, MaybeIsStringLiteral); }
	static void UI_REGISTER_STREAMING_TEXTURE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x1F9EE9E1, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_ACTORENUM_AVATAR_GROUP(int _Unk0) { return Invoke<0x6AFF3122, int>(_Unk0); }
	static void INIT_NATIVE_ACTORENUM_DLC_PLAYER(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x1904CC1D, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void REPLACE_WORLD_SECTOR_LOAD_BOUNDING_BOX(int _Unk0) { Invoke<0x08D06543, void>(_Unk0); }
	static void SET_SECTOR_PROPS_SUPER_LOCKED(int _Unk0, int _Unk1) { Invoke<0xED3ADF67, void>(_Unk0, _Unk1); }
	static void NET_PLAYER_LIST_SET_TEAM_SCORE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x84CD0651, void>(_Unk0, _Unk1, _Unk2); }
	static int RESET_RMPTFX_ALL() { return Invoke<0x0AFC0B99, int>(); }
	static int IS_DOOR_CLOSING(int _Unk0) { return Invoke<0xCBA9F32C, int>(_Unk0); }
	static int IS_DOOR_CLOSED(int _Unk0) { return Invoke<0x48659CD7, int>(_Unk0); }
	static int IS_DOOR_OPENING(int _Unk0) { return Invoke<0x52BB0836, int>(_Unk0); }
	static void CLOSE_DOOR(int _Unk0, int _Unk1) { Invoke<0x075B1736, void>(_Unk0, _Unk1); }
	static void TRAIN_SET_PARTICLE_EFFECTS_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x7CFD539A, void>(_Unk0, _Unk1, _Unk2); }
	static int SET_DUST_LEVEL(int _Unk0) { return Invoke<0xE92C3435, int>(_Unk0); }
	static void UI_MESSAGEBOX_SET_DESCRIPTION(const char* ui_id, const char* new_text) { Invoke<0x591339B9, void>(ui_id, new_text); }
	static void TOGGLE_JOURNAL_UI(int _Unk0, int _Unk1) { Invoke<0xE6726EF4, void>(_Unk0, _Unk1); }
	static void DLC_REPLACE_EXISTING_ANIM_SET(int _Unk0) { Invoke<0xB1B643E0, void>(_Unk0); }
	static void ADDSHADER(int _Unk0, int _Unk1) { Invoke<0xA0AE0C98, void>(_Unk0, _Unk1); }
	static void LOAD_PTFX_DLC_ASSETS(int _Unk0) { Invoke<0x48123591, void>(_Unk0); }
	static void _0xC741F051(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0xC741F051, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void HUD_FADE_TO_LOADING_SCREEN() { Invoke<0xB0B4296A, void>(); }
	static void NET_TICKER_CLEAR() { Invoke<0x8A1D83F2, void>(); }
	static int IS_POINT_LIGHT_VALID(int _Unk0) { return Invoke<0x44C07DA5, int>(_Unk0); }
	static int ATAN_DEGREE(int _Unk0) { return Invoke<0x69BE2817, int>(_Unk0); }
	static int AI_GET_ACTOR_CONVERSATION_TARGET(int _Unk0) { return Invoke<0xD8C8BEA1, int>(_Unk0); }
	static int AI_IS_ACTOR_SOCIALIZING(int _Unk0) { return Invoke<0x679C5955, int>(_Unk0); }
	static int GET_OBJECT_NAMED_BONE_ORIENTATION(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xCAD543AD, int>(_Unk0, _Unk1, _Unk2); }
	static void INIT_CAMERA_FROM_CHANNEL(int _Unk0, int _Unk1) { Invoke<0x41EA7325, void>(_Unk0, _Unk1); }
	static int GAME_INSTANCE_SET_REGION(int _Unk0, int _Unk1) { return Invoke<0x85049505, int>(_Unk0, _Unk1); }
	static void UI_TEXTURE_SET_NAME(int _Unk0, int _Unk1) { Invoke<0x9A56C3F3, void>(_Unk0, _Unk1); }
	static int NET_SCRIPT_GET_NUM_PARTICIPANTS() { return Invoke<0xD9965A9A, int>(); }
	static void PLAYSTAT_MP_DEED_COMPLETE_EX(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4585821E, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void NET_UNREGISTER_AS_NET_SCRIPT() { Invoke<0x4238C471, void>(); }
	static void SET_BLIP_VISIBLE(Blip _Blip, bool _Visible) { Invoke<0x9318D3D2, void>(_Blip, _Visible); }
	static void NET_ALLOW_PLAYERS_TO_JOIN(int _Unk0) { Invoke<0x408E28E2, void>(_Unk0); }
	static int NET_IS_PLAYER_PARTICIPANT(int _Unk0) { return Invoke<0x110A9B2F, int>(_Unk0); }
	static void SET_FACTION_IS_LAWFUL_TO_ATTACK(int _Unk0, int _Unk1) { Invoke<0xDCB960C5, void>(_Unk0, _Unk1); }
	static void MARK_REGION_READY(int _Unk0) { Invoke<0x276A420B, void>(_Unk0); }
	static void TASK_ANIMAL_PATROL(int _Unk0, int _Unk1) { Invoke<0xF54E4D45, void>(_Unk0, _Unk1); }
	static void PLAYSTAT_MP_DEED_START(int _Unk0) { Invoke<0x27A00456, void>(_Unk0); }
	static void _0x5C4CAE3A(int _Unk0) { Invoke<0x5C4CAE3A, void>(_Unk0); }
	static int NET_GET_HOST_OF_THIS_SCRIPT() { return Invoke<0x9272C3BA, int>(); }
	static int NET_GET_GAMER_POSSE_SIZE(int _Unk0) { return Invoke<0xB6006EA9, int>(_Unk0); }
	static int NET_GET_SCRIPT_STATUS() { return Invoke<0x667DA125, int>(); }
	static void NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(int _Unk0) { Invoke<0xEE3B79EE, void>(_Unk0); }
	static void _0x4897DD37(int _Unk0) { Invoke<0x4897DD37, void>(_Unk0); }
	static int IS_SOUND_ID_VALID(int _Unk0) { return Invoke<0xE1D265FA, int>(_Unk0); }
	static void REMOVE_ALL_PICKUPS() { Invoke<0x04BF00F0, void>(); }
	static int GET_SOUND_ID() { return Invoke<0x6AE0AD56, int>(); }
	static void PLAY_SOUND_FRONTEND_PERSISTENT(int _Unk0, int _Unk1) { Invoke<0xB157BBB4, void>(_Unk0, _Unk1); }
	static void AT_FIRED_LAST(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x013A0D25, void>(_Unk0, _Unk1, _Unk2); }
	static void _SET_MELEE_MARKER_SIZE(int _Unk0) { Invoke<0x1182C34F, void>(_Unk0); }
	static void _SET_MELEE_MARKER_COLOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD0FB6AF0, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void UI_LABEL_SET_VALUE(int _Unk0, int _Unk1) { Invoke<0xDF50D8DE, void>(_Unk0, _Unk1); }
	static int FLASH_SET_INT(const char* scaleformName, const char* scaleformVarName, int value) { return Invoke<0x4778A580, int>(scaleformName, scaleformVarName, value); }
	static int IS_OBJECT_ANIMATOR_READY(int _Unk0) { return Invoke<0x554CF528, int>(_Unk0); }
	static int SET_OBJECT_ANIMATOR_NODE(int _Unk0, int _Unk1) { return Invoke<0xB9D7B63B, int>(_Unk0, _Unk1); }
	static void _SET_MELEE_MARKER_STROBE_INTENSITY(int _Unk0) { Invoke<0xC00F8181, void>(_Unk0); }
	static int CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(int _Unk0) { return Invoke<0x0A776763, int>(_Unk0); }
	static int FIRE_ARE_ANY_FLAMES_IN_VOLUME(int _Unk0) { return Invoke<0x28DAED2A, int>(_Unk0); }
	static void END_SCRIPTED_REQUEST(int _Unk0) { Invoke<0x1958F478, void>(_Unk0); }
	static void NET_GAMER_ICON_FORCE_TEXT_VISIBLE(int _Unk0) { Invoke<0xE783219A, void>(_Unk0); }
	static void RENDERING_ENABLE_CHARACTER_CLIPPING(int _Unk0) { Invoke<0x6AF07F86, void>(_Unk0); }
	static void SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(int _Unk0, int _Unk1) { Invoke<0xCE7CE46D, void>(_Unk0, _Unk1); }
	static void AUDIO_MG_STOP() { Invoke<0xEA2B35DB, void>(); }
	static void UI_HIDE_PROMPT(int _Unk0) { Invoke<0x545EC471, void>(_Unk0); }
	static void ACTOR_FORCE_NEXT_UPDATE(int _Unk0) { Invoke<0x5C7F63E3, void>(_Unk0); }
	static void SET_AUTO_CONVERSATION_LOOK(int _Unk0, int _Unk1) { Invoke<0xA29B9458, void>(_Unk0, _Unk1); }
	static int GRINGO_GET_USE_COMPONENT_EXT(int _Unk0, int _Unk1) { return Invoke<0xECD4F604, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xDD807723, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_GET_INDEXED_CHILD_COMPONENT(int _Unk0, int _Unk1) { return Invoke<0xAD313D88, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_PROP_FROM_COMPONENT_EXT(int _Unk0, int _Unk1) { return Invoke<0x9AD6D5B1, int>(_Unk0, _Unk1); }
	static int IS_PROCESSING_CAMERA_SHOT_TRANSITION(int _Unk0) { return Invoke<0xDDB64AA9, int>(_Unk0); }
	static void END_CURRENT_CAMERA_SHOT_TRANSITION(int _Unk0) { Invoke<0x01C1F583, void>(_Unk0); }
	static void AUDIO_RESET_SPEECH_HISTORY() { Invoke<0x7D95325E, void>(); }
	static int CREATE_OBJECT_LOCATOR(int _Unk0, int _Unk1) { return Invoke<0x11069324, int>(_Unk0, _Unk1); }
	static int OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xE25F407D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void REMOVE_ALL_OBJECT_ATTACHMENTS(int _Unk0) { Invoke<0x8FB32562, void>(_Unk0); }
	static void NET_GAMER_SET_ACTOR_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0x77D6ABF5, void>(_Unk0, _Unk1); }
	static int CAMERA_GET_CURRENT_TRANSITION_TYPE(int _Unk0) { return Invoke<0xE55B5ADB, int>(_Unk0); }
	static void UI_SET_PROMPT_STRING(int _Unk0, int _Unk1) { Invoke<0xFA0CF208, void>(_Unk0, _Unk1); }
	static int FLASH_SET_ARRAY_STRING_FORMATTED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0xE39B92B7, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void UI_SET_PROMPT_ICON(int _Unk0, int _Unk1) { Invoke<0xA77E0DDF, void>(_Unk0, _Unk1); }
	static int SET_CURRENT_MINIGAME_INT(int _Unk0, int _Unk1) { return Invoke<0x0627DDEC, int>(_Unk0, _Unk1); }
	static int NET_GET_GAMER_HEX_COLOR(int _Unk0, int _Unk1) { return Invoke<0x9BC05C90, int>(_Unk0, _Unk1); }
	static int SET_PANIM_PHASE(int _Unk0, int _Unk1) { return Invoke<0x94431F5A, int>(_Unk0, _Unk1); }
	static int FLASH_SET_STRING(const char* scaleformName, const char* scaleformVarName, int _Unk2, int _Unk3) { return Invoke<0x9E31EEA7, int>(scaleformName, scaleformVarName, _Unk2, _Unk3); }
	static int CREATE_CAMERASHOT_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0x54A417F3, int>(_Unk0, _Unk1); }
	static void SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(int _Unk0, int _Unk1) { Invoke<0xEF0AB304, void>(_Unk0, _Unk1); }
	static int ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x6E10E587, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xBF9B4FC6, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_CENTER_OF_GRAVITY(int _Unk0, int _Unk1) { return Invoke<0x31940E4C, int>(_Unk0, _Unk1); }
	static void HIDE_PHYSINST(int _Unk0) { Invoke<0x0D6BFDD9, void>(_Unk0); }
	static int HUD_SET_MINIGAME_TYPE_LAYOUT(int _Unk0) { return Invoke<0xD12802AF, int>(_Unk0); }
	static void AUDIO_MG_START() { Invoke<0xB3C3FF5E, void>(); }
	static int _IS_CLIENT_DATA_VALID_FOR_SLOT_2(int _Unk0, int _Unk1) { return Invoke<0x64C2DD40, int>(_Unk0, _Unk1); }
	static int NET_GET_POSSE_LEADER_SLOT() { return Invoke<0x0D914C89, int>(); }
	static int IS_ACTORENUM_INSTALLED(int _Unk0) { return Invoke<0x9B903F45, int>(_Unk0); }
	static void RESET_PROPS_IN_VOLUME(int _Unk0, int _Unk1) { Invoke<0xCF1B9B11, void>(_Unk0, _Unk1); }
	static int NET_IS_POSSE_LEADER() { return Invoke<0x1CAD6D29, int>(); }
	static int NET_GET_POSSE_COUNT() { return Invoke<0xC4F9DA6E, int>(); }
	static void END_CURRENT_MINIGAME() { Invoke<0xCA746CD2, void>(); }
	static void START_MINIGAME(int _Unk0) { Invoke<0xE8184916, void>(_Unk0); }
	static int IS_LOCAL_PLAYER(int _Unk0) { return Invoke<0x40EF1003, int>(_Unk0); }
	static void SET_ACTOR_ALLOW_DISMOUNT(int _Unk0, int _Unk1) { Invoke<0xC550644A, void>(_Unk0, _Unk1); }
	static void UI_DEACTIVATE(const char* _Unk0) { Invoke<0xCA35BB5E, void>(_Unk0); }
	static int _0x1A59E608(int _Unk0) { return Invoke<0x1A59E608, int>(_Unk0); }
	static void NET_SCOREGRAPH_CLEAR_MARKERS() { Invoke<0xA3AE09EF, void>(); }
	static void NET_SCOREGRAPH_SETUP(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x27D40FD1, void>(_Unk0, _Unk1, _Unk2); }
	static void NET_SCOREGRAPH_ADD_PLAYER_LABEL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xB4C867BD, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool IS_ACTOR_SHOOTING(Actor Actor) { return Invoke<0x4B441DC4, bool>(Actor); }
	static int IS_ACTOR_THROWING(int _Unk0) { return Invoke<0x886BD8AD, int>(_Unk0); }
	static void SET_EQUIP_SLOT_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE6604B39, void>(_Unk0, _Unk1, _Unk2); }
	static int COPY_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x122C916E, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int OBJECT_ITERATOR_PREV(int _Unk0) { return Invoke<0x91A3A831, int>(_Unk0); }
	static int _0x276EFF8E(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x276EFF8E, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void _UI_SET_AUTO_EXIT_TIME(int _Unk0, int _Unk1) { Invoke<0xD792B93B, void>(_Unk0, _Unk1); }
	static void SET_CAMERA_TARGETDOF_USING_SOFT_DOF(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x7F1C5102, void>(_Unk0, _Unk1, _Unk2); }
	static void EVENT_TRAP_ON_TARGET(int _Unk0, int _Unk1) { Invoke<0x0AA5D947, void>(_Unk0, _Unk1); }
	static void ACTOR_DISCARD_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel) { Invoke<0xEEC81873, void>(_Actor, _WeaponModel); }
	static int ZOMBIE_DLC_LOAD_ASSETS() { return Invoke<0x4A8066FB, int>(); }
	static void SS_UNFINALIZE() { Invoke<0xBEDF7AA8, void>(); }
	static int SS_REGISTER(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFD717A47, int>(_Unk0, _Unk1, _Unk2); }
	static void SS_FINALIZE() { Invoke<0xEC1E8210, void>(); }
	static void AI_REPLACE_ALL_TR(int _Unk0) { Invoke<0x06B4A139, void>(_Unk0); }
	static void VERIFY_FACTION_ENUM(int _Unk0, int _Unk1) { Invoke<0x22424394, void>(_Unk0, _Unk1); }
	static void RESIZE_ACTOR_SET() { Invoke<0x83E043A6, void>(); }
	static void SET_WEATHER_POP_DENSITY(int _Unk0, int _Unk1) { Invoke<0x03CD9C87, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_ZOMBIE_FAST_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0x39F5EF0F, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_ZOMBIE_TOXIC_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0xD6CC6907, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_ZOMBIE_BRUISER_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0x9D886C2F, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_ZOMBIE_MP_PLAYER_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0x714D5D09, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_ZOMBIE_MP_FEMALE_VALUE(int _Unk0) { Invoke<0xBF959948, void>(_Unk0); }
	static void AUDIO_INIT_FAC_ZOMBIE_VALUE(int _Unk0) { Invoke<0x3C163FDD, void>(_Unk0); }
	static void AUDIO_INIT_NUN_AE_RANGE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x67770F4B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_BOOL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x651ACCB1, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x20AD711E, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_FLOCK_SET_PARAMETER(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xBF12100D, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_REL_SET_PREDATOR_AND_PREY(int _Unk0, int _Unk1) { Invoke<0x84B474ED, void>(_Unk0, _Unk1); }
	static void ANIMAL_SPECIES_FLOCK_SET_BOOLEAN_PARAMETER(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x7C795382, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_FLOCK_SET_ENABLED(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4DF576A7, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_TUNING_MOVE_SET_ATTRIB(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x10CC05F1, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_INIT_BEGIN(int _Unk0) { Invoke<0xE228CC1A, void>(_Unk0); }
	static void ANIMAL_SPECIES_INIT_REGISTER(int _Unk0, int _Unk1) { Invoke<0xED6240F0, void>(_Unk0, _Unk1); }
	static void ANIMAL_SPECIES_INIT_END() { Invoke<0x00760C27, void>(); }
	static void ANIMAL_SPECIES_FLOCK_AND_TUNING_CLEAR_ALL() { Invoke<0x5EFB415E, void>(); }
	static void ANIMAL_SPECIES_REL_CLEAR_ALL() { Invoke<0x98073A48, void>(); }
	static void ANIMAL_SPECIES_TUNING_SET_ATTACHMENT_WITH_OFFSET(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0xA6A4651B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void ANIMAL_SPECIES_REL_SET_EAT_GRINGO(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xB5A63B67, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_CAN_WARN(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0482DD4E, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_THREAT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9D5C43C9, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_ADD_EXTERNAL_INFLUENCE_FLOCK_REASONER(int _Unk0, int _Unk1) { Invoke<0x9D8C2744, void>(_Unk0, _Unk1); }
	static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT_FROM_TIME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x96B26945, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_ADD_EXTERNAL_REPULSION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x4217D912, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_REL_SET_AVOID(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBF8B1BD7, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_ADD_EXTERNAL_RANDOM_NOISE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x784C514C, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_SET_SPECIAL_USE_GRINGO(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x11DCCDAA, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ANIMAL_SPECIES_TUNING_SET_HUNTING_PREY_PROP(int _Unk0, int _Unk1) { Invoke<0xD05DDBB6, void>(_Unk0, _Unk1); }
	static void ANIMAL_SPECIES_REL_SET_ATTACK_GRAB_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1E02527F, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_PLAY_GROWL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x70DE500E, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_PLAY_SNIFF(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6606A669, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_PLAY_HUNT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x3F747178, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_PLAY_CHASE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x586904BD, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_REL_SET_PLAY_BEG(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x70C48A1C, void>(_Unk0, _Unk1, _Unk2); }
	static void ANIMAL_SPECIES_SET_UNALERTED_BEHAVIOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x6B6191EE, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_TUNING_SET_ATTACHMENT_WITH_CHILDBONE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x168AAB9B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ANIMAL_SPECIES_NEEDS_DOMESTICATION_LEVELS(int _Unk0) { Invoke<0x1FD8BA91, void>(_Unk0); }
	static void INIT_NATIVE_ACTORENUM_DLC_HUMAN(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x1957B498, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_HUMAN(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x88FD9623, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_ANIMAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x192973A0, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x463F75F8, void>(_Unk0, _Unk1, _Unk2); }
	static void COMBAT_CLASS_SERVER_SET_SCRIPT(int _Unk0) { Invoke<0xAD3877AF, void>(_Unk0); }
	static void RELOAD_FACTIONS(int _Unk0) { Invoke<0x40ABFD17, void>(_Unk0); }
	static void AUDIO_INIT_ZOMBIE_PACK_INFO() { Invoke<0x0079FD0F, void>(); }
	static void SET_VEHICLE_APPOINTMENT_TARGET() { Invoke<0xDCAE6935, void>(); }
	static int SET_PROP_REMAP(int _Unk0, int _Unk1) { return Invoke<0x4BCFADB1, int>(_Unk0, _Unk1); }
	static void AI_SWAP_NAV_DATA(int _Unk0) { Invoke<0xF435CCDE, void>(_Unk0); }
	static void AUDIO_INIT_ZOMBIE_ZONE() { Invoke<0x39EF8DA7, void>(); }
	static void SET_ZOMBIE_TARGET_MODE(int _Unk0) { Invoke<0x8BE2D8B0, void>(_Unk0); }
	static void UI_ADDICON(int _Unk0, int _Unk1) { Invoke<0x724B4E9B, void>(_Unk0, _Unk1); }
	static int REMOVE_ASSET(int _Unk0, int _Unk1) { return Invoke<0xE7829D28, int>(_Unk0, _Unk1); }
	static void INIT_NATIVE_ACTORENUM_DLC_RIDEABLE_ANIMAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x10BD98C9, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_RIDEABLE_ANIMAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4D42E285, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_FLYING_ANIMAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xE694F53A, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool COMBAT_CLASS_REQUEST_EXISTS() { return Invoke<0x629E2E88, bool>(); }
	static int COMBAT_CLASS_REQUEST_GET_ACTOR() { return Invoke<0x0EDD5D43, int>(); }
	static void COMBAT_CLASS_REQUEST_COMPLETED() { Invoke<0xE66AD206, void>(); }
	static void SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(int _Unk0, int _Unk1) { Invoke<0xBAF9D599, void>(_Unk0, _Unk1); }
	static void AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x5D752432, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_SEX(int _Unk0, int _Unk1) { Invoke<0x9C42B7A2, void>(_Unk0, _Unk1); }
	static void AI_SET_TR_PROGRAM_FOR_ACTOR(int _Unk0, int _Unk1) { Invoke<0x4D53AC21, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(Actor _Actor, const char* _BoneName) { Invoke<0x12A86E9D, void>(_Actor, _BoneName); }
	static void SET_ACTOR_HARD_LOCK_AQUIRE_BONE(Actor _Actor, const char* _BoneName) { Invoke<0x5613615B, void>(_Actor, _BoneName); }
	static int COMBAT_CLASS_REQUEST_GET_ENUM_INT() { return Invoke<0x76478D6E, int>(); }
	static bool FIRE_IS_HANDLE_VALID(FireHandle _FireHandle) { return Invoke<0xA488E930, bool>(_FireHandle); }
	static void FIRE_CREATE_ON_ACTOR(FireHandle _FireHandle, Actor _Actor) { Invoke<0x9679CF84, void>(_FireHandle, _Actor); }
	static void TURN_ACTOR_INTO_ZOMBIE(Actor _Actor, bool _Toggle) { Invoke<0x39928706, void>(_Actor, _Toggle); }
	static int ADD_ZOMBIE_TO_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1EE7153B, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_WEAPONENUM_FOR_AMMOENUM(int _Unk0, int _Unk1) { return Invoke<0xA8F64D32, int>(_Unk0, _Unk1); }
	static float ACTOR_GET_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x43DEDFAE, float>(_Actor, _WeaponModel); }
	static void AI_SHOOT_TARGET_SET_BONE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x47C2C7B0, void>(_Unk0, _Unk1, _Unk2); }
	static void TASK_USE_TURRET_AGAINST_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x49EC6A04, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int ANIMAL_ACTOR_GET_DOMESTICATION(int _Unk0) { return Invoke<0xCE23118D, int>(_Unk0); }
	static int _0x2A902148(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0x2A902148, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void AI_GLOBAL_CLEAR_DANGER(int _Unk0) { Invoke<0xB6FCFFAA, void>(_Unk0); }
	static void SET_DOOR_LOCK_VISIBLE(int _Unk0, int _Unk1) { Invoke<0x468DDDB3, void>(_Unk0, _Unk1); }
	static int HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(int _Unk0) { return Invoke<0x5DE07F18, int>(_Unk0); }
	static int SET_CURRENT_MAP(int _Unk0) { return Invoke<0x014C7C29, int>(_Unk0); }
	static bool IS_GRAVESTONE_SECTOR_READY() { return Invoke<0xF62EE158, bool>(); }
	static void SET_CURRENT_GRAVESTONE_SECTOR(int _Unk0) { Invoke<0x449D4A89, void>(_Unk0); }
	static int CREATE_GRAVESTONE_TEXT_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xAEC955F8, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int HORSE_ADD_REPULSION_EXCLUSION_VOLUME(int _Unk0) { return Invoke<0x28FCBDF2, int>(_Unk0); }
	static void ALLOW_TUMBLEWEEDS(int _Unk0) { Invoke<0xFDE8DFCE, void>(_Unk0); }
	static void UI_SET_ICON(int _Unk0, int _Unk1) { Invoke<0x191BA4DF, void>(_Unk0, _Unk1); }
	static void UI_SET_PROGRESS_BAR_CHANGE(int _Unk0, int _Unk1) { Invoke<0xDF4627D1, void>(_Unk0, _Unk1); }
	static void AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(int _Unk0) { Invoke<0xDC330FB9, void>(_Unk0); }
	static int DECOR_GET_BOOL_VERBOSE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x9AC89564, int>(_Unk0, _Unk1, _Unk2); }
	static bool CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() { return Invoke<0xA61FA36B, bool>(); }
	static int IS_POSITION_INDOORS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1E81DB60, int>(_Unk0, _Unk1, _Unk2); }
	static void ADD_TIME_USING_TIME_OF_DAY(int _Unk0, int _Unk1) { Invoke<0x2F7CB0E3, void>(_Unk0, _Unk1); }
	static void SAY_SINGLE_LINE_STRING_WITH_BACKUPS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x955E5EEB, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static void RESET_TREE_TYPE_CLEARING() { Invoke<0x59A7835E, void>(); }
	static int CONVERT_TIME_OF_DAY_TO_INT(int _Unk0) { return Invoke<0x57FC0E16, int>(_Unk0); }
	static int IS_PHYSINST_IN_LEVEL(int _Unk0) { return Invoke<0x6243A6AF, int>(_Unk0); }
	static int GET_JOURNAL_ENTRY_NUM_DETAILS(int _Unk0) { return Invoke<0xCF3A69FC, int>(_Unk0); }
	static int GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(int _Unk0, int _Unk1) { return Invoke<0x1630EFC5, int>(_Unk0, _Unk1); }
	static void SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x5209C0C0, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ENABLE_MOVER(Actor _Actor) { Invoke<0xE29F0A39, void>(_Actor); }
	static int _0x7246F438(int _Unk0) { return Invoke<0x7246F438, int>(_Unk0); }
	static int DECOR_GET_STRING_HASH(int _Unk0, int _Unk1) { return Invoke<0x6A0FE2A0, int>(_Unk0, _Unk1); }
	static int CUTSCENE_MANAGER_GET_CURRENT_TIME() { return Invoke<0xAC5043C5, int>(); }
	static void CUTSCENE_MANAGER_STOP_CUTSCENE(int _Unk0, int _Unk1) { Invoke<0x9E6CAD1D, void>(_Unk0, _Unk1); }
	static void SUSPEND_MOVER(Actor _Actor) { Invoke<0x017D270E, void>(_Actor); }
	static void SET_CURVE_ACTIVE(int _Unk0, int _Unk1) { Invoke<0x74460602, void>(_Unk0, _Unk1); }
	static void RELEASE_CONSTRAINT(int _Unk0) { Invoke<0x8B9659EF, void>(_Unk0); }
	static void SET_BRIDGE_STIFFNESS(int _Unk0, int _Unk1) { Invoke<0x987FD4F6, void>(_Unk0, _Unk1); }
	static int ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x4A05AA7D, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SET_SLEEP_TOLERANCE(int _Unk0, int _Unk1) { Invoke<0x750ADBE5, void>(_Unk0, _Unk1); }
	static int CREATE_ROPE_FOR_BRIDGE_LEFT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xC039BBF1, int>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_ROPE_FOR_BRIDGE_RIGHT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x51CF9A54, int>(_Unk0, _Unk1, _Unk2); }
	static bool GET_OBJECT_RELATIVE_OFFSET(Object _Object, Vector3* _Input, int _Unused, Vector3* _Output) { return Invoke<0x15CDF203, bool>(_Object, _Input, _Unused, _Output); }
	static void AI_SET_ALLOW_HOSTILE_ATTACK_AI(int _Unk0) { Invoke<0xBE17EB88, void>(_Unk0); }
	static void AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(int _Unk0) { Invoke<0xABC78721, void>(_Unk0); }
	static int GRINGO_QUERY_STRUCT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x1528F08B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int _0xBBB2780E() { return Invoke<0xBBB2780E, int>(); }
	static bool GRINGO_DEBUG_IS_SELECTED() { return Invoke<0xF4015EFC, bool>(); }
	static bool IS_GRINGO_ACTIVE() { return Invoke<0x86F2C24D, bool>(); }
	static bool GRINGO_HAS_PENDING_MESSAGE() { return Invoke<0xF550F8E7, bool>(); }
	static int GRINGO_GET_MSG_COMPONENT_CONTEXT() { return Invoke<0xCA589BAB, int>(); }
	static int GRINGO_GET_REQUESTING_ACTOR() { return Invoke<0x2F096285, int>(); }
	static int GRINGO_GET_MESSAGE_TYPE() { return Invoke<0x54745DB0, int>(); }
	static int GRINGO_IS_CHARACTER_BLEND_PAUSED(int _Unk0) { return Invoke<0xD62D413C, int>(_Unk0); }
	static void GRINGO_ENABLE_PLAYER_CONTROL(int _Unk0, int _Unk1) { Invoke<0x0B853FD5, void>(_Unk0, _Unk1); }
	static bool GRINGO_IS_FORCE_QUITTING() { return Invoke<0x926FD361, bool>(); }
	static void GRINGO_SET_MESSAGE_RETURN(int _Unk0) { Invoke<0x37D0F3E9, void>(_Unk0); }
	static void GRINGO_WAIT(int _Unk0) { Invoke<0x738FA66B, void>(_Unk0); }
	static void GRINGO_STOP() { Invoke<0x59647303, void>(); }
	static int GRINGO_HANDLES_MOVEMENT(int _Unk0) { return Invoke<0xEDF3BF37, int>(_Unk0); }
	static int SET_GRINGO_BOOL_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xCF6822D7, int>(_Unk0, _Unk1, _Unk2); }
	static void LOG_OBJECT3(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x9A756A72, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static bool _0x0A0E660E() { return Invoke<0x0A0E660E, bool>(); }
	static int GET_GRINGO_BOOL_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFACF08C7, int>(_Unk0, _Unk1, _Unk2); }
	static void GRINGO_SET_CHILD_USE_ACTIVATIONS(int _Unk0, int _Unk1) { Invoke<0x89DE8A75, void>(_Unk0, _Unk1); }
	static int GET_GRINGO_STRING_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x6BA58AC7, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_GRINGO_FLOAT_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x2EFD2B55, int>(_Unk0, _Unk1, _Unk2); }
	static void NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(int _Unk0, int _Unk1) { Invoke<0x7284A71B, void>(_Unk0, _Unk1); }
	static int GRINGO_SHOULD_SUSPEND_MOVER(int _Unk0) { return Invoke<0x5CFBF505, int>(_Unk0); }
	static int GRINGO_SHOULD_FIX_MOVER(int _Unk0) { return Invoke<0x3A31175A, int>(_Unk0); }
	static int ACTOR_IS_HOLSTERED(int _Unk0) { return Invoke<0x6426CCD6, int>(_Unk0); }
	static int IS_GRINGO_COMPONENT_VALID(int _Unk0) { return Invoke<0xBD503DC2, int>(_Unk0); }
	static int GRINGO_PLAY_ANIM_ON_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE18BCD70, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_ATTACH_PROP_TO_ANIM(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x4DB7C61C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GRINGO_GET_PROP_FROM_COMPONENT(int _Unk0) { return Invoke<0xA20141C0, int>(_Unk0); }
	static int GRINGO_GET_ATTRIBUTE(int _Unk0, int _Unk1) { return Invoke<0x19411B1F, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_ATTRIBUTE_COUNT(int _Unk0) { return Invoke<0x39B7D772, int>(_Unk0); }
	static int GRINGO_IS_ATTRIBUTE_VALID(int _Unk0) { return Invoke<0xBED45A9A, int>(_Unk0); }
	static int GRINGO_GET_ATTR_TYPE_BY_HANDLE(int _Unk0) { return Invoke<0xBF322F5C, int>(_Unk0); }
	static int GRINGO_GET_ATTRIBUTE_HASH(int _Unk0) { return Invoke<0xD2680017, int>(_Unk0); }
	static int GRINGO_GET_STRING_ATTR_BY_HANDLE(int _Unk0, int _Unk1) { return Invoke<0xD7BB1792, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_PARENT_COMPONENT(int _Unk0, int _Unk1) { return Invoke<0xD282013F, int>(_Unk0, _Unk1); }
	static int IS_PROP_FIXED(int _Unk0) { return Invoke<0xBD2FFD8C, int>(_Unk0); }
	static int GET_POSITION_OBJECT_SPACE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x663F1464, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int _0x4A1D2E25(int _Unk0) { return Invoke<0x4A1D2E25, int>(_Unk0); }
	static int _0x817B6952(int _Unk0) { return Invoke<0x817B6952, int>(_Unk0); }
	static void GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(int _Unk0, int _Unk1) { Invoke<0x53B9569C, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_ONE_SHOT_DEATH_STATUS(int _Unk0) { return Invoke<0x0912622D, int>(_Unk0); }
	static int NET_SET_NODE_REPLICATION(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xA4B5275C, int>(_Unk0, _Unk1, _Unk2); }
	static int _0xC17BAD12(int _Unk0) { return Invoke<0xC17BAD12, int>(_Unk0); }
	static void SET_ANIMAL_CAN_ATTACK(int _Unk0, int _Unk1) { Invoke<0x2B403538, void>(_Unk0, _Unk1); }
	static int GRINGO_IS_ACTOR_PLAYING_ANIM(int _Unk0, int _Unk1) { return Invoke<0x35279C3F, int>(_Unk0, _Unk1); }
	static int GRINGO_WAS_USE_SUCCESSFUL(int _Unk0) { return Invoke<0x5F516FC3, int>(_Unk0); }
	static void GRINGO_SATISFY_MOTIVES_OF_ACTOR(int _Unk0, int _Unk1) { Invoke<0xB62FE25C, void>(_Unk0, _Unk1); }
	static int AI_SPEECH_GET_ALLOW_FOR_ACTOR(int _Unk0) { return Invoke<0xFF0BF292, int>(_Unk0); }
	static int GRINGO_GET_FIRST_NAMED_CHILD(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xE4C686BA, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_GET_MY_GRINGO_ID() { return Invoke<0xAE7B3880, int>(); }
	static int IS_TASKED_TO_USE_GRINGO_FOREVER(int _Unk0, int _Unk1) { return Invoke<0x600A0EE4, int>(_Unk0, _Unk1); }
	static int SET_GRINGO_OBJECT_REF_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xAFF7D382, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(int _Unk0) { return Invoke<0xB62D549E, int>(_Unk0); }
	static void REPORT_GRINGO_USE_PHASE(int _Unk0, int _Unk1) { Invoke<0xA41B161C, void>(_Unk0, _Unk1); }
	static int HAS_CAPABILITY(int _Unk0, int _Unk1) { return Invoke<0xD3D8E8ED, int>(_Unk0, _Unk1); }
	static void REMOVE_CAPABILITY(int _Unk0, int _Unk1) { Invoke<0x29AEB2DB, void>(_Unk0, _Unk1); }
	static void ADD_CAPABILITY(int _Unk0, int _Unk1) { Invoke<0x6695E185, void>(_Unk0, _Unk1); }
	static int ATTACH_OBJECTS_PHYSICAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x1D711058, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(int _Unk0, int _Unk1) { return Invoke<0x87BA5FE9, int>(_Unk0, _Unk1); }
	static int GRINGO_ANIM_GET_ACT_FILENAME(int _Unk0) { return Invoke<0x721FC9A4, int>(_Unk0); }
	static int GRINGO_ANIM_GET_ACT_ROOTNODE(int _Unk0) { return Invoke<0x6263F909, int>(_Unk0); }
	static int GRINGO_GET_FIRST_CHILD(int _Unk0, int _Unk1) { return Invoke<0x3E8F94BE, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_PHYSINST(int _Unk0) { return Invoke<0x5EC1CABF, int>(_Unk0); }
	static int GRINGO_GET_PROP_ATTACH_SLOT(int _Unk0) { return Invoke<0xB96874B4, int>(_Unk0); }
	static int GRINGO_GET_USE_COMPONENT_HEADING(int _Unk0) { return Invoke<0x5B46757F, int>(_Unk0); }
	static int GRINGO_GET_COMPONENT_USER(int _Unk0) { return Invoke<0x15A0E28B, int>(_Unk0); }
	static int GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(int _Unk0, int _Unk1) { return Invoke<0x5AF74E19, int>(_Unk0, _Unk1); }
	static int GET_GRINGO_RELATIVE_POSITION_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1F74EE6C, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_GET_USE_COMPONENT_POSITION(int _Unk0, int _Unk1) { return Invoke<0x405E3903, int>(_Unk0, _Unk1); }
	static int GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0xEEE9C799, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int GET_GRINGO_VECTOR_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x5851C408, int>(_Unk0, _Unk1, _Unk2); }
	static void FIND_VOL_SURFACE_POINTS_FOR_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x026F7060, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SET_GRINGO_VECTOR_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x5C6831F9, int>(_Unk0, _Unk1, _Unk2); }
	static int SET_GRINGO_FLOAT_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xBC3C401F, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_ACTOR_MOVE_TO_AND_FACE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x0AF4FCB9, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static bool GRINGO_IS_TARGET_OBJECT_READY() { return Invoke<0xFF1FC1EF, bool>(); }
	static int GRINGO_IS_PROP_READY(int _Unk0) { return Invoke<0x24BAABCA, int>(_Unk0); }
	static void RESET_REACT_NODE_FOR_ACTOR(int _Unk0) { Invoke<0x7B17C5C3, void>(_Unk0); }
	static int GRINGO_REPORT_USE_FINISHED(int _Unk0, int _Unk1) { return Invoke<0x5C11B011, int>(_Unk0, _Unk1); }
	static int GET_PROP_FROM_OBJECT(int _Unk0) { return Invoke<0xA7E9DA22, int>(_Unk0); }
	static void SUPRESS_MOVER_COLLISIONS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x61664EC0, void>(_Unk0, _Unk1, _Unk2); }
	static int GET_OBJECT_FROM_ANIMATOR(int _Unk0) { return Invoke<0x4F10FD5B, int>(_Unk0); }
	static void RESET_PROP(int _Unk0) { Invoke<0x5E7A7E9B, void>(_Unk0); }
	static void GRINGO_CLEAR_COMPONENT_USER(int _Unk0) { Invoke<0x90FBBB8B, void>(_Unk0); }
	static void GRINGO_SET_REUSE_DELAY(int _Unk0, int _Unk1) { Invoke<0x8C2914C4, void>(_Unk0, _Unk1); }
	static void GRINGO_PROP_RESET_GRACEFULLY(int _Unk0) { Invoke<0x22D573D2, void>(_Unk0); }
	static int GRINGO_GET_USE_REQUIRES_OBSTACLE(int _Unk0) { return Invoke<0x51581898, int>(_Unk0); }
	static int CREATE_OBSTACLE_ON_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0x7E81694C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static void GRINGO_SET_COMPONENT_USER(int _Unk0, int _Unk1) { Invoke<0x94F442D0, void>(_Unk0, _Unk1); }
	static int GET_ACTOR_ALLOW_BUMP_REACTIONS(int _Unk0) { return Invoke<0x9CD3385E, int>(_Unk0); }
	static void GRINGO_SET_REQUEST_STRING(int _Unk0) { Invoke<0x7F3020EB, void>(_Unk0); }
	static int GRINGO_GET_USER_POS_WITH_OFFSET(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xBC32DA9A, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_ACTOR_GAIT_TYPE(int _Unk0) { return Invoke<0xAC232F6E, int>(_Unk0); }
	static void GRINGO_SET_REQUEST_FAILURE_REASON(int _Unk0) { Invoke<0x8CAF5C5C, void>(_Unk0); }
	static int HAS_PHYSINST_BROKEN_APART(int _Unk0) { return Invoke<0x65CA3037, int>(_Unk0); }
	static bool GRINGO_GET_REQUEST_MID_ACTION() { return Invoke<0x5388F37D, bool>(); }
	static int GRINGO_IS_COMPONENT_OF_TYPE(int _Unk0, int _Unk1) { return Invoke<0x284DD17C, int>(_Unk0, _Unk1); }
	static int GRINGO_GET_CHILD_COMPONENT_COUNT(int _Unk0) { return Invoke<0x3FA5FC03, int>(_Unk0); }
	static int GRINGO_GET_INDEX_OF_NEXT_CHILD(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xD6EE9534, int>(_Unk0, _Unk1, _Unk2); }
	static void LOG_OBJECT2(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xC8C0C708, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int _0x7BF01CCB() { return Invoke<0x7BF01CCB, int>(); }
	static void _0x8EA46104(int _Unk0) { Invoke<0x8EA46104, void>(_Unk0); }
	static void GRINGO_UNLOAD_ANIMATION_FOR_USER(int _Unk0, int _Unk1) { Invoke<0xBEF32D17, void>(_Unk0, _Unk1); }
	static void GRINGO_LOAD_ANIMATION_FOR_USER(int _Unk0, int _Unk1) { Invoke<0x7D600F2F, void>(_Unk0, _Unk1); }
	static int GRINGO_HAS_ANIMSET_LOADED(int _Unk0, int _Unk1) { return Invoke<0x2C57A529, int>(_Unk0, _Unk1); }
	static void GRINGO_SET_PROP_COLLISIONS(int _Unk0, int _Unk1) { Invoke<0x98543454, void>(_Unk0, _Unk1); }
	static void SHOW_NEWSPAPER(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x175CD937, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_NEWSPAPER_INFO(int _Unk0, int _Unk1) { Invoke<0x47D2DE08, void>(_Unk0, _Unk1); }
	static int IS_PLAYER_IN_COMBAT_WITHIN(int _Unk0, int _Unk1) { return Invoke<0x48B7C279, int>(_Unk0, _Unk1); }
	static void SATCHEL_TOGGLE_NO_PAUSE_OUTFIT(int _Unk0) { Invoke<0xEB046CD9, void>(_Unk0); }
	static void SATCHEL_SET_CURRENT_OUTFIT(int _Unk0) { Invoke<0x1C462085, void>(_Unk0); }
	static void SATCHEL_ALLOW_OUTFIT_CHANGE(int _Unk0) { Invoke<0x58018D83, void>(_Unk0); }
	static void SET_CAMERASHOT_FROM_LENS(int _Unk0, int _Unk1) { Invoke<0x6F483443, void>(_Unk0, _Unk1); }
	static void FORCE_CAMERASHOT_UPDATE(int _Unk0) { Invoke<0xF5CA55D4, void>(_Unk0); }
	static int CAMERASHOT_IS_VISIBLE_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xCBA91134, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int GET_MAX_ITEM_COUNT(int _Unk0) { return Invoke<0xF52BA99F, int>(_Unk0); }
	static int IS_OBJECT_ATTACHED(int _Unk0) { return Invoke<0xAD08BA79, int>(_Unk0); }
	static int IS_ACTOR_ON_BOAT(int _Unk0) { return Invoke<0x9EE8AB59, int>(_Unk0); }
	static int TRAIN_GET_LOD_LEVEL(int _Unk0) { return Invoke<0xD8E0EF01, int>(_Unk0); }
	static int TRAIN_GET_VELOCITY(int _Unk0) { return Invoke<0xF2373407, int>(_Unk0); }
	static void BEGIN_POPULATION_DEFINITION() { Invoke<0x1344515B, void>(); }
	static void END_POPULATION_DEFINITION() { Invoke<0x364F41D6, void>(); }
	static int IS_POPULATION_SET_REQUIRED_RESIDENT(int _Unk0) { return Invoke<0x76E416FD, int>(_Unk0); }
	static int CREATE_ZONE_VOLUME(int _Unk0) { return Invoke<0xBB05B731, int>(_Unk0); }
	static void SET_ZONE_POPULATION_TYPE(int _Unk0, int _Unk1) { Invoke<0xFC30948B, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_DENSITY(int _Unk0, int _Unk1) { Invoke<0x9381D459, void>(_Unk0, _Unk1); }
	static void SET_ZONE_RESTRICT_ACTORS(int _Unk0, int _Unk1) { Invoke<0xE0FDD026, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(int _Unk0, int _Unk1) { Invoke<0x5996941F, void>(_Unk0, _Unk1); }
	static void SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(int _Unk0, int _Unk1) { Invoke<0x84FB15FA, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_COUNT(int _Unk0, int _Unk1) { Invoke<0x1B271D85, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_COUNT_RANDOM(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE339719A, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_DEFAULT_POPULATION_TYPE(int _Unk0) { Invoke<0xD28A3706, void>(_Unk0); }
	static void SET_DEFAULT_POPULATION_DENSITY(float _Density) { Invoke<0x04EFC113, void>(_Density); }
	static void SET_ACCESSORYSET_ON_SPAWN(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC79F2BD3, void>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_NAMED_POPULATION_SET(int _Unk0, int _Unk1) { return Invoke<0xB0882841, int>(_Unk0, _Unk1); }
	static int SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(int _Unk0) { return Invoke<0x03B2D067, int>(_Unk0); }
	static void LINK_ACTORENUM_TO_POPULATION_TIMED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x93B6135B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void AMBIENT_SPAWN_PRESTREAM_SET(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x687545BF, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_ZONE_POPULATION_IS_FLOCK(int _Unk0, int _Unk1) { Invoke<0x0B24CE10, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_MIN_FLOCK_SIZE(int _Unk0, int _Unk1) { Invoke<0xE4A789D8, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_MAX_FLOCK_SIZE(int _Unk0, int _Unk1) { Invoke<0x07FD0A76, void>(_Unk0, _Unk1); }
	static int SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(int _Unk0) { return Invoke<0xC1195126, int>(_Unk0); }
	static void SET_TOWN_DENSITY(float _Density) { Invoke<0x3748F199, void>(_Density); }
	static void SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(int _Unk0) { Invoke<0x6C526E7B, void>(_Unk0); }
	static int IS_ZONE_VALID(int _Unk0) { return Invoke<0x262164F8, int>(_Unk0); }
	static void SET_ZONE_SPAWN_ONLY_AT_GRINGOS(int _Unk0, int _Unk1) { Invoke<0xD72DF5C6, void>(_Unk0, _Unk1); }
	static void SET_ZONE_POPULATION_SPAWN_MULTI_PER_POINT(int _Unk0, int _Unk1) { Invoke<0x7D4FB8C8, void>(_Unk0, _Unk1); }
	static void SET_ZONE_PRIORITY(int _Unk0, int _Unk1) { Invoke<0x4B8C0945, void>(_Unk0, _Unk1); }
	static void SET_ZONE_FORCE_SPAWN_DISTANCE(int _Unk0, int _Unk1) { Invoke<0xE7F19909, void>(_Unk0, _Unk1); }
	static void AI_GOAL_SHOOT_AT_COORD(int _Unk0, int _Unk1) { Invoke<0x6C65E46E, void>(_Unk0, _Unk1); }
	static void SET_ALLOW_RIDE_BY_AI(int _Unk0, int _Unk1) { Invoke<0x2D9C0C0F, void>(_Unk0, _Unk1); }
	static void AI_SET_ALLOWED_MOUNT_DIRECTIONS(int _Unk0, int _Unk1) { Invoke<0x7F07210F, void>(_Unk0, _Unk1); }
	static int SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12) { return Invoke<0x3F226995, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12); }
	static void _0x261A4C0E(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x261A4C0E, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_DOOR_CURRENT_SPEED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x5BCFC899, void>(_Unk0, _Unk1, _Unk2); }
	static int CAMERA_IS_VISIBLE_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xA161768C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SET_IS_MISSION_SCRIPT(int _Unk0) { Invoke<0x15040CD2, void>(_Unk0); }
	static void RESET_EXCLUSIVE_JOURNAL_ID() { Invoke<0x45E34464, void>(); }
	static void AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL() { Invoke<0x14ED45FB, void>(); }
	static void AUDIO_RESET_SCRIPTED_SPEECH_HISTORY() { Invoke<0x1BB84187, void>(); }
	static void _0xAC72E757(int _Unk0) { Invoke<0xAC72E757, void>(_Unk0); }
	static void AUDIO_MISSION_RELEASE() { Invoke<0xD1FD31DE, void>(); }
	static void ENABLE_JOURNAL_REPLAY(int _Unk0) { Invoke<0x957F1618, void>(_Unk0); }
	static void RESET_PLAYER_TARGET_WEIGHT() { Invoke<0xF1779E65, void>(); }
	static void CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS() { Invoke<0x6C7A3CE6, void>(); }
	static void SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(int _Unk0, int _Unk1) { Invoke<0xBEF6031B, void>(_Unk0, _Unk1); }
	static int SET_DUST_LEVEL_MODIFIER(int _Unk0) { return Invoke<0xDB86F53B, int>(_Unk0); }
	static void DISABLE_VERIFY_SS(int _Unk0) { Invoke<0x5C580036, void>(_Unk0); }
	static void SET_NPC_TO_NPC_CRIPPLE_DISABLE(int _Unk0) { Invoke<0xB42EBC65, void>(_Unk0); }
	static void SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(int _Unk0) { Invoke<0x374DE883, void>(_Unk0); }
	static void STREAMING_ENABLE_BOUNDS(int _Unk0) { Invoke<0x0BEBB187, void>(_Unk0); }
	static void SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(Actor _Actor, float _Multiplier) { Invoke<0x151741A2, void>(_Actor, _Multiplier); }
	static void RESET_ACTIONTREE_FOR_ACTOR(int _Unk0) { Invoke<0x07EC142B, void>(_Unk0); }
	static void SWITCH_ACTOR_ENUM_VARIATION(int _Unk0, int _Unk1) { Invoke<0x7AB17813, void>(_Unk0, _Unk1); }
	static int CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() { return Invoke<0xDE339CE1, int>(); }
	static bool CUTSCENE_MANAGER_IS_CUTFILE_LOADED() { return Invoke<0xA6CFA220, bool>(); }
	static bool CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() { return Invoke<0xEDF1D0B4, bool>(); }
	static void MEMORY_FORCE_MELEE(int _Unk0, int _Unk1) { Invoke<0xC175F2B5, void>(_Unk0, _Unk1); }
	static int PROP_ENABLE_VARIABLE_MESH(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x8287F8B3, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENE_MANAGER_HIDE_ACTOR(int _Unk0) { return Invoke<0x3D014AB1, int>(_Unk0); }
	static int CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() { return Invoke<0x24F97294, int>(); }
	static void CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT() { Invoke<0x2B45FADE, void>(); }
	static int CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS() { return Invoke<0xA5691922, int>(); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(int _Unk0) { return Invoke<0xED0BA189, int>(_Unk0); }
	static int CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(int _Unk0) { return Invoke<0xD89902F1, int>(_Unk0); }
	static void CUTSCENE_MANAGER_LOAD_CUTSCENE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xFD300D15, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int CUTSCENE_MANAGER_GET_LOADED_CUTFILE() { return Invoke<0x0FE90DCB, int>(); }
	static void CUTSCENE_MANAGER_PLAY_CUTSCENE() { Invoke<0x98A9AC9E, void>(); }
	static void CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(int _Unk0) { Invoke<0xE808BFFB, void>(_Unk0); }
	static int CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES() { return Invoke<0x7653788C, int>(); }
	static void CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES() { Invoke<0x98D0F458, void>(); }
	static int ACTOR_IS_GRABBED_BY_CUTSCENE(int _Unk0) { return Invoke<0x776999DB, int>(_Unk0); }
	static void SET_MOST_RECENT_MOUNT(int _Unk0, int _Unk1) { Invoke<0x00AF2CB0, void>(_Unk0, _Unk1); }
	static void SAY_SINGLE_LINE_SCRIPTED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { Invoke<0x755382BC, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(int _Unk0, int _Unk1) { return Invoke<0xD79C7D6A, int>(_Unk0, _Unk1); }
	static void CUTSCENE_MANAGER_LOAD_CUTFILE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x99D215B4, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void CUTSCENE_MANAGER_RESUME_LOADING() { Invoke<0x7716B12B, void>(); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB2F2A7F2, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x9410D992, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(int _Unk0) { return Invoke<0xC6557710, int>(_Unk0); }
	static int GET_LAST_NOTE_OBJECTIVE() { return Invoke<0xDC28C12F, int>(); }
	static int CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS() { return Invoke<0xD9E4A8DA, int>(); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xA56DCCF2, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(int _Unk0) { return Invoke<0xEBAB5F62, int>(_Unk0); }
	static int AI_HAS_ACTOR_BUMPED_INTO_ME(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x6BCC744A, int>(_Unk0, _Unk1, _Unk2); }
	static int CUTSCENE_MANAGER_GET_CURRENT_FRAME() { return Invoke<0x7263860F, int>(); }
	static void SET_CUTSCENE_STREAMING_LOAD_SCENE(int _Unk0, int _Unk1) { Invoke<0x39D1CC17, void>(_Unk0, _Unk1); }
	static void CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(int _Unk0, int _Unk1) { Invoke<0x9E6A776F, void>(_Unk0, _Unk1); }
	static int CUTSCENE_MANAGER_GET_TOTAL_FRAMES() { return Invoke<0x2DB208A1, int>(); }
	static void AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(int _Unk0, int _Unk1) { Invoke<0x98966941, void>(_Unk0, _Unk1); }
	static int ANIMAL_SPECIES_TUNING_GET_ATTRIB_FLOAT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x8020C45E, int>(_Unk0, _Unk1, _Unk2); }
	static bool AUDIO_MUSIC_IS_PREPARED() { return Invoke<0xBF316157, bool>(); }
	static bool AUDIO_MUSIC_PLAY_PREPARED() { return Invoke<0x7CC2738F, bool>(); }
	static void _0xE613AE52(int _Unk0) { Invoke<0xE613AE52, void>(_Unk0); }
	static void _0xF55B50ED(int _Unk0) { Invoke<0xF55B50ED, void>(_Unk0); }
	static void _0x6336182D(int _Unk0) { Invoke<0x6336182D, void>(_Unk0); }
	static void _0x84F3DD81(int _Unk0, int _Unk1) { Invoke<0x84F3DD81, void>(_Unk0, _Unk1); }
	static int GET_CAMERA_ASPECT_RATIO(int _Unk0) { return Invoke<0xCE01609D, int>(_Unk0); }
	static void _0x3A6960B2(int _Unk0) { Invoke<0x3A6960B2, void>(_Unk0); }
	static void SET_ACTOR_SPEED(Actor _Actor, float _Speed) { Invoke<0x09D78931, void>(_Actor, _Speed); }
	static void AUDIO_MISSION_INIT() { Invoke<0xEB8A51C2, void>(); }
	static void AUDIO_SET_MISSION_NAME_FOR_JOURNAL(int _Unk0) { Invoke<0x66FCA3F7, void>(_Unk0); }
	static void SET_EXCLUSIVE_JOURNAL_ID(int _Unk0) { Invoke<0x6398AF9A, void>(_Unk0); }
	static int GET_EVENT_TARGET_AS_PHYSINST(int _Unk0) { return Invoke<0xBDD4D4D5, int>(_Unk0); }
	static void TRAIN_SET_MAX_ACCEL(int _Unk0, int _Unk1) { Invoke<0xB5383B93, void>(_Unk0, _Unk1); }
	static void TRAIN_SET_TARGET_POS(int _Unk0, int _Unk1) { Invoke<0x9091E0A3, void>(_Unk0, _Unk1); }
	static void TRAIN_PLAY_WHISTLE_SEQUENCE(int _Unk0, int _Unk1) { Invoke<0x1440C806, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_STREAMING_HIGH_PRIORITY(int _Unk0, int _Unk1) { Invoke<0x0911BA31, void>(_Unk0, _Unk1); }
	static void CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x47FAE768, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xB0479CB8, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void TRAIN_FORCE_HIGH_LOD(int _Unk0, int _Unk1) { Invoke<0x43E6DCAC, void>(_Unk0, _Unk1); }
	static void TRAIN_SET_MAX_DECEL(int _Unk0, int _Unk1) { Invoke<0xB7A4D403, void>(_Unk0, _Unk1); }
	static void TRAIN_SET_POSITION_DIRECTION_PRECISELY(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x268D546D, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(int _Unk0) { Invoke<0xE0BE8235, void>(_Unk0); }
	static void TASK_SHOOT_FROM_COVER(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x506B8205, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void ACTOR_SET_GRABBED_BY_CUTSCENE(int _Unk0, int _Unk1) { Invoke<0x6D3E430D, void>(_Unk0, _Unk1); }
	static int TRAIN_SET_JUNCTION_STATE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x1F9F8C04, int>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_GET_SINGLE_ACTOR_CONTROLLED_BY_GOAL(int _Unk0, int _Unk1) { return Invoke<0xF37E8A9E, int>(_Unk0, _Unk1); }
	static void CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(int _Unk0, int _Unk1) { Invoke<0x7007019D, void>(_Unk0, _Unk1); }
	static int TELEPORT_OBJECT_TO_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x8C0E3E29, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int CUTSCENE_MANAGER_SHOW_ACTOR(int _Unk0) { return Invoke<0xB550D120, int>(_Unk0); }
	static void SET_PROP_TARGETABLE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x32C810BF, void>(_Unk0, _Unk1, _Unk2); }
	static void AI_AVOID_IGNORE_ACTOR(int _Unk0, int _Unk1) { Invoke<0x68B268BE, void>(_Unk0, _Unk1); }
	static void AI_SET_NAV_SUBGRID_CELL_SIZE(int _Unk0, int _Unk1) { Invoke<0xFF3CEFE2, void>(_Unk0, _Unk1); }
	static int ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x8ED2B0BC, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void TASK_FOLLOW_OBJECT_ALONG_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x626C97D5, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void ESTIMATE_TWO_DISTANCES_ALONG_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0xA1D9AF6B, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void TASK_HORSE_ACTION(int _Unk0, int _Unk1) { Invoke<0x916FF236, void>(_Unk0, _Unk1); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_PROP(int _Unk0) { return Invoke<0x5DB05BBC, int>(_Unk0); }
	static void _DLC_SHOTGUN_SPREAD_OVERRIDE(int _Unk0, int _Unk1, float _Unk2) { Invoke<0x8062BD74, void>(_Unk0, _Unk1, _Unk2); }
	static void DESTROY_POINT_LIGHT(int _Unk0) { Invoke<0x6BC96263, void>(_Unk0); }
	static void AMBIENT_SET_SCAN_CENTER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x205E891C, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_DEADEYE_BLINK(int _Unk0) { Invoke<0xA543B120, void>(_Unk0); }
	static void NET_SCOREGRAPH_ADD_TEAM_LABEL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x134AAF17, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void NET_SCOREGRAPH_ADD_TEAM_SCORE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x12558DBD, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static bool ZOMBIE_DLC_UNLOAD_ASSETS() { return Invoke<0x88863344, bool>(); }
	static int GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(int _Unk0, int _Unk1) { return Invoke<0xD062CBF6, int>(_Unk0, _Unk1); }
	static void DEACTIVATE_JOURNAL_ENTRY(int _Unk0, int _Unk1) { Invoke<0x196A1EDE, void>(_Unk0, _Unk1); }
	static void SET_RCM_ACTOR_CALL_OVER_ENABLE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0x2C6A5FAC, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int GET_JOURNAL_ENTRY_DISALLOW_TRACKING(int _Unk0) { return Invoke<0x93CA45DE, int>(_Unk0); }
	static int GATEWAY_GET_MARKER(int _Unk0) { return Invoke<0xB62A4FB1, int>(_Unk0); }
	static bool GET_ACTOR_INVULNERABILITY(Actor _Actor) { return Invoke<0xDB39D992, bool>(_Actor); }
	static int IS_AI_ACTOR_ENGAGED_IN_COMBAT(int _Unk0) { return Invoke<0x2DBCB78A, int>(_Unk0); }
	static void SET_RCM_ACTOR_CALL_OVER_SUPPRESS(int _Unk0) { Invoke<0xD15B53F8, void>(_Unk0); }
	static int GET_ACTOR_DRAFTED_TO(int _Unk0) { return Invoke<0xD89C14BA, int>(_Unk0); }
	static void CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(int _Unk0) { Invoke<0x50A2051C, void>(_Unk0); }
	static int CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_START_ORIENT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x79C748BE, int>(_Unk0, _Unk1, _Unk2); }
	static bool IS_BLIP_VISIBLE(Blip _Blip) { return Invoke<0x1E7A6623, bool>(_Blip); }
	static void AUDIO_ADD_ALTERNATE_CONTEXT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x2D40E85C, void>(_Unk0, _Unk1, _Unk2); }
	static int SET_ACTOR_HEARING_MAX_RANGE(int _Unk0, int _Unk1) { return Invoke<0x55AACDFD, int>(_Unk0, _Unk1); }
	static int IS_DOOR_OPEN_IN_DIRECTION(int _Unk0, int _Unk1) { return Invoke<0xDAD47AE6, int>(_Unk0, _Unk1); }
	static void SET_DOOR_AUTO_CLOSE(int _Unk0, int _Unk1) { Invoke<0xD3300956, void>(_Unk0, _Unk1); }
	static int AI_GET_NAV_FAILSAFE_MOVEMENT_ENABLED(int _Unk0) { return Invoke<0xD6F4FDAD, int>(_Unk0); }
	static bool GET_DRAW_ACTOR(Actor _Actor) { return Invoke<0x085A9CA6, bool>(_Actor); }
	static void SET_PLAYER_DEADEYE_MODE(int _Unk0, int _Unk1) { Invoke<0xB6A47C37, void>(_Unk0, _Unk1); }
	static void ACTOR_ADD_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel, float _AmmoCount) { Invoke<0xCC69DCC1, void>(_Actor, _WeaponModel, _AmmoCount); }
	static void TASK_GUARD_STAND(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x99F65CC0, void>(_Unk0, _Unk1, _Unk2); }
	static int IS_ACTOR_IN_ROOM(int _Unk0) { return Invoke<0x22558E3F, int>(_Unk0); }
	static bool ZOMBIE_DLC_IS_LOAD_COMPLETE() { return Invoke<0xE7371670, bool>(); }
	static void SET_INFINITE_DEADEYE(Actor _Actor, bool _Infinite) { Invoke<0x0C0BC04E, void>(_Actor, _Infinite); }
	static int HORSE_UNLOCK_FRESHNESS(int _Unk0) { return Invoke<0x6AFA044B, int>(_Unk0); }
	static int HORSE_SET_CURR_FRESHNESS(int _Unk0, int _Unk1) { return Invoke<0xF3976D70, int>(_Unk0, _Unk1); }
	static int HORSE_LOCK_FRESHNESS(int _Unk0) { return Invoke<0x8754817D, int>(_Unk0); }
	static int DECOR_GET_VECTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x56E84C59, int>(_Unk0, _Unk1, _Unk2); }
	static void SET_STAMINA_BLINK(int _Unk0) { Invoke<0x39F2E5F1, void>(_Unk0); }
	static int SET_ACTOR_MAX_FRESHNESS(int _Unk0, int _Unk1) { return Invoke<0xBADB24FB, int>(_Unk0, _Unk1); }
	static int HIDE_RMPTFX_EFFECT(int _Unk0) { return Invoke<0x21BCC0A9, int>(_Unk0); }
	static int DOES_HORSE_HAVE_ACCESSORY(int _Unk0, int _Unk1) { return Invoke<0x75D4E33F, int>(_Unk0, _Unk1); }
	static int LOCATE_GRINGO_OF_TYPE_BY_ID(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x99356925, int>(_Unk0, _Unk1, _Unk2); }
	static int SQUAD_GOAL_ADD_RESTRICT_INVESTIGATION_DISTANCE_FROM_SQUAD(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x35051831, int>(_Unk0, _Unk1, _Unk2); }
	static void HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(int _Unk0, int _Unk1) { Invoke<0x14585073, void>(_Unk0, _Unk1); }
	static void SET_RCM_WAS_JOHN_NOW_JACK(int _Unk0, int _Unk1) { Invoke<0xE4AA7B35, void>(_Unk0, _Unk1); }
	static void AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(int _Unk0, int _Unk1) { Invoke<0x1F07FC4C, void>(_Unk0, _Unk1); }
	static int AI_WAS_PUSHED_OVER(int _Unk0, int _Unk1) { return Invoke<0x09493438, int>(_Unk0, _Unk1); }
	static int GET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(int _Unk0, int _Unk1) { return Invoke<0xEBC9C2FD, int>(_Unk0, _Unk1); }
	static int AI_GLOBAL_IS_DANGER(int _Unk0, int _Unk1) { return Invoke<0x5EC098F2, int>(_Unk0, _Unk1); }
	static float GET_RADAR_RADIUS() { return Invoke<0x6B33CBCC, float>(); }
	static void _0xC6E36B1D(int _Unk0) { Invoke<0xC6E36B1D, void>(_Unk0); }
	static void PLAY_SOUND(int _Unk0) { Invoke<0xB6E1917F, void>(_Unk0); }
	static void SET_JOURNAL_ENTRY_UPDATED(int _Unk0, int _Unk1) { Invoke<0xCD4633BD, void>(_Unk0, _Unk1); }
	static void REGISTER_TRAFFIC_OBJECTSET(int _Unk0) { Invoke<0x398735FA, void>(_Unk0); }
	static void SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(int _Unk0, int _Unk1) { Invoke<0xD9934D6E, void>(_Unk0, _Unk1); }
	static void REGISTER_TRAFFIC_ACTOR(int _Unk0, int _Unk1) { Invoke<0x67FA18A1, void>(_Unk0, _Unk1); }
	static int IS_ACTOR_JACKING_VEHICLE(int _Unk0) { return Invoke<0x1BA90C92, int>(_Unk0); }
	static int IS_ACTOR_WHISTLING(int _Unk0) { return Invoke<0x3612AC73, int>(_Unk0); }
	static int IS_ANY_ACTOR_IN_SPHERE(int _Unk0, int _Unk1) { return Invoke<0x87C49DBD, int>(_Unk0, _Unk1); }
	static int MARKETING_GET_AMBIENT_DENSITY_LEVEL() { return Invoke<0x72F6EED0, int>(); }
	static int GET_EVENT_TIME(int _Unk0) { return Invoke<0x82112B85, int>(_Unk0); }
	static void SET_GPS_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { Invoke<0xD82F910C, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static void REGISTER_GPS_CURVE_OBJECTSET(int _Unk0) { Invoke<0x1444F022, void>(_Unk0); }
	static int IS_GPS_RECOMPUTE(int _Unk0) { return Invoke<0xAA322DFC, int>(_Unk0); }
	static void SET_JOURNAL_ENTRY_DISALLOW_TRACKING(int _Unk0, int _Unk1) { Invoke<0xF7687D41, void>(_Unk0, _Unk1); }
	static int SATCHEL_CREATE_OUTFIT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x427F4D58, int>(_Unk0, _Unk1, _Unk2); }
	static int UI_CHEAT_GET_VALUE(int _Unk0) { return Invoke<0x94F5E63F, int>(_Unk0); }
	static void SET_GLOBAL_ACTOR_WEAPON_BIAS(int _Unk0) { Invoke<0xAB8A1C15, void>(_Unk0); }
	static void SET_ACTOR_IS_THE_BEASTMASTER(Actor _Actor, bool _Value) { Invoke<0x8392855D, void>(_Actor, _Value); }
	static int NET_MAILBOX_GET_MAX_NUM_CHALLENGES() { return Invoke<0x6B439149, int>(); }
	static int NET_MAILBOX_IS_CHALLENGE_VALID(int _Unk0) { return Invoke<0xC9E96F78, int>(_Unk0); }
	static int NET_MAILBOX_GET_CHALLENGE_BY_INDEX(int _Unk0) { return Invoke<0xE85942F0, int>(_Unk0); }
	static int SC_CHALLENGE_IS_VAR_VALID(int _Unk0, int _Unk1) { return Invoke<0xFD6197EB, int>(_Unk0, _Unk1); }
	static int SC_CHALLENGE_GET_VAR_INT(int _Unk0, int _Unk1) { return Invoke<0x2390DD18, int>(_Unk0, _Unk1); }
	static void UI_CHALLENGE_SET_OBJECTIVE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9CF5C747, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_CHALLENGE_SET_TIME_HEADER(int _Unk0, int _Unk1) { Invoke<0x761A6750, void>(_Unk0, _Unk1); }
	static void UI_CHALLENGE_SET_COLUMN_HEADER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xAFC9071D, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_BUTTON_SET_TEXT(const char* name, const char* str) { Invoke<0x3DB16A3D, void>(name, str); }
	static void UI_CHALLENGE_SET_TIME_INFO(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC201524D, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_CHALLENGE_SET_DESCRIPTION(int _Unk0, int _Unk1) { Invoke<0x2A39FD8A, void>(_Unk0, _Unk1); }
	static void UI_CHALLENGE_SET_TROPHY_TYPE(int _Unk0, int _Unk1) { Invoke<0x3731AC9F, void>(_Unk0, _Unk1); }
	static int SC_CHALLENGE_GET_COMMUNITY_VALUE(int _Unk0) { return Invoke<0xCEEEAE1D, int>(_Unk0); }
	static int SC_CHALLENGE_GET_COMMUNITY_TOTAL(int _Unk0) { return Invoke<0xFFC55DA4, int>(_Unk0); }
	static void UI_CHALLENGE_SET_OBJECTIVE_STYLE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x4A598723, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x9272926C, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_CHALLENGE_MAKE_CURRENT(int _Unk0) { Invoke<0x04A3022E, void>(_Unk0); }
	static bool NET_MAILBOX_IS_SIGNED_INTO_SC() { return Invoke<0xA3E1EF71, bool>(); }
	static bool IS_USER_DEFINED_WAYPOINT_CLEARED() { return Invoke<0x34711B59, bool>(); }
	static int SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS() { return Invoke<0x5725C84F, int>(); }
	static int NET_CHALLENGE_LB_DOES_READER_EXIST() { return Invoke<0x5FD52711, int>(); }
	static int NET_CHALLENGE_LB_CREATE_READER(int _Unk0, int _Unk1) { return Invoke<0x86BC0A55, int>(_Unk0, _Unk1); }
	static void NET_CHALLENGE_LB_DESTROY_READER() { Invoke<0xEB4A6D85, void>(); }
	static int NET_CHALLENGE_LB_IS_READ_COMPLETE() { return Invoke<0xD0808C42, int>(); }
	static bool NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID() { return Invoke<0xE89C6E4F, bool>(); }
	static int NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(int _Unk0) { return Invoke<0x49C2B05F, int>(_Unk0); }
	static int NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME() { return Invoke<0x0791F35A, int>(); }
	static bool NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID() { return Invoke<0xC813DBEF, bool>(); }
	static int NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(int _Unk0) { return Invoke<0x70AF0351, int>(_Unk0); }
	static int NET_CHALLENGE_LB_GET_TOP_SCORER_NAME() { return Invoke<0xE6B4F505, int>(); }
	static bool NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID() { return Invoke<0x097BB984, bool>(); }
	static int NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(int _Unk0) { return Invoke<0x3A8C77AD, int>(_Unk0); }
	static int NET_CHALLENGE_LB_GET_LOCAL_GAMER_NAME() { return Invoke<0xEA7ADF42, int>(); }
	static bool NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID() { return Invoke<0x293C3288, bool>(); }
	static int NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(int _Unk0) { return Invoke<0x984749B4, int>(_Unk0); }
	static int NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME() { return Invoke<0xA7F231B0, int>(); }
	static void SET_REGION_VISITED(int _Unk0, int _Unk1) { Invoke<0x970AC1F7, void>(_Unk0, _Unk1); }
	static void SATCHEL_SET_OUTFIT_STATE(int _Unk0, int _Unk1) { Invoke<0x0A87A573, void>(_Unk0, _Unk1); }
	static int SATCHEL_GET_OUTFIT_STATE(int _Unk0) { return Invoke<0x25EF49AD, int>(_Unk0); }
	static void SATCHEL_SET_OUTFIT_TEXTURE(int _Unk0, int _Unk1) { Invoke<0x23EB81F0, void>(_Unk0, _Unk1); }
	static void UPDATE_STAT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xC9212F76, void>(_Unk0, _Unk1, _Unk2); }
	static void HIDE_STAT(int _Unk0, int _Unk1) { Invoke<0x1CF1FCC4, void>(_Unk0, _Unk1); }
	static bool STREAMING_HAS_OVERRIDE_MAIN_POI() { return Invoke<0x5B404EDA, bool>(); }
	static int CREATE_PLAYER_ACTOR_IN_LAYOUT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { return Invoke<0x6A307D5F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void SET_HUD_MAP_SCALE_WALK(int _Unk0) { Invoke<0x7FF20D84, void>(_Unk0); }
	static void SET_HUD_MAP_SCALE_DRIVE(int _Unk0) { Invoke<0x364450B1, void>(_Unk0); }
	static bool CAN_PLAYER_DIE() { return Invoke<0x90F9555B, bool>(); }
	static void STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(int _Unk0) { Invoke<0xCFE22435, void>(_Unk0); }
	static void RESET_RUMBLE() { Invoke<0xB3BE2F95, void>(); }
	static void RESET_ALL_BREAKABLE_TREE_CLEARINGS() { Invoke<0x39B0CFE5, void>(); }
	static void SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA9A18E5A, void>(_Unk0, _Unk1, _Unk2); }
	static int NET_REQUEST_OBJECT(int _Unk0) { return Invoke<0x68EC589D, int>(_Unk0); }
	static void TASK_RESPOND_TO_HORSE_WHISTLE(int _Unk0, int _Unk1) { Invoke<0x69B924A7, void>(_Unk0, _Unk1); }
	static int GET_NAV_QUERY_FROM_OBJECT(int _Unk0) { return Invoke<0x50A7E334, int>(_Unk0); }
	static void SET_RADAR_TILES_VISIBLE(int _Unk0) { Invoke<0x48DB367D, void>(_Unk0); }
	static void SET_HUD_MAP_SCALE_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0xB4614D11, void>(_Unk0, _Unk1); }
	static int IS_STAT_MESSAGE_SHOWING() { return Invoke<0x919142BE, int>(); }
	static int GET_ITEM_IN_HAND_EQUIPSLOT(int _Unk0) { return Invoke<0x3A899B0E, int>(_Unk0); }
	static int GET_ACTOR_GROUND_MATERIAL(int _Unk0) { return Invoke<0x451A8EF2, int>(_Unk0); }
	static int IS_TELEPORTATION(int _Unk0) { return Invoke<0x3E758743, int>(_Unk0); }
	static void CUTSCENE_MANAGER_UNLOAD_CUTSCENE() { Invoke<0xE7F781B8, void>(); }
	static void AI_SET_SPECIAL_AREAS_TIME(int _Unk0, int _Unk1) { Invoke<0xF53EB511, void>(_Unk0, _Unk1); }
	static int TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(int _Unk0) { return Invoke<0x4AD89F02, int>(_Unk0); }
	static void SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(Actor _Actor, bool _Value) { Invoke<0xBEEDDD54, void>(_Actor, _Value); }
	static int GRINGO_QUERY_BOOL(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x5C2174C7, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GET_GAME_STATE() { return Invoke<0xDD9BD22B, int>(); }
	static int CREATE_JOURNAL_ENTRY_BY_HASH(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x619F1C3D, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_ITEM_WEAPON_BY_CRC(int _Unk0) { return Invoke<0x50C0E83F, int>(_Unk0); }
	static int GET_WEAPON_ENUM_FROM_CRC(int _Unk0) { return Invoke<0x2776B0F5, int>(_Unk0); }
	static void ACTOR_SET_WEAPON_AMMO_BY_CRC(int _Unk0, int _Unk1, float _Unk2) { Invoke<0xB008EF49, void>(_Unk0, _Unk1, _Unk2); }
	static int ADD_ACCESSORY_BY_CRC(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xF750D150, int>(_Unk0, _Unk1, _Unk2); }
	static void SET_MAX_ITEM_COUNT(int _Unk0, int _Unk1) { Invoke<0x0E712FCB, void>(_Unk0, _Unk1); }
	static void SET_PROP_TARGETABLE_ACQUISITION_RADIUS(int _Unk0, int _Unk1) { Invoke<0xE84EB2D5, void>(_Unk0, _Unk1); }
	static void SET_PROP_TARGETABLE_SCORE_BIAS(int _Unk0, int _Unk1) { Invoke<0x0E2B0212, void>(_Unk0, _Unk1); }
	static void SET_PROP_TARGETABLE_AS_ENEMY(int _Unk0, int _Unk1) { Invoke<0x5895EBBE, void>(_Unk0, _Unk1); }
	static void SET_PROP_TARGETABLE_TARGET_BOX_SIZE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6A937CBB, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_ACTOR_DEATH_DROP_DISTANCE(int _Unk0, int _Unk1) { Invoke<0x9F6B04C8, void>(_Unk0, _Unk1); }
	static void FIRE_SET_OWNER(FireHandle _FireHandle, Actor _Actor) { Invoke<0xE5C7E4C9, void>(_FireHandle, _Actor); }
	static int PROP_IS_VARIABLE_MESH_ENABLED(int _Unk0, int _Unk1) { return Invoke<0x375A33F0, int>(_Unk0, _Unk1); }
	static bool ACTOR_IS_VARIABLE_MESH_ENABLED(Actor _Actor, int _Id) { return Invoke<0x5DE31288, bool>(_Actor, _Id); }
	static int GET_ACTOR_PROOF(int _Unk0) { return Invoke<0x147EA072, int>(_Unk0); }
	static void NET_BROADCAST_EXPLODE_TARGET_EVENT(int _Unk0) { Invoke<0x49BC0219, void>(_Unk0); }
	static void ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x3A8487A6, void>(_Unk0, _Unk1, _Unk2); }
	static bool NET_GET_KILL_EFFECT_ON() { return Invoke<0xE5645CB3, bool>(); }
	static void SET_SHOCK_AMPLITUDE(int _Unk0) { Invoke<0xC9FCD3EC, void>(_Unk0); }
	static void SET_SHOCK_SPEED(int _Unk0) { Invoke<0xEC906A7A, void>(_Unk0); }
	static void FIRE_SHOCK(int _Unk0) { Invoke<0xFA43DCC5, void>(_Unk0); }
	static int IS_ACTOR_FLYING(int _Unk0) { return Invoke<0x25670955, int>(_Unk0); }
	static int COPY_EVENT(int _Unk0, int _Unk1) { return Invoke<0xF7DA8F09, int>(_Unk0, _Unk1); }
	static int GET_LINKED_ANIM_TARGET(int _Unk0) { return Invoke<0xA4E9E7EE, int>(_Unk0); }
	static int GET_NUM_EVENT_RESPONSES() { return Invoke<0x19F62133, int>(); }
	static int GET_EVENT_FOR_RESPONSE(int _Unk0) { return Invoke<0x586714AE, int>(_Unk0); }
	static int GET_EVENT_RESPONSE_ID(int _Unk0) { return Invoke<0xB573FF63, int>(_Unk0); }
	static void SET_PROP_HEALTH(int _Unk0, int _Unk1) { Invoke<0xC6D12FF5, void>(_Unk0, _Unk1); }
	static int PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xFC718FC5, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int GRINGO_SET_AVAILABILITY_EXT(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB78BC233, int>(_Unk0, _Unk1, _Unk2); }
	static void ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x8D7070F3, void>(_Unk0, _Unk1, _Unk2); }
	static bool CAMERA_PROBE(Vector3* Result, Vector3 Source, Vector3 Target, Actor Owner, int Flag) { return Invoke<0x720F2CA7, bool>(Result, Source, Target, Owner, Flag); }
	static void AMBIENT_SET_SCAN_CENTER_PLAYER() { Invoke<0x8B011F5D, void>(); }
	static void AMBIENT_SET_UPDATES_ENABLED(int _Unk0) { Invoke<0xA8226DFF, void>(_Unk0); }
	static void AMBIENT_SET_POINT_SPACING(int _Unk0) { Invoke<0x831FC466, void>(_Unk0); }
	static void AMBIENT_SET_SLOPE_VALUES(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xCC9E6F4C, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static IterationSet _GET_ITERATION_SET(int SetId) { return Invoke<0xBC58F1EA, IterationSet>(SetId); }
	static int UI_GET_SELECTED_INDEX(const char* MenuID, bool UNK0) { return Invoke<0x8B63A008, int>(MenuID, UNK0); }
	static void UI_TRANSITION_TO(int _Unk0) { Invoke<0xD0F2D2B6, void>(_Unk0); }
	static void NET_GAMER_SET_TITLE(int _Unk0, int _Unk1) { Invoke<0x7BD7A465, void>(_Unk0, _Unk1); }
	static int NET_GAMER_SETMY_JPN_TITLE(int _Unk0) { return Invoke<0xFD91BE0D, int>(_Unk0); }
	static void UPDATE_STRING_PROFILE_STAT(int _Unk0, int _Unk1) { Invoke<0xCF674E31, void>(_Unk0, _Unk1); }
	static void SET_PLAYER_COMBATMODE(int _CombatMode) { Invoke<0x57595189, void>(_CombatMode); }
	static void UI_GOTO(int _Unk0) { Invoke<0xA0159C77, void>(_Unk0); }
	static void SET_ENABLE_POINT_LIGHT(int _Unk0, int _Unk1) { Invoke<0x5F66B23E, void>(_Unk0, _Unk1); }
	static void SET_PERS_CHAR_ALLOW_SPAWN_ELSEWHERE(int _Unk0, int _Unk1) { Invoke<0x366B0AD1, void>(_Unk0, _Unk1); }
	static void _0x7614AEBA(int _Unk0, int _Unk1) { Invoke<0x7614AEBA, void>(_Unk0, _Unk1); }
	static int _0xD036DF91() { return Invoke<0xD036DF91, int>(); }
	static void _0x69FC319E() { Invoke<0x69FC319E, void>(); }
	static int HAS_SOUND_FINISHED(int _Unk0) { return Invoke<0xE85AEC2E, int>(_Unk0); }
	static void PLAY_SOUND_FROM_POSITION_PERSISTENT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x5B05E3E0, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void MAKE_BIRD_FLY_FROM_POINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x5E54E254, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void SQUAD_BATTLE_ALLIES_SET_FORMATION_DENSITY(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6BC42101, void>(_Unk0, _Unk1, _Unk2); }
	static int PLAY_SIMPLE_PROP_ANIMATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xDC3FBAE6, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int GET_AMBIENT_NUM_ACTORS_GRANTED_FOR_MISSIONS() { return Invoke<0xA607D290, int>(); }
	static void SET_INDICATOR_DRAW(int _Unk0, int _Unk1) { Invoke<0x8E387228, void>(_Unk0, _Unk1); }
	static void PLAY_WALLA_SOUND_FROM_POSITION_PERSISTENT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x3375FB38, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void SQUAD_HUNT_ENEMIES_SET_DEFAULT_BLIP_ALERTED(int _Unk0) { Invoke<0xE7A0A109, void>(_Unk0); }
	static void SQUAD_HUNT_ENEMIES_SET_DEFAULT_BLIP_INVESTIGATING(int _Unk0) { Invoke<0x0073024E, void>(_Unk0); }
	static void SQUAD_HUNT_ENEMIES_SET_DEFAULT_BLIP_UNALERTED(int _Unk0, int _Unk1) { Invoke<0x82C54B8A, void>(_Unk0, _Unk1); }
	static void CREATE_GATEWAY_TYPE(int _Unk0, int _Unk1) { Invoke<0x92CC441F, void>(_Unk0, _Unk1); }
	static void REGISTER_FOR_CREATION_EVENT(int _Unk0) { Invoke<0xFB227D11, void>(_Unk0); }
	static void RANGED_EVENT_RESPONSE_INIT_COMPLETE() { Invoke<0x85D62384, void>(); }
	static int ADD_NEW_RANGED_EVENT_RESPONSE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x8DF144C2, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int ADD_NEW_EVENT_RESPONSE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x17CF885F, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AUDIO_INIT_CAUCASIAN_ARMY_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0xE0553D6B, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_MEXICAN_ARMY_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0xD68E04BB, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_MISSION_CHARACTER_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0x638EAF70, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_RCM_CHARACTER_AE_RANGE(int _Unk0, int _Unk1) { Invoke<0xEA975A79, void>(_Unk0, _Unk1); }
	static void AUDIO_INIT_FAC_INVALID_VALUE(int _Unk0) { Invoke<0x6BB42C21, void>(_Unk0); }
	static void AUDIO_INIT_FAC_CATTLE_RUSTLER_VALUE(int _Unk0) { Invoke<0x0E634931, void>(_Unk0); }
	static void AUDIO_INIT_FAC_DRUNKNDIRTY_VALUE(int _Unk0) { Invoke<0x567712E5, void>(_Unk0); }
	static void AUDIO_INIT_FAC_GENERIC_CRIMINAL_VALUE(int _Unk0) { Invoke<0xB888B369, void>(_Unk0); }
	static void AUDIO_INIT_FAC_INDIAN_LAW_ENFORCEMENT_VALUE(int _Unk0) { Invoke<0x306D9FEE, void>(_Unk0); }
	static void AUDIO_INIT_FAC_INDIAN_RAIDER_VALUE(int _Unk0) { Invoke<0xC3614E0A, void>(_Unk0); }
	static void AUDIO_INIT_FAC_LAW_ENFORCEMENT_VALUE(int _Unk0) { Invoke<0xF962F2B8, void>(_Unk0); }
	static void AUDIO_INIT_FAC_MEXICAN_BANDITO_VALUE(int _Unk0) { Invoke<0x22D0DF9B, void>(_Unk0); }
	static void AUDIO_INIT_FAC_MEXICAN_LAW_ENFORCEMENT_VALUE(int _Unk0) { Invoke<0xA234C5D0, void>(_Unk0); }
	static void AUDIO_INIT_FAC_MEXICAN_REBEL_VALUE(int _Unk0) { Invoke<0x733BA9F5, void>(_Unk0); }
	static void AUDIO_INIT_FAC_MEXICAN_SOLDIER_VALUE(int _Unk0) { Invoke<0x79351E54, void>(_Unk0); }
	static void AUDIO_INIT_FAC_SMUGGLERS_VALUE(int _Unk0) { Invoke<0xCCBE7F0F, void>(_Unk0); }
	static void _0x5FCF3B85(int _Unk0) { Invoke<0x5FCF3B85, void>(_Unk0); }
	static void REGISTER_NUM_CONTEXT_TYPES(int _Unk0) { Invoke<0xF07F5E41, void>(_Unk0); }
	static void REGISTER_NUM_SPEECH_CONTEXTS(int _Unk0) { Invoke<0xCB139D15, void>(_Unk0); }
	static void REGISTER_ACTOR_SPEECH_CONTEXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x886E06C2, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void FINISH_REGISTERING_ACTOR_SPEECH_CONTEXTS() { Invoke<0xB6839756, void>(); }
	static void INIT_NATIVE_ACTORENUM_VEHICLE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x6D0B8619, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_TRAIN(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x807B9519, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void INIT_NATIVE_ACTORENUM_PLAYER(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xCBA75200, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SS_INIT(int _Unk0) { Invoke<0x8785E0CE, void>(_Unk0); }
	static int SS_SET_TABLE_SIZE(int _Unk0, int _Unk1) { return Invoke<0xAFFA5ABE, int>(_Unk0, _Unk1); }
	static void COMBAT_CLASS_NAME_REGISTER_INT(int _Unk0, int _Unk1) { Invoke<0x8DE6AF29, void>(_Unk0, _Unk1); }
	static void VERIFY_TYPE_COUNT(int _Unk0) { Invoke<0x0B396DFF, void>(_Unk0); }
	static void VERIFY_EVENT_COUNT(int _Unk0) { Invoke<0x24F3A0DB, void>(_Unk0); }
	static void AI_SPEECH_REGISTER_EVENT(int _Unk0, int _Unk1) { Invoke<0xDD925074, void>(_Unk0, _Unk1); }
	static void AI_SPEECH_REGISTER_TAGS_BEGIN(int _Unk0) { Invoke<0xAB297CCB, void>(_Unk0); }
	static void AI_SPEECH_REGISTER_TAG(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xA08B3E4B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void AI_SPEECH_REGISTER_TAGS_END() { Invoke<0x90B577F5, void>(); }
	static int CREATE_AI_SPEECH_PACKAGE_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0xE77F61B2, int>(_Unk0, _Unk1); }
	static int AI_SPEECH_ADD_PHRASE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xD269F20B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void AI_SPEECH_ADD_TAG_FOR_PHRASE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x15CFAB4C, void>(_Unk0, _Unk1, _Unk2); }
	static void DEBUG_PLAYER_LOG(int _Unk0) { Invoke<0x829F3E70, void>(_Unk0); }
	static void SET_GREETING_CONTEXT(int _Unk0) { Invoke<0x9953D4FC, void>(_Unk0); }
	static void SET_NON_VERBAL_GREETING_PROBABILITY(int _Unk0) { Invoke<0x751809BB, void>(_Unk0); }
	static void SET_GREETING_LOOK_AT_ANGLE_DEFAULT(int _Unk0) { Invoke<0x25A42C69, void>(_Unk0); }
	static void SET_GREETING_PROBABILITY_NPC_DEFAULT(int _Unk0) { Invoke<0x86CB8CFB, void>(_Unk0); }
	static void SET_GREETING_PROBABILITY_PLAYER_DEFAULT(int _Unk0) { Invoke<0xD6AD0016, void>(_Unk0); }
	static void SET_GREETING_MIN_TIME_INTERVAL(int _Unk0) { Invoke<0x8C00C0BE, void>(_Unk0); }
	static void SET_GREETING_MIN_TIME_INTERVAL_SAME_TARGET(int _Unk0) { Invoke<0x7CC67B30, void>(_Unk0); }
	static void SET_GREETING_MAX_DISTANCE(int _Unk0) { Invoke<0xD4ECD97D, void>(_Unk0); }
	static void SET_GREETING_MIN_MOVEMENT_SPEED(int _Unk0) { Invoke<0x826BB889, void>(_Unk0); }
	static void SET_GREETING_MAX_MOVEMENT_ANGLE(int _Unk0) { Invoke<0x5473B93A, void>(_Unk0); }
	static void SET_GREETING_ANIM_SIGNAL_TIMEOUT_DURATION(int _Unk0) { Invoke<0x1B1EFCCB, void>(_Unk0); }
	static void SPEECH_CONTEXT_INIT_DATA(int _Unk0) { Invoke<0xD85BAFA8, void>(_Unk0); }
	static void SPEECH_CONTEXT_ADD_CHILD(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xEB99D1A9, void>(_Unk0, _Unk1, _Unk2); }
	static void SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(int _Unk0, int _Unk1) { Invoke<0x3C6FE75D, void>(_Unk0, _Unk1); }
	static void _0x7DA34015(int _Unk0, int _Unk1) { Invoke<0x7DA34015, void>(_Unk0, _Unk1); }
	static void _0x79EFDF7E(int _Unk0, int _Unk1) { Invoke<0x79EFDF7E, void>(_Unk0, _Unk1); }
	static void _0xCA669478(int _Unk0, int _Unk1) { Invoke<0xCA669478, void>(_Unk0, _Unk1); }
	static void SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(int _Unk0, int _Unk1) { Invoke<0x74E7F898, void>(_Unk0, _Unk1); }
	static void GET_LOCKON_MISSION(int _Unk0, int _Unk1) { Invoke<0xB59AD5B1, void>(_Unk0, _Unk1); }
	static void AI_CONVERSE_SET_GIDDYUP_CONTEXT(int _Unk0) { Invoke<0xFCD2DE48, void>(_Unk0); }
	static void AI_CONVERSE_SET_WOAH_CONTEXT(int _Unk0) { Invoke<0xB8F1D736, void>(_Unk0); }
	static void AI_CONVERSE_SET_GREETING_CONTEXT(int _Unk0) { Invoke<0x30402375, void>(_Unk0); }
	static void AI_CONVERSE_SET_GOSSIP_AMBIENT_CONTEXT(int _Unk0) { Invoke<0x7922F870, void>(_Unk0); }
	static void AI_CONVERSE_SET_GOSSIP_REPLY_CONTEXT(int _Unk0) { Invoke<0x663723A0, void>(_Unk0); }
	static void AI_CONVERSE_SET_GOODBYE_START_CONTEXT(int _Unk0) { Invoke<0x93CFB180, void>(_Unk0); }
	static void AI_CONVERSE_SET_GOODBYE_CONTEXT(int _Unk0) { Invoke<0xA1FCBA24, void>(_Unk0); }
	static void AI_CONVERSE_INIT_CAMPFIRE_CONTEXT_STORAGE() { Invoke<0x7ED8B78C, void>(); }
	static void AI_CONVERSE_SET_CAMPFIRE_INVITE_CONTEXT(int _Unk0) { Invoke<0xD4871BDB, void>(_Unk0); }
	static void AI_CONVERSE_SET_CAMPFIRE_CONTEXT(int _Unk0, int _Unk1) { Invoke<0xA88359B9, void>(_Unk0, _Unk1); }
	static void AI_CONVERSE_SET_CAMPFIRE_STORY_DONE_CONTEXT(int _Unk0) { Invoke<0xC65F6751, void>(_Unk0); }
	static void AI_CONVERSE_SET_CAMPFIRE_STORY_LEAVE_CONTEXT(int _Unk0) { Invoke<0x83CBD612, void>(_Unk0); }
	static void AI_CONVERSE_SET_CAMPFIRE_RESPONSE_CONTEXT(int _Unk0) { Invoke<0x4AD2BC30, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(int _Unk0, int _Unk1) { Invoke<0xA13D379B, void>(_Unk0, _Unk1); }
	static void SET_WEATHER_TYPE_GOOD(int _Unk0) { Invoke<0xC4C59CA4, void>(_Unk0); }
	static void SET_WEATHER_TYPE_RAINY(int _Unk0) { Invoke<0xA915DC46, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_WEATHER_RESTRICTION_GOOD(int _Unk0) { Invoke<0xBAD8B9A8, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_WEATHER_RESTRICTION_RAINY(int _Unk0) { Invoke<0x6CBF76AB, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_RESTRICTION_IS_LAW(int _Unk0) { Invoke<0x4F64116B, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_TIME_RESTRICTION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0386C556, void>(_Unk0, _Unk1, _Unk2); }
	static void SPEECH_CONTEXT_SET_TARGET_PLAYER(int _Unk0) { Invoke<0xE0DD373F, void>(_Unk0); }
	static void SPEECH_CONTEXT_SET_OPPOSITE_GENDER_RESTRICTION(int _Unk0) { Invoke<0xF63FA0A1, void>(_Unk0); }
	static void AI_CONVERSE_SET_GREET_SAUCY_CONTEXT(int _Unk0) { Invoke<0x375BBD85, void>(_Unk0); }
	static void AI_CONVERSE_SET_SOLICIT_CONTEXT(int _Unk0) { Invoke<0x4819FB7C, void>(_Unk0); }
	static void AI_CONVERSE_SET_REJECTION_CONTEXT(int _Unk0) { Invoke<0xC4F468AA, void>(_Unk0); }
	static void GAME_ESTIMATE_MOUNT(int _Unk0) { Invoke<0xBD3A0E6D, void>(_Unk0); }
	static void AI_CONVERSE_SET_GREET_PLAYER_CONTEXT(int _Unk0) { Invoke<0xD6BBC8AA, void>(_Unk0); }
	static void SET_ZONE_POPULATION_MAX_PER_CELL(int _Unk0, int _Unk1) { Invoke<0x354DDFED, void>(_Unk0, _Unk1); }
	static void CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(int _Unk0) { Invoke<0x230AB95E, void>(_Unk0); }
	static void ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(int _Unk0, int _Unk1) { Invoke<0x64799CEE, void>(_Unk0, _Unk1); }
	static void SET_ZONE_RESERVE_GRINGOS(int _Unk0, int _Unk1) { Invoke<0xC43C4D76, void>(_Unk0, _Unk1); }
	static void SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xFCA83D15, void>(_Unk0, _Unk1, _Unk2); }
	static int CREATE_VOLUME_SPAWNING_ZONE_VOLUME(int _Unk0) { return Invoke<0x9189EB8B, int>(_Unk0); }
	static int SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(int _Unk0) { return Invoke<0x00CDD849, int>(_Unk0); }
	static int SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(int _Unk0) { return Invoke<0x6138B1B8, int>(_Unk0); }
	static void REMOVE_GLOW_INDICATOR(int _Unk0) { Invoke<0xCBDD5832, void>(_Unk0); }
	static int IS_VOLUME_ENABLED(int _Unk0) { return Invoke<0x29ED6F03, int>(_Unk0); }
	static int COUNT_FLAMES_IN_VOLUME(int _Unk0) { return Invoke<0x3DD3E1EB, int>(_Unk0); }
	static int _0x3B32AB84(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x3B32AB84, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void SET_ANIMATION_OVERRIDE_SCALE(int _Unk0, int _Unk1) { Invoke<0x3E30A514, void>(_Unk0, _Unk1); }
	static int SET_PANIM_PARAMS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x5941295A, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_CURRENT_DUEL_SCORE(int _Unk0) { return Invoke<0x33CE5435, int>(_Unk0); }
	static int _0x26011C78(int _Unk0) { return Invoke<0x26011C78, int>(_Unk0); }
	static int HAS_ACCESSORY_ENUM(int _Unk0, int _Unk1) { return Invoke<0x9B958A25, int>(_Unk0, _Unk1); }
	static void AUDIO_DISALLOW_PREDUEL_SPEECH(int _Unk0) { Invoke<0xD021B37F, void>(_Unk0); }
	static void AUDIO_ALLOW_PREDUEL_SPEECH(int _Unk0) { Invoke<0x94A24A5C, void>(_Unk0); }
	static int BEGIN_DUEL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10, int _Unk11, int _Unk12) { return Invoke<0x44B7FF7E, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10, _Unk11, _Unk12); }
	static int DROP_ACCESSORY_ENUM(int _Unk0, int _Unk1) { return Invoke<0x7FDDF876, int>(_Unk0, _Unk1); }
	static int ADD_DUEL_HOSTAGE(int _Unk0, int _Unk1) { return Invoke<0x82A6B8FC, int>(_Unk0, _Unk1); }
	static void SET_EMOTION(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1D1D9387, void>(_Unk0, _Unk1, _Unk2); }
	static int SET_DUEL_DIFFICULTY(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x3E5C3C2D, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void _DYNAMICMIXER_2() { Invoke<0xADCC16A2, void>(); }
	static int REMOVE_EVENT_RESPONSE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xFEE731AF, int>(_Unk0, _Unk1, _Unk2); }
	static void CLEAR_PLAYER_BLOOD() { Invoke<0x807C9D01, void>(); }
	static void SET_PLAYER_BLOOD_FADE_RATE(int _Unk0) { Invoke<0x9D9E093E, void>(_Unk0); }
	static void AUDIO_MG_FILLET_END() { Invoke<0x338DF299, void>(); }
	static int IS_ACTOR_ANIM_PHASE_LOCKED(int _Unk0) { return Invoke<0xE0AC4B86, int>(_Unk0); }
	static void RELEASE_ACTOR_ANIM_PHASE_LOCK(int _Unk0) { Invoke<0xAEBAE989, void>(_Unk0); }
	static void AUDIO_MG_FILLET_PULL_FROM_TABLE() { Invoke<0xDE7C65CE, void>(); }
	static void PRICK_PLAYER_FINGER(int _Unk0) { Invoke<0x32F2D6F1, void>(_Unk0); }
	static void HUD_TIMER_PAUSE() { Invoke<0x3383E839, void>(); }
	static void AUDIO_MG_FILLET_HIT_FINGER() { Invoke<0x7784BB85, void>(); }
	static int IS_RMPTFX_FINISHED(int _Unk0) { return Invoke<0xD3A523FD, int>(_Unk0); }
	static void SET_ACTOR_ANIM_PHASE_LOCK(int _Unk0, int _Unk1) { Invoke<0xB03616C2, void>(_Unk0, _Unk1); }
	static void AUDIO_MG_FILLET_HIT_TABLE() { Invoke<0x24AE7AFB, void>(); }
	static bool ACTOR_HAS_VARIABLE_MESH(Actor _Actor, int _Id) { return Invoke<0xA091179F, bool>(_Actor, _Id); }
	static void AUDIO_MG_FILLET_START(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0CCE435E, void>(_Unk0, _Unk1, _Unk2); }
	static void SET_GLOBAL_DISABLE_SPU_COLLIDER_UPDATE(int _Unk0) { Invoke<0x87A2C1D5, void>(_Unk0); }
	static void AI_RESET_NAV_SUBGRID_CELL_SIZE(int _Unk0) { Invoke<0x750A1EF6, void>(_Unk0); }
	static int SET_PROP_ANGULAR_VELOCITY_DEGS(int _Unk0, int _Unk1) { return Invoke<0x544BCE48, int>(_Unk0, _Unk1); }
	static int GET_LOOKSTICK_INVERT_Y() { return Invoke<0x9B083FD2, int>(); }
	static int GET_PHYSINST_VELOCITY(int _Unk0, int _Unk1) { return Invoke<0x17B69196, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_UPDATE_PRIORITY(int _Unk0) { return Invoke<0x6D322CD3, int>(_Unk0); }
	static void HUD_COUNTER_SET(int _Unk0) { Invoke<0x7D94675D, void>(_Unk0); }
	static int FLASH_SET_ARRAY_STRING(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x35CDFDC5, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int FLASH_SET_ARRAY_INT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x8A2A1A51, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int _0x581CAC89() { return Invoke<0x581CAC89, int>(); }
	static int _0x79AFAB1F(int _Unk0, int _Unk1) { return Invoke<0x79AFAB1F, int>(_Unk0, _Unk1); }
	static int GUI_MAKE_OVERLAY(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA2A68BAD, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int GUI_MESSAGE_RELEASED_INPUT(int _Unk0) { return Invoke<0xD019FF37, int>(_Unk0); }
	static int GUI_MOVE_WINDOW_ABS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xA7FF2899, int>(_Unk0, _Unk1, _Unk2); }
	static GUIWindow GUI_MAIN_WINDOW() { return Invoke<0x5405B8AA, GUIWindow>(); }
	static void AUDIO_PLAY_ALL_LINES_FOR_ACTOR(int _Unk0) { Invoke<0x72168160, void>(_Unk0); }
	static int GET_MOST_RECENT_RIDER(int _Unk0) { return Invoke<0x668E55C3, int>(_Unk0); }
	static void _0x8DEC3E03(int _Unk0) { Invoke<0x8DEC3E03, void>(_Unk0); }
	static int GET_LAST_PRINTED_OBJECTIVE() { return Invoke<0x14708CB1, int>(); }
	static void NET_VOICE_BROADCAST_ENABLE() { Invoke<0x7A99E7DE, void>(); }
	static void NET_VOICE_BROADCAST_DISABLE() { Invoke<0x1D5E39A0, void>(); }
	static int GRINGO_QUERY_FLOAT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x69CF9B75, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int IS_ACTOR_INITED(int _Unk0) { return Invoke<0x24F4DAB2, int>(_Unk0); }
	static void SET_ATTACHMENT_IGNORE_ROTATION(int _Unk0, int _Unk1) { Invoke<0xA870B28E, void>(_Unk0, _Unk1); }
	static int NET_POSSE_GET_LEADER_WAYPOINT(int _Unk0) { return Invoke<0x9DDB29B1, int>(_Unk0); }
	static bool NET_POSSE_IS_LEADER_WAYPOINT_VALID() { return Invoke<0x24A1B923, bool>(); }
	static int DECOR_REMOVE_ALL(int _Unk0) { return Invoke<0xFDB9E349, int>(_Unk0); }
	static void PLAYSTAT_STRING(int _Unk0, int _Unk1) { Invoke<0x713B1D7F, void>(_Unk0, _Unk1); }
	static int FLASH_SET_BOOL(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x34F03EC7, int>(_Unk0, _Unk1, _Unk2); }
	static void UI_TEXTURE_SET_HASH(int _Unk0, int _Unk1) { Invoke<0x573BEF3B, void>(_Unk0, _Unk1); }
	static void UI_SET_TEXT_HASH(int _Unk0, int _Unk1) { Invoke<0x06FD03D2, void>(_Unk0, _Unk1); }
	static void _0x50C18480(const char* _Unk0, int _Unk1) { Invoke<0x50C18480, void>(_Unk0, _Unk1); }
	static int PPP_GET_ELEMENT_MAGNITUDE(int _Unk0) { return Invoke<0x6A0A241A, int>(_Unk0); }
	static int NET_GET_NAT_TYPE() { return Invoke<0x31700C0A, int>(); }
	static int GET_AMBIENT_MAX_NUM_TOTAL_ACTORS() { return Invoke<0xC1A30BB5, int>(); }
	static void SET_AMBIENT_MAX_NUM_TOTAL_ACTORS(int _Unk0) { Invoke<0x2C4CBC25, void>(_Unk0); }
	static int IS_ACTORENUM_DLC(int _Unk0) { return Invoke<0xF2140DEE, int>(_Unk0); }
	static void NET_PLAYER_BARKER_RESET(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xBECB3EEC, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int NET_POSSE_REMOVE_GAMER(int _Unk0) { return Invoke<0x98A5CDC5, int>(_Unk0); }
	static int NET_GET_AND_CLEAR_GAME_MODE_REQUEST() { return Invoke<0x8808546E, int>(); }
	static int NET_GET_AND_CLEAR_PLAYLIST_REQUEST() { return Invoke<0x1A47001B, int>(); }
	static bool NET_GET_AND_CLEAR_QUIT_GAME_REQUEST() { return Invoke<0x0FF6B8F4, bool>(); }
	static void NET_GAMER_BARKER_ACCEPT(int _Unk0) { Invoke<0xCE8F6304, void>(_Unk0); }
	static void NET_SET_FREE_ROAM_MODE(int _Unk0) { Invoke<0x41921C98, void>(_Unk0); }
	static void NET_GAMER_BARKER_REJECT(int _Unk0) { Invoke<0xAB32D5D9, void>(_Unk0); }
	static int NET_GET_USING_SPHERE_CURVES(int _Unk0) { return Invoke<0x75F27D60, int>(_Unk0); }
	static int NET_POSSE_IS_REQUEST_PRESENT(int _Unk0) { return Invoke<0x6A7B9FAD, int>(_Unk0); }
	static int NET_POSSE_IS_INVITE_PRESENT(int _Unk0) { return Invoke<0x106CE441, int>(_Unk0); }
	static void NET_PLAYER_SHOW_CONTEXT_MENU(int _Unk0, int _Unk1) { Invoke<0xA64A451E, void>(_Unk0, _Unk1); }
	static int GET_PLAYLIST_FROM_DB_BY_NAME(int _Unk0, int _Unk1) { return Invoke<0xB514ECA7, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_COMBAT_CLASS(int _Unk0) { return Invoke<0x0129B715, int>(_Unk0); }
	static void SET_VEHICLE_PASSENGERS_ALLOWED(int _Unk0, int _Unk1) { Invoke<0xBD0C1BEA, void>(_Unk0, _Unk1); }
	static void SQUADS_MERGE(int _Unk0, int _Unk1) { Invoke<0x320E2604, void>(_Unk0, _Unk1); }
	static void SET_ACTOR_SKIP_VISIBILITY_CHECK(int _Unk0, int _Unk1) { Invoke<0x91BB8548, void>(_Unk0, _Unk1); }
	static void SET_VOLUME_PARAMS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0xFEC1CBC6, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static int GRINGO_QUERY_OBJECT_REF(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x15D6F3C7, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void NET_SCOREGRAPH_ADD_PLAYER_SCORE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x746897AB, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int OBJECT_LOCATOR_ATTACH_TO_OBJECT_BONE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8) { return Invoke<0x0B24362F, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8); }
	static int GET_PLAYER_CONTROL_CONFIG(int _Unk0) { return Invoke<0x8421033D, int>(_Unk0); }
	static void NET_GAMER_BLIPS_SHOW_ON_FULL_MAP(int _Unk0) { Invoke<0xE5FE0A6A, void>(_Unk0); }
	static void NET_GAMER_BLIPS_FORCE_VISIBLE(int _Unk0) { Invoke<0x08D84437, void>(_Unk0); }
	static void SET_PLAYER_COMBATMODE_OVERRIDE(int _Unk0) { Invoke<0xAFFBBE78, void>(_Unk0); }
	static void NET_GAMER_ICONS_SET_STEALTH(int _Unk0) { Invoke<0xF34B8448, void>(_Unk0); }
	static void NET_GAMER_BLIPS_SET_STEALTH(int _Unk0) { Invoke<0x796E66E7, void>(_Unk0); }
	static void NET_GAMER_BLIPS_SHOW_POSSE_MEMBERS(int _Unk0) { Invoke<0x784F04DD, void>(_Unk0); }
	static void NET_GAMER_BLIPS_TREAT_COVER_AS_ALIVE(int _Unk0) { Invoke<0x3248D20E, void>(_Unk0); }
	static void ACTOR_SET_DROP_ITEM_ON_DEATH_ENUMERATED(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBC46E3E1, void>(_Unk0, _Unk1, _Unk2); }
	static void NET_GAMER_SET_BLIP_STEALTH_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0x2634F265, void>(_Unk0, _Unk1); }
	static void NET_GAMER_SET_ICON_STEALTH_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0xA0A5FF80, void>(_Unk0, _Unk1); }
	static int V2STR(int _Unk0) { return Invoke<0x52C10147, int>(_Unk0); }
	static void AMBIENT_SET_EXCLUSION_VOLUME(int _Unk0) { Invoke<0x90008899, void>(_Unk0); }
	static int NET_GET_AREA_OVERLOAD_STATE_FOR_SLOT(int _Unk0) { return Invoke<0xCB42389E, int>(_Unk0); }
	static int _0x63034F52(int _Unk0) { return Invoke<0x63034F52, int>(_Unk0); }
	static int _0xE9EAC45C(int _Unk0) { return Invoke<0xE9EAC45C, int>(_Unk0); }
	static int IS_SESSION_CURRENTLY_JOINED_SESSION(int _Unk0) { return Invoke<0xBDF22FCA, int>(_Unk0); }
	static int _0xA174152C(int _Unk0) { return Invoke<0xA174152C, int>(_Unk0); }
	static int _0x0183A3F0(int _Unk0) { return Invoke<0x0183A3F0, int>(_Unk0); }
	static void NET_SESSION_SET_GAME_LOCALE_EX(int _Unk0) { Invoke<0x9EA132A3, void>(_Unk0); }
	static int GUI_MAKE_WINDOW(GUIWindow Parent, int _Unk1, const char* WindowName, const char* _Unk3) { return Invoke<0xA20246AB, int>(Parent, _Unk1, WindowName, _Unk3); }
	static void SET_ATTACHMENT_LOCAL_ROTATION(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x2F7B457B, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void ENABLE_REPLICATION_SET_EXPLOSION(int _Unk0) { Invoke<0x651F6299, void>(_Unk0); }
	static int GAME_INSTANCE_ITERATOR_START(int _Unk0) { return Invoke<0x4A721118, int>(_Unk0); }
	static int GAME_INSTANCE_ITERATOR_NEXT(int _Unk0) { return Invoke<0x4500B98A, int>(_Unk0); }
	static bool GET_WEAPON_GOLD(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x6DBD1DDB, bool>(_Actor, _WeaponModel); }
	static int GATEWAYS_ARE_DISABLED() { return Invoke<0x3AE1062C, int>(); }
	static bool _IS_ACTOR_AMMO_INFINITE(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0xC666B987, bool>(_Actor, _WeaponModel); }
	static void READY_ITEM(const char* ItemName, Actor Actor) { Invoke<0x2B00A643, void>(ItemName, Actor); }
	static void NET_SESSION_SET_GAME_MODE_TYPE(int _Unk0) { Invoke<0xCB0BCAE2, void>(_Unk0); }
	static void DISABLE_PLAYER_GRINGO_USE(int _Unk0, int _Unk1) { Invoke<0x6FCF6BC8, void>(_Unk0, _Unk1); }
	static void AUDIO_TURN_ON_WALLA() { Invoke<0xF7B747CA, void>(); }
	static void SET_PLAYER_COMBATMODE_EXCLUSION(int _Unk0) { Invoke<0x1184EC7B, void>(_Unk0); }
	static void PLAYSTAT_MP_DEED_COMPLETE(int _Unk0) { Invoke<0x120E6123, void>(_Unk0); }
	static bool IS_HUD_MAP_DRAW_ENABLED() { return Invoke<0xF5B7B208, bool>(); }
	static int LOCATE_GRINGOS_OF_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xBD269877, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void AUDIO_SHUT_OFF_WALLA() { Invoke<0x43C5F320, void>(); }
	static void SET_CAMERA_FOCUS_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { Invoke<0x48C3D85A, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void HUD_SET_CENTER_BLIP_SHOWN(int _Unk0) { Invoke<0xEB214384, void>(_Unk0); }
	static int GET_SLOT_FACING(int _Unk0, int _Unk1) { return Invoke<0x34A9866B, int>(_Unk0, _Unk1); }
	static void ALLOW_GAME_CAMERA_AUTO_CENTERING(int _Unk0, int _Unk1) { Invoke<0x6E303287, void>(_Unk0, _Unk1); }
	static void _UI_ENTER_EXCLUSIVE(char* scaleformLayer) { Invoke<0xB1A2028A, void>(scaleformLayer); }
	static void BURN_ACTOR(Actor _Actor, float _Unk1, int _Unk2) { Invoke<0xA257C16D, void>(_Actor, _Unk1, _Unk2); }
	static int GRINGO_STAY_ACTIVE(int _Unk0, int _Unk1) { return Invoke<0x9175FCFA, int>(_Unk0, _Unk1); }
	static int GET_CUTSCENE_TUNER_CUTSCENE_INDEX() { return Invoke<0xD8218A5B, int>(); }
	static int GET_CUTSCENE_TUNER_SCRIPT_NAME(int _Unk0) { return Invoke<0x74EE96B8, int>(_Unk0); }
	static int SC_CHALLENGE_GET_MIN_SUBMIT_DELAY_SECS() { return Invoke<0x2374C1E0, int>(); }
	static void TRAIN_DESTROY_CAR(int _Unk0, int _Unk1) { Invoke<0x2040FB19, void>(_Unk0, _Unk1); }
	static int TRAIN_GET_NEAREST_POI_DISTANCE(int _Unk0) { return Invoke<0x6FC1847D, int>(_Unk0); }
	static void AUDIO_SET_GLOBAL_LAW_VALUES(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x90DD37E7, void>(_Unk0, _Unk1, _Unk2); }
	static int AI_GLOBAL_GET_PERMANENT_DANGER(int _Unk0) { return Invoke<0xFF00B4E6, int>(_Unk0); }
	static void DESTROY_CRIME(int _Unk0) { Invoke<0xE9AB08C0, void>(_Unk0); }
	static int IS_CRIME_TALLIED(int _Unk0) { return Invoke<0x72A048B7, int>(_Unk0); }
	static int GET_CRIME_FACTION(int _Unk0) { return Invoke<0xE2FE0673, int>(_Unk0); }
	static int GET_CRIME_WORLD_REGION(int _Unk0) { return Invoke<0x67F224B4, int>(_Unk0); }
	static int AI_SELF_DEFENSE_GET_ATTACKED_PLAYER_FIRST(int _Unk0) { return Invoke<0x68C50F50, int>(_Unk0); }
	static int GET_JOURNAL_ENTRY_PROGRESS(int _Unk0) { return Invoke<0xF2C1D690, int>(_Unk0); }
	static FireHandle FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(Actor _Actor) { return Invoke<0x91396EB7, FireHandle>(_Actor); }
	static int FIRE_GET_OWNER(int _Unk0) { return Invoke<0x15683736, int>(_Unk0); }
	static void SET_JOURNAL_INFO_LABEL(int _Unk0, int _Unk1) { Invoke<0x40C2576F, void>(_Unk0, _Unk1); }
	static void STREAMING_GET_OVERRIDE_MAIN_POI_POS(int _Unk0) { Invoke<0xDF3DF05A, void>(_Unk0); }
	static bool AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return Invoke<0x86E995D1, bool>(); }
	static int GET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(int _Unk0) { return Invoke<0x78B7976E, int>(_Unk0); }
	static void HUD_STAMINA_OVERRIDE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xADBD44F6, void>(_Unk0, _Unk1, _Unk2); }
	static int LOCATE_NAMED_VOLUME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x6F513950, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int GET_CAMERA_SHOT_TRANSITION(int _Unk0) { return Invoke<0x7AC13DF5, int>(_Unk0); }
	static void SET_FIXED_TRANSITION_T(int _Unk0, int _Unk1) { Invoke<0x143A617C, void>(_Unk0, _Unk1); }
	static void ANIMAL_ACTOR_SET_DOCILE(Actor Actor, bool Docile) { Invoke<0xABFCFF01, void>(Actor, Docile); }
	static void GET_CAMERA_UP_VECTOR(int _Unk0, int _Unk1) { Invoke<0x94A10ECD, void>(_Unk0, _Unk1); }
	static int CUTSCENEOBJECT_ADD_TRANSITION_FIXED(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x7A48EDDF, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static void DUMP_MEMORY_STATS() { Invoke<0xCA99D3B4, void>(); }
	static int SC_CHALLENGE_GET_VAR_BOOL(int _Unk0, int _Unk1) { return Invoke<0xB40622F1, int>(_Unk0, _Unk1); }
	static int SC_CHALLENGE_GET_VAR_FLOAT(int _Unk0, int _Unk1) { return Invoke<0xC322556E, int>(_Unk0, _Unk1); }
	static void UI_CHALLENGE_CREATE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x1EB9AF29, void>(_Unk0, _Unk1, _Unk2); }
	static void UI_CHALLENGE_SET_PROGRESS(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x10F5386D, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int SC_CHALLENGE_GET_EXPIRATION_STATE(int _Unk0) { return Invoke<0x4BD61354, int>(_Unk0); }
	static void SC_CHALLENGE_PROCESS_EXPIRATION(int _Unk0) { Invoke<0x1876B04E, void>(_Unk0); }
	static void SC_CHALLENGE_RELEASE(int _Unk0) { Invoke<0xD2513200, void>(_Unk0); }
	static int SC_CHALLENGE_GET_LEADERBOARD_ID(int _Unk0, int _Unk1) { return Invoke<0xC21048BF, int>(_Unk0, _Unk1); }
	static void SC_CHALLENGE_CLEAN_UP(int _Unk0) { Invoke<0xB7DE2AF2, void>(_Unk0); }
	static void UI_CHALLENGE_SET_PROGRESS_DETAIL(int _Unk0, int _Unk1) { Invoke<0x9D9CDCE3, void>(_Unk0, _Unk1); }
	static void UI_CHALLENGE_SET_TITLE_TEXTURE(int _Unk0, int _Unk1) { Invoke<0xD5ED5FCB, void>(_Unk0, _Unk1); }
	static void SC_CHALLENGE_RESET_EXPIRATION_STATE(int _Unk0) { Invoke<0xF5F97702, void>(_Unk0); }
	static int SC_CHALLENGE_IS_ACTIVE(int _Unk0) { return Invoke<0x5D7197BC, int>(_Unk0); }
	static int SC_CHALLENGE_IS_RUNNING(int _Unk0) { return Invoke<0x79F09AC7, int>(_Unk0); }
	static int GET_NUM_KILLS_LAST_DEADEYE() { return Invoke<0xBBF4F7E4, int>(); }
	static int GRINGO_ANIM_PLAY_NODE_BY_HASH(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xAFD53217, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_ANIM_IS_SUBNODE_PLAYING_BY_HASH(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB555A648, int>(_Unk0, _Unk1, _Unk2); }
	static int GET_GRINGO_INT_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x8A86AF8B, int>(_Unk0, _Unk1, _Unk2); }
	static int SET_GRINGO_INT_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x377B2C54, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_GET_COMPONENT_HASH(int _Unk0) { return Invoke<0x14E53D6F, int>(_Unk0); }
	static int TRANSFORM_OBJECT_RELATIVE(int _Unk0, int _Unk1) { return Invoke<0xC15C3361, int>(_Unk0, _Unk1); }
	static int GRINGO_COMPONENT_CHECK_NAME(int _Unk0, int _Unk1) { return Invoke<0xA766EA5C, int>(_Unk0, _Unk1); }
	static int IS_PROP_STREAMED_IN(int _Unk0) { return Invoke<0x5131AEF1, int>(_Unk0); }
	static void GRAVE_SET_DUG_UP(int _Unk0, int _Unk1) { Invoke<0x674156BB, void>(_Unk0, _Unk1); }
	static int GET_GRAVE_FROM_OBJECT(int _Unk0) { return Invoke<0xA90E602F, int>(_Unk0); }
	static int OBJECT_LOCATOR_GET_LOCATOR_LOCAL_POSITION(int _Unk0, int _Unk1) { return Invoke<0x04507DBC, int>(_Unk0, _Unk1); }
	static int OBJECT_LOCATOR_GET_LOCATOR_LOCAL_ORIENTATION(int _Unk0, int _Unk1) { return Invoke<0x88F7432C, int>(_Unk0, _Unk1); }
	static float GET_ACTOR_ANIM_CURRENT_TIME(Actor _Actor, const char* _AnimSet) { return Invoke<0x8609F5E1, float>(_Actor, _AnimSet); }
	static int SET_PROP_VELOCITY_ON_AXIS(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xC9F3981D, int>(_Unk0, _Unk1, _Unk2); }
	static int IS_PIP_ENABLED(int _Unk0) { return Invoke<0x3736FF43, int>(_Unk0); }
	static void GRINGO_SET_AVAILABILITY(int _Unk0, int _Unk1) { Invoke<0xF95DDBF2, void>(_Unk0, _Unk1); }
	static void _0x6BA667B5(int _Unk0) { Invoke<0x6BA667B5, void>(_Unk0); }
	static int GRINGO_PLAY_ANIM_ON_ACTOR_WITH_PROP_COMPONENT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xB8C419C3, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static bool IS_ACTOR_ANIM_PLAYING(Actor _Actor, const char* _AnimSet) { return Invoke<0x1ADE21EB, bool>(_Actor, _AnimSet); }
	static int LOCATE_GRINGO_OF_NAME(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x08D76BB0, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int LOCATE_ACTOR_OF_TYPE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA2DEC153, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static int IS_VEHICLE_ENGINE_RUNNING(int _Unk0) { return Invoke<0x8257A916, int>(_Unk0); }
	static void SET_VEHICLE_ENGINE_RUNNING(Actor Vehicle, bool Running) { Invoke<0x462B5FDF, void>(Vehicle, Running); }
	static int GET_NEW_PHYSINST_IN_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x6517FF1B, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GRINGO_IS_ACTIVE(int _Unk0) { return Invoke<0xB8A48688, int>(_Unk0); }
	static void DESTROY_ZONE(int _Unk0) { Invoke<0xD62F3D27, void>(_Unk0); }
	static int GET_GRINGO_RELATIVE_ORIENTATION_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x7E4681E8, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_ACTOR_FACE(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x29C63CE6, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_REWARD_ACTOR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x217B4264, int>(_Unk0, _Unk1, _Unk2); }
	static int GRINGO_IS_CAPABLE_OF_USE(int _Unk0, int _Unk1) { return Invoke<0x3DEA631B, int>(_Unk0, _Unk1); }
	static void PUSH_MINIGAME_INPUT(int _Unk0, int _Unk1) { Invoke<0xE2B894D1, void>(_Unk0, _Unk1); }
	static void SET_MINIGAME_WIN_STATE(int _Unk0) { Invoke<0x8275FDD4, void>(_Unk0); }
	static int _0x6AAD0420(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x6AAD0420, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int _0x655D350B(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x655D350B, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int SET_OBJECT_ANIMATOR_RATE(int _Unk0, int _Unk1) { return Invoke<0x0B4D9AFA, int>(_Unk0, _Unk1); }
	static int SET_OBJECT_ANIMATOR_PHASE(int _Unk0, int _Unk1) { return Invoke<0xC0128653, int>(_Unk0, _Unk1); }
	static bool IS_MINIGAME_RUNNING() { return Invoke<0x117D7E71, bool>(); }
	static int HAS_PROP_BEEN_DAMAGED(int _Unk0) { return Invoke<0x7151E7F0, int>(_Unk0); }
	static int CREATE_OBJECT_ANIMATOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x856D5842, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int SET_OBJECT_ANIMATOR_BONE_RANGE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x188B6431, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int SET_OBJECT_ANIMATOR_ANIMATION(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xB57D4110, int>(_Unk0, _Unk1, _Unk2); }
	static int REQUEST_ARTICULATED_CORPSE(int _Unk0) { return Invoke<0x97951004, int>(_Unk0); }
	static int ATTACH_SET_ROTATIONAL_CONSTRAINT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0x325F7E50, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void SET_GAME_CAMERA_CURVE_OVERRIDE(int _Unk0, int _Unk1) { Invoke<0x507BBD3A, void>(_Unk0, _Unk1); }
	static void RESET_GAME_CAMERA_CURVE_OVERRIDES() { Invoke<0xC93116B1, void>(); }
	static int OBJECT_LOCATOR_ATTACH_TO_OBJECT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7) { return Invoke<0xEB33480A, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7); }
	static int GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5) { return Invoke<0xA9E00433, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5); }
	static void AI_SET_DISARMED(int _Unk0, int _Unk1) { Invoke<0x2444577C, void>(_Unk0, _Unk1); }
	static void LASSO_EVENT(int _Unk0, int _Unk1) { Invoke<0x98FAF5D7, void>(_Unk0, _Unk1); }
	static void AUDIO_PLAY_PLAYER_HOGTIE_LINE(int _Unk0) { Invoke<0x96161235, void>(_Unk0); }
	static int CAN_ACTOR_HOGTIE_TARGET(int _Unk0, int _Unk1) { return Invoke<0x1AA3A0C0, int>(_Unk0, _Unk1); }
	static void AI_GLOBAL_REPORT_DANGER(int _Unk0) { Invoke<0xCF70330C, void>(_Unk0); }
	static int GET_OBJECT_RELATIVE_ORIENTATION_IN_OBJECT_SPACE(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x6689F85C, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int STRINGS_ARE_EQUAL_CLAMPED(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xEC28CA8E, int>(_Unk0, _Unk1, _Unk2); }
	static int FLASH_GET_FLOAT(int _Unk0, int _Unk1) { return Invoke<0xA332ACE3, int>(_Unk0, _Unk1); }
	static void AUDIO_TRIGGER_PLAYER_LOOTING_MALE_SPEECH() { Invoke<0x3184B507, void>(); }
	static void AUDIO_TRIGGER_PLAYER_LOOTING_FEMALE_SPEECH() { Invoke<0x489B3078, void>(); }
	static void AUDIO_PLAY_PAIN(int _Unk0, int _Unk1) { Invoke<0x123709E8, void>(_Unk0, _Unk1); }
	static int GRINGO_ACTOR_MOVE_TO(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0x698105FC, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int GET_OBJECT_ANIMATOR_PHASE(int _Unk0) { return Invoke<0xC5205015, int>(_Unk0); }
	static int GRINGO_ANIM_GET_AST_FILENAME(int _Unk0) { return Invoke<0xADBF3ADF, int>(_Unk0); }
	static void SET_PHYSINST_COLLIDES_AGAINST_INACTIVE(int _Unk0, int _Unk1) { Invoke<0x38636EBF, void>(_Unk0, _Unk1); }
	static int GET_GRINGO_OBJECT_REF_ATTR(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x869D5D92, int>(_Unk0, _Unk1, _Unk2); }
	static int IS_HOGTIE_CUTFREE_OBSTRUCTED(int _Unk0, int _Unk1) { return Invoke<0x9377291F, int>(_Unk0, _Unk1); }
	static void CLEAR_HOGTIE_ATTACH_VICTIM(int _Unk0) { Invoke<0xB7A802C2, void>(_Unk0); }
	static int IS_HOGTIE_PICKUP_OBSTRUCTED(int _Unk0, int _Unk1) { return Invoke<0x60D10483, int>(_Unk0, _Unk1); }
	static void SET_HOGTIE_ATTACH_VICTIM(int _Unk0, int _Unk1) { Invoke<0xFA2B916E, void>(_Unk0, _Unk1); }
	static int GET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int _Unk0, int _Unk1) { return Invoke<0x784398CB, int>(_Unk0, _Unk1); }
	static int IS_HOGTIE_PUTDOWN_OBSTRUCTED(int _Unk0) { return Invoke<0xBCED635B, int>(_Unk0); }
	static int IS_HOGTIE_HORSE_PICKUP_OBSTRUCTED(int _Unk0, int _Unk1) { return Invoke<0x9634D42E, int>(_Unk0, _Unk1); }
	static int GET_ACTOR_POSTURE(int _Unk0) { return Invoke<0xDB993A4F, int>(_Unk0); }
	static void SET_PLAYER_DISABLE_TARGETING(int _Unk0, int _Unk1) { Invoke<0x0959C27A, void>(_Unk0, _Unk1); }
	static void GRINGO_SET_USE_OWNERSHIP(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x6E86FCB5, void>(_Unk0, _Unk1, _Unk2); }
	static void CREATE_DECAL_WITH_NORMAL(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { Invoke<0x7BCE4845, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static void _0xD1C91A7F(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xD1C91A7F, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TRAIN_GET_POSITION(int _Unk0, int _Unk1) { Invoke<0x06D055AB, void>(_Unk0, _Unk1); }
	static int GET_CLOSEST_POINT_TO_CURVE_CURVE_QUERY(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0x90B514B9, int>(_Unk0, _Unk1, _Unk2); }
	static void GRINGO_UNLOAD_ANIMATION(int _Unk0) { Invoke<0x777842E3, void>(_Unk0); }
	static void GRINGO_LOAD_ANIMATION(int _Unk0) { Invoke<0x78B655B1, void>(_Unk0); }
	static void CAMERASHOT_ADD_LOOKSTICK_ROTATION_BEHAVIOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0x59AE458A, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int LEASH_ATTACH_TO_FRAGMENT_LOCATOR(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9, int _Unk10) { return Invoke<0xE782EB20, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9, _Unk10); }
	static void CLEAR_ACTOR_GRINGO_RESTRICTION(int _Unk0) { Invoke<0x660DBDDD, void>(_Unk0); }
	static int GRINGO_QUERY_INT(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x6B1F2FEB, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int COUNT_FLAMES_IN_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xDEE6523D, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void STOP_ALL_FIRE_IN_SPHERE(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x466C02BA, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_OWNS_ACTOR_ANIMS(int _Unk0) { return Invoke<0xE9C74577, int>(_Unk0); }
	static int GRINGO_GET_FLOAT_ATTR_BY_HANDLE(int _Unk0, int _Unk1) { return Invoke<0xF573B7DE, int>(_Unk0, _Unk1); }
	static int GET_GRINGO_STRUCT_ATTR(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0xFA22A365, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int DEACTIVATE_ACTOR_FOR_PERS_CHAR(int _Unk0) { return Invoke<0x9B2A39BC, int>(_Unk0); }
	static void TASK_WANDER_IN_BOX(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x6840D3C1, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void TASK_GUARD_PATROL_PATH(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { Invoke<0xFA5BB172, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static int GRINGO_QUERY_STRING(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { return Invoke<0x30AF0FA8, int>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static int GRINGO_GET_VECTOR_ATTR_BY_HANDLE(int _Unk0, int _Unk1) { return Invoke<0xF0991C9F, int>(_Unk0, _Unk1); }
	static int IS_POINT_IN_AMBIENT_MOVE_RESTRICTION_VOLUME(int _Unk0) { return Invoke<0x257C73C5, int>(_Unk0); }
	static int GET_ACTOR_HEIGHT(int _Unk0) { return Invoke<0xE173CE48, int>(_Unk0); }
	static int LOCATE_GRINGOS_OF_NAME(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { return Invoke<0xE9612679, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int SET_PERS_CHAR_SAFE_ZONE(int _Unk0, int _Unk1) { return Invoke<0x67258116, int>(_Unk0, _Unk1); }
	static void SET_ACTOR_IS_SHOPKEEPER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x0880DBF5, void>(_Unk0, _Unk1, _Unk2); }
	static int WAS_AI_ACTOR_PLAYER_WEAPON_THREATENED_BY(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xF5752F72, int>(_Unk0, _Unk1, _Unk2); }
	static int AI_HAS_ACTOR_THREATENED_RECENTLY(int _Unk0) { return Invoke<0x5D72FDB6, int>(_Unk0); }
	static void GRINGO_ACTOR_DROP_ATTACHED_PROP(int _Unk0) { Invoke<0x0B9AE52F, void>(_Unk0); }
	static void STREAMING_PREVENT_SNIPER_MODE(int _Unk0) { Invoke<0x5F4C08A2, void>(_Unk0); }
	static void DOF_POP() { Invoke<0x5EBE0C41, void>(); }
	static void SHOP_SET_CURRENT_TAB(int _Unk0) { Invoke<0x3601E3E2, void>(_Unk0); }
	static int SHOP_IS_SELL_SELECTED() { return Invoke<0x5A12BB48, int>(); }
	static void SHOP_LOCK_INPUT(int _Unk0) { Invoke<0xB84DE662, void>(_Unk0); }
	static void SHOP_REFRESH(int _Unk0) { Invoke<0xE7F6AA5D, void>(_Unk0); }
	static int SHOP_GET_ITEM_SELL_PRICE(int _Unk0) { return Invoke<0x42CBA241, int>(_Unk0); }
	static int SHOP_GET_ITEM_MISC_FLAG(int _Unk0) { return Invoke<0x1BF8FD6D, int>(_Unk0); }
	static int SHOP_GET_ITEM_PURCHASE_PRICE(int _Unk0) { return Invoke<0x94D8F49E, int>(_Unk0); }
	static void SHOP_SET_PLAYER_BANK(int _Unk0) { Invoke<0xB75FAD6A, void>(_Unk0); }
	static int SHOP_GET_ITEM_QUANTITY(int _Unk0) { return Invoke<0xFAF37414, int>(_Unk0); }
	static void SHOP_SET_ITEM_PURCHASE_PRICE(int _Unk0, int _Unk1) { Invoke<0xA40EFFFF, void>(_Unk0, _Unk1); }
	static int SS_GET_STRING_ID(int _Unk0, int _Unk1) { return Invoke<0xA2D27A1F, int>(_Unk0, _Unk1); }
	static int SHOP_IS_ITEM_BLOCKED(int _Unk0) { return Invoke<0xB954DE78, int>(_Unk0); }
	static void SHOP_SET_ITEM_QUANTITY(int _Unk0, int _Unk1) { Invoke<0x777CF9FA, void>(_Unk0, _Unk1); }
	static void SHOP_SET_ITEM_BLOCKED(int _Unk0, int _Unk1) { Invoke<0x7A34C33D, void>(_Unk0, _Unk1); }
	static void SHOP_CLEAR() { Invoke<0xCEBD595A, void>(); }
	static int SHOP_ADD_ITEM(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0x2FCD8CCA, int>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static void DOF_PUSH() { Invoke<0xF665F9D1, void>(); }
	static int GET_CAMERASHOT_FAR_CLIP_PLANE(int _Unk0) { return Invoke<0xD86CB952, int>(_Unk0); }
	static void DOF_SET(int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0xEA8964CC, void>(_Unk0, _Unk1, _Unk2, _Unk3); }
	static void DOF_SET_KERNEL(int _Unk0) { Invoke<0x47A8DDED, void>(_Unk0); }
	static int STRINGTABLE_LENGTH(int _Unk0) { return Invoke<0x71D550C6, int>(_Unk0); }
	static int TRAIN_IS_VALID(int _Unk0) { return Invoke<0x7224CD9B, int>(_Unk0); }
	static void TASK_FAILURE_MODE_SET(int _Unk0, int _Unk1) { Invoke<0x26EBE467, void>(_Unk0, _Unk1); }
	static int HORSE_GET_CURR_FRESHNESS(int _Unk0) { return Invoke<0xB8665D8A, int>(_Unk0); }
	static int GET_ACTOR_MAX_FRESHNESS(int _Unk0) { return Invoke<0xF1D2A13E, int>(_Unk0); }
	static void ALLOW_GAME_CAMERA_AUTO_TILTING(int _Unk0, int _Unk1) { Invoke<0x9603D3B2, void>(_Unk0, _Unk1); }
	static bool _0x00EF33EF() { return Invoke<0x00EF33EF, bool>(); }
	static float GET_CAMERA_FOV(Camera _Camera) { return Invoke<0x7B302F36, float>(_Camera); }
	static void UPDATE_AIMRAMP(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0x86066A65, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
	static int TAN_DEGREE(int _Unk0) { return Invoke<0x9BD37A3D, int>(_Unk0); }
	static int CREATE_AIMRAMP_IN_LAYOUT(int _Unk0, int _Unk1) { return Invoke<0xDA50B18B, int>(_Unk0, _Unk1); }
	static int GET_GAME_CAMERA_AUTO_TILTING_STATE(int _Unk0) { return Invoke<0x4062688A, int>(_Unk0); }
	static int GET_GAME_CAMERA_AUTO_CENTERING_STATE(int _Unk0) { return Invoke<0xE13B49BD, int>(_Unk0); }
	static void CLEAR_NEWSPAPER() { Invoke<0x4486E8C7, void>(); }
	static int _GET_TYPE_ID_USING_ACTOR_ENUM(int _Unk0, int _Unk1) { return Invoke<0x55E6227E, int>(_Unk0, _Unk1); }
	static void REPORT_METRICS_PERFORMANCE() { Invoke<0xE74C4851, void>(); }
	static void SET_CAMERASHOT_CONTROL_SEQUENCE_VEC3(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6, int _Unk7, int _Unk8, int _Unk9) { Invoke<0x0229585E, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6, _Unk7, _Unk8, _Unk9); }
	static void SET_GAME_CAMERA_VEHICLE_MODE(int _Unk0) { Invoke<0x382C47C5, void>(_Unk0); }
	static int GET_TASK_NEXT_POINT_ON_PATH(int _Unk0, int _Unk1) { return Invoke<0xF726557C, int>(_Unk0, _Unk1); }
	static int SET_CUTSCENEINPUTS_TARGET_GUID(int _Unk0, int _Unk1, int _Unk2) { return Invoke<0xF74B5ADE, int>(_Unk0, _Unk1, _Unk2); }
	static int _0x8701F1F6() { return Invoke<0x8701F1F6, int>(); }
	static bool IS_GOLDEN_GUNS_ON() { return Invoke<0x80B30545, bool>(); }
	static Blip GET_BLIP_ON_OBJECT(Object Obj) { return Invoke<0xE3E30992, Blip>(Obj); }
	static int NET_GET_SESSION_GAMER_COUNT() { return Invoke<0x7AB65B0C, int>(); }
	static Actor GET_LAST_ATTACK_TARGET(Actor actor) { return Invoke<0xEB40C2FC, Actor>(actor); }
	static void SET_CAMERA_FOLLOW_ACTOR(Actor actor) { Invoke<0x8EFDFE89, void>(actor); }
	static int ADD_SCRIPT_USE_CONTEXT(const char* context, int _Unk0, Button b, int _Unk1, int _Unk2, int _Unk3, int _Unk4, int _Unk5, int _Unk6) { return Invoke<0xD7591B0E, int>(context, _Unk0, b, _Unk1, _Unk2, _Unk3, _Unk4, _Unk5, _Unk6); }
	static Object GET_OBJECT_FROM_ACTOR(Actor _Actor) { return Invoke<0x4A2063EC, Object>(_Actor); }
	static Blip GET_BLIP_ON_ACTOR(Actor _Actor) { return Invoke<0x1449EE9E, Blip>(_Actor); }
	static const char* GET_LOCAL_PLAYER_NAME() { return Invoke<0xA183D927, const char*>(); }
}

namespace WEAPON
{
	static void INIT_NATIVE_WEAPONENUM_PISTOL(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xBAC27559, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_RIFLE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA534CD14, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_REPEATER(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA72B6620, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_SNIPERRIFLE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x92FE3677, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_SHOTGUN(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xEA06907B, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_THROWN(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xE0DF7B3B, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_THROWN_EXPLODING(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA2597101, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_BOW(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x2AD5D078, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_MELEE(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xA6C4E59F, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_LASSO(int _Unk0, int _Unk1, int _Unk2) { Invoke<0xF82711CC, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_TURRET(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x82609DC7, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_CANNON(int _Unk0, int _Unk1, int _Unk2) { Invoke<0x628E3173, void>(_Unk0, _Unk1, _Unk2); }
	static void INIT_NATIVE_WEAPONENUM_AMMO(int _Unk0, int _Unk1) { Invoke<0xCE5CCF2E, void>(_Unk0, _Unk1); }
	static int GET_WEAPON_ENUM_STRING_FROM_ENUM(int _Unk0) { return Invoke<0x6A9CFA2A, int>(_Unk0); }
	static const char* GET_WEAPON_DISPLAY_NAME(WeaponModel _WeaponModel) { return Invoke<0x35CD589C, const char*>(_WeaponModel); }
	static const char* GET_WEAPON_INTERNAL_NAME(WeaponModel _WeaponModel) { return Invoke<0x87C5471F, const char*>(_WeaponModel); }
	static const char* _GET_WEAPON_ICON_NAME(WeaponModel _WeaponModel) { return Invoke<0xBE06C265, const char*>(_WeaponModel); }
	static const char* GET_WEAPON_FRAGMENT_NAME(WeaponModel _WeaponModel) { return Invoke<0xE8739A48, const char*>(_WeaponModel); }
	static void INIT_NATIVE_WEAPONENUM_CATEGORY(int _Unk0, int _Unk1) { Invoke<0x01C7193C, void>(_Unk0, _Unk1); }
	static void FINALIZE_WEAPONENUM_CATEGORIES() { Invoke<0x0A23A69C, void>(); }
	static void SET_WEAPONENUM_LOCKED(int _Unk0, int _Unk1) { Invoke<0x0E4B7A33, void>(_Unk0, _Unk1); }
	static int IS_WEAPONENUM_LOCKED(int _Unk0) { return Invoke<0xCCE4A339, int>(_Unk0); }
	static int _0xDB679ED9(int _Unk0) { return Invoke<0xDB679ED9, int>(_Unk0); }
	static int GET_AMMO_ENUM(int _Unk0) { return Invoke<0xD3E16075, int>(_Unk0); }
	static void SET_AMMO_DROP_BIAS(int _Unk0, int _Unk1) { Invoke<0x08A655C5, void>(_Unk0, _Unk1); }
	static int GET_AMMO_ENUM_STRING_FROM_ENUM(int _Unk0) { return Invoke<0xCCB57C38, int>(_Unk0); }
	static int GET_AMMO_ENUM_ICON_NAME(int _Unk0) { return Invoke<0x2AF84928, int>(_Unk0); }
	static float GET_WEAPON_MAX_AMMO(WeaponModel _WeaponModel) { return Invoke<0xA677B204, float>(_WeaponModel); }
	static void RESOLVE_DLC_WEAPONENUM(int _Unk0) { Invoke<0xD291A820, void>(_Unk0); }
	static void ADD_IDLEFX_TO_WEAPON(int _Unk0, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xF4641CF4, void>(_Unk0, _Unk1, _Unk2, _Unk3, _Unk4); }
}

namespace WORLD
{
	static void SET_ZOMBIE_DLC_IS_ACTIVE() { Invoke<0x28246500, void>(); }
	static bool ZOMBIE_DLC_IS_ACTIVE() { return Invoke<0x8CF15FCB, bool>(); }
	static int ZOMBIE_DLC_LOAD_ASSETS() { return Invoke<0x4A8066FB, int>(); }
	static int ZOMBIE_DLC_LOAD_ASSETS_MP() { return Invoke<0x1DDB57A6, int>(); }
}

namespace REDHOOK
{
	static void ALLOW_GAMEPLAY_CAMERA_FOV_OVERRIDE(bool _Toggle) { return Invoke<0x5E632574, void>(_Toggle); }
	static uintptr_t GET_ADDRESS_FROM_OBJECT(Object _Object) { return Invoke<0xFDCAED7C, uintptr_t>(_Object); }
	static Object GET_OBJECT_FROM_ADDRESS(uintptr_t _Addr) { return Invoke<0xFB05516E, Object>(_Addr); }
	static int WORLD_GET_ALL_ACTORS(Actor* _Array) { return Invoke<0xD892AD02, int>(_Array); }
	static bool WORLD_TO_SCREEN(Vector3* _WorldPosition, float* _X, float* _Y) { return Invoke<0xBAA72911, bool>(_WorldPosition, _X, _Y); }
	static void SET_PLAYER_RELOAD_TIME_SCALE(bool _Override, float _TimeScale) { Invoke<0x6FCC9A11, void>(_Override, _TimeScale); }
	static void SET_PLAYER_AUTO_FIRING(bool _AutoFiring) { Invoke<0x064E9472, void>(_AutoFiring); }
	static float GET_TIME_SCALE() { return Invoke<0x8CFD581F, float>(); }
	static void SET_TIME_SCALE(float _TimeScale) { Invoke<0xA7F84694, void>(_TimeScale); }
}