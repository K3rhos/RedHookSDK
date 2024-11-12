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

using Hash = uint32_t;
using Time = float;



// static void WAIT(int ms) { Invoke<0x7715C03B, void>(ms); } // We don't want to use WAIT native but our own Wait function instead.
static void WAIT(int ms) { ScriptWait(ms); }
static int FLOOR(float _X) { return Invoke<0x32E9BE04, int>(_X); }
static float SIN_DEGREE(float _X) { return Invoke<0x55842354, float>(_X); }
static float COS_DEGREE(float _X) { return Invoke<0x430207A4, float>(_X); }
static float TAN_DEGREE(float _X) { return Invoke<0x9BD37A3D, float>(_X); }
static float ATAN_DEGREE(float _X) { return Invoke<0x69BE2817, float>(_X); }
static float ATAN2_DEGREE(float _X, float _Y) { return Invoke<0x8A0D25F2, float>(_X, _Y); }
static void UNK_0xF037DCA2(int pram0) { Invoke<0xF037DCA2, void>(pram0); }
static void UNK_0x1F0CD262(int pram0) { Invoke<0x1F0CD262, void>(pram0); }
static void RETRIEVE_GAME_STATE(int pram0, int pram1, int pram2) { Invoke<0x48FBB83D, void>(pram0, pram1, pram2); }
static void UI_DISABLE(const char* _UILayer) { Invoke<0xC4532F84, void>(_UILayer); }
static void UI_EXCLUDE(const char* _UILayer) { Invoke<0x4A005F2A, void>(_UILayer); }
static void UI_ENABLE(const char* _UILayer) { Invoke<0xE576DCAD, void>(_UILayer); }
static void UI_INCLUDE(const char* _UILayer) { Invoke<0x209255AD, void>(_UILayer); }
static int UNK_0x3B004817() { return Invoke<0x3B004817, int>(); }
static bool UNK_0x7CE2C2E1() { return Invoke<0x7CE2C2E1, bool>(); }
static void UNK_0x49E4EB10(int pram0) { Invoke<0x49E4EB10, void>(pram0); }
static void TOGGLE_COVER_PROPS(int pram0) { Invoke<0x288E4BFB, void>(pram0); }
static void LOG_MESSAGE(char* _Message) { Invoke<0x676167C3, void>(_Message); }
static bool UNK_0x814D97E8() { return Invoke<0x814D97E8, bool>(); }
static const char* UNK_0x6CD7DCE1(int pram0, int pram1) { Invoke<0x6CD7DCE1, const char*>(pram0, pram1); }
static int RAND_INT_RANGE(int _Min, int _Max) { return Invoke<0xF8D0D165, int>(_Min, _Max); }
static int TO_FLOAT(int pram0) { return Invoke<0x67116627, int>(pram0); }
static bool UI_ISACTIVE(const char* UiLayer) { return Invoke<0xB1FDB70D, bool>(UiLayer); }
static void UI_ACTIVATE(const char* UiLayer) { Invoke<0xD11BD55A, void>(UiLayer); }
static void SET_START_POS(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x0CB93120, void>(pram0, pram1, pram2, pram3, pram4); }
static int REQUEST_ASSET(const char* AssetDir, AssetType _AssetType) { return Invoke<0x9AA02DA7, int>(AssetDir, _AssetType); }
static int START_NEW_SCRIPT(const char* _ScriptPath, int _StackSize) { return Invoke<0x3F166D0E, int>(_ScriptPath, _StackSize); }
static int START_NEW_SCRIPT_WITH_ARGS(const char* _ScriptPath, int* _Args, int _ArgCount, int _StackSize) { return Invoke<0x4A2100E4, int>(_ScriptPath, _Args, _ArgCount, _StackSize); }
static int LAUNCH_NEW_SCRIPT(const char* _ScriptPath, int _StackSize) { return Invoke<0x85A30503, int>(_ScriptPath, _StackSize); }
static int LAUNCH_NEW_SCRIPT_WITH_ARGS(const char* _ScriptPath, int* _Args, int _ArgCount, int _StackSize) { return Invoke<0xA602F586, int>(_ScriptPath, _Args, _ArgCount, _StackSize); }
static bool IS_SCRIPT_VALID(int _ScriptId) { return Invoke<0x45F7D589, bool>(_ScriptId); }
static Layout FIND_NAMED_LAYOUT(const char* _LayoutName) { return Invoke<0x5699DE7E, Layout>(_LayoutName); }
static bool _IS_LAYOUT_VALID(Layout Layout) { return Invoke<0xFC8E55ED, bool>(Layout); }
static Actor FIND_ACTOR_IN_LAYOUT(Layout Layout, const char* ActorName) { return Invoke<0x53A761DE, Actor>(Layout, ActorName); }
static bool IS_ACTOR_VALID(Actor _Actor) { return Invoke<0xBA6C3E92, bool>(_Actor); }
static Time MAKE_TIME_OF_DAY(int Hour, int Minute, int Second) { return Invoke<0xC09EAB6E, Time>(Hour, Minute, Second); }
static void SET_WEATHER(Weather _Weather, float _TransitionTime) { Invoke<0x456D7F38, void>(_Weather, _TransitionTime); }
static int STREAMING_IS_WORLD_LOADED() { return Invoke<0x87B74064, int>(); }
static void HUD_FADE_IN(int pram0, int pram1) { Invoke<0xF90F6C51, void>(pram0, pram1); }
static void CAMERA_RESET(int pram0) { Invoke<0xCE956B28, void>(pram0); }
static void STREAMING_SET_CUTSCENE_MODE(int pram0) { Invoke<0x83088F62, void>(pram0); }
static void TERMINATE_THIS_SCRIPT() { Invoke<0x245B6AB6, void>(); }
static Layout CREATE_LAYOUT(const char* _LayoutName) { return Invoke<0x6CA53214, Layout>(_LayoutName); }
static void CLEAR_REGIONS() { Invoke<0xB1DAEF0C, void>(); }
static int IS_PS3() { return Invoke<0xA369B36F, int>(); }
static void UNK_0x7ABDE1F0(int pram0) { Invoke<0x7ABDE1F0, void>(pram0); }
static void UNK_0x7D7F9770(int pram0) { Invoke<0x7D7F9770, void>(pram0); }
static void PRINTNL() { Invoke<0x868997DA, void>(); }
static int UI_GET_NUM_CHILDREN(int pram0) { return Invoke<0xD3C7AEFA, int>(pram0); }
static void UI_ADD_CHILD(int pram0, int pram1) { Invoke<0x13F156A4, void>(pram0, pram1); }
static void UI_SET_DATA(int pram0, int pram1, int pram2) { Invoke<0x00B89B46, void>(pram0, pram1, pram2); }
static void UNK_0x3B25299D(int pram0) { Invoke<0x3B25299D, void>(pram0); }
static void PRINTINT(int pram0) { Invoke<0x63651F03, void>(pram0); }
static void PRINTSTRING(int pram0) { Invoke<0xECF8EB5F, void>(pram0); }
static void UNK_0x1C8CA53C(int pram0, int pram1) { Invoke<0x1C8CA53C, void>(pram0, pram1); }
static void UNK_0xE8960298(int pram0) { Invoke<0xE8960298, void>(pram0); }
static void UNK_0xA8ADCAEB(int pram0) { Invoke<0xA8ADCAEB, void>(pram0); }
static void STORE_GAME_STATE(int pram0, int pram1, int pram2) { Invoke<0x800D6D89, void>(pram0, pram1, pram2); }
static int UNK_0x95CDCE7A() { return Invoke<0x95CDCE7A, int>(); }
static void UI_SET_STRING(const char* _Entry, const char* _String) { Invoke<0xE457546C, void>(_Entry, _String); }
static Layout GET_AMBIENT_LAYOUT() { return Invoke<0xB52A3D48, Layout>(); }
static void ITERATE_IN_LAYOUT(int pram0, int pram1) { Invoke<0xF3ABE99C, void>(pram0, pram1); }
static void SET_PAUSE_SCRIPT(int pram0) { Invoke<0x9B71351C, void>(pram0); }
static void SET_TIME_ACCELERATION(float pram0) { Invoke<0xB98C7AA5, void>(pram0); }
static void LIGHTS_SET_ON_TIME(int pram0, int pram1) { Invoke<0x3774465F, void>(pram0, pram1); }
static void LIGHTS_SET_OFF_TIME(int pram0, int pram1) { Invoke<0xD0CDEED4, void>(pram0, pram1); }
static int UNK_0x8BA565F7(int pram0) { return Invoke<0x8BA565F7, int>(pram0); }
static int UNK_0xB8E09389(int pram0) { return Invoke<0xB8E09389, int>(pram0); }
static int UNK_0x0E453CF0(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0E453CF0, int>(pram0, pram1, pram2, pram3); }
static void SET_TIME_OF_DAY(Time UnixTime) { Invoke<0xAD03186C, void>(UnixTime); }
static int UNK_0x5D934CCB(int pram0, int pram1) { return Invoke<0x5D934CCB, int>(pram0, pram1); }
static float RAND_FLOAT_RANGE(float _Min, float _Max) { return Invoke<0xCA6229BF, float>(_Min, _Max); }
static void UNK_0xB35C0660(int pram0) { Invoke<0xB35C0660, void>(pram0); }
static int DECOR_GET_INT(int pram0, int pram1) { return Invoke<0xDDDE59B5, int>(pram0, pram1); }
static void UNK_0x0E4B7A33(int pram0, int pram1) { Invoke<0x0E4B7A33, void>(pram0, pram1); }
static void GIVE_WEAPON_TO_ACTOR(Actor _Actor, WeaponModel _WeaponModel, int _Unk, bool _Notify, bool _IsHidden) { Invoke<0x6AA0EAF2, void>(_Actor, _WeaponModel, _Unk, _Notify, _IsHidden); }
static int ADD_ITEM(const char* ItemName, Actor Actor, int Unk1) { return Invoke<0xBAA5D41B, int>(ItemName, Actor, Unk1); }
static void SET_PLAYER_DEADEYE_POINTS(int pram0, int pram1, int pram2) { Invoke<0x50D8C840, void>(pram0, pram1, pram2); }
static void SET_DISABLE_DEADEYE(int pram0, int pram1) { Invoke<0x09716951, void>(pram0, pram1); }
static void SET_DEADEYE_MULTILOCK_ENABLE(int pram0, int pram1) { Invoke<0x4E6E5E78, void>(pram0, pram1); }
static void SET_DEADEYE_TARGETPAINT_ENABLE(int pram0, int pram1) { Invoke<0x5CD6E2C3, void>(pram0, pram1); }
static void UNK_0xCB017277(int pram0, int pram1) { Invoke<0xCB017277, void>(pram0, pram1); }
static void _ADD_AMMO_OF_TYPE(Actor _Actor, int _AmmoType, float _AmmoCount, bool _Unk0, bool _Notify) { Invoke<0x98B3ABFA, void>(_Actor, _AmmoType, _AmmoCount, _Unk0, _Notify); }
static int UNK_0x3417766E(int pram0, int pram1, int pram2) { return Invoke<0x3417766E, int>(pram0, pram1, pram2); }
static int _GET_CURRENT_TIME() { return Invoke<0x5842B9D1, int>(); }
static void UNK_0x7D5C0C4D() { Invoke<0x7D5C0C4D, void>(); }
static void UNK_0x7E4A92CF(int pram0, int pram1) { Invoke<0x7E4A92CF, void>(pram0, pram1); }
static void UI_SET_MONEY(int pram0, int pram1, int pram2) { Invoke<0xF71BD93A, void>(pram0, pram1, pram2); }
static const char* UNK_0x47EF426D(const char* pram0) { return Invoke<0x47EF426D, const char*>(pram0); }
static const char* UI_GET_STRING(const char* _GXTEntry) { return Invoke<0xCCCFF80B, const char*>(_GXTEntry); }
static void SAVE_SOFT_SAVE(int pram0) { Invoke<0x1A3BAC68, void>(pram0); }
static int UNK_0x82F63365(int pram0) { return Invoke<0x82F63365, int>(pram0); }
static void SET_PLAYER_CONTROL_RUMBLE(int pram0, int pram1) { Invoke<0x4590CE00, void>(pram0, pram1); }
static void SCRIPT_DONE_LOADING() { Invoke<0x5401F0CA, void>(); }
static bool IS_EXITFLAG_SET() { return Invoke<0x687ECC3C, bool>(); }
static float GET_PROFILE_TIME() { return Invoke<0x6E189771, float>(); }
static void UNK_0xB9D95B4C() { Invoke<0xB9D95B4C, void>(); }
static int UNK_0x5C8DD257(int pram0) { return Invoke<0x5C8DD257, int>(pram0); }
static Time GET_TIME_OF_DAY() { return Invoke<0x4E1DE7A5, Time>(); }
static int GET_HOUR(Time T) { return Invoke<0x2765C37E, int>(T); }
static bool HUD_IS_FADED() { return Invoke<0x4EFFFC06, bool>(); }
static bool HUD_IS_FADING() { return Invoke<0xE5CC6F08, bool>(); }
static void UNK_0x2E5F186B() { Invoke<0x2E5F186B, void>(); }
static int NET_IS_UNLOCKED(int pram0) { return Invoke<0xC8B680B3, int>(pram0); }
static void PRINTFLOAT(int pram0) { Invoke<0xD48B90B6, void>(pram0); }
static void HUD_FADE_OUT(int pram0, int pram1, int pram2) { Invoke<0x52963366, void>(pram0, pram1, pram2); }
static void RELEASE_LAYOUT_REF(int pram0) { Invoke<0xD9AC8830, void>(pram0); }
static void UNK_0x86B0B004(int pram0, int pram1) { Invoke<0x86B0B004, void>(pram0, pram1); }
static bool IS_BLIP_VALID(Blip _Blip) { return Invoke<0xDCC10BA9, bool>(_Blip); }
static void REMOVE_BLIP(Blip _Blip) { Invoke<0xD8C3C1CD, void>(_Blip); }
static void ANIMAL_SPECIES_GRINGO_CLEAR_ALL() { Invoke<0xD4DDC119, void>(); }
static void STREAMING_EVICT_PROP(int pram0) { Invoke<0xA8D12960, void>(pram0); }
static void STREAMING_EVICT_PROPSET(int pram0) { Invoke<0x4A5E4C13, void>(pram0); }
static void STREAMING_EVICT_ACTOR(int pram0, int pram1) { Invoke<0x6661CF89, void>(pram0, pram1); }
static int GET_ASSET_NAME(int pram0, int pram1) { return Invoke<0x9EDBBB84, int>(pram0, pram1); }
static void REMOVE_ANIM_SET(int pram0) { Invoke<0xD04A817A, void>(pram0); }
static void STREAMING_EVICT_GRINGO(int pram0) { Invoke<0xA02B6AAE, void>(pram0); }
static void REMOVE_ACTION_TREE(int pram0) { Invoke<0xBF4D0EFE, void>(pram0); }
static void REMOVE_STRING_TABLE(int pram0) { Invoke<0x6857E514, void>(pram0); }
static void STREAMING_EVICT_SCRIPT(int pram0) { Invoke<0x570163E2, void>(pram0); }
static void STREAMING_UNREQUEST_MOVABLE_NAV_MESH(int pram0) { Invoke<0xC329E1DB, void>(pram0); }
static void UNK_0x32FCA813(int pram0) { Invoke<0x32FCA813, void>(pram0); }
static void _LOG_ERROR(char* message) { Invoke<0x906C42FD, void>(message); }
static int ABS(int pram0) { return Invoke<0x5AABFA97, int>(pram0); }
static void REMOVE_COLLECTABLE(int pram0, int pram1) { Invoke<0x5889EBB7, void>(pram0, pram1); }
static int ROUND(int pram0) { return Invoke<0x323B0E24, int>(pram0); }
static int UNK_0xFA6BDD8E(int pram0, int pram1, int pram2) { return Invoke<0xFA6BDD8E, int>(pram0, pram1, pram2); }
static const char* _FLOAT_TO_STRING(float Flt, int unk3, int Precision) { return Invoke<0x8ED1FF95, const char*>(Flt, unk3, Precision); }
static const char* INT_TO_STRING(int i) { return Invoke<0xA883AFCC, const char*>(i); }
static void CLEAR_STAT_MESSAGE() { Invoke<0x906E0138, void>(); }
static Hash STRING_TO_HASH(const char* _Str) { return Invoke<0x84415E28, Hash>(_Str); }
static void SET_STAT_MESSAGE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12) { Invoke<0x73DA6AF1, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12); }
static bool IS_STRING_VALID(const char* pram0) { return Invoke<0xBDC61056, bool>(pram0); }
static void _LOG_WARNING(char* message) { Invoke<0xFD25473E, void>(message); }
static int ADD_COLLECTABLE(int pram0, int pram1, int pram2) { return Invoke<0xF05D1566, int>(pram0, pram1, pram2); }
static int SHIFT_LEFT(int pram0, int pram1) { return Invoke<0x314CC6CD, int>(pram0, pram1); }
static int IS_ACTOR_ALIVE(Actor _Actor) { return Invoke<0x2F232639, int>(_Actor); }
static void SET_WEAPON_GOLD(Actor _Actor, WeaponModel _WeaponModel, bool _Gold) { Invoke<0xAE44869D, void>(_Actor, _WeaponModel, _Gold); }
static void UNK_0x7D6A8D4A(int pram0, int pram1) { Invoke<0x7D6A8D4A, void>(pram0, pram1); }
static int HAS_ACHIEVEMENT_BEEN_PASSED(int pram0) { return Invoke<0x136A5BE9, int>(pram0); }
static int AWARD_ACHIEVEMENT(int pram0) { return Invoke<0xCAA24B1A, int>(pram0); }
static int AWARD_AVATAR(int pram0) { return Invoke<0xDD33E221, int>(pram0); }
static bool DECOR_CHECK_EXIST(Object _Object, const char* _DecorName) { return Invoke<0xA0773F5C, bool>(_Object, _DecorName); }
static bool IS_DEV_BUILD() { return Invoke<0x6D9AA768, bool>(); }
static const char* SS_GET_STRING(int pram0, int pram1) { return Invoke<0x20D34AC5, const char*>(pram0, pram1); }
static int SAVE_GAME(int pram0) { return Invoke<0x09C5D8D5, int>(pram0); }
static void UNK_0x17F34613(int pram0) { Invoke<0x17F34613, void>(pram0); }
static void UNK_0xED40F27D(int pram0) { Invoke<0xED40F27D, void>(pram0); }
static bool UNK_0xBAB151CB() { return Invoke<0xBAB151CB, bool>(); }
static int UNK_0x5545C218(int pram0) { return Invoke<0x5545C218, int>(pram0); }
static int UNK_0xE623B382(int pram0) { return Invoke<0xE623B382, int>(pram0); }
static int GET_PLAYER_DEADEYE_POINTS(int pram0) { return Invoke<0x86B5C9E1, int>(pram0); }
static int GET_NUM_JOURNAL_ENTRIES_IN_LIST(int pram0) { return Invoke<0x3E84D766, int>(pram0); }
static int GET_JOURNAL_ENTRY_IN_LIST(int pram0, int pram1) { return Invoke<0x49B02E18, int>(pram0, pram1); }
static int GET_JOURNAL_ENTRY_TYPE(int pram0) { return Invoke<0xF6FEC269, int>(pram0); }
static int GET_JOURNAL_ENTRY_MISC_FLAG(int pram0) { return Invoke<0x8020011E, int>(pram0); }
static int IS_JOURNAL_ENTRY_UPDATED(int pram0) { return Invoke<0x078F9B43, int>(pram0); }
static int GET_TARGETED_JOURNAL_ENTRY() { return Invoke<0x8A9B8F0C, int>(); }
static int UNK_0x118D085E(int pram0) { return Invoke<0x118D085E, int>(pram0); }
static WeaponModel GET_WEAPON_IN_HAND(Actor _Actor) { return Invoke<0xA4B2016D, WeaponModel>(_Actor); }
static int UNK_0x6262DC5E(int pram0, int pram1) { return Invoke<0x6262DC5E, int>(pram0, pram1); }
static int UNK_0x0CDD6F94(int pram0) { return Invoke<0x0CDD6F94, int>(pram0); }
static int UNK_0x7BF75BCE(int pram0, int pram1) { return Invoke<0x7BF75BCE, int>(pram0, pram1); }
static int UNK_0x4BB2BC20(int pram0, int pram1) { return Invoke<0x4BB2BC20, int>(pram0, pram1); }
static int UNK_0x78A3CD3D(int pram0) { return Invoke<0x78A3CD3D, int>(pram0); }
static int UNK_0x7F4D5AE0(int pram0, int pram1) { return Invoke<0x7F4D5AE0, int>(pram0, pram1); }
static int IS_FRONTEND_DEATH(int pram0, int pram1, int pram2) { return Invoke<0xE224AC6F, int>(pram0, pram1, pram2); }
static WeaponModel GET_WEAPON_EQUIPPED(Actor _Actor, int _WeaponWheelIndex) { return Invoke<0x42C0FAAA, WeaponModel>(_Actor, _WeaponWheelIndex); }
static int UNK_0x0E0EFB13(int pram0) { return Invoke<0x0E0EFB13, int>(pram0); }
static int UNK_0x2C23CBE7(int pram0) { return Invoke<0x2C23CBE7, int>(pram0); }
static int UNK_0x608DCAEF(int pram0, int pram1) { return Invoke<0x608DCAEF, int>(pram0, pram1); }
static int UNK_0xCC02BBD3(int pram0) { return Invoke<0xCC02BBD3, int>(pram0); }
static int UNK_0xA8040D70(int pram0) { return Invoke<0xA8040D70, int>(pram0); }
static int UNK_0xCCE4A339(int pram0) { return Invoke<0xCCE4A339, int>(pram0); }
static bool _IS_ACTOR_PLAYER(Actor actorId) { return Invoke<0x0ADC17E9, bool>(actorId); }
static Actor GET_PLAYER_ACTOR(int _PlayerId) { return Invoke<0xE8CFDD53, Actor>(_PlayerId); }
static int GET_DAY(Time T) { return Invoke<0x63D13FB0, int>(T); }
static float FABS(float f) { return Invoke<0xACF9A5E4, float>(f); }
static int UNK_0x6CC9CCE7() { return Invoke<0x6CC9CCE7, int>(); }
static int GET_ITEM_COUNT(int pram0, int pram1) { return Invoke<0xD91ED898, int>(pram0, pram1); }
static void PRINT_OBJECTIVE_FORMAT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { Invoke<0x283B4EFC, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static int DECOR_SET_INT(int pram0, int pram1, int pram2) { return Invoke<0xDB718B21, int>(pram0, pram1, pram2); }
static bool IS_OBJECT_VALID(Object _Object) { return Invoke<0xD7E7187B, bool>(_Object); }
static Vector3 GET_OBJECT_POSITION(Object _Object) { Vector3 position; Invoke<0x31201B4C, bool>(_Object, &position); return position; }
static ObjectType GET_OBJECT_TYPE(Object _Object) { return Invoke<0x261ECB20, ObjectType>(_Object); }
static void GET_VOLUME_SCALE(int pram0, int pram1) { Invoke<0xE9C34ACC, void>(pram0, pram1); }
static int ADD_BLIP_FOR_COORD(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xC6F43D0E, int>(pram0, pram1, pram2, pram3, pram4); }
static void SET_BLIP_SCALE(Blip _Blip, float _Scale) { Invoke<0x1E6EC434, void>(_Blip, _Scale); }
static void SET_BLIP_COLOR(Blip _Blip, float _R, float _G, float _B, float _A) { Invoke<0xA2B8A736, void>(_Blip, _R, _G, _B, _A); }
static void SET_BLIP_PRIORITY(Blip _Blip, int _Priority) { Invoke<0xCE87DA6F, void>(_Blip, _Priority); }
static void SET_BLIP_NAME(Blip _Blip, const char* _Name) { Invoke<0xDC249B12, void>(_Blip, _Name); }
static int IS_JOURNAL_ENTRY_IN_LIST(int pram0, int pram1) { return Invoke<0xC17FE40A, int>(pram0, pram1); }
static int CREATE_JOURNAL_ENTRY(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x761FD935, int>(pram0, pram1, pram2, pram3); }
static void APPEND_JOURNAL_ENTRY(int pram0, int pram1) { Invoke<0x9C40CFAB, void>(pram0, pram1); }
static void PREPEND_JOURNAL_ENTRY_DETAIL(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x81470AFE, void>(pram0, pram1, pram2, pram3, pram4); }
static void SET_JOURNAL_ENTRY_DETAIL_STYLE(int pram0, int pram1, int pram2, int pram3) { Invoke<0x539D0404, void>(pram0, pram1, pram2, pram3); }
static void SET_JOURNAL_ENTRY_PROGRESS(int pram0, int pram1, int pram2, int pram3) { Invoke<0x5DC073DE, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x2AA8E2FA(int pram0, int pram1, int pram2) { Invoke<0x2AA8E2FA, void>(pram0, pram1, pram2); }
static int IS_JOURNAL_ENTRY_TARGETED(int pram0) { return Invoke<0xF0C4E96F, int>(pram0); }
static void REMOVE_JOURNAL_ENTRY(int pram0, int pram1) { Invoke<0x01BF35BD, void>(pram0, pram1); }
static void UNK_0x87DC7F5B(int pram0, int pram1) { Invoke<0x87DC7F5B, void>(pram0, pram1); }
static void TARGET_JOURNAL_ENTRY(int pram0) { Invoke<0xC3DC9490, void>(pram0); }
static void CLEAR_JOURNAL_ENTRY(int pram0) { Invoke<0xB8B7B818, void>(pram0); }
static int UNK_0x60135878() { return Invoke<0x60135878, int>(); }
static int UNK_0x4B2FCAF6() { return Invoke<0x4B2FCAF6, int>(); }
static int UNK_0x2F0E7DE7() { return Invoke<0x2F0E7DE7, int>(); }
static int UNK_0x710B3A83() { return Invoke<0x710B3A83, int>(); }
static int UNK_0x7AB368CF(int pram0, int pram1) { return Invoke<0x7AB368CF, int>(pram0, pram1); }
static void UNK_0x08A655C5(int pram0, int pram1) { Invoke<0x08A655C5, void>(pram0, pram1); }
static void UNK_0x1E98AFEC(int pram0, int pram1) { Invoke<0x1E98AFEC, void>(pram0, pram1); }
static void UNK_0xFF3DB575(int pram0, int pram1) { Invoke<0xFF3DB575, void>(pram0, pram1); }
static int SHIFT_RIGHT(int pram0, int pram1) { return Invoke<0x352633CA, int>(pram0, pram1); }
static int VDIST(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x3C08ECB7, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x115CD0CC(int pram0) { return Invoke<0x115CD0CC, int>(pram0); }
static void UNK_0x4F52CB58(int pram0) { Invoke<0x4F52CB58, void>(pram0); }
static void DESTROY_OBJECT(Object Object) { Invoke<0x21144994, void>(Object); }
static int IS_DOOR_VALID(int pram0) { return Invoke<0x7F0F079B, int>(pram0); }
static int DECOR_GET_OBJECT(int pram0, int pram1) { return Invoke<0x24F2E859, int>(pram0, pram1); }
static int IS_DOOR_LOCKED(int pram0) { return Invoke<0x19FB9518, int>(pram0); }
static int UNK_0x502DAC62(int pram0) { return Invoke<0x502DAC62, int>(pram0); }
static int IS_ACTOR_IN_VOLUME(int pram0, int pram1) { return Invoke<0xF5593A78, int>(pram0, pram1); }
static int GATEWAY_UPDATE(int pram0) { return Invoke<0x96BD89B6, int>(pram0); }
static int UNK_0xD7591B0E(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xD7591B0E, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(int pram0) { return Invoke<0x971559CA, int>(pram0); }
static int UNK_0x64BEDDEA(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12, int pram13, int pram14, int pram15, int pram16, int pram17) { return Invoke<0x64BEDDEA, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12, pram13, pram14, pram15, pram16, pram17); }
static int ADD_BLIP_FOR_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x0E5372EC, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xE3E30992(int pram0) { return Invoke<0xE3E30992, int>(pram0); }
static void UNK_0xCE79F8E2(int pram0, int pram1) { Invoke<0xCE79F8E2, void>(pram0, pram1); }
static int GET_GRINGO_FROM_OBJECT(int pram0) { return Invoke<0x8A01B64B, int>(pram0); }
static void GRINGO_ALLOW_ACTIVATION(int pram0, int pram1) { Invoke<0x5E586923, void>(pram0, pram1); }
static bool DECOR_REMOVE(Object _Object, const char* _DecorName) { return Invoke<0xE0E2640B, bool>(_Object, _DecorName); }
static int UNK_0xCB3F7DA5(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xCB3F7DA5, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int DECOR_SET_BOOL(Actor Actor, const char* DecorName, bool set) { return Invoke<0x8E101F5C, int>(Actor, DecorName, set); }
static void PRINT_MONEY(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x51948EA6, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SET_DOOR_LOCK(int pram0, int pram1) { Invoke<0x184924E2, void>(pram0, pram1); }
static int GET_LATEST_CONSOLE_COMMAND() { return Invoke<0x2B547FE6, int>(); }
static void RESET_LATEST_CONSOLE_COMMAND() { Invoke<0xAA3EC981, void>(); }
static int STRING_CONTAINS_STRING(int pram0, int pram1) { return Invoke<0xFCAFC819, int>(pram0, pram1); }
static int UNK_0x8C37CA1A(int pram0, int pram1) { return Invoke<0x8C37CA1A, int>(pram0, pram1); }
static int UNK_0x39286DE5(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x39286DE5, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x6745191B(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x6745191B, int>(pram0, pram1, pram2, pram3); }
static void TERMINATE_SCRIPT(int _ScriptId) { Invoke<0x60A7FF09, void>(_ScriptId); }
static bool UNK_0x3B1B6407() { return Invoke<0x3B1B6407, bool>(); }
static void UNK_0x4C02E1E5() { Invoke<0x4C02E1E5, void>(); }
static void REQUEST_ANIM_SET(int pram0, int pram1) { Invoke<0x2988B3FC, void>(pram0, pram1); }
static int REQUEST_ACTION_TREE(int pram0) { return Invoke<0xB3039DB7, int>(pram0); }
static int HAS_ANIM_SET_LOADED(int pram0) { return Invoke<0x4FFF397D, int>(pram0); }
static int HAS_ACTION_TREE_LOADED(int pram0) { return Invoke<0xEEECD85E, int>(pram0); }
static int SET_ANIM_SET_FOR_ACTOR(int pram0, int pram1, int pram2) { return Invoke<0x39C1E1C0, int>(pram0, pram1, pram2); }
static int SET_ACTION_NODE_FOR_ACTOR(int pram0, int pram1) { return Invoke<0x5A795F3A, int>(pram0, pram1); }
static int SET_REACT_NODE_FOR_ACTOR(int pram0, int pram1) { return Invoke<0xF90F737E, int>(pram0, pram1); }
static int GET_NUM_CONSOLE_COMMAND_TOKENS() { return Invoke<0x608F5BC6, int>(); }
static int GET_CONSOLE_COMMAND_TOKEN(int pram0) { return Invoke<0x9DE3DE24, int>(pram0); }
static int UNK_0xAC830865(int pram0, int pram1) { return Invoke<0xAC830865, int>(pram0, pram1); }
static void GET_VOLUME_CENTER(int pram0, int pram1) { Invoke<0x6729EEFE, void>(pram0, pram1); }
static int FIND_GROUND_INTERSECTION(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x6AD8EEAF, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x19B26C78(int pram0) { Invoke<0x19B26C78, void>(pram0); }
static void UNK_0x272D756C(int pram0, int pram1, int pram2) { Invoke<0x272D756C, void>(pram0, pram1, pram2); }
static void UNK_0x76341F1A(int pram0) { Invoke<0x76341F1A, void>(pram0); }
static void UNK_0x5A6418A2(int pram0, int pram1) { Invoke<0x5A6418A2, void>(pram0, pram1); }
static void UNK_0xBCD4979C(int pram0, int pram1, int pram2) { Invoke<0xBCD4979C, void>(pram0, pram1, pram2); }
static void UNK_0x30C67D05(int pram0) { Invoke<0x30C67D05, void>(pram0); }
static void UNK_0x762192EB(int pram0) { Invoke<0x762192EB, void>(pram0); }
static void UNK_0x309D058C(int pram0) { Invoke<0x309D058C, void>(pram0); }
static void UNK_0x1900A97E(int pram0, int pram1) { Invoke<0x1900A97E, void>(pram0, pram1); }
static void UNK_0xAA99E18E(int pram0) { Invoke<0xAA99E18E, void>(pram0); }
static void UNK_0x2CCE1115(int pram0) { Invoke<0x2CCE1115, void>(pram0); }
static float STRING_TO_FLOAT(const char* Str) { return Invoke<0x43BE70B5, float>(Str); }
static Iterator CREATE_OBJECT_ITERATOR(Layout layout) { return Invoke<0xD8A12B74, Iterator>(layout); }
static void ITERATE_ON_OBJECT_TYPE(Iterator Iterator, int Type) { Invoke<0xBE553F84, void>(Iterator, Type); }
static Object START_OBJECT_ITERATOR(Iterator Iterator) { return Invoke<0xE96A0318, Object>(Iterator); }
static int UNK_0x024B2FFC(int pram0) { return Invoke<0x024B2FFC, int>(pram0); }
static int UNK_0x36CC24A4(int pram0) { return Invoke<0x36CC24A4, int>(pram0); }
static void UNK_0x4028CE77(int pram0) { Invoke<0x4028CE77, void>(pram0); }
static int OBJECT_ITERATOR_NEXT(int pram0) { return Invoke<0xD88DC865, int>(pram0); }
static void DESTROY_ITERATOR(int pram0) { Invoke<0xE284A10C, void>(pram0); }
static int STRING_LENGTH(const char* pram0) { return Invoke<0x6CE4B233, int>(pram0); }
static int STRING_UPPER(int pram0) { return Invoke<0xBC5B2116, int>(pram0); }
static bool _STRING_COMPARE(const char* Str1, const char* Str2) { return Invoke<0x8218D693, bool>(Str1, Str2); }
static int STRING_TO_INT(const char* pram0) { return Invoke<0x590A8160, int>(pram0); }
static Vector3 GET_POSITION(Actor _Actor) { Vector3 position; Invoke<0x99BD9D6F, void>(_Actor, &position); return position; }
static float GET_HEADING(Actor _Actor) { return Invoke<0x42DE39F0, float>(_Actor); }
static int LOAD_SOFT_SAVE(int pram0) { return Invoke<0x0234F932, int>(pram0); }
static bool DOES_FILE_EXIST(const char* _Path) { return Invoke<0xAABE1330, bool>(_Path); }
static bool LOAD_GAME(const char* _Name) { return Invoke<0x7C5901EF, bool>(_Name); }
static int UNK_0x8C710D3E(int pram0) { return Invoke<0x8C710D3E, int>(pram0); }
static void NET_LOG(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x48275716, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static Camera GET_GAME_CAMERA() { return Invoke<0x6B7677BF, Camera>(); }
static Vector3 GET_CAMERA_DIRECTION(Camera _Camera) { Vector3 direction; Invoke<0xBBD1078A, void>(_Camera, &direction); return direction; }
static Vector3 GET_CAMERA_POSITION(Camera _Camera) { Vector3 position; Invoke<0x4A65F0B7, void>(_Camera, &position); return position; }
static void VSCALE(Vector3* Vector, float Scale) { Invoke<0x13530581, void>(Vector, Scale); }
static int GET_ACTORENUM_FROM_STRING(const char* ActorName) { return Invoke<0x8B217CAC, int>(ActorName); }
static void STREAMING_REQUEST_ACTOR(ActorModel _ActorModel, bool _Unk0, bool _Unk1) { Invoke<0xB0A79FEE, void>(_ActorModel, _Unk0, _Unk1); }
static bool STREAMING_IS_ACTOR_LOADED(ActorModel _ActorModel, int _Unk) { return Invoke<0x7DF72579, bool>(_ActorModel, _Unk); }
static int UNK_0x4A2063EC(int pram0) { return Invoke<0x4A2063EC, int>(pram0); }
static int GET_OBJECT_ORIENTATION(Object _Object, Vector3* _Rotation) { return Invoke<0x27B7D6D6, int>(_Object, _Rotation); }
static Layout UNK_0xADE13224() { return Invoke<0xADE13224, Layout>(); }
static Actor CREATE_ACTOR_IN_LAYOUT(Layout _Layout, const char* _ActorName, ActorModel _ActorModel, Vector2 _PositionXY, float _PositionZ, Vector2 _RotationXY, float _RotationZ) { return Invoke<0x8D67F397, Actor>(_Layout, _ActorName, _ActorModel, _PositionXY, _PositionZ, _RotationXY, _RotationZ); }
static void TASK_STAND_STILL(int pram0, int pram1, int pram2, int pram3) { Invoke<0x6F80965D, void>(pram0, pram1, pram2, pram3); }
static int STRING_LOWER(int pram0) { return Invoke<0x3E785560, int>(pram0); }
static void KILL_ACTOR(Actor _Actor) { Invoke<0x8B08ECA2, void>(_Actor); }
static void PRINT_FRAME_TIME(int pram0) { Invoke<0xB84DE79E, void>(pram0); }
static int GET_ACTOR_AXIS(int pram0, int pram1, int pram2) { return Invoke<0x294A5549, int>(pram0, pram1, pram2); }
static void SCRIPT_BREAKPOINT(int pram0) { Invoke<0xA81DABA3, void>(pram0); }
static int UNK_0x025C9845(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x025C9845, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static Object CREATE_PROP_IN_LAYOUT(Layout _Layout, const char* _PropName, const char* _FragmentPath, Vector3 _Position, Vector3 _Rotation, bool _Frozen) { return Invoke<0xE351587D, Object>(_Layout, _PropName, _FragmentPath, _Position, _Rotation, _Frozen); }
static int FIND_OBJECT_IN_OBJECT(int pram0, int pram1) { return Invoke<0x070F9693, int>(pram0, pram1); }
static int IN_TARGETTING_POSSE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x88087384, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int SNAP_ACTOR_TO_GRINGO(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xD0A845E9, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void AUDIO_MUSIC_FORCE_TRACK(const char* SongName, const char* Mood, int pram2, int pram3, int pram4, float pram5, int pram6) { Invoke<0xA2A356A7, void>(SongName, Mood, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0x6A9CFA2A(int pram0) { return Invoke<0x6A9CFA2A, int>(pram0); }
static int AI_IGNORE_ACTOR(int pram0) { return Invoke<0x8D1FC73C, int>(pram0); }
static void UNK_0x4DF3C5D1() { Invoke<0x4DF3C5D1, void>(); }
static int UNK_0xCCB57C38(int pram0) { return Invoke<0xCCB57C38, int>(pram0); }
static void UNK_0x5AEB2E4F(int pram0) { Invoke<0x5AEB2E4F, void>(pram0); }
static int UNK_0x17883570(int pram0) { return Invoke<0x17883570, int>(pram0); }
static void UNK_0x10873616() { Invoke<0x10873616, void>(); }
static int SET_OWNERSHIP_STRAGGLER(int pram0, int pram1) { return Invoke<0x346E91C2, int>(pram0, pram1); }
static int STRING_NUM_TOKENS() { return Invoke<0x7FB72180, int>(); }
static int STRING_GET_TOKEN(int pram0) { return Invoke<0xEE2791E5, int>(pram0); }
static int UNK_0x990614C1(int pram0) { return Invoke<0x990614C1, int>(pram0); }
static int IS_VOLUME_VALID(int pram0) { return Invoke<0xBC33CEB5, int>(pram0); }
static void UNK_0xC0C6245E(int pram0) { Invoke<0xC0C6245E, void>(pram0); }
static int UNK_0x2803BDA8(int pram0) { return Invoke<0x2803BDA8, int>(pram0); }
static void UNK_0x1BD78730(int pram0, int pram1, int pram2) { Invoke<0x1BD78730, void>(pram0, pram1, pram2); }
static int UNK_0xF437B3D9(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xF437B3D9, int>(pram0, pram1, pram2, pram3); }
static bool GET_OBJECT_RELATIVE_POSITION(Object _Object, Vector3* _Input, int _Unused, Vector3* _Output) { return Invoke<0x2243EA59, bool>(_Object, _Input, _Unused, _Output); }
static bool GET_OBJECT_RELATIVE_ORIENTATION(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x919583DC, bool>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xC07681C1(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xC07681C1, int>(pram0, pram1, pram2, pram3); }
static int GET_ASSET_ID(const char* _AssetPath, AssetType _AssetType) { return Invoke<0x6005B514, int>(_AssetPath, _AssetType); }
static void STREAMING_REQUEST_PROPSET(int pram0) { Invoke<0xEC1F14C8, void>(pram0); }
static int STREAMING_IS_PROPSET_LOADED(int pram0) { return Invoke<0xF7D65903, int>(pram0); }
static void UNK_0x836466F8(int pram0) { Invoke<0x836466F8, void>(pram0); }
static int UNK_0x779267C3(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x779267C3, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0x51D6DA2C(int pram0) { return Invoke<0x51D6DA2C, int>(pram0); }
static int UNK_0x5219B7D0(int pram0) { return Invoke<0x5219B7D0, int>(pram0); }
static int DECOR_CHECK_STRING(Object decor, const char* EventType, const char* EventName) { return Invoke<0xEDF99C77, int>(decor, EventType, EventName); }
static void UNK_0x3E509DF1(int pram0, int pram1) { Invoke<0x3E509DF1, void>(pram0, pram1); }
static int UNK_0xDB70DF0C(int pram0) { return Invoke<0xDB70DF0C, int>(pram0); }
static void SET_PHYSINST_FROZEN(int pram0, int pram1) { Invoke<0x2C0AF634, void>(pram0, pram1); }
static int UNK_0x6B72661F(int pram0) { return Invoke<0x6B72661F, int>(pram0); }
static int UNK_0x3CD2C250(int pram0) { return Invoke<0x3CD2C250, int>(pram0); }
static int ADD_AI_COVERSET_FOR_PROPSET(int pram0) { return Invoke<0x6BA6BC9B, int>(pram0); }
static Vehicle GET_VEHICLE(Actor _Actor) { return Invoke<0xA0936EB6, Vehicle>(_Actor); }
static void PRINTVECTOR(int pram0, int pram1, int pram2) { Invoke<0x085F31FB, void>(pram0, pram1, pram2); }
static void _REMOVE_ALL_WEAPONS(Actor _Actor) { Invoke<0xD695F857, void>(_Actor); }
static int UNK_0x8F4B473D(int pram0, int pram1, int pram2) { return Invoke<0x8F4B473D, int>(pram0, pram1, pram2); }
static void TASK_KILL_CHAR(int pram0, int pram1) { Invoke<0x1AE4B75B, void>(pram0, pram1); }
static void TASK_MELEE_ATTACK(int pram0, int pram1, int pram2) { Invoke<0x4FEADDD9, void>(pram0, pram1, pram2); }
static int ACTOR_MOUNT_ACTOR(int pram0, int pram1) { return Invoke<0xC28242F4, int>(pram0, pram1); }
static void RESET_ANALOG_POSITIONS(int pram0, int pram1) { Invoke<0x4710FD93, void>(pram0, pram1); }
static void ITERATE_IN_SPHERE(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x2243FA6E, void>(pram0, pram1, pram2, pram3, pram4); }
static int GET_NUM_ITERATOR_MATCHES(int pram0) { return Invoke<0xA3874D8A, int>(pram0); }
static int UNK_0x960DB7A5() { return Invoke<0x960DB7A5, int>(); }
static bool IS_ITERATOR_VALID(Iterator iterator) { return Invoke<0x5A9CC0B0, bool>(iterator); }
static void ITERATE_EVERYWHERE(int pram0) { Invoke<0xF35C5859, void>(pram0); }
static int UNK_0xB578DB52(int pram0) { return Invoke<0xB578DB52, int>(pram0); }
static int UNK_0xE07C2D99(int pram0) { return Invoke<0xE07C2D99, int>(pram0); }
static void UNK_0x6761D53A(int pram0, int pram1) { Invoke<0x6761D53A, void>(pram0, pram1); }
static int UNK_0x85C58BE1(int pram0) { return Invoke<0x85C58BE1, int>(pram0); }
static void UNK_0x2D6CD106(int pram0, int pram1) { Invoke<0x2D6CD106, void>(pram0, pram1); }
static int UNK_0xD60032F6(int pram0) { return Invoke<0xD60032F6, int>(pram0); }
static Object FIND_OBJECT_IN_LAYOUT(Layout Layout, const char* ObjectName) { return Invoke<0xCF875EFA, Object>(Layout, ObjectName); }
static int IS_CRIME_VALID(int pram0) { return Invoke<0x4CC5681D, int>(pram0); }
static void SET_CRIME_TYPE(int pram0, int pram1) { Invoke<0x85425011, void>(pram0, pram1); }
static void SET_CRIME_VICTIM(int pram0, int pram1) { Invoke<0x7B917033, void>(pram0, pram1); }
static void SET_CRIME_CRIMINAL(int pram0, int pram1) { Invoke<0xBA02916B, void>(pram0, pram1); }
static void UNK_0x2AE7D51F(int pram0, int pram1) { Invoke<0x2AE7D51F, void>(pram0, pram1); }
static void UNK_0x898B00F4(int pram0, int pram1) { Invoke<0x898B00F4, void>(pram0, pram1); }
static int SET_CRIME_POSITION(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xB3F4043B, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x921B5F2B(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x921B5F2B, int>(pram0, pram1, pram2, pram3); }
static void SET_CRIME_OBJECTSET(int pram0, int pram1) { Invoke<0xD60B8F77, void>(pram0, pram1); }
static void SET_CRIME_FACTION(int pram0, int pram1) { Invoke<0x1E552B26, void>(pram0, pram1); }
static void UNK_0x54E7F26B(int pram0, int pram1) { Invoke<0x54E7F26B, void>(pram0, pram1); }
static void SET_CRIME_COUNTER(int pram0, int pram1) { Invoke<0xCC14DC8D, void>(pram0, pram1); }
static void UNK_0x8521A685(int pram0, int pram1) { Invoke<0x8521A685, void>(pram0, pram1); }
static int UNK_0x831338D9(int pram0) { return Invoke<0x831338D9, int>(pram0); }
static int UNK_0x2CB3B980(int pram0) { return Invoke<0x2CB3B980, int>(pram0); }
static int UNK_0x43FBBDE1(int pram0, int pram1) { return Invoke<0x43FBBDE1, int>(pram0, pram1); }
static int SET_ACTOR_TIME_OF_LAST_CRIME(int pram0, int pram1) { return Invoke<0xE9D86A7A, int>(pram0, pram1); }
static void ITERATE_IN_SET(Iterator Iterator, IterationSet IterationSet) { Invoke<0xDF6B5E94, void>(Iterator, IterationSet); }
static int GET_ITERATOR_PARENT(int pram0) { return Invoke<0x12AA009F, int>(pram0); }
static int UNK_0x7C3D1193(int pram0) { return Invoke<0x7C3D1193, int>(pram0); }
static void ADD_TIME(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xBA4FEEBC, void>(pram0, pram1, pram2, pram3, pram4); }
static void SET_RAIN_AMOUNT(float Amount) { Invoke<0xB788D24A, void>(Amount); }
static void UNK_0xF0C9645A(float Amount) { Invoke<0xF0C9645A, void>(Amount); }
static void UNK_0xEB866555() { Invoke<0xEB866555, void>(); }
static void SET_WIND(int pram0, int pram1, int pram2) { Invoke<0xC6294698, void>(pram0, pram1, pram2); }
static void SET_AUTO_WIND() { Invoke<0x5D37C383, void>(); }
static void UNK_0x063F900A(int pram0) { Invoke<0x063F900A, void>(pram0); }
static bool DOES_SCRIPT_EXIST(const char* _ScriptPath) { return Invoke<0xDEAB87AB, bool>(_ScriptPath); }
static void FILE_START_PATH(int pram0) { Invoke<0x973BC454, void>(pram0); }
static void UNK_0x63CDBB01(int pram0) { Invoke<0x63CDBB01, void>(pram0); }
static void FILE_END_PATH() { Invoke<0x9A202E1B, void>(); }
static int UNK_0x6F323C5F() { return Invoke<0x6F323C5F, int>(); }
static int UNK_0x4417C9F2(int pram0) { return Invoke<0x4417C9F2, int>(pram0); }
static void UNK_0x05719022(int pram0) { Invoke<0x05719022, void>(pram0); }
static int NET_START_NEW_SCRIPT(int pram0, int pram1) { return Invoke<0x84D6F8A7, int>(pram0, pram1); }
static int UNK_0xC739D1D2(int pram0) { return Invoke<0xC739D1D2, int>(pram0); }
static int UNK_0xB50E95D7(int pram0) { return Invoke<0xB50E95D7, int>(pram0); }
static void UNK_0x95FBA0B0(int pram0, int pram1) { Invoke<0x95FBA0B0, void>(pram0, pram1); }
static void SET_PLAYER_CONTROL(Player _Player, bool _AllowAllControls, bool _BlockOnlyCamera, int pram3) { Invoke<0xD17AFCD8, void>(_Player, _AllowAllControls, _BlockOnlyCamera, pram3); }
static int UNK_0x243AF970(int pram0, int pram1, int pram2) { return Invoke<0x243AF970, int>(pram0, pram1, pram2); }
static void UNK_0x598815BD(int pram0) { Invoke<0x598815BD, void>(pram0); }
static void _PRINT_HELP(const char* _Text, float _Time, bool _IsLiteral, int _PrintType, int _Unk1, int _Unk2, int _Unk3, int _Unk4) { Invoke<0xE42A8278, void>(_Text, _Time, _IsLiteral, _PrintType, _Unk1, _Unk2, _Unk3, _Unk4); }
static int UNK_0x9C9529D8(int pram0, int pram1) { return Invoke<0x9C9529D8, int>(pram0, pram1); }
static int GET_MINUTE(Time T) { return Invoke<0x1020BF6D, int>(T); }
static int GET_SECOND(Time T) { return Invoke<0xBA8077CF, int>(T); }
static int IS_OBJECTSET_VALID(int pram0) { return Invoke<0x552189FD, int>(pram0); }
static int GET_OBJECTSET_SIZE(int pram0) { return Invoke<0xE09DE8A0, int>(pram0); }
static void CLEAN_OBJECTSET(int pram0) { Invoke<0x11EE07B5, void>(pram0); }
static int UNK_0x50D39153(int pram0, int pram1) { return Invoke<0x50D39153, int>(pram0, pram1); }
static void UNK_0xA3E05BAE(int pram0, int pram1) { Invoke<0xA3E05BAE, void>(pram0, pram1); }
static int UNK_0x49D0DF2E(int pram0) { return Invoke<0x49D0DF2E, int>(pram0); }
static void RELEASE_CURVE(int pram0) { Invoke<0x8270CE81, void>(pram0); }
static int VMAG(int pram0, int pram1, int pram2) { return Invoke<0x1FCF1ECD, int>(pram0, pram1, pram2); }
static int UNK_0xD3FE15FB() { return Invoke<0xD3FE15FB, int>(); }
static int _RETURN_MINUS_ONE_0() { return Invoke<0xD34F7B3A, int>(); }
static int _RETURN_MINUS_ONE_1() { return Invoke<0x913A5CB6, int>(); }
static int UNK_0x214AFB8C(int pram0) { return Invoke<0x214AFB8C, int>(pram0); }
static int UNK_0x2AF84928(int pram0) { return Invoke<0x2AF84928, int>(pram0); }
static int UNK_0x87C5471F(int pram0) { return Invoke<0x87C5471F, int>(pram0); }
static int CEIL(int pram0) { return Invoke<0xD536A1DF, int>(pram0); }
static void UNK_0x4D918005(int pram0, int pram1) { Invoke<0x4D918005, void>(pram0, pram1); }
static int HAS_ITEM(int pram0, int pram1) { return Invoke<0xB426267D, int>(pram0, pram1); }
static void DELETE_ITEM(int pram0, int pram1, int pram2) { Invoke<0xEFECF4F9, void>(pram0, pram1, pram2); }
static void UNK_0x40121E4F(int pram0, int pram1) { Invoke<0x40121E4F, void>(pram0, pram1); }
static void UNK_0xDE84B637(int pram0, int pram1) { Invoke<0xDE84B637, void>(pram0, pram1); }
static void AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(int pram0, int pram1) { Invoke<0x10DDB016, void>(pram0, pram1); }
static void SET_ACTOR_SHOULD_TAUNT(int pram0, int pram1) { Invoke<0x199600FA, void>(pram0, pram1); }
static void UNK_0x4B0D6152(int pram0, int pram1) { Invoke<0x4B0D6152, void>(pram0, pram1); }
static int UNK_0x0CC3D8F6(int pram0, int pram1) { return Invoke<0x0CC3D8F6, int>(pram0, pram1); }
static int UNK_0xFAC315B7(int pram0, int pram1, int pram2) { return Invoke<0xFAC315B7, int>(pram0, pram1, pram2); }
static int DECOR_SET_FLOAT(int pram0, int pram1, int pram2) { return Invoke<0xBC7BD5CB, int>(pram0, pram1, pram2); }
static void UPDATE_PROFILE_STAT(const char* stat, float val, int unk) { Invoke<0xF2FA1DE8, void>(stat, val, unk); }
static void SET_JOURNAL_ENTRY_TROPHY(int pram0, int pram1) { Invoke<0x5CB9D376, void>(pram0, pram1); }
static int UNK_0x5CAFCBD4(int pram0, int pram1, int pram2) { return Invoke<0x5CAFCBD4, int>(pram0, pram1, pram2); }
static int GET_AMMO_ENUM(int pram0) { return Invoke<0xD3E16075, int>(pram0); }
static int UNK_0xDB679ED9(int pram0) { return Invoke<0xDB679ED9, int>(pram0); }
static void _SET_AMMO_OF_TYPE(Actor _Actor, int _AmmoType, float _AmmoCount, bool _Unk0) { Invoke<0x4372593E, void>(_Actor, _AmmoType, _AmmoCount, _Unk0); }
static void UNK_0xA534CD14(int pram0, int pram1, int pram2) { Invoke<0xA534CD14, void>(pram0, pram1, pram2); }
static int IS_POINT_IN_VOLUME(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xB85BB21B, int>(pram0, pram1, pram2, pram3); }
static int IS_ACTOR_RIDING(int pram0) { return Invoke<0xA6BBE769, int>(pram0); }
static int IS_ANY_SPEECH_PLAYING(int pram0) { return Invoke<0x2B74A6D6, int>(pram0); }
static void UNK_0x31BAF169(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0x31BAF169, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int GET_ACTOR_VELOCITY(int pram0, int pram1) { return Invoke<0xAD6AF65C, int>(pram0, pram1); }
static int GET_CAMERA_CHANNEL_POSITION(int pram0, int pram1) { return Invoke<0xE017E2F7, int>(pram0, pram1); }
static float GET_ACTOR_HEALTH(Actor _Actor) { return Invoke<0xF246F15D, float>(_Actor); }
static float GET_ACTOR_MAX_HEALTH(Actor _Actor) { return Invoke<0xB69A84AF, float>(_Actor); }
static int IS_ACTOR_IN_WATER(int pram0) { return Invoke<0x7D65D9C7, int>(pram0); }
static void SET_BLIP_BLINK(int pram0, int pram1, int pram2, int pram3) { Invoke<0x04B8C8C6, void>(pram0, pram1, pram2, pram3); }
static bool IS_ACTOR_DRIVING_VEHICLE(Actor _Actor) { return Invoke<0xDC99C124, bool>(_Actor); }
static int UNK_0x5D41D423(int pram0) { return Invoke<0x5D41D423, int>(pram0); }
static int UNK_0xDF024C94(int pram0, int pram1, int pram2) { return Invoke<0xDF024C94, int>(pram0, pram1, pram2); }
static void HUD_CLEAR_OBJECTIVE() { Invoke<0x160BDC7A, void>(); }
static void _HUD_CLEAR_UNK() { Invoke<0x95B908, void>(); }
static void HUD_CLEAR_OBJECTIVE_QUEUE() { Invoke<0xE4DACF40, void>(); }
static void _PRINT_SUBTITLE(const char* _Text, float _Time, bool _IsLiteral, int _PrintType, int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x32394BB6, void>(_Text, _Time, _IsLiteral, _PrintType, _Unk0, _Unk1, _Unk2, _Unk3); }
static void SET_DEADEYE_POINT_MODIFIER(int pram0, int pram1) { Invoke<0x0486955B, void>(pram0, pram1); }
static void SET_MAX_DEADEYE_POINTS(int pram0, int pram1) { Invoke<0x526D45B7, void>(pram0, pram1); }
static void UNK_0x27A96719(int pram0, int pram1) { Invoke<0x27A96719, void>(pram0, pram1); }
static void SET_WEATHER_COMPLEX(Time _Time, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12, int pram13, int pram14) { Invoke<0xC157CA40, void>(_Time, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12, pram13, pram14); }
static void ITERATE_ON_PARTIAL_NAME(int pram0, int pram1) { Invoke<0x9624A938, void>(pram0, pram1); }
static void ITERATE_ON_PARTIAL_MODEL_NAME(int pram0, int pram1) { Invoke<0xD117DF0D, void>(pram0, pram1); }
static void HUD_CLEAR_BIG_TEXT() { Invoke<0xD6DFA6FC, void>(); }
static void HUD_CLEAR_COUNTER() { Invoke<0x050EFAAB, void>(); }
static void HUD_CLEAR_HELP() { Invoke<0x0095B908, void>(); }
static void HUD_CLEAR_SMALL_TEXT() { Invoke<0x585F008A, void>(); }
static void UNK_0x777A1CA2() { Invoke<0x777A1CA2, void>(); }
static void HUD_CLEAR_HELP_QUEUE() { Invoke<0x495164AD, void>(); }
static void UNK_0x02E1E708() { Invoke<0x02E1E708, void>(); }
static void CLEAR_GPS_PATH(int pram0) { Invoke<0xD077D8B6, void>(pram0); }
static int UNK_0x5C51D43C(int pram0, int pram1) { return Invoke<0x5C51D43C, int>(pram0, pram1); }
static int UNK_0xFDF42AAC(int pram0, int pram1) { return Invoke<0xFDF42AAC, int>(pram0, pram1); }
static void UNK_0xD923CD1B(int pram0, int pram1) { Invoke<0xD923CD1B, void>(pram0, pram1); }
static int UNK_0x0E2C4B68(int pram0, int pram1) { return Invoke<0x0E2C4B68, int>(pram0, pram1); }
static int UNK_0xFAD5A270(int pram0, int pram1) { return Invoke<0xFAD5A270, int>(pram0, pram1); }
static void UNK_0xA9459BB6(int pram0, int pram1, int pram2) { Invoke<0xA9459BB6, void>(pram0, pram1, pram2); }
static void UNK_0x9D9784B8(int pram0, int pram1) { Invoke<0x9D9784B8, void>(pram0, pram1); }
static void UNK_0xE1124E00() { Invoke<0xE1124E00, void>(); }
static void RESET_GAME() { Invoke<0x07045C4E, void>(); }
static void UNK_0x9C80A3A4(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x9C80A3A4, void>(pram0, pram1, pram2, pram3, pram4); }
static void EQUIP_ACCESSORY(int pram0, int pram1, int pram2) { Invoke<0x5A80659D, void>(pram0, pram1, pram2); }
static int UNK_0xA677B204(int pram0) { return Invoke<0xA677B204, int>(pram0); }
static bool ACTOR_HAS_WEAPON(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x0D47CFBD, bool>(_Actor, _WeaponModel); }
static int UNK_0xFEEC4EE2(int pram0) { return Invoke<0xFEEC4EE2, int>(pram0); }
static void ENABLE_WEATHER_SPHERE(int pram0, int pram1) { Invoke<0x17BCED9F, void>(pram0, pram1); }
static void UNK_0xC0556FB8(int pram0, int pram1) { Invoke<0xC0556FB8, void>(pram0, pram1); }
static int APPEND_REGION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x95666EE0, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0xA17311E4(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11) { return Invoke<0xA17311E4, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11); }
static int UNK_0x177A3843(int pram0, int pram1) { return Invoke<0x177A3843, int>(pram0, pram1); }
static void UNK_0xB104FF3E(int pram0, int pram1) { Invoke<0xB104FF3E, void>(pram0, pram1); }
static int UNK_0x31D76951(int pram0, int pram1) { return Invoke<0x31D76951, int>(pram0, pram1); }
static int UNK_0x1FEECD4C(int pram0) { return Invoke<0x1FEECD4C, int>(pram0); }
static int UNK_0x24C18749(int pram0, int pram1, int pram2) { return Invoke<0x24C18749, int>(pram0, pram1, pram2); }
static void UNK_0x08765C6B(int pram0, int pram1) { Invoke<0x08765C6B, void>(pram0, pram1); }
static void UNK_0xFD0AA999() { Invoke<0xFD0AA999, void>(); }
static void UNK_0xBFB65BE8() { Invoke<0xBFB65BE8, void>(); }
static void UNK_0x71BE51F4() { Invoke<0x71BE51F4, void>(); }
static int IS_MISSION_SCRIPT() { return Invoke<0x5A9D0738, int>(); }
static int STREAMING_REQUEST_PROP(int pram0, int pram1) { return Invoke<0x38DC1F50, int>(pram0, pram1); }
static void STREAMING_REQUEST_GRINGO(int pram0) { Invoke<0x563E2E79, void>(pram0); }
static void REQUEST_STRING_TABLE(const char* StringTablePath) { Invoke<0x82B4DCCE, void>(StringTablePath); }
static void STREAMING_REQUEST_SCRIPT(int pram0) { Invoke<0x11E57A92, void>(pram0); }
static void STREAMING_REQUEST_MOVABLE_NAV_MESH(int pram0) { Invoke<0x63334F63, void>(pram0); }
static void UNK_0x620649B4(int pram0) { Invoke<0x620649B4, void>(pram0); }
static int STREAMING_IS_PROP_LOADED(int pram0) { return Invoke<0xD7F80035, int>(pram0); }
static int STREAMING_IS_GRINGO_LOADED(int pram0) { return Invoke<0xA6C9DCEA, int>(pram0); }
static bool HAS_STRING_TABLE_LOADED(const char* StringTablePath) { return Invoke<0x12D77EEC, bool>(StringTablePath); }
static int STREAMING_IS_SCRIPT_LOADED(int pram0) { return Invoke<0xB5B4AEAD, int>(pram0); }
static int STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(int pram0) { return Invoke<0x8A0D3339, int>(pram0); }
static int UNK_0x67994764(int pram0) { return Invoke<0x67994764, int>(pram0); }
static int _GET_ID_OF_THIS_SCRIPT() { return Invoke<0x9C424E0D, int>(); }
static int UNK_0x01309706(int pram0) { return Invoke<0x01309706, int>(pram0); }
static void UNK_0x90CD8795(int pram0, int pram1) { Invoke<0x90CD8795, void>(pram0, pram1); }
static void UNK_0x9E88643A(int pram0, int pram1) { Invoke<0x9E88643A, void>(pram0, pram1); }
static void UNK_0xDAD46FAB() { Invoke<0xDAD46FAB, void>(); }
static void _CHEAT_INFINITE_HORSE_STAMINA(bool Activate) { Invoke<0xB731EB45, void>(Activate); }
static int _CHEAT_BLAZING_GUNS(bool _Activate) { return Invoke<0x3F67DEDB, int>(_Activate); }
static void UNK_0x7D0EFDD8(int pram0) { Invoke<0x7D0EFDD8, void>(pram0); }
static void PUSH_COMMAND_HANDLE(int pram0, int pram1) { Invoke<0x2104B1C0, void>(pram0, pram1); }
static void UNK_0xF1A723D0(int pram0, int pram1) { Invoke<0xF1A723D0, void>(pram0, pram1); }
static void CREATE_STAT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x32A3A7AE, void>(pram0, pram1, pram2, pram3); }
static void DISABLE_CHILD_SECTOR(int pram0) { Invoke<0x9E1AE585, void>(pram0); }
static void ENABLE_CHILD_SECTOR(int pram0) { Invoke<0x7ECE15BE, void>(pram0); }
static void SET_CURVE_WEIGHT(int pram0, int pram1) { Invoke<0xA7BB9E5E, void>(pram0, pram1); }
static void DISABLE_WORLD_SECTOR(int pram0) { Invoke<0xB511D087, void>(pram0); }
static void ENABLE_WORLD_SECTOR(int pram0) { Invoke<0xAD5613FD, void>(pram0); }
static int ENABLE_CURVE(int pram0, int pram1) { return Invoke<0x0C46DAB3, int>(pram0, pram1); }
static const char* UNK_0xC7612A79(const char* pram0, const char* pram1) { return Invoke<0xC7612A79, const char*>(pram0, pram1); }
static void UNK_0xD44F7102(int pram0, int pram1, int pram2) { Invoke<0xD44F7102, void>(pram0, pram1, pram2); }
static const char* VECTOR_TO_STRING(Vector3* Vec) { return Invoke<0x6B8E4CDD, const char*>(Vec); }
static void AUDIO_MUSIC_SET_STATE(int pram0) { Invoke<0x789C753C, void>(pram0); }
static int UNK_0x38771B89(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { return Invoke<0x38771B89, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static int UNK_0xC426D16F(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11) { return Invoke<0xC426D16F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11); }
static void LOAD_AUDIO_BANK(const char* RefName, const char* BankPath) { Invoke<0x08F4B5B8, void>(RefName, BankPath); }
static bool _IS_AUDIO_BANK_LOADING(const char* RefName, const char* BankPath) { return Invoke<0x98CD7340, bool>(RefName, BankPath); }
static void UNK_0x176E921C(const char* pram0) { Invoke<0x176E921C, void>(pram0); }
static int REQUEST_MISSION_AUDIO_BANK(const char* pram0) { return Invoke<0x916E37CA, int>(pram0); }
static void UNK_0xA82D893C(int pram0, int pram1) { Invoke<0xA82D893C, void>(pram0, pram1); }
static void DESTROY_VOLUME(int pram0) { Invoke<0x8CAB944F, void>(pram0); }
static void UNK_0xBFD6D55F(int pram0, int pram1) { Invoke<0xBFD6D55F, void>(pram0, pram1); }
static void SET_PLAYER_ENDLESS_READYMODE(int pram0, int pram1) { Invoke<0xD0E08B5E, void>(pram0, pram1); }
static void RESET_ANIM_SET_FOR_ACTOR(int pram0, int pram1) { Invoke<0x7A6C5C2F, void>(pram0, pram1); }
static void SET_PLAYER_POSTURE(int pram0, int pram1, int pram2) { Invoke<0x3BD4426B, void>(pram0, pram1, pram2); }
static int UNK_0xD86BFBD8(int pram0, int pram1) { return Invoke<0xD86BFBD8, int>(pram0, pram1); }
static void UNK_0x851F88F6(int pram0) { Invoke<0x851F88F6, void>(pram0); }
static void UNK_0xF86010D1(int pram0, int pram1) { Invoke<0xF86010D1, void>(pram0, pram1); }
static void UNK_0xBAEC56D1(int pram0) { Invoke<0xBAEC56D1, void>(pram0); }
static void APPEND_JOURNAL_ENTRY_DETAIL(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xF5DFD684, void>(pram0, pram1, pram2, pram3, pram4); }
static int GET_PLAYER_COMBATMODE() { return Invoke<0x86E193B8, int>(); }
static int DECOR_GET_FLOAT(int pram0, int pram1) { return Invoke<0x8DE5382F, int>(pram0, pram1); }
static void DISBAND_OBJECTSET(int pram0) { Invoke<0x179A07DD, void>(pram0); }
static int UNK_0xF5EE5874(int pram0) { return Invoke<0xF5EE5874, int>(pram0); }
static int UNK_0x2F358B89(int pram0, int pram1) { return Invoke<0x2F358B89, int>(pram0, pram1); }
static int UNK_0x061A2A3C() { return Invoke<0x061A2A3C, int>(); }
static void UNK_0xCA840DBB(int pram0) { Invoke<0xCA840DBB, void>(pram0); }
static int UNK_0x0B1569C5(int pram0, int pram1, int pram2) { return Invoke<0x0B1569C5, int>(pram0, pram1, pram2); }
static bool UNK_0x9A73C2CD() { return Invoke<0x9A73C2CD, bool>(); }
static int UNK_0x8E0D7219(int pram0, int pram1) { return Invoke<0x8E0D7219, int>(pram0, pram1); }
static void UI_SEND_EVENT(const char* e) { Invoke<0xB58825F5, void>(e); }
static bool UNK_0xD8E31D42() { return Invoke<0xD8E31D42, bool>(); }
static bool UNK_0x4BA92498() { return Invoke<0x4BA92498, bool>(); }
static void SET_CAMERA_POSITION(Camera _Camera, Vector3* _Position, Vector3* _Unk) { Invoke<0x0B12CD8C, void>(_Camera, _Position, _Unk); }
static void SET_CAMERA_ORIENTATION(Camera _Camera, Vector3* _Rotation, float _Unk0, bool _Unk1) { Invoke<0x486F4461, void>(_Camera, _Rotation, _Unk0, _Unk1); }
static void SET_CAMERA_DIRECTION(Camera _Camera, Vector3* _Direction, float _Unk0, bool _Unk1) { Invoke<0xA8642E5E, void>(_Camera, _Direction, _Unk0, _Unk1); }
static void SET_CURRENT_CAMERA_ON_CHANNEL(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0x3EA55678, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0x2A3B1045(int pram0) { Invoke<0x2A3B1045, void>(pram0); }
static void UNK_0x8F82B7D4(int pram0, int pram1) { Invoke<0x8F82B7D4, void>(pram0, pram1); }
static void UNK_0x9E6D7105(int pram0) { Invoke<0x9E6D7105, void>(pram0); }
static void UNK_0xBB2EABF9(int pram0) { Invoke<0xBB2EABF9, void>(pram0); }
static void UNK_0x18346D88() { Invoke<0x18346D88, void>(); }
static void UNK_0x0C197810() { Invoke<0x0C197810, void>(); }
static void REMOVE_CAMERA_FROM_CHANNEL(int pram0, int pram1) { Invoke<0x423DB420, void>(pram0, pram1); }
static void DESTROY_LAYOUT(int pram0) { Invoke<0xC1756F39, void>(pram0); }
static void HUD_ENABLE(int pram0) { Invoke<0x0C180A3F, void>(pram0); }
static void SETTIMERA(int pram0) { Invoke<0x35785333, void>(pram0); }
static int UNK_0x82A290D4() { return Invoke<0x82A290D4, int>(); }
static int UNK_0x111554E2(int pram0) { return Invoke<0x111554E2, int>(pram0); }
static int UNK_0xC64DF45D() { return Invoke<0xC64DF45D, int>(); }
static bool UI_ISFOCUSED(const char* _UILayer) { return Invoke<0x6F2509E8, bool>(_UILayer); }
static int NET_IS_ONLINE_AVAILABLE() { return Invoke<0x5FF2BAE0, int>(); }
static int UNK_0xCF02D1D6(int pram0) { return Invoke<0xCF02D1D6, int>(pram0); }
static bool IS_BUTTON_PRESSED(Controller _Controller, Button _Button) { return Invoke<0x7BCB3F15, bool>(_Controller, _Button); }
static void UI_EXIT(const char* uiLayer) { Invoke<0x2DF89C2E, void>(uiLayer); }
static int UNK_0x03962973() { return Invoke<0x03962973, int>(); }
static void DESTROY_OBJECTSET(int pram0) { Invoke<0x3A71A589, void>(pram0); }
static int UNK_0x2D160228(int pram0, int pram1) { return Invoke<0x2D160228, int>(pram0, pram1); }
static int SQUAD_IS_VALID(int pram0) { return Invoke<0xBDB3061E, int>(pram0); }
static int SQUAD_GET_SIZE(int pram0) { return Invoke<0xEEC83187, int>(pram0); }
static int SQUAD_GET_ACTOR_BY_INDEX(int pram0, int pram1) { return Invoke<0x5126039A, int>(pram0, pram1); }
static void UNK_0xEA86A817(int pram0) { Invoke<0xEA86A817, void>(pram0); }
static void UNK_0x1D4786CF(int pram0) { Invoke<0x1D4786CF, void>(pram0); }
static void UNK_0xED6D63FE(int pram0) { Invoke<0xED6D63FE, void>(pram0); }
static int UNK_0xE18028C1(int pram0) { return Invoke<0xE18028C1, int>(pram0); }
static void UNK_0x25690082(int pram0) { Invoke<0x25690082, void>(pram0); }
static void UNK_0x57478561(int pram0) { Invoke<0x57478561, void>(pram0); }
static void SQUAD_LEAVE(int pram0) { Invoke<0x077591FF, void>(pram0); }
static void DESTROY_ACTOR(Actor _Actor) { Invoke<0x8BD21869, void>(_Actor); }
static void RELEASE_ACTOR_AS_AMBIENT(int pram0) { Invoke<0xC8AD4A8C, void>(pram0); }
static void RELEASE_ACTOR(Actor _Actor) { Invoke<0x32489AFB, void>(_Actor); }
static int CAMERA_IS_VISIBLE_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xBB6FDF5F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void RELEASE_OBJECT_REF(int pram0) { Invoke<0x67DB5ABF, void>(pram0); }
static GUIWindow _GUI_GET_WINDOW(int GUIHandle, const char* WindowName) { return Invoke<0xF6207DF5, GUIWindow>(GUIHandle, WindowName); }
static int GUI_WINDOW_VALID(int pram0) { return Invoke<0xA2E6FECB, int>(pram0); }
static int GUI_CLOSE_WINDOW(int pram0) { return Invoke<0xFDED9B11, int>(pram0); }
static void UNK_0x5AC72FCC(int pram0) { Invoke<0x5AC72FCC, void>(pram0); }
static void UNK_0x73BE57AF(int pram0) { Invoke<0x73BE57AF, void>(pram0); }
static void UNK_0xA094152A(int pram0) { Invoke<0xA094152A, void>(pram0); }
static void SET_ACTOR_INVULNERABILITY(Actor _Actor, bool _Invulnerable) { Invoke<0xE38EF526, void>(_Actor, _Invulnerable); }
static void UNK_0xA737CCAC(int pram0) { Invoke<0xA737CCAC, void>(pram0); }
static void UI_POP(const char* pram0) { Invoke<0xBEE5CF6C, void>(pram0); }
static void STREAMING_UNLOAD_BOUNDS() { Invoke<0x09A67EC6, void>(); }
static int UNK_0xCE043618() { return Invoke<0xCE043618, int>(); }
static void UNK_0x0DFF578A(int pram0, int pram1, int pram2) { Invoke<0x0DFF578A, void>(pram0, pram1, pram2); }
static int WOULD_ACTOR_BE_VISIBLE(int pram0, int pram1, int pram2) { return Invoke<0xD8BE8E0C, int>(pram0, pram1, pram2); }
static int UNK_0x44A34042(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x44A34042, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SQUAD_MAKE_EMPTY(int pram0) { Invoke<0x90D92CF1, void>(pram0); }
static int UNK_0x1D69F321(int pram0, int pram1, int pram2) { return Invoke<0x1D69F321, int>(pram0, pram1, pram2); }
static void TASK_BIRD_LAND_AT_COORD(int pram0, int pram1) { Invoke<0xAD0E49E3, void>(pram0, pram1); }
static int UNK_0x5F7176D6() { return Invoke<0x5F7176D6, int>(); }
static int GET_WEATHER() { return Invoke<0xEA026ED9, int>(); }
static int FIND_NAMED_POPULATION_SET(int pram0) { return Invoke<0x4646C335, int>(pram0); }
static int IS_POPSET_VALID(int pram0) { return Invoke<0x64BAF32C, int>(pram0); }
static int OBJECT_ITERATOR_CURRENT(int pram0) { return Invoke<0x191E32C0, int>(pram0); }
static int IS_GRINGO_VALID(int pram0) { return Invoke<0x7C858A47, int>(pram0); }
static int UNK_0xE2DCFF34(int pram0, int pram1, int pram2) { return Invoke<0xE2DCFF34, int>(pram0, pram1, pram2); }
static void UNK_0x8EB5CE58(int pram0, int pram1, int pram2, int pram3) { Invoke<0x8EB5CE58, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x0DC149BD(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0DC149BD, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xD92BA5B6(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0xD92BA5B6, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int UNK_0xFF8CBD07(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0xFF8CBD07, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int GET_LOCATOR_OFFSETS(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0BA5E579, int>(pram0, pram1, pram2, pram3); }
static bool SET_OBJECT_POSITION(Object _Object, Vector2 _PositionXY, float _PositionZ) { return Invoke<0xC5D796F8, bool>(_Object, _PositionXY, _PositionZ); }
static void UNK_0x47C5E353(int pram0, int pram1) { Invoke<0x47C5E353, void>(pram0, pram1); }
static void UNK_0x3932B786(int pram0) { Invoke<0x3932B786, void>(pram0); }
static int UNK_0xF7277A0F(int pram0, int pram1) { return Invoke<0xF7277A0F, int>(pram0, pram1); }
static int UNK_0xD0C471FB(int pram0) { return Invoke<0xD0C471FB, int>(pram0); }
static int GET_ACTOR_FROM_OBJECT(int pram0) { return Invoke<0x34F0AD96, int>(pram0); }
static bool IS_ACTOR_VEHICLE(Actor Actor) { return Invoke<0x9751B167, bool>(Actor); }
static int UNK_0x994F2BD1(int pram0, int pram1) { return Invoke<0x994F2BD1, int>(pram0, pram1); }
static void UNK_0x43F59172(int pram0) { Invoke<0x43F59172, void>(pram0); }
static void UNK_0x52D984AF(int pram0) { Invoke<0x52D984AF, void>(pram0); }
static void AI_GOAL_LOOK_CLEAR(int pram0) { Invoke<0x6AF3E54E, void>(pram0); }
static void UNK_0x031E983D(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x031E983D, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SET_ACTOR_ALLOW_WEAPON_REACTIONS(int pram0, int pram1) { Invoke<0x003D7C2F, void>(pram0, pram1); }
static void AI_QUICK_EXIT_GRINGO(int pram0, int pram1) { Invoke<0x6FAF13C2, void>(pram0, pram1); }
static int GET_LAST_ATTACKER(int pram0) { return Invoke<0x2C0F211D, int>(pram0); }
static int GET_RIDER(int pram0) { return Invoke<0x88A283E5, int>(pram0); }
static void TASK_CLEAR(int pram0) { Invoke<0x16876A25, void>(pram0); }
static void TASK_WANDER(int pram0, int pram1) { Invoke<0x17BCA08E, void>(pram0, pram1); }
static void MEMORY_PREFER_RIDING(int pram0, int pram1) { Invoke<0x1B72B0DD, void>(pram0, pram1); }
static void RELEASE_LAYOUT_OBJECTS(int pram0) { Invoke<0xE78E66F0, void>(pram0); }
static bool IS_ACTOR_RIDING_VEHICLE(Actor Actor) { return Invoke<0xDE19A1F9, bool>(Actor); }
static Actor GET_MOUNT(Actor _Actor) { return Invoke<0xDD31EC4E, Actor>(_Actor); }
static int UNK_0xF68C926F(int pram0) { return Invoke<0xF68C926F, int>(pram0); }
static int UNK_0xD85CA776(int pram0) { return Invoke<0xD85CA776, int>(pram0); }
static int GET_DRAFT_ACTOR(int pram0, int pram1) { return Invoke<0x48D5121D, int>(pram0, pram1); }
static bool IS_ACTOR_DEAD(Actor actor) { return Invoke<0x0D798FFE, bool>(actor); }
static int IS_OBJECT_IN_OBJECTSET(int pram0, int pram1) { return Invoke<0x0114FCBD, int>(pram0, pram1); }
// static const char* GET_ACTOR_NAME(Actor _Actor) { return Invoke<0x78CF43C1, const char*>(_Actor); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
// static const char* GET_LAYOUT_NAME(Layout _Layout) { return Invoke<0xBADE22A2, const char*>(_Layout); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
// static const char* GET_SOMETHING_NAME(int _Something) { return Invoke<0xF662EAE1, const char*>(_Something); } // Exact same as 'GET_OBJECT_NAME', no need to use this native.
static const char* GET_OBJECT_NAME(Object _Object) { return Invoke<0xDF40614F, const char*>(_Object); }
static const char* _GET_OBJECT_GXT_ENTRY(Object _Object) { return Invoke<0x5C4262F9, const char*>(_Object); }
static int UNK_0x1449EE9E(int pram0) { return Invoke<0x1449EE9E, int>(pram0); }
static void AI_SET_NAV_MATERIAL_USAGE(int pram0, int pram1, int pram2) { Invoke<0x7B00615F, void>(pram0, pram1, pram2); }
static void SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(int pram0, int pram1) { Invoke<0x4D0A87BF, void>(pram0, pram1); }
static void SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(int pram0, int pram1) { Invoke<0xED3071A5, void>(pram0, pram1); }
static void AI_SET_ENABLE_DEAD_BODY_REACTIONS(int pram0, int pram1) { Invoke<0x1978C111, void>(pram0, pram1); }
static int DECOR_SET_OBJECT(int pram0, int pram1, int pram2) { return Invoke<0x44F8BCC5, int>(pram0, pram1, pram2); }
static int DECOR_GET_BOOL(int pram0, int pram1) { return Invoke<0xDBCE51E0, int>(pram0, pram1); }
static int CAMERA_IS_VISIBLE_POINT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xA97770FE, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void MEMORY_IDENTIFY(int pram0, int pram1) { Invoke<0xBA09085C, void>(pram0, pram1); }
static void MEMORY_CONSIDER_AS(int pram0, int pram1, int pram2) { Invoke<0x296C01A4, void>(pram0, pram1, pram2); }
static int IS_AI_ACTOR_UNALERTED(int pram0) { return Invoke<0xC4D114A6, int>(pram0); }
static void AI_GOAL_LOOK_AT_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x96928D25, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0xFE5715A1(int pram0, int pram1, int pram2) { Invoke<0xFE5715A1, void>(pram0, pram1, pram2); }
static void UNK_0x15B7044B(int pram0, int pram1, int pram2, int pram3) { Invoke<0x15B7044B, void>(pram0, pram1, pram2, pram3); }
static bool IS_ACTOR_ON_FOOT(int actor) { return Invoke<0x63D6551C, bool>(actor); }
static void AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(int pram0, int pram1) { Invoke<0xDCD2FC0F, void>(pram0, pram1); }
static int AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(int pram0, int pram1) { return Invoke<0x059F64B8, int>(pram0, pram1); }
static int AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(int pram0, int pram1, int pram2) { return Invoke<0xD8574E09, int>(pram0, pram1, pram2); }
static int UNK_0xA5A24484(int pram0) { return Invoke<0xA5A24484, int>(pram0); }
static int UNK_0x86BAAC6C(int pram0, int pram1) { return Invoke<0x86BAAC6C, int>(pram0, pram1); }
static int IS_PLAYER_WEAPON_ZOOMED(int pram0) { return Invoke<0x0A842786, int>(pram0); }
static int MEMORY_GET_IS_VISIBLE(int pram0, int pram1) { return Invoke<0x45CE40FD, int>(pram0, pram1); }
static int UNK_0x02365961(int pram0) { return Invoke<0x02365961, int>(pram0); }
static int UNK_0x7F454A92(int pram0) { return Invoke<0x7F454A92, int>(pram0); }
static void CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(int pram0) { Invoke<0x4DBD473B, void>(pram0); }
static void AI_SPEECH_SET_ALLOW_FOR_ACTOR(int pram0, int pram1) { Invoke<0x56421F1A, void>(pram0, pram1); }
static void UNK_0x99AFD2D1(int pram0, int pram1, int pram2) { Invoke<0x99AFD2D1, void>(pram0, pram1, pram2); }
static int GET_ACTOR_ENUM(int pram0) { return Invoke<0x0B28E9EC, int>(pram0); }
static void UNK_0xC1F9A360(int pram0) { Invoke<0xC1F9A360, void>(pram0); }
static void UNK_0xAD42EABC(int pram0, int pram1) { Invoke<0xAD42EABC, void>(pram0, pram1); }
static int UNK_0x6C939AA7(int pram0, int pram1) { return Invoke<0x6C939AA7, int>(pram0, pram1); }
static void TASK_USE_GRINGO(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xA0E003A7, void>(pram0, pram1, pram2, pram3, pram4); }
static void SET_ACTOR_STAY_WITHIN_VOLUME(int pram0, int pram1, int pram2, int pram3) { Invoke<0x6A4A1699, void>(pram0, pram1, pram2, pram3); }
static void AI_GOAL_LOOK_AT_NEUTRAL(int pram0, int pram1) { Invoke<0x8456676E, void>(pram0, pram1); }
static int UNK_0xFA37C0FA(int pram0, int pram1, int pram2) { return Invoke<0xFA37C0FA, int>(pram0, pram1, pram2); }
static void TASK_PRIORITY_SET(int pram0, int pram1) { Invoke<0x3A95A656, void>(pram0, pram1); }
static void TASK_WANDER_IN_VOLUME(int pram0, int pram1, int pram2) { Invoke<0xA5F2BFAA, void>(pram0, pram1, pram2); }
static void SQUAD_JOIN(int pram0, int pram1) { Invoke<0xB14302C8, void>(pram0, pram1); }
static int UNK_0x7080E24A(int pram0, int pram1, int pram2) { return Invoke<0x7080E24A, int>(pram0, pram1, pram2); }
static int UNK_0x9A93E7CA(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x9A93E7CA, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x002B0698(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x002B0698, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x9AA8A1B1(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x9AA8A1B1, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x426828CB(int pram0) { return Invoke<0x426828CB, int>(pram0); }
static int GRINGO_ENABLE_SPAWN(int pram0, int pram1) { return Invoke<0xA5EDCA4A, int>(pram0, pram1); }
static int ATTACH_OBJECTS(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0xE1421B42, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int IS_ATTACHMENT_VALID(int pram0) { return Invoke<0x50305244, int>(pram0); }
static int UNK_0x000079CB(int pram0) { return Invoke<0x000079CB, int>(pram0); }
static int UNK_0x1F003E6C(int pram0, int pram1, int pram2) { return Invoke<0x1F003E6C, int>(pram0, pram1, pram2); }
static int UNK_0x35CD589C(int pram0) { return Invoke<0x35CD589C, int>(pram0); }
static void CREATE_OBJECT_GLOW(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x1065D334, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void RELEASE_VOLUME(int pram0) { Invoke<0x81F984F8, void>(pram0); }
static void ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(int pram0, int pram1) { Invoke<0xEBE88626, void>(pram0, pram1); }
static void UNK_0x0ACF7E75(int pram0) { Invoke<0x0ACF7E75, void>(pram0); }
static void REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(int pram0, int pram1) { Invoke<0x1AED34CA, void>(pram0, pram1); }
static void UNK_0x80FF115A(int pram0) { Invoke<0x80FF115A, void>(pram0); }
static int UNK_0xD3503922(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0xD3503922, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int GET_ACTORENUM_SPECIES(int pram0) { return Invoke<0x6AC01FCB, int>(pram0); }
static int IS_POPULATION_SET_READY(int pram0, int pram1, int pram2) { return Invoke<0xFA5EA974, int>(pram0, pram1, pram2); }
static int UNK_0x8FD12F97(int pram0) { return Invoke<0x8FD12F97, int>(pram0); }
static int GET_ACTORENUM_IN_POPULATION(int pram0, int pram1) { return Invoke<0xABEC5676, int>(pram0, pram1); }
static int GET_ACTORENUM_IN_POPULATION_WEIGHT(int pram0, int pram1) { return Invoke<0xEDD44891, int>(pram0, pram1); }
static void TASK_FLEE_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x2CF32A98, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void MEMORY_CLEAR_ALL(int pram0) { Invoke<0x4485B246, void>(pram0); }
static int GET_CURRENT_GRINGO(int pram0) { return Invoke<0x5D9DB7A5, int>(pram0); }
static int UNK_0x111501F7(int pram0) { return Invoke<0x111501F7, int>(pram0); }
static int CREATE_CORPSE_IN_LAYOUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { return Invoke<0xE8C04F05, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static int REQUEST_FIXED_CORPSE(int pram0, int pram1) { return Invoke<0x0D447878, int>(pram0, pram1); }
static void UNK_0x05D69EA6(int pram0, int pram1) { Invoke<0x05D69EA6, void>(pram0, pram1); }
static int UNK_0xCC277C0A(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xCC277C0A, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0x3DD1DC3F(int pram0, int pram1) { return Invoke<0x3DD1DC3F, int>(pram0, pram1); }
static int UNK_0x9C40E671(int pram0) { return Invoke<0x9C40E671, int>(pram0); }
static int SET_OBJECT_POSITION_ON_GROUND(Object Obj, Vector3 Position) { return Invoke<0x5AB0BBA6, int>(Obj, Position); }
static int UNK_0x7A6146DB(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x7A6146DB, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SET_CAMERA_FOCUS_PROMPT_TEXT(int pram0, int pram1) { Invoke<0x21633E5F, void>(pram0, pram1); }
static void UNK_0x601FC9F4(int pram0, int pram1) { Invoke<0x601FC9F4, void>(pram0, pram1); }
static void UNK_0x04A38C60(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x04A38C60, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static const char* GET_SCRIPT_NAME() { return Invoke<0x0BC52445, const char*>(); }
static int GET_TOTAL_MINUTES(int pram0) { return Invoke<0xC52F07A8, int>(pram0); }
static int UNK_0xA5FF6076(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xA5FF6076, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x0E018669(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x0E018669, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0x8E551A7C(int pram0) { return Invoke<0x8E551A7C, int>(pram0); }
static int UNK_0xE531DCAE(int pram0, int pram1, int pram2) { return Invoke<0xE531DCAE, int>(pram0, pram1, pram2); }
static int UNK_0xBD4E48A6(int pram0, int pram1) { return Invoke<0xBD4E48A6, int>(pram0, pram1); }
static void UNK_0xDF93BD7C(int pram0) { Invoke<0xDF93BD7C, void>(pram0); }
static int IS_PERS_CHAR_ALIVE(int pram0) { return Invoke<0x5F3A1B81, int>(pram0); }
static int UNK_0x2CA16327(int pram0) { return Invoke<0x2CA16327, int>(pram0); }
static void AMBIENT_SET_SEARCH_CENTER_PLAYER() { Invoke<0x21E783AC, void>(); }
static void UNK_0xA89B77A7(int pram0, int pram1) { Invoke<0xA89B77A7, void>(pram0, pram1); }
static void UNK_0x609514AE(int pram0, int pram1, int pram2, int pram3) { Invoke<0x609514AE, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x45190938(int pram0, int pram1, int pram2) { Invoke<0x45190938, void>(pram0, pram1, pram2); }
static void UNK_0x912EEC43(int pram0, int pram1, int pram2) { Invoke<0x912EEC43, void>(pram0, pram1, pram2); }
static void UNK_0x9A35520B(int pram0) { Invoke<0x9A35520B, void>(pram0); }
static void UNK_0xA337135A(int pram0) { Invoke<0xA337135A, void>(pram0); }
static void UNK_0x0AC99007(int pram0, int pram1) { Invoke<0x0AC99007, void>(pram0, pram1); }
static void UNK_0x54BD1C65(int pram0, int pram1) { Invoke<0x54BD1C65, void>(pram0, pram1); }
static void UNK_0xC8B149B4(int pram0) { Invoke<0xC8B149B4, void>(pram0); }
static int UNK_0x0C6EF9E1(int pram0, int pram1) { return Invoke<0x0C6EF9E1, int>(pram0, pram1); }
static void UNK_0xB1609063(int pram0) { Invoke<0xB1609063, void>(pram0); }
static void UNK_0x9CD2B55F(int pram0, int pram1, int pram2) { Invoke<0x9CD2B55F, void>(pram0, pram1, pram2); }
static void UNK_0x391F3607(int pram0, int pram1, int pram2) { Invoke<0x391F3607, void>(pram0, pram1, pram2); }
static int UNK_0xBADCF1E9(int pram0) { return Invoke<0xBADCF1E9, int>(pram0); }
static void UNK_0x19D652F9(int pram0, int pram1, int pram2, int pram3) { Invoke<0x19D652F9, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x30A9FA0A(int pram0, int pram1) { return Invoke<0x30A9FA0A, int>(pram0, pram1); }
static int GET_X(int pram0) { return Invoke<0x436CE75A, int>(pram0); }
static int GET_Z(int pram0) { return Invoke<0x25A02BC1, int>(pram0); }
static int CREATE_POPULATION_SET(int pram0) { return Invoke<0xAF1D570B, int>(pram0); }
static void UNK_0x0C1B8DEA(int pram0, int pram1, int pram2) { Invoke<0x0C1B8DEA, void>(pram0, pram1, pram2); }
static void UNK_0x50ED77F1(int pram0, int pram1) { Invoke<0x50ED77F1, void>(pram0, pram1); }
static void AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(int pram0, int pram1) { Invoke<0xF3D88421, void>(pram0, pram1); }
static void UNK_0xF4429710(int pram0, int pram1) { Invoke<0xF4429710, void>(pram0, pram1); }
static void UNK_0xB421AFCA(int pram0) { Invoke<0xB421AFCA, void>(pram0); }
static void HOGTIE_ACTOR(int pram0) { Invoke<0x4440BCA5, void>(pram0); }
static void TASK_FACE_ACTOR(int pram0, int pram1, int pram2, int pram3) { Invoke<0x9F3B5B47, void>(pram0, pram1, pram2, pram3); }
static void MEMORY_SET_WEAPON_DRAW_PREFERENCE(int pram0, int pram1) { Invoke<0xF8CB6260, void>(pram0, pram1); }
static void TASK_POINT_GUN_AT_OBJECT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x95C206C2, void>(pram0, pram1, pram2, pram3); }
static int IS_ACTOR_HOGTIED(int pram0) { return Invoke<0xA610DC79, int>(pram0); }
static int GET_HOGTIED_MASTER(int pram0) { return Invoke<0x1580F3BF, int>(pram0); }
static int UNK_0xFF0B53EF() { return Invoke<0xFF0B53EF, int>(); }
static int AI_IS_HOSTILE_OR_ENEMY(int pram0, int pram1) { return Invoke<0x9AB964F4, int>(pram0, pram1); }
static int UNK_0xA936E73B(int pram0, int pram1) { return Invoke<0xA936E73B, int>(pram0, pram1); }
static void MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(int pram0, int pram1) { Invoke<0x8212247D, void>(pram0, pram1); }
static void UNK_0xA8BD64D1(int pram0) { Invoke<0xA8BD64D1, void>(pram0); }
static void MEMORY_REPORT_POSITION_AUTO(int pram0, int pram1, int pram2) { Invoke<0x2F589CDF, void>(pram0, pram1, pram2); }
static int ADD_BLIP_FOR_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xEFB9362F, int>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0xA4F209D5(int pram0) { Invoke<0xA4F209D5, void>(pram0); }
static int IS_AMBIENT_SPEECH_PLAYING(int pram0) { return Invoke<0x1972E8AA, int>(pram0); }
static int UNK_0xD98CB6F6(int pram0) { return Invoke<0xD98CB6F6, int>(pram0); }
static int TASK_SEQUENCE_OPEN() { return Invoke<0x8DA34524, int>(); }
static void TASK_SEQUENCE_CLOSE() { Invoke<0x9EE3053B, void>(); }
static void TASK_SEQUENCE_PERFORM(int pram0, int pram1) { Invoke<0x2DF2298C, void>(pram0, pram1); }
static void TASK_SEQUENCE_RELEASE(int pram0, int pram1) { Invoke<0xB2D35E22, void>(pram0, pram1); }
static void UNK_0xA343FDBB() { Invoke<0xA343FDBB, void>(); }
static int UNK_0x7957CA4F(int pram0, int pram1, int pram2) { return Invoke<0x7957CA4F, int>(pram0, pram1, pram2); }
static void TASK_MOUNT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xB6131204, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SET_ACTOR_ONE_SHOT_DEATH(int pram0, int pram1) { Invoke<0xCDC686B2, void>(pram0, pram1); }
static void UNK_0x2EBE540D(int pram0, int pram1) { Invoke<0x2EBE540D, void>(pram0, pram1); }
static void COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(int pram0, int pram1) { Invoke<0xF1454677, void>(pram0, pram1); }
static void COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(int pram0, int pram1, int pram2) { Invoke<0x80D51606, void>(pram0, pram1, pram2); }
static int UNK_0xF270EAC1(int pram0) { return Invoke<0xF270EAC1, int>(pram0); }
static int DECOR_SET_VECTOR(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xAAED0B69, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xBF680846(int pram0) { return Invoke<0xBF680846, int>(pram0); }
static int UNK_0x016C6801(int pram0, int pram1) { return Invoke<0x016C6801, int>(pram0, pram1); }
static int ACTORS_IN_RANGE(int pram0, int pram1, int pram2) { return Invoke<0x50A3BF5D, int>(pram0, pram1, pram2); }
static void PRINT_HELP_FORMAT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0xD8AAF8E0, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int _PUSH_NEG_ONE() { return Invoke<0xB114332D, int>(); }
static void UNK_0x45589499(int pram0) { Invoke<0x45589499, void>(pram0); }
static int GUI_SET_TEXT(int TextHandle, const char* MenuName) { return Invoke<0x5F3A1C35, int>(TextHandle, MenuName); }
static bool _IS_KEY_PRESSED(KeyCode _KeyCode) { return Invoke<0xCBC97619, bool>(_KeyCode); }
static int GUI_MAKE_TEXT(int GUIHandle, int Position, const char* MenuTitle, const char* GXTText, float pram4) { return Invoke<0x68FC1001, int>(GUIHandle, Position, MenuTitle, GXTText, pram4); }
static int GUI_SET_TEXT_COLOR(int TextHandle, float* ColorArea) { return Invoke<0x7600ED4B, int>(TextHandle, ColorArea); }
static Controller _GET_ACTOR_CONTROLLER(int ActorId) { return Invoke<0x524F6981, Controller>(ActorId); }
static float GET_STICK_X(Controller _Controller, bool _IsRightStick, int _Unk0) { return Invoke<0x9AAF7E28, float>(_Controller, _IsRightStick, _Unk0); }
static float GET_STICK_Y(Controller _Controller, bool _IsRightStick, int _Unk0) { return Invoke<0x7C6D41A4, float>(_Controller, _IsRightStick, _Unk0); }
static void UNK_0x3C2D93C1(float x, float y, const char* Text, float r, float g, float b, float a) { Invoke<0x3C2D93C1, void>(x, y, Text, r, g, b, a); }
static int GUI_SET_TEXT_JUSTIFY(int TextHandle, int JustifyType) { return Invoke<0x9CC6F183, int>(TextHandle, JustifyType); }
static int GET_TASK_STATUS(int pram0, int pram1) { return Invoke<0xCCE01E8A, int>(pram0, pram1); }
static void MEMORY_CLEAR_EVENTS(int pram0, int pram1) { Invoke<0x8CD37E9E, void>(pram0, pram1); }
static int UNK_0xAFB1CC55(int pram0) { return Invoke<0xAFB1CC55, int>(pram0); }
static int AI_IMPAIRMENT_MASK_MATCHES(int pram0, int pram1) { return Invoke<0xB4A15D17, int>(pram0, pram1); }
static int SQUAD_GET(int pram0) { return Invoke<0xB3732081, int>(pram0); }
static int UNK_0xAEDD7512(int pram0) { return Invoke<0xAEDD7512, int>(pram0); }
static int SAY_SINGLE_LINE_STRING_BEAT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x84A909EC, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0xBA734A15(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0xBA734A15, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static bool IS_ACTOR_HUMAN(int actor) { return Invoke<0x882C84DC, bool>(actor); }
static void MEMORY_ALLOW_TAKE_COVER(int pram0, int pram1) { Invoke<0xE944E5F8, void>(pram0, pram1); }
static int UNK_0xEE0AB3DD(int pram0) { return Invoke<0xEE0AB3DD, int>(pram0); }
static int GET_CRIME_CRIMINAL(int pram0) { return Invoke<0xEC2C34A4, int>(pram0); }
static int GET_CRIME_TYPE(int pram0) { return Invoke<0xDB2BDEA8, int>(pram0); }
static int IS_ACTOR_ON_TRAIN(int pram0, int pram1) { return Invoke<0xD36E2D54, int>(pram0, pram1); }
static int GET_LAST_HIT_TIME(int pram0) { return Invoke<0x3A207AF2, int>(pram0); }
static int UNK_0xFF5F7D2C(int pram0, int pram1) { return Invoke<0xFF5F7D2C, int>(pram0, pram1); }
static int UNK_0xCC04895F(int pram0, int pram1) { return Invoke<0xCC04895F, int>(pram0, pram1); }
static int UNK_0xB1FCFFDC(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xB1FCFFDC, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x4685D538(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x4685D538, int>(pram0, pram1, pram2, pram3); }
static int GRINGO_UPDATE_INT(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0744FEE8, int>(pram0, pram1, pram2, pram3); }
static float UNK_0x5FE80264() { return Invoke<0x5FE80264, float>(); }
static float _GET_MOUSE_DELTA_X() { return Invoke<0x88F07597, float>(); }
static float _GET_MOUSE_INPUT_Y(Controller _Controller) { return Invoke<0x455A19E4, float>(_Controller); }
static void SET_ACTOR_UPDATE_PRIORITY(int pram0, int pram1) { Invoke<0x44C05EF6, void>(pram0, pram1); }
static int UNK_0xBE5D84BF(int pram0) { return Invoke<0xBE5D84BF, int>(pram0); }
static void GET_FORMATION_LOCATION(int pram0, int pram1, int pram2) { Invoke<0x17FC65A4, void>(pram0, pram1, pram2); }
static void SET_DRAW_ACTOR(Actor pram0, bool ToDraw) { Invoke<0xE6644CE5, void>(pram0, ToDraw); }
static void CLEAR_ACTOR_MAX_SPEED(int pram0) { Invoke<0xA9691E66, void>(pram0); }
static bool IS_ACTOR_ANIMAL(Actor Actor) { return Invoke<0x8E0769F3, bool>(Actor); }
static int ANIMAL_ACTOR_GET_SPECIES(int pram0) { return Invoke<0x7D0E25DF, int>(pram0); }
static void ANIMAL_SPECIES_REL_SET_CAN_ATTACK(int pram0, int pram1, int pram2) { Invoke<0xC8B4CD3F, void>(pram0, pram1, pram2); }
static void COMBAT_CLASS_AI_SET_ATTRIB_BOOL(int pram0, int pram1, int pram2) { Invoke<0x69C5ADD2, void>(pram0, pram1, pram2); }
static void MEMORY_ALLOW_SHOOTING(int pram0, int pram1) { Invoke<0x937E1760, void>(pram0, pram1); }
static void SET_ACTOR_MAX_SPEED(Actor _Actor, int _Speed) { Invoke<0x9CB01B27, void>(_Actor, _Speed); }
static void UNK_0xD1CF9793(int pram0) { Invoke<0xD1CF9793, void>(pram0); }
static int ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x039E7F1D, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int UNK_0x758F993A(int pram0) { return Invoke<0x758F993A, int>(pram0); }
static void BREAK_OFF_ABOVE(int pram0, int pram1) { Invoke<0xB5F9F4CF, void>(pram0, pram1); }
static int SET_PROP_VELOCITY(int pram0, int pram1) { return Invoke<0x28425D8C, int>(pram0, pram1); }
static int UNK_0xFADF0B96(int pram0) { return Invoke<0xFADF0B96, int>(pram0); }
static void SET_VOLUME_ENABLED(int pram0, int pram1) { Invoke<0x14D5CFC3, void>(pram0, pram1); }
static void UNK_0xDC6DEE92(int pram0, int pram1) { Invoke<0xDC6DEE92, void>(pram0, pram1); }
static void AI_SET_ENABLE_STICKUP_OVERRIDE(int pram0, int pram1) { Invoke<0x1436588F, void>(pram0, pram1); }
static void SET_ACTOR_CUTSCENE_MODE(int pram0, int pram1) { Invoke<0x76ECD5F1, void>(pram0, pram1); }
static void AUDIO_MUSIC_ONE_SHOT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x714DA5BB, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x9398BE8F(int pram0) { return Invoke<0x9398BE8F, int>(pram0); }
static bool ENABLE_VEHICLE_SEAT(Actor Vehicle, int SeatId, bool Enable) { return Invoke<0x6AC8234D, bool>(Vehicle, SeatId, Enable); }
static int DECOR_SET_STRING(int pram0, int pram1, int pram2) { return Invoke<0x53D3FB4A, int>(pram0, pram1, pram2); }
static Pickup CREATE_WEAPON_PICKUP(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xBF0235B0, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SET_DRAW_OBJECT(int pram0, int pram1) { Invoke<0xC5A886DC, void>(pram0, pram1); }
static int UNK_0xDAB0D820(int pram0) { return Invoke<0xDAB0D820, int>(pram0); }
static int UNK_0x3ACE659E(int pram0) { return Invoke<0x3ACE659E, int>(pram0); }
static Actor GET_ACTOR_IN_VEHICLE_SEAT(Vehicle Veh, int SeatID) { return Invoke<0xE8E94C3B, Actor>(Veh, SeatID); }
static void _CREATE_EXPLOSION(Vector3* coords, const char* explosionName, bool pram2, Vector3* damageVector, bool pram4) { Invoke<0xE7023D23, void>(coords, explosionName, pram2, damageVector, pram4); }
static int UNK_0xF04335A6(int pram0, int pram1) { return Invoke<0xF04335A6, int>(pram0, pram1); }
static int UNK_0x4FF36FA7(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x4FF36FA7, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int IS_PHYSINST_VALID(int pram0) { return Invoke<0x16C0A6CB, int>(pram0); }
static int UNK_0x0550E178(int pram0) { return Invoke<0x0550E178, int>(pram0); }
static int UNK_0x659532FB(int pram0, int pram1) { return Invoke<0x659532FB, int>(pram0, pram1); }
static void UNK_0x9AC1CA75(int pram0, int pram1, int pram2) { Invoke<0x9AC1CA75, void>(pram0, pram1, pram2); }
static int UNK_0xCBB2267A(int pram0, int pram1) { return Invoke<0xCBB2267A, int>(pram0, pram1); }
static int GET_OBJECT_OWNER(int pram0) { return Invoke<0x48B36E07, int>(pram0); }
static int UNK_0x65C3D8F6() { return Invoke<0x65C3D8F6, int>(); }
static int ATTACH_DRAFT_TO_VEHICLE(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xB0A81226, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xB12584C8(int pram0, int pram1) { return Invoke<0xB12584C8, int>(pram0, pram1); }
static void UNK_0x6F9C399B(int pram0) { Invoke<0x6F9C399B, void>(pram0); }
static void UNK_0xCB1E8485(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0xCB1E8485, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0x12325AE7(int pram0) { return Invoke<0x12325AE7, int>(pram0); }
static void START_VEHICLE(Actor Vehicle) { Invoke<0xE4442AB2, void>(Vehicle); }
static void STREAMING_UNLOAD_SCENE() { Invoke<0x39E69B1B, void>(); }
static int UNK_0xE975BE40(int pram0) { return Invoke<0xE975BE40, int>(pram0); }
static int IS_ACTOR_USING_LEDGE(int pram0) { return Invoke<0xEBBE1CAC, int>(pram0); }
static int UNK_0x231E7034(int pram0) { return Invoke<0x231E7034, int>(pram0); }
static int UNK_0x8FFDCE5C(int pram0, int pram1) { return Invoke<0x8FFDCE5C, int>(pram0, pram1); }
static void ENABLE_USE_CONTEXTS(int pram0) { Invoke<0xFEA58D57, void>(pram0); }
static void UNK_0x15547025() { Invoke<0x15547025, void>(); }
static void UNK_0xF03CC7A7(int pram0) { Invoke<0xF03CC7A7, void>(pram0); }
static int UNK_0x21C59F4C(int pram0) { return Invoke<0x21C59F4C, int>(pram0); }
static void REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int pram0) { Invoke<0x515AC319, void>(pram0); }
static int DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(int pram0) { return Invoke<0x02E15363, int>(pram0); }
static void REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int pram0) { Invoke<0xD65BAA71, void>(pram0); }
static void UI_PUSH(const char* pram0) { Invoke<0x97C5EFC8, void>(pram0); }
static void UNK_0x5C94F6EC(int pram0, int pram1, int pram2, int pram3) { Invoke<0x5C94F6EC, void>(pram0, pram1, pram2, pram3); }
static void PLAY_CUTSCENEOBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0xFB28AE8D, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0xDCC91F8C(int pram0, int pram1) { Invoke<0xDCC91F8C, void>(pram0, pram1); }
static void STOP_VEHICLE(int pram0) { Invoke<0xC2232D29, void>(pram0); }
static int UNK_0xA923A22D(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xA923A22D, int>(pram0, pram1, pram2, pram3); }
static int CHECK_CUTSCENE_COLLISIONS(int pram0) { return Invoke<0xE147BA8E, int>(pram0); }
static int GET_CAMERA_FROM_CUTSCENEOBJECT(int pram0) { return Invoke<0xFDBE95AE, int>(pram0); }
static int SET_CAMERA_LIGHTING_SCHEME(int pram0, int pram1) { return Invoke<0x7C864F17, int>(pram0, pram1); }
static void SET_CUTSCENEOBJECT_PAUSED(int pram0, int pram1) { Invoke<0x18643DC2, void>(pram0, pram1); }
static int GET_CAMERASHOT_FROM_CUTSCENEOBJECT(int pram0, int pram1) { return Invoke<0x7E9CC966, int>(pram0, pram1); }
static void UNK_0xDCD3A7DE(int pram0, int pram1) { Invoke<0xDCD3A7DE, void>(pram0, pram1); }
static int CUTSCENEOBJECT_ADD_TRANSITION_HOLD(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xC0CD3C96, int>(pram0, pram1, pram2, pram3); }
static void SET_CAMERASHOT_PERSPECTIVE(int pram0, int pram1) { Invoke<0xD8D27321, void>(pram0, pram1); }
static void SET_CAMERASHOT_FOV(int pram0, int pram1) { Invoke<0x635E5494, void>(pram0, pram1); }
static void SET_CAMERASHOT_NEAR_CLIP_PLANE(int pram0, int pram1) { Invoke<0x4387CDAB, void>(pram0, pram1); }
static void SET_CAMERASHOT_COLLISION_PARAMETERS(int pram0, int pram1, int pram2) { Invoke<0xF70817E0, void>(pram0, pram1, pram2); }
static void SET_CAMERASHOT_COLLISION_ENABLED(int pram0, int pram1) { Invoke<0x3A07F60F, void>(pram0, pram1); }
static void SET_CAMERASHOT_POSITION(int pram0, int pram1, int pram2, int pram3) { Invoke<0x0EA022F5, void>(pram0, pram1, pram2, pram3); }
static void SET_CAMERASHOT_ORIENTATION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x4FD679BD, void>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0x714D6F72(int pram0) { Invoke<0x714D6F72, void>(pram0); }
static void UI_CLEAR_MESSAGE_QUEUE(int pram0) { Invoke<0x64DDB95D, void>(pram0); }
static int ABORT_SCRIPTED_CONVERSATION(int pram0) { return Invoke<0xC842F0C9, int>(pram0); }
static void ADD_COMPANION_PERMANENT() { Invoke<0x45E20057, void>(); }
static void FREE_FROM_HOGTIE(int pram0) { Invoke<0x31AD57FE, void>(pram0); }
static void TASK_OVERRIDE_SET_POSTURE(int pram0, int pram1) { Invoke<0x52D34567, void>(pram0, pram1); }
static void SET_ACTOR_HEALTH(Actor _Actor, float _Health) { Invoke<0xFA090024, void>(_Actor, _Health); }
static int IS_PLAYER_DEADEYE(int pram0) { return Invoke<0x6148423A, int>(pram0); }
static void CANCEL_DEADEYE() { Invoke<0xCB0BDCE9, void>(); }
static void UNK_0xAF50E8A1(int pram0) { Invoke<0xAF50E8A1, void>(pram0); }
static void UNK_0x11A65FFB(int pram0) { Invoke<0x11A65FFB, void>(pram0); }
static void UNK_0x0F474297(int pram0) { Invoke<0x0F474297, void>(pram0); }
static void UNK_0x15001332() { Invoke<0x15001332, void>(); }
static void UNK_0xAF94B7D9() { Invoke<0xAF94B7D9, void>(); }
static void CLEAR_CHARACTER_BLOOD() { Invoke<0x1A676EDF, void>(); }
static void CLEAR_TUMBLEWEEDS() { Invoke<0x8852F896, void>(); }
static int UNK_0xD4048969(int pram0) { return Invoke<0xD4048969, int>(pram0); }
static void DESTROY_CAMERA(int pram0) { Invoke<0x767E08D0, void>(pram0); }
static void UNK_0xE6C1DBD9(int pram0) { Invoke<0xE6C1DBD9, void>(pram0); }
static void SHOW_PHYSINST(int pram0) { Invoke<0x342FDCD6, void>(pram0); }
static void UNK_0xA5A6A3E3(int pram0, int pram1, int pram2) { Invoke<0xA5A6A3E3, void>(pram0, pram1, pram2); }
static void AUDIO_MUSIC_SUSPEND(int pram0) { Invoke<0x56E3D235, void>(pram0); }
static void AUDIO_MUSIC_RELEASE_CONTROL(int pram0, int pram1) { Invoke<0xA3A2984E, void>(pram0, pram1); }
static int GET_CRIME_POSITION(int pram0, int pram1) { return Invoke<0x391475E3, int>(pram0, pram1); }
static void PLAYER_RUMBLE(int pram0, int pram1, int pram2) { Invoke<0x2E0EC2F2, void>(pram0, pram1, pram2); }
static int IS_ACTOR_CRIPPLED(int pram0, int pram1) { return Invoke<0x38C5F63F, int>(pram0, pram1); }
static void MEMORY_PREFER_WALKING(int pram0, int pram1) { Invoke<0x2F7B60A4, void>(pram0, pram1); }
static int GET_ACTOR_FROM_PERS_CHAR(int pram0) { return Invoke<0xE04ED21E, int>(pram0); }
static void REFERENCE_ACTOR(int pram0) { Invoke<0xE9AABF2F, void>(pram0); }
static void SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(int pram0, int pram1) { Invoke<0x2A709F33, void>(pram0, pram1); }
static void TASK_FOLLOW_OBJECT_AT_DISTANCE(int pram0, int pram1, int pram2, int pram3) { Invoke<0x75A4E05E, void>(pram0, pram1, pram2, pram3); }
static void TASK_GO_NEAR_COORD(int pram0, int pram1, int pram2, int pram3) { Invoke<0x55EC940B, void>(pram0, pram1, pram2, pram3); }
static void TASK_VEHICLE_LEAVE(int pram0) { Invoke<0x6C1218A4, void>(pram0); }
static void TASK_SEARCH(int pram0, int pram1, int pram2) { Invoke<0x4E17E039, void>(pram0, pram1, pram2); }
static int CREATE_NAV_QUERY(int pram0, int pram1) { return Invoke<0xE2F41226, int>(pram0, pram1); }
static void NAV_QUERY_START_CAN_PATH_TO_POINT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x07A777D7, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int NAV_QUERY_IS_DONE(int pram0) { return Invoke<0xE96D01E5, int>(pram0); }
static int NAV_QUERY_CAN_PATH_TO_POINT(int pram0) { return Invoke<0x5A511344, int>(pram0); }
static int UNK_0xBCC98808(int pram0) { return Invoke<0xBCC98808, int>(pram0); }
static void UNK_0x3ECD8FEE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x3ECD8FEE, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x9613C2D0(int pram0) { return Invoke<0x9613C2D0, int>(pram0); }
static int FIND_NEAREST_DOOR(int pram0, int pram1) { return Invoke<0x9CB5372B, int>(pram0, pram1); }
static int IS_PLAYER_IN_COMBAT(int pram0) { return Invoke<0x6576AD43, int>(pram0); }
static int IS_ACTOR_MALE(int pram0) { return Invoke<0x2091F142, int>(pram0); }
static void UNK_0x91DE3A31(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x91DE3A31, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int GET_CRIME_VICTIM(int pram0) { return Invoke<0xD2FD7CB6, int>(pram0); }
static void UNK_0xAF6A3160(int pram0, int pram1) { Invoke<0xAF6A3160, void>(pram0, pram1); }
static int ACTOR_HOLSTER_WEAPON(int pram0, int pram1) { return Invoke<0xFE9903CC, int>(pram0, pram1); }
static bool IS_ACTOR_RAGDOLL(Actor _Actor) { return Invoke<0x3918D335, bool>(_Actor); }
static void TELEPORT_ACTOR(Actor _Actor, const Vector3* _Position, bool _UnkFlag0, bool _UnkFlag1, bool _UnkFlag2) { Invoke<0x2D54B916, void>(_Actor, _Position, _UnkFlag0, _UnkFlag1, _UnkFlag2); }
static void DEREFERENCE_ACTOR(int pram0) { Invoke<0x92339B5E, void>(pram0); }
static void NAV_QUERY_STOP(int pram0) { Invoke<0x50290FB3, void>(pram0); }
static void AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(int pram0, int pram1) { Invoke<0x7387772C, void>(pram0, pram1); }
static void AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(int pram0, int pram1) { Invoke<0x7F73E1E8, void>(pram0, pram1); }
static int UNK_0x35B5587D(int pram0) { return Invoke<0x35B5587D, int>(pram0); }
static int GRINGO_UPDATE_BOOL(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x554330CA, int>(pram0, pram1, pram2, pram3); }
static int GET_CRIME_OBJECTSET(int pram0) { return Invoke<0x72C52B55, int>(pram0); }
static int UNK_0xD96DBABD(int pram0) { return Invoke<0xD96DBABD, int>(pram0); }
static void SET_ACTOR_HEADING(Actor _Actor, float _Heading, bool _UnkFlag) { Invoke<0xECE8520B, void>(_Actor, _Heading, _UnkFlag); }
static int GET_ACTOR_FACTION(int pram0) { return Invoke<0x52E2A611, int>(pram0); }
static void SET_MOVER_FROZEN(Actor _Actor, bool _Value) { Invoke<0x13E6B5EE, void>(_Actor, _Value); }
static bool IS_MOVER_FROZEN(Actor _Actor) { return Invoke<0x9C12BD5A, bool>(_Actor); }
static int GET_CRIME_COUNTER(int pram0) { return Invoke<0xB52BA7E6, int>(pram0); }
static void TASK_OVERRIDE_CLEAR_MOVETYPE(int pram0) { Invoke<0x9B9C8628, void>(pram0); }
static int CAN_ANYONE_OF_FACTION_SEE_OBJECT(int pram0, int pram1) { return Invoke<0x656D3D26, int>(pram0, pram1); }
static int UNK_0xA2DA4D24(int pram0) { return Invoke<0xA2DA4D24, int>(pram0); }
static void ITERATE_IN_VOLUME(int pram0, int pram1) { Invoke<0x6914D904, void>(pram0, pram1); }
static int IS_FACTION_VALID(int pram0) { return Invoke<0x5E2F718D, int>(pram0); }
static int AI_GET_TASK_RETREAT_FLAG(int pram0) { return Invoke<0x9B742D25, int>(pram0); }
static int GET_ACTOR_VEHICLE_STATE(int pram0, int pram1, int pram2) { return Invoke<0xCEA2449F, int>(pram0, pram1, pram2); }
static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xDB07C72B, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x3DEB0933(int pram0, int pram1) { Invoke<0x3DEB0933, void>(pram0, pram1); }
static void SET_CAMERASHOT_FAR_CLIP_PLANE(int pram0, int pram1) { Invoke<0x6BA86494, void>(pram0, pram1); }
static void RESET_CAMERASHOT_TARGETDOF(int pram0) { Invoke<0x42327DAC, void>(pram0); }
static void UNK_0x8BCB6B86(int pram0, int pram1) { Invoke<0x8BCB6B86, void>(pram0, pram1); }
static int GET_PERS_CHAR_DEATH_TIMESTAMP(int pram0) { return Invoke<0xD78D1B4F, int>(pram0); }
static void UNK_0x19C3CF93(int pram0) { Invoke<0x19C3CF93, void>(pram0); }
static void UNK_0x4C28B11E(int pram0, int pram1, int pram2) { Invoke<0x4C28B11E, void>(pram0, pram1, pram2); }
static void INIT_CAMERA_FROM_GAME_CAMERA(int pram0) { Invoke<0x2615309A, void>(pram0); }
static void SET_CAMERA_TARGET_POSITION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x298BCCA5, void>(pram0, pram1, pram2, pram3, pram4); }
static void SET_CAMERA_FOV(Camera _Camera, float _FOV) { Invoke<0x57E3242D, void>(_Camera, _FOV); }
static int SQUAD_GOAL_ADD_GENERAL_TASK(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x83D78A49, int>(pram0, pram1, pram2, pram3); }
static void TASK_USE_LASSO(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xC41AAF49, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void AI_SET_NAV_ACTOR_WIDTH(int pram0, int pram1) { Invoke<0x8404592D, void>(pram0, pram1); }
static void MEMORY_CONSIDER_AS_ENEMY(int pram0, int pram1) { Invoke<0x745A1BA3, void>(pram0, pram1); }
static void TASK_GO_TO_COORD(int pram0, int pram1, int pram2) { Invoke<0x8C574832, void>(pram0, pram1, pram2); }
static void TASK_FOLLOW_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0xFF3E3DCE, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void TASK_SHOOT_AT_COORD(int pram0, int pram1, int pram2) { Invoke<0x601C22E3, void>(pram0, pram1, pram2); }
static int UNK_0x5402321A() { return Invoke<0x5402321A, int>(); }
static int CREATE_FIRE_IN_VOLUME(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0xD4799325, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void TASK_FOLLOW_ACTOR(int pram0, int pram1) { Invoke<0x12F0911A, void>(pram0, pram1); }
static int IS_ACTOR_MOUNTED(int pram0) { return Invoke<0xA3AB3708, int>(pram0); }
static void TASK_DISMOUNT(int pram0, int pram1) { Invoke<0x5DEF5C4A, void>(pram0, pram1); }
static int FIND_INTERSECTION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x9CD3AD70, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void TASK_SHOOT_AT_COORD_FROM_POSITION(int pram0, int pram1, int pram2, int pram3) { Invoke<0x7B5FC704, void>(pram0, pram1, pram2, pram3); }
static int IS_ACTOR_RELOADING(int pram0) { return Invoke<0x39C518DB, int>(pram0); }
static void TASK_SEEK_COVER_FROM_ACTOR(int pram0, int pram1) { Invoke<0xE1C8A1B3, void>(pram0, pram1); }
static void TASK_DIVE(int pram0, int pram1) { Invoke<0xECAD08C7, void>(pram0, pram1); }
static void AMBIENT_SET_SEARCH_CENTER_ACTOR(int pram0) { Invoke<0x9A2B05F4, void>(pram0); }
static int MEMORY_GET_IS_IDENTIFIED(int pram0, int pram1) { return Invoke<0x0810A7BA, int>(pram0, pram1); }
static int UNK_0x69DA275F(int pram0) { return Invoke<0x69DA275F, int>(pram0); }
static int REVIVE_PERS_CHAR(int pram0, int pram1) { return Invoke<0xEDA4B02B, int>(pram0, pram1); }
static int CREATE_PERS_CHAR_IN_LAYOUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x013B3937, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0x80FB8BDE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x80FB8BDE, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int GRINGO_UPDATE_STRUCT(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x4DE50AD9, int>(pram0, pram1, pram2, pram3, pram4); }
static int GET_BLIP_ICON(int pram0) { return Invoke<0xEE4F4B7D, int>(pram0); }
static void UNK_0xABD125F6(int pram0, int pram1) { Invoke<0xABD125F6, void>(pram0, pram1); }
static void UNK_0xFBA76D7E(int pram0, int pram1) { Invoke<0xFBA76D7E, void>(pram0, pram1); }
static void SET_BLIP_FLAG(int pram0, int pram1, int pram2) { Invoke<0xA9A01C70, void>(pram0, pram1, pram2); }
static int UNK_0xE78A0469(int pram0) { return Invoke<0xE78A0469, int>(pram0); }
static void UNK_0x02755628(int pram0, int pram1) { Invoke<0x02755628, void>(pram0, pram1); }
static void UNK_0x5EA2E02D(int pram0) { Invoke<0x5EA2E02D, void>(pram0); }
static int UNK_0xD76F1E9A(int pram0) { return Invoke<0xD76F1E9A, int>(pram0); }
static void SET_BLIP_IMPAIRMENT_MASK(int pram0, int pram1) { Invoke<0xBC05EBB3, void>(pram0, pram1); }
static void TASK_DRAW_HOLSTER_WEAPON(int pram0, int pram1) { Invoke<0xDB5F6B35, void>(pram0, pram1); }
static void MEMORY_ATTACK_ON_SIGHT(int pram0, int pram1) { Invoke<0x5A83A1EA, void>(pram0, pram1); }
static void SET_ACTOR_FACTION(int pram0, int pram1) { Invoke<0xCC63951A, void>(pram0, pram1); }
static void UNK_0x0B5E1904(int pram0, int pram1) { Invoke<0x0B5E1904, void>(pram0, pram1); }
static int ACTOR_RESET_ANIMS(int pram0, int pram1) { return Invoke<0x35D8B4AA, int>(pram0, pram1); }
static void PLAY_SOUND_FRONTEND(const char* SoundName) { Invoke<0x2E458F74, void>(SoundName); }
static void SET_ACTOR_CAN_BUMP(int pram0, int pram1) { Invoke<0xB9744BE7, void>(pram0, pram1); }
static void UNK_0xC52B5F18(int pram0, int pram1) { Invoke<0xC52B5F18, void>(pram0, pram1); }
static void UNK_0xEB7B0FAA(int pram0, int pram1) { Invoke<0xEB7B0FAA, void>(pram0, pram1); }
static void PRINT_BIG_FORMAT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0xBCB8D17F, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int UNK_0xCE210220(int pram0, int pram1, int pram2) { return Invoke<0xCE210220, int>(pram0, pram1, pram2); }
static float GET_OBJECT_HEADING(Object _Object) { return Invoke<0x1C02D2F8, float>(_Object); }
static int IS_ACTION_NODE_PLAYING(int pram0, int pram1) { return Invoke<0x7B19DEC6, int>(pram0, pram1); }
static int ATTACH_SLOT_FROM_STRING(int pram0) { return Invoke<0x4A61BD63, int>(pram0); }
static int ATTACH_PROP_TO_ANIM(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x0436C0BF, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int pram0) { Invoke<0xCF50D509, void>(pram0); }
static void ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(int pram0) { Invoke<0xD1C09A22, void>(pram0); }
static void UNK_0xC9365FBC(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xC9365FBC, void>(pram0, pram1, pram2, pram3, pram4); }
static int CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(int pram0, int pram1, int pram2) { return Invoke<0x94B288F9, int>(pram0, pram1, pram2); }
static void RESET_CAMERASHOT_TARGET(int pram0, int pram1) { Invoke<0xC3DDCE4D, void>(pram0, pram1); }
static void TOGGLE_ACTOR_ACTION_SIGNAL_ON(int pram0, int pram1, int pram2) { Invoke<0x415F9BC3, void>(pram0, pram1, pram2); }
static int IS_ACTOR_IN_HOGTIE(int pram0) { return Invoke<0xB24ADC7C, int>(pram0); }
static void UNK_0x33CE49C9() { Invoke<0x33CE49C9, void>(); }
static void TOGGLE_ACTOR_ACTION_SIGNAL_OFF(int pram0) { Invoke<0x4F605632, void>(pram0); }
static void DESTROY_POPULATION_SET(int pram0) { Invoke<0xD064878D, void>(pram0); }
static void UNK_0x95D0FC79(int pram0) { Invoke<0x95D0FC79, void>(pram0); }
static int IS_ACTOR_HORSE(int pram0) { return Invoke<0xDB0D0478, int>(pram0); }
static int SET_ACTOR_VISION_XRAY(int pram0, int pram1) { return Invoke<0x8D5175A8, int>(pram0, pram1); }
static void TASK_FLEE_ACTORSET(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0xCD5E23C3, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SET_BLIP_POS(Blip _Blip, Vector3 _Position) { Invoke<0xB2EAF8DD, void>(_Blip, _Position); }
static int UNK_0x55DAC120(int pram0) { return Invoke<0x55DAC120, int>(pram0); }
static void UNK_0xBE39208A(int pram0, int pram1, int pram2) { Invoke<0xBE39208A, void>(pram0, pram1, pram2); }
static void TASK_OVERRIDE_SET_MOVETYPE(int pram0, int pram1) { Invoke<0x172477F0, void>(pram0, pram1); }
static void UNK_0xCA950EF0(int pram0) { Invoke<0xCA950EF0, void>(pram0); }
static void TASK_GO_TO_COORD_NONSTOP(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD62D6CE5, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x435A982F(int pram0, int pram1) { return Invoke<0x435A982F, int>(pram0, pram1); }
static int UNK_0x4DD06256(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x4DD06256, int>(pram0, pram1, pram2, pram3); }
static int SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xE775EF0D, int>(pram0, pram1, pram2, pram3, pram4); }
static void TASK_GO_NEAR_ACTOR(int pram0, int pram1, int pram2, int pram3) { Invoke<0x3EB7590C, void>(pram0, pram1, pram2, pram3); }
static void TASK_SEARCH_FOR_OBJECT(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD9B57910, void>(pram0, pram1, pram2, pram3); }
static int SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(int pram0, int pram1, int pram2) { return Invoke<0x1B74CCA1, int>(pram0, pram1, pram2); }
static void TASK_GO_TO_COORD_AND_STAY(int pram0, int pram1, int pram2, int pram3) { Invoke<0x8636587A, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x817AC6D6(int pram0, int pram1, int pram2) { return Invoke<0x817AC6D6, int>(pram0, pram1, pram2); }
static int SQUAD_GOAL_ADD_MEET_AT_POSITION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA2AE53BD, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int SET_LINKED_ANIM_TARGET(int pram0, int pram1) { return Invoke<0x0A192D09, int>(pram0, pram1); }
static void TASK_ACTION_PERFORM(int pram0, int pram1) { Invoke<0xE32F09B3, void>(pram0, pram1); }
static void AUDIO_STOP_PAIN(int pram0) { Invoke<0x462B3A65, void>(pram0); }
static void UNK_0x12D077CA(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x12D077CA, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x31A55281(int pram0) { Invoke<0x31A55281, void>(pram0); }
static void UNK_0x651C1FC2(int pram0) { Invoke<0x651C1FC2, void>(pram0); }
static void UI_SET_STYLE(int pram0, int pram1) { Invoke<0x1ECD8B18, void>(pram0, pram1); }
static int UNK_0xB7CE8FCC(int pram0, int pram1, int pram2) { return Invoke<0xB7CE8FCC, int>(pram0, pram1, pram2); }
static int UNK_0x430207A4(int pram0) { return Invoke<0x430207A4, int>(pram0); }
static int UNK_0x55842354(int pram0) { return Invoke<0x55842354, int>(pram0); }
static int UNK_0x91C6AC0E(int pram0, int pram1, int pram2) { return Invoke<0x91C6AC0E, int>(pram0, pram1, pram2); }
static int ADD_FORMATION_LOCATION(int pram0, int pram1) { return Invoke<0xFBB1BCDF, int>(pram0, pram1); }
static int IS_SLOT_VALID(int SlotID) { return Invoke<0xD04480FE, int>(SlotID); }
static void MEMORY_REPORT_POSITION(int pram0, int pram1, int pram2) { Invoke<0x052CC7CE, void>(pram0, pram1, pram2); }
static int GET_LASSO_TARGET(int pram0) { return Invoke<0xAA364907, int>(pram0); }
static int UNK_0xEB40C2FC(int pram0) { return Invoke<0xEB40C2FC, int>(pram0); }
static int UNK_0x69FA5315(int pram0) { return Invoke<0x69FA5315, int>(pram0); }
static int MEMORY_GET_POSITION_LAST_KNOWN_TIME(int pram0, int pram1) { return Invoke<0x7E77DD6C, int>(pram0, pram1); }
static void AI_CLEAR_NAV_MATERIAL_USAGE(int pram0) { Invoke<0x6ADF2927, void>(pram0); }
static int UNK_0x7A207FFE(int pram0) { return Invoke<0x7A207FFE, int>(pram0); }
static void AI_CLEAR_FIRE_DELAY(int pram0) { Invoke<0xD6886191, void>(pram0); }
static void AI_CLEAR_FIRE_DELAY_RANDOMNESS(int pram0) { Invoke<0xE8511960, void>(pram0); }
static void AI_CLEAR_BURST_DURATION(int pram0) { Invoke<0x01FD4402, void>(pram0); }
static void AI_CLEAR_BURST_DURATION_RANDOMNESS(int pram0) { Invoke<0xCA8EE2A4, void>(pram0); }
static void AI_CLEAR_SHOTS_PER_BURST(int pram0) { Invoke<0x58A7B2A1, void>(pram0); }
static void COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(int pram0, int pram1, int pram2) { Invoke<0xC30DB881, void>(pram0, pram1, pram2); }
static Object UNK_0x184BD1BC(Object pram0) { return Invoke<0x184BD1BC, Object>(pram0); }
static int UNK_0xE2ED95CC(int pram0) { return Invoke<0xE2ED95CC, int>(pram0); }
static int UNK_0x2ECF04F3(int pram0, int pram1) { return Invoke<0x2ECF04F3, int>(pram0, pram1); }
static void UNK_0x52B2F3F0(int pram0) { Invoke<0x52B2F3F0, void>(pram0); }
static int IS_ACTOR_PERFORMING_LINKED_ANIMATION(int pram0) { return Invoke<0xCA9364C5, int>(pram0); }
static int UNK_0xBEC2871A(int pram0) { return Invoke<0xBEC2871A, int>(pram0); }
static int UNK_0xEF4F4F20(int pram0) { return Invoke<0xEF4F4F20, int>(pram0); }
static int GET_ACTOR_VISION_XRAY(int pram0) { return Invoke<0xBFABD82E, int>(pram0); }
static float TIMESTEP() { return Invoke<0x50597EE2, float>(); }
static int IS_PLAYER_USING_COVER(int pram0) { return Invoke<0x724A2931, int>(pram0); }
static int UNK_0x5B792331(int pram0, int pram1) { return Invoke<0x5B792331, int>(pram0, pram1); }
static int UNK_0xF6BF4242(int pram0) { return Invoke<0xF6BF4242, int>(pram0); }
static int IS_ACTOR_DRUNK(int pram0) { return Invoke<0xFF07D58C, int>(pram0); }
static int UNK_0x30C4CA99(int pram0) { return Invoke<0x30C4CA99, int>(pram0); }
static int GET_LASSO_USER(int pram0) { return Invoke<0x3B775037, int>(pram0); }
static void UNK_0xA6D794FE(int pram0, int pram1) { Invoke<0xA6D794FE, void>(pram0, pram1); }
static void UNK_0xC09B114B(int pram0, int pram1) { Invoke<0xC09B114B, void>(pram0, pram1); }
static void AI_BEHAVIOR_SET_ALLOW(int pram0, int pram1, int pram2) { Invoke<0x4A69F264, void>(pram0, pram1, pram2); }
static void SET_TOUGH_ACTOR(Actor _Actor, bool _Value) { Invoke<0x2A575132, void>(_Actor, _Value); }
static void AI_SET_RANGE_ACCURACY_MODIFIER(int pram0, int pram1, int pram2) { Invoke<0x57F96655, void>(pram0, pram1, pram2); }
static int SET_ACTOR_VISION_MAX_RANGE(int pram0, int pram1, int pram2) { return Invoke<0x4E3E9B70, int>(pram0, pram1, pram2); }
static int SET_ACTOR_VISION_FIELD_OF_VIEW(int pram0, int pram1) { return Invoke<0xF8F3FE84, int>(pram0, pram1); }
static void MEMORY_PREFER_MELEE(int pram0, int pram1) { Invoke<0x2F929ECD, void>(pram0, pram1); }
static void AI_SET_SHOTS_PER_BURST(int pram0, int pram1) { Invoke<0xE0172E2D, void>(pram0, pram1); }
static void AI_SET_BURST_DURATION(int pram0, int pram1) { Invoke<0x85F2DF87, void>(pram0, pram1); }
static void AI_SET_BURST_DURATION_RANDOMNESS(int pram0, int pram1) { Invoke<0x9E164C44, void>(pram0, pram1); }
static void AI_SET_FIRE_DELAY(int pram0, int pram1) { Invoke<0x05861CF4, void>(pram0, pram1); }
static void AI_SET_FIRE_DELAY_RANDOMNESS(int pram0, int pram1) { Invoke<0xC5873149, void>(pram0, pram1); }
static void ACTOR_ENABLE_VARIABLE_MESH(int pram0, int pram1, int pram2) { Invoke<0xDA2F6203, void>(pram0, pram1, pram2); }
static void COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(int pram0) { Invoke<0x13FA7128, void>(pram0); }
static void COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(int pram0, int pram1, int pram2) { Invoke<0x6389CF4B, void>(pram0, pram1, pram2); }
static void COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(int pram0, int pram1, int pram2) { Invoke<0xE20587E7, void>(pram0, pram1, pram2); }
static void COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(int pram0, int pram1) { Invoke<0x1EF0E419, void>(pram0, pram1); }
static void COMBAT_CLASS_AI_SET_RANGE_ACCURACY(int pram0, int pram1) { Invoke<0x60B705A5, void>(pram0, pram1); }
static void TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(int pram0, int pram1) { Invoke<0xB3F5EE8C, void>(pram0, pram1); }
static void TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(int pram0, int pram1) { Invoke<0xDCB9C943, void>(pram0, pram1); }
static void AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(int pram0, int pram1) { Invoke<0x66064774, void>(pram0, pram1); }
static void AI_PERCEPTION_SET_VISUAL_ID_TIME(int pram0, int pram1) { Invoke<0xD786E8C7, void>(pram0, pram1); }
static void TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(int pram0, int pram1, int pram2) { Invoke<0x11542587, void>(pram0, pram1, pram2); }
static int IS_ACTOR_PLAYER(int pram0) { return Invoke<0xB27E91E7, int>(pram0); }
static void AI_PREDICATE_OVERRIDE_CLEAR_ALL(int pram0) { Invoke<0x3CAC2441, void>(pram0); }
static void AI_PREDICATE_OVERRIDE_SET_BOOL(int pram0, int pram1, int pram2) { Invoke<0x1117C85A, void>(pram0, pram1, pram2); }
static void SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(int pram0, int pram1) { Invoke<0xE7D45FB3, void>(pram0, pram1); }
static void SQUAD_SET_FACTION(int pram0, int pram1) { Invoke<0xAEA4E9AE, void>(pram0, pram1); }
static int UNK_0x2B8C3258(int pram0) { return Invoke<0x2B8C3258, int>(pram0); }
static int GET_LOCAL_SLOT() { return Invoke<0xAD68A22E, int>(); }
static int UNK_0xA2866F3B(int pram0) { return Invoke<0xA2866F3B, int>(pram0); }
static int UNK_0xADB08F12(int pram0) { return Invoke<0xADB08F12, int>(pram0); }
static int UNK_0xB4D1D8A3(int pram0, int pram1) { return Invoke<0xB4D1D8A3, int>(pram0, pram1); }
static int GET_CURVE_NAME(int pram0) { return Invoke<0x9A933060, int>(pram0); }
static void UNK_0x7B07D449() { Invoke<0x7B07D449, void>(); }
static int UNK_0x0B40BBE3(int pram0, int pram1, int pram2) { return Invoke<0x0B40BBE3, int>(pram0, pram1, pram2); }
static Actor GET_SLOT_ACTOR(int _SlotId) { return Invoke<0xDB9B49D8, Actor>(_SlotId); }
static int UNK_0x579C2014(int pram0) { return Invoke<0x579C2014, int>(pram0); }
static void UNK_0xA6403262(int pram0, int pram1) { Invoke<0xA6403262, void>(pram0, pram1); }
static void UI_ENTER(const char* uiLayer) { Invoke<0x594F2657, void>(uiLayer); }
static void TASK_SHOOT_FROM_POSITION(int pram0, int pram1, int pram2) { Invoke<0x326316DC, void>(pram0, pram1, pram2); }
static void UNK_0xEF270DC9() { Invoke<0xEF270DC9, void>(); }
static void UNK_0xD1628C57() { Invoke<0xD1628C57, void>(); }
static void UNK_0xF7696B8B(int pram0, int pram1) { Invoke<0xF7696B8B, void>(pram0, pram1); }
static int UNK_0xE094DB31(int pram0, int pram1) { return Invoke<0xE094DB31, int>(pram0, pram1); }
static void UNK_0xBB77E597(int pram0, int pram1) { Invoke<0xBB77E597, void>(pram0, pram1); }
static void UNK_0xF349D0B6(int pram0, int pram1) { Invoke<0xF349D0B6, void>(pram0, pram1); }
static void CLOSE_DOOR_FAST(int pram0) { Invoke<0xFEEC0767, void>(pram0); }
static void ACTOR_DISABLE_WEAPON_RENDER(int pram0, int pram1, int pram2) { Invoke<0x5E38B33C, void>(pram0, pram1, pram2); }
static void SET_PERS_CHAR_ENABLED(int pram0, int pram1) { Invoke<0xC85CFEA9, void>(pram0, pram1); }
static void SET_DAY(int pram0) { Invoke<0x0EBBDC34, void>(pram0); }
static void TELEPORT_ACTOR_WITH_HEADING(Actor _Actor, Vector3* _Position, float _Heading, bool _UnkFlag0, bool _UnkFlag1, bool _UnkFlag2) { Invoke<0xE4DE507C, void>(_Actor, _Position, _Heading, _UnkFlag0, _UnkFlag1, _UnkFlag2); }
static bool SET_OBJECT_ORIENTATION(Object _Object, Vector3* _Orientation) { return Invoke<0xC8A4EE74, bool>(_Object, _Orientation); }
static void OPEN_DOOR_FAST(int pram0, int pram1) { Invoke<0xCF89BC95, void>(pram0, pram1); }
static int UNK_0x76FBF412() { return Invoke<0x76FBF412, int>(); }
static void UNK_0x6ADAAD87(int pram0, int pram1, int pram2) { Invoke<0x6ADAAD87, void>(pram0, pram1, pram2); }
static void UNK_0xB3E331AC() { Invoke<0xB3E331AC, void>(); }
static void UNK_0xB09D5B43() { Invoke<0xB09D5B43, void>(); }
static void UNK_0x9028B082() { Invoke<0x9028B082, void>(); }
static void CLEAR_DECALS() { Invoke<0x43939FD8, void>(); }
static void UNK_0x2CB5D7AF() { Invoke<0x2CB5D7AF, void>(); }
static int IS_ACTORSET_VALID(int pram0) { return Invoke<0x76E8975E, int>(pram0); }
static int GET_ACTORSET_SIZE(int pram0) { return Invoke<0xA24F4799, int>(pram0); }
static int UNK_0xC5202810(int pram0, int pram1) { return Invoke<0xC5202810, int>(pram0, pram1); }
static int GET_SLOT_POSITION(int pram0, Vector3* out) { return Invoke<0x3241158C, int>(pram0, *out); }
static int VDIST2(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xC85DEF1F, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0xEE4E2461(int pram0) { return Invoke<0xEE4E2461, int>(pram0); }
static void UNK_0xAA24E0CC(int pram0) { Invoke<0xAA24E0CC, void>(pram0); }
static void UNK_0xDE9AA6E5(int pram0) { Invoke<0xDE9AA6E5, void>(pram0); }
static int UNK_0x54F8EAA4(int pram0) { return Invoke<0x54F8EAA4, int>(pram0); }
static void UNK_0x0D8BA78E(int pram0, int pram1) { Invoke<0x0D8BA78E, void>(pram0, pram1); }
static int UNK_0x0B5431C9(int pram0) { return Invoke<0x0B5431C9, int>(pram0); }
static int IS_ACTOR_IN_ACTORSET(int pram0, int pram1) { return Invoke<0xC6FE68DF, int>(pram0, pram1); }
static int ADD_ACTORSET_MEMBER(int pram0, int pram1) { return Invoke<0xE09DB6C1, int>(pram0, pram1); }
static bool IS_ACTOR_RIDEABLE(Actor _Actor) { return Invoke<0x8842C62D, bool>(_Actor); }
static int NEW_SCRIPTED_CONVERSATION() { return Invoke<0x1CEA7FCE, int>(); }
static void ADD_LINE_TO_CONVERSATION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x96CD0513, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(int pram0, int pram1) { Invoke<0x4FAD0D8F, void>(pram0, pram1); }
static void START_SCRIPT_CONVERSATION(int pram0, int pram1) { Invoke<0xE5DE7D9D, void>(pram0, pram1); }
static int UNK_0x5E985228(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x5E985228, int>(pram0, pram1, pram2, pram3, pram4); }
static void PRINT_BIG(const char* _Message, float _Time, bool _IsLiteral, int _Unk0, int _Unk1) { Invoke<0x637016C9, void>(_Message, _Time, _IsLiteral, _Unk0, _Unk1); }
static void _PRINT_BOTTOM(const char* _Message, float _Time, bool _IsLiteral, int _Unk0, int _Unk1, int _Unk2, int _Unk3) { Invoke<0x4A38C60, void>(_Message, _Time, _IsLiteral, _Unk0, _Unk1, _Unk2, _Unk3); }
static int UNK_0xE2163ECC(int pram0, int pram1) { return Invoke<0xE2163ECC, int>(pram0, pram1); }
static int UNK_0x4957E482(int pram0, int pram1) { return Invoke<0x4957E482, int>(pram0, pram1); }
static int UNK_0xB13DD691(int pram0, int pram1, int pram2) { return Invoke<0xB13DD691, int>(pram0, pram1, pram2); }
static int UNK_0x009DFC82(int pram0, int pram1, int pram2) { return Invoke<0x009DFC82, int>(pram0, pram1, pram2); }
static int UNK_0x9253CC79(int pram0, int pram1) { return Invoke<0x9253CC79, int>(pram0, pram1); }
static void _PRINT_CHAT(const char* pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0xC73DAD2B, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void IS_HORSES_RELATIVE(int pram0, int pram1) { Invoke<0x4A2E7533, void>(pram0, pram1); }
static void UNK_0x1082715D() { Invoke<0x1082715D, void>(); }
static int UNK_0x6226328F() { return Invoke<0x6226328F, int>(); }
static void UNK_0x59F98CA9(int pram0) { Invoke<0x59F98CA9, void>(pram0); }
static void SET_DEBUG_DRAW(int pram0) { Invoke<0x505A8057, void>(pram0); }
static int UNK_0x943BE053(int pram0) { return Invoke<0x943BE053, int>(pram0); }
static int UNK_0x2DB3AC0F(int pram0, int pram1) { return Invoke<0x2DB3AC0F, int>(pram0, pram1); }
static void STREAMING_LOAD_BOUNDS(float x, float y, float z, float unk, int pram4) { Invoke<0x0F8FC4D0, void>(x, y, z, unk, pram4); }
static void UNK_0x2CCEA76C(int pram0) { Invoke<0x2CCEA76C, void>(pram0); }
static void UNK_0xE9C41DFE(int pram0) { Invoke<0xE9C41DFE, void>(pram0); }
static void RESET_FACTIONS() { Invoke<0x28413943, void>(); }
static void HUD_COUNTER_DISPLAY(int pram0) { Invoke<0x9A35DFC6, void>(pram0); }
static void HUD_TIMER_DISPLAY(int pram0) { Invoke<0x149F9E46, void>(pram0); }
static void SET_ACTOR_MIN_SPEED(int pram0, int pram1) { Invoke<0xA854EE99, void>(pram0, pram1); }
static void SET_ACTOR_RIDEABLE(Actor Actor, bool Rideable) { Invoke<0x19F3CB6B, void>(Actor, Rideable); }
static void TASK_FOLLOW_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x973DCC5B, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void TASK_SEQUENCE_PERFORM_REPEATEDLY(int pram0, int pram1, int pram2) { Invoke<0xA7A50E4D, void>(pram0, pram1, pram2); }
static void ANIMAL_ACTOR_SET_DOMESTICATION(Actor Actor, bool Domestication) { Invoke<0x58C36502, void>(Actor, Domestication); }
static void ANIMAL_TUNING_SET_ATTRIB_BOOL(int pram0, int pram1, int pram2) { Invoke<0x11150810, void>(pram0, pram1, pram2); }
static int UNK_0x9A4CD54B(int pram0) { return Invoke<0x9A4CD54B, int>(pram0); }
static void AUDIO_MUSIC_SET_MOOD(const char* Mood, int pram1, int pram2, int pram3) { Invoke<0x633B8905, void>(Mood, pram1, pram2, pram3); }
static int IS_WEAPON_DRAWN(int pram0) { return Invoke<0xAB5FB5AC, int>(pram0); }
static int UNK_0x09950C1B(int pram0, int pram1) { return Invoke<0x09950C1B, int>(pram0, pram1); }
static void OPEN_DOOR_DIRECTION(int pram0, int pram1) { Invoke<0xAACB4435, void>(pram0, pram1); }
static int IS_CAMERA_ACTIVE_ON_CHANNEL(int pram0, int pram1) { return Invoke<0x02BD5362, int>(pram0, pram1); }
static void TASK_FACE_COORD(int pram0, int pram1, int pram2) { Invoke<0x31B598FB, void>(pram0, pram1, pram2); }
static int IS_SCRIPTED_SPEECH_PLAYING(int pram0) { return Invoke<0x2C653904, int>(pram0); }
static int GATEWAY_GET_ACTOR(int pram0) { return Invoke<0x820699A8, int>(pram0); }
static void SIMULATE_PLAYER_INPUT_GAIT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x0D77CC34, void>(pram0, pram1, pram2, pram3); }
static int UNK_0xB89CC342(int pram0, int pram1, int pram2) { return Invoke<0xB89CC342, int>(pram0, pram1, pram2); }
static int UNK_0x4251BF6C(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x4251BF6C, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int IS_AI_ACTOR_IN_COMBAT(int pram0) { return Invoke<0x08D3CDF9, int>(pram0); }
static int UNK_0x07B7AA6B(int pram0) { return Invoke<0x07B7AA6B, int>(pram0); }
static int IS_WORLD_SECTOR_LOADED(int pram0) { return Invoke<0xBF81A6C4, int>(pram0); }
static int UNK_0xA5F229C9(int pram0, int pram1, int pram2) { return Invoke<0xA5F229C9, int>(pram0, pram1, pram2); }
static int GET_DOOR_FROM_OBJECT(int pram0) { return Invoke<0x9CE0AA24, int>(pram0); }
static int UNK_0xB6709FF4(int pram0, int pram1, int pram2) { return Invoke<0xB6709FF4, int>(pram0, pram1, pram2); }
static int UNK_0x5831679F() { return Invoke<0x5831679F, int>(); }
static void STREAMING_EVICT_ALL() { Invoke<0x7D432781, void>(); }
static void UNK_0xF1607937(int pram0, int pram1) { Invoke<0xF1607937, void>(pram0, pram1); }
static void SET_ACTOR_MAX_HEALTH(Actor _Actor, float _MaxHealth) { Invoke<0x165BD4C5, void>(_Actor, _MaxHealth); }
static void SET_ALLOW_RIDE_BY_PLAYER(Actor _Actor, bool _Ride) { Invoke<0xCF1A1BC5, void>(_Actor, _Ride); }
static void SET_ALLOW_RIDE(Actor _Actor, bool _Ride) { Invoke<0xF83A8D2B, void>(_Actor, _Ride); }
static void UNK_0x135EA21D(int pram0) { Invoke<0x135EA21D, void>(pram0); }
static void SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(int pram0, int pram1) { Invoke<0x05CFE1E9, void>(pram0, pram1); }
static void SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(int pram0, int pram1) { Invoke<0xFFDA2D88, void>(pram0, pram1); }
static void DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(int pram0) { Invoke<0x6F8C238B, void>(pram0); }
static void TASK_GO_TO_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x01BACD08, void>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x76876FEA(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x76876FEA, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SET_CAMERA_FOCUS_PROMPT_ENABLED(int pram0, int pram1) { Invoke<0x2148298D, void>(pram0, pram1); }
static void TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(int pram0, int pram1) { Invoke<0xCE843315, void>(pram0, pram1); }
static void UNK_0x7EDD316C(int pram0) { Invoke<0x7EDD316C, void>(pram0); }
static int GET_ACTORS_HORSE(int pram0) { return Invoke<0x8DDE894F, int>(pram0); }
static void ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(int pram0, int pram1, int pram2, int pram3) { Invoke<0x699332B0, void>(pram0, pram1, pram2, pram3); }
static void PLAY_SOUND_FROM_POSITION(const char* SoundName, Vector3 Position) { Invoke<0x05BC72D7, void>(SoundName, Position); }
static void AUDIO_PLAY_VOCAL_EFFECT(int pram0, int pram1, int pram2) { Invoke<0xC9D3A484, void>(pram0, pram1, pram2); }
static int PLAY_SOUND_FROM_ACTOR(int pram0, int pram1, int pram2) { return Invoke<0x628832AD, int>(pram0, pram1, pram2); }
static void OPEN_DOOR_DIRECTION_FAST(int pram0, int pram1) { Invoke<0xBA51D02E, void>(pram0, pram1); }
static int GET_OBJECT_AXIS(int pram0, int pram1, int pram2) { return Invoke<0xCE412E46, int>(pram0, pram1, pram2); }
static int UNK_0x9BCC06E2(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12, int pram13, int pram14) { return Invoke<0x9BCC06E2, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12, pram13, pram14); }
static int UNK_0x82A73B3D(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11) { return Invoke<0x82A73B3D, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11); }
static void TASK_ANIMAL_CIRCLE_AGGRESSIVELY(int pram0, int pram1) { Invoke<0xEACE773D, void>(pram0, pram1); }
static int UNK_0x951B8DF7(int pram0, int pram1) { return Invoke<0x951B8DF7, int>(pram0, pram1); }
static int IS_PLAYER_TARGETTING_ACTOR(int pram0, int pram1, int pram2) { return Invoke<0x87DDCA96, int>(pram0, pram1, pram2); }
static void TASK_FLEE_COORD(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x826D3459, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x98790639(int pram0) { return Invoke<0x98790639, int>(pram0); }
static void TASK_CROUCH(int pram0, int pram1) { Invoke<0x616C803C, void>(pram0, pram1); }
static int UNK_0xEDA897FA(int pram0) { return Invoke<0xEDA897FA, int>(pram0); }
static void MEMORY_CONSIDER_ACCORDING_TO_FACTION(int pram0, int pram1) { Invoke<0xACD4084D, void>(pram0, pram1); }
static int DESTROY_ACTORSET(int pram0) { return Invoke<0x147A0BEE, int>(pram0); }
static void UNK_0x1BED8493(int pram0, int pram1, int pram2) { Invoke<0x1BED8493, void>(pram0, pram1, pram2); }
static void SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(int pram0, int pram1) { Invoke<0x18BA1216, void>(pram0, pram1); }
static void UNK_0x4EEC6628(int pram0, int pram1) { Invoke<0x4EEC6628, void>(pram0, pram1); }
static void UNK_0x3A2D7759(int pram0, int pram1) { Invoke<0x3A2D7759, void>(pram0, pram1); }
static void CLEAR_LAST_HIT(int pram0) { Invoke<0x8D696237, void>(pram0); }
static int UNK_0x08308EBA(int pram0) { return Invoke<0x08308EBA, int>(pram0); }
static void CLEAR_LAST_ATTACK(int pram0) { Invoke<0x68D4A021, void>(pram0); }
static void SET_ALLOW_EXECUTE(int pram0, int pram1) { Invoke<0x5896817B, void>(pram0, pram1); }
static void SET_ALLOW_COLD_WEATHER_BREATH(int pram0, int pram1) { Invoke<0xA4677DD2, void>(pram0, pram1); }
static void ANIMAL_TUNING_SET_ATTRIB_FLOAT(int pram0, int pram1, int pram2) { Invoke<0xE36EA080, void>(pram0, pram1, pram2); }
static void UNK_0x900165CE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x900165CE, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0x63925367(int pram0, int pram1) { return Invoke<0x63925367, int>(pram0, pram1); }
static void SET_CRIPPLE_ENABLE(int pram0, int pram1) { Invoke<0x3AD31762, void>(pram0, pram1); }
static bool GET_OBJECT_NAMED_BONE_POSITION(Object _Object, const char* _BoneName, Vector3* _Position) { return Invoke<0x30516389, bool>(_Object, _BoneName, _Position); }
static void TASK_GO_TO_COORD_PRECISELY(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x6BDB3257, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SET_ACTOR_DRUNK(Actor _Actor, bool _IsDrunk) { Invoke<0x9F57742C, void>(_Actor, _IsDrunk); }
static int UNK_0xA36ED4A6(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA36ED4A6, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(int pram0) { Invoke<0x1CE58D42, void>(pram0); }
static void AI_SET_NAV_ACTOR_AVOIDANCE_MODE(int pram0, int pram1) { Invoke<0x5B483036, void>(pram0, pram1); }
static int UNK_0x4634B6BE(int pram0, int pram1, int pram2) { return Invoke<0x4634B6BE, int>(pram0, pram1, pram2); }
static void STOP_SOUND(int pram0) { Invoke<0xCD7F4030, void>(pram0); }
static void UNK_0x44986367(int pram0, int pram1) { Invoke<0x44986367, void>(pram0, pram1); }
static void TASK_TAUNT_ACTOR_IN_PLACE(int pram0, int pram1, int pram2) { Invoke<0x030FB1FA, void>(pram0, pram1, pram2); }
static int UNK_0x50AE988A(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x50AE988A, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x90AD2C2D(int pram0) { return Invoke<0x90AD2C2D, int>(pram0); }
static void TASK_HIDE_AT_COVER(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xAB8B96A5, void>(pram0, pram1, pram2, pram3, pram4); }
static int REMOVE_ACTORSET_MEMBER(int pram0, int pram1) { return Invoke<0xD637E449, int>(pram0, pram1); }
static void UNK_0x6118212B(int pram0, int pram1, int pram2) { Invoke<0x6118212B, void>(pram0, pram1, pram2); }
static void UNK_0xF9C5DC76(int pram0, int pram1) { Invoke<0xF9C5DC76, void>(pram0, pram1); }
static bool IS_BUTTON_DOWN(Controller _Controller, Button _Button) { return Invoke<0xC3297B50, bool>(_Controller, _Button); }
static void FEED_CODE_WARP_DIST(int pram0) { Invoke<0xDE0E96F3, void>(pram0); }
static void UNK_0xD4FECCBC(int pram0) { Invoke<0xD4FECCBC, void>(pram0); }
static void CLEAR_ACTORS_HORSE(int pram0) { Invoke<0xFEB74094, void>(pram0); }
static void UNK_0x96AC812B(int pram0) { Invoke<0x96AC812B, void>(pram0); }
static int IS_ACTOR_MULE(int pram0) { return Invoke<0x1F739295, int>(pram0); }
static void SET_ACTORS_HORSE(int pram0, int pram1) { Invoke<0xCFFDF09D, void>(pram0, pram1); }
static void UNK_0x327E4426(int pram0, int pram1) { Invoke<0x327E4426, void>(pram0, pram1); }
static void UNK_0x57055A7D(int pram0, int pram1) { Invoke<0x57055A7D, void>(pram0, pram1); }
static void UNK_0x5CC16A49(int pram0, int pram1) { Invoke<0x5CC16A49, void>(pram0, pram1); }
static void UNK_0x6400E005(int pram0, int pram1) { Invoke<0x6400E005, void>(pram0, pram1); }
static int FIND_TRAFFIC_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA5BDC21D, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void GET_CURVE_POINT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x1CDF1EC4, void>(pram0, pram1, pram2, pram3); }
static int POW(int pram0, int pram1) { return Invoke<0x85D134F8, int>(pram0, pram1); }
static int UNK_0x39DA0B3A(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x39DA0B3A, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xF48F8F09(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xF48F8F09, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0xAE168124() { return Invoke<0xAE168124, int>(); }
static void SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(int pram0, int pram1) { Invoke<0x32CB0E86, void>(pram0, pram1); }
static void SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(int pram0, int pram1) { Invoke<0x7A746D3A, void>(pram0, pram1); }
static void UNK_0x9F1F8669(int pram0) { Invoke<0x9F1F8669, void>(pram0); }
static void FORCE_VEHICLE_CINEMATIC_CAMERA(int pram0) { Invoke<0x09737AF7, void>(pram0); }
static void UNK_0x2692B771(int pram0) { Invoke<0x2692B771, void>(pram0); }
static int UNK_0x71A3F193(int pram0) { return Invoke<0x71A3F193, int>(pram0); }
static int UNK_0xFB252BA9(int pram0) { return Invoke<0xFB252BA9, int>(pram0); }
static void AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(int pram0, int pram1) { Invoke<0xFCB31704, void>(pram0, pram1); }
static int UNK_0x49D2C1DA(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x49D2C1DA, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xC6AF3662(int pram0, int pram1) { return Invoke<0xC6AF3662, int>(pram0, pram1); }
static void UNK_0x4F8FAF8F(int pram0, int pram1) { Invoke<0x4F8FAF8F, void>(pram0, pram1); }
static void UNK_0x04D89A35(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x04D89A35, void>(pram0, pram1, pram2, pram3, pram4); }
static int GET_CURVE_TYPE(int pram0) { return Invoke<0xE1007398, int>(pram0); }
static int UNK_0xFAD7A113(int pram0) { return Invoke<0xFAD7A113, int>(pram0); }
static int SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xE77B9FC0, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(int pram0, int pram1, int pram2, int pram3) { Invoke<0x7FEE2B3C, void>(pram0, pram1, pram2, pram3); }
static void SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(int pram0, int pram1, int pram2) { Invoke<0x8C8EEEF2, void>(pram0, pram1, pram2); }
static int UNK_0xA4BC2A1B(int pram0, int pram1, int pram2) { return Invoke<0xA4BC2A1B, int>(pram0, pram1, pram2); }
static int SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x8DC095B0, int>(pram0, pram1, pram2, pram3, pram4); }
static void SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(int pram0, int pram1, int pram2, int pram3) { Invoke<0x041C0802, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x8C221B4D(int pram0) { return Invoke<0x8C221B4D, int>(pram0); }
static int AI_GET_IS_RETREATING(int pram0) { return Invoke<0x2FABB559, int>(pram0); }
static void PAUSE_GAME(int pram0) { Invoke<0x6F32A4E2, void>(pram0); }
static void UNPAUSE_GAME() { Invoke<0x0BF2CD82, void>(); }
static void REMOVE_OBJECT_ATTACHMENT(int pram0) { Invoke<0xE894DC13, void>(pram0); }
static void DEREFERENCE_OBJECT(int pram0) { Invoke<0xCEA40973, void>(pram0); }
static int DISBAND_ACTORSET(int pram0) { return Invoke<0x2739F04D, int>(pram0); }
static int UNK_0x0F701FF7(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0F701FF7, int>(pram0, pram1, pram2, pram3); }
static int IS_GRINGO_READY(int pram0) { return Invoke<0xB9BFCB41, int>(pram0); }
static void UNK_0xF635B9EA(int pram0) { Invoke<0xF635B9EA, void>(pram0); }
static void CLEAR_ACTOR_MIN_SPEED(int pram0) { Invoke<0x036D75D5, void>(pram0); }
static void AI_SET_NAV_PATHFINDING_ENABLED(int pram0, int pram1) { Invoke<0x4495F5FC, void>(pram0, pram1); }
static int IS_CUTSCENEOBJECT_PAUSED(int pram0) { return Invoke<0xD5C66699, int>(pram0); }
static void ACTOR_DISMOUNT_NOW(int pram0) { Invoke<0x0666B436, void>(pram0); }
static int UNK_0x3C45D66A(int pram0, int pram1, int pram2) { return Invoke<0x3C45D66A, int>(pram0, pram1, pram2); }
static void UNK_0x67FC68DB(int pram0) { Invoke<0x67FC68DB, void>(pram0); }
static void DELETE_ACCESSORY(int pram0, int pram1) { Invoke<0xD6A9C9D4, void>(pram0, pram1); }
static void UNK_0x2E84E682(int pram0, int pram1) { Invoke<0x2E84E682, void>(pram0, pram1); }
static void AI_GOAL_AIM_AT_OBJECT(int pram0, int pram1, int pram2) { Invoke<0x3CD232B2, void>(pram0, pram1, pram2); }
static void OPEN_DOOR(int pram0, int pram1, int pram2) { Invoke<0x30503E81, void>(pram0, pram1, pram2); }
static int CLEAR_LINKED_ANIM_TARGET(int pram0) { return Invoke<0xAC54E120, int>(pram0); }
static void SET_CRIPPLE_FLAG(int pram0, int pram1) { Invoke<0x0A9A99DF, void>(pram0, pram1); }
static int GET_MOST_RECENT_MOUNT(int pram0) { return Invoke<0x708E450F, int>(pram0); }
static int GET_Y(int pram0) { return Invoke<0x0B0FF6A1, int>(pram0); }
static int UNK_0xD14515A3(int pram0, int pram1) { return Invoke<0xD14515A3, int>(pram0, pram1); }
static void TASK_VEHICLE_ENTER(Actor _Actor, Vehicle _Vehicle, int pram2, int pram3) { Invoke<0xB2CD5160, void>(_Actor, _Vehicle, pram2, pram3); }
static void SET_VEHICLE_ALLOWED_TO_DRIVE(Actor Vehicle, bool Allowed) { Invoke<0x55A56DF8, void>(Vehicle, Allowed); }
static bool SET_ACTOR_IN_VEHICLE(Actor Source, Actor Destination, int SeatID) { return Invoke<0x32974F99, bool>(Source, Destination, SeatID); }
static void SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(int pram0, int pram1) { Invoke<0x47930AA4, void>(pram0, pram1); }
static void REFERENCE_OBJECT(int pram0) { Invoke<0x3EEA78A8, void>(pram0); }
static int CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xA9AB9A06, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int ATTACH_CAMERASHOT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11) { return Invoke<0x41514AA0, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11); }
static void SET_CAMERASHOT_TARGET_OBJECT(int pram0, int pram1, int pram2) { Invoke<0x3F719473, void>(pram0, pram1, pram2); }
static void SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x839E9502, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SET_CAMERASHOT_TARGET_OBJECT_ROLL(int pram0, int pram1) { Invoke<0x8014323A, void>(pram0, pram1); }
static int AI_IS_AGGROING(int pram0, int pram1) { return Invoke<0xC94F9499, int>(pram0, pram1); }
static void DETACH_LASSO(int pram0) { Invoke<0x32030E7C, void>(pram0); }
static int UNK_0xAF2597E8(int pram0) { return Invoke<0xAF2597E8, int>(pram0); }
static int UNK_0x16EB367C(int pram0) { return Invoke<0x16EB367C, int>(pram0); }
static int FIND_WATER_INTERSECTION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x4F193BE4, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(int pram0, int pram1) { Invoke<0x617C9630, void>(pram0, pram1); }
static int UNK_0x9265B24B(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x9265B24B, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void TASK_FOLLOW_AND_ATTACK_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0xDA646464, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void TASK_SHOOT_ENEMIES_FROM_ANY_COVER(int pram0, int pram1) { Invoke<0x3C9875E5, void>(pram0, pram1); }
static int GET_ACTOR_VISION_MAX_RANGE(int pram0) { return Invoke<0x4A4B4B26, int>(pram0); }
static int MEMORY_GET_WAS_VISIBLE_WITHIN_TIME(int pram0, int pram1, int pram2) { return Invoke<0xC407497F, int>(pram0, pram1, pram2); }
static int CREATE_OBSTACLE_IN_LAYOUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { return Invoke<0x2703760F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static int COMBAT_CLASS_AI_GET_RANGE_ACCURACY(int pram0) { return Invoke<0x983DB127, int>(pram0); }
static void ADD_ACTOR_STAY_WITHIN_VOLUME(int pram0, int pram1) { Invoke<0xCDEF4316, void>(pram0, pram1); }
static void SET_ACTOR_VOLUME_PARAMETERS(int pram0, int pram1, int pram2) { Invoke<0x8B46B294, void>(pram0, pram1, pram2); }
static void SET_CAMERA_ASPECT_RATIO(int pram0, int pram1) { Invoke<0xFAEE2667, void>(pram0, pram1); }
static void SET_CAMERA_NEAR_CLIP_PLANE(int pram0, int pram1) { Invoke<0x1D29E72A, void>(pram0, pram1); }
static void SET_CAMERA_FAR_CLIP_PLANE(int pram0, int pram1) { Invoke<0xD85EF521, void>(pram0, pram1); }
static void SET_CAMERA_COLLISION_PARAMETERS(int pram0, int pram1, int pram2) { Invoke<0xB8FAD252, void>(pram0, pram1, pram2); }
static void SET_CAMERA_COLLISION_ENABLED(int pram0, int pram1) { Invoke<0x7DA71AA7, void>(pram0, pram1); }
static void RESET_CAMERA_TARGET(int pram0, int pram1) { Invoke<0x313A4E61, void>(pram0, pram1); }
static void RESET_CAMERA_TARGETDOF(int pram0) { Invoke<0x4643D2C7, void>(pram0); }
static int GRINGO_DEACTIVATE(int pram0) { return Invoke<0x25636669, int>(pram0); }
static int MEMORY_GET_MUST_IDENTIFY(int pram0, int pram1) { return Invoke<0x05B3D34F, int>(pram0, pram1); }
static int IS_CAMERA_FOCUS_ENABLED(int pram0) { return Invoke<0x80D63DAC, int>(pram0); }
static void SET_CAMERA_FOCUS_ENABLED(int pram0, int pram1) { Invoke<0x78D29E49, void>(pram0, pram1); }
static int IS_CAMERA_FOCUS_ACTIVE(int pram0) { return Invoke<0xCA8CC5CE, int>(pram0); }
static void AI_PREDICATE_OVERRIDE_CLEAR(int pram0, int pram1) { Invoke<0x1A137442, void>(pram0, pram1); }
static int IS_SCRIPT_USE_CONTEXT_PRESSED(int pram0) { return Invoke<0x45C1C061, int>(pram0); }
static int UNK_0x211DE185(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x211DE185, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0x6077F3AE(int pram0, int pram1) { Invoke<0x6077F3AE, void>(pram0, pram1); }
static int UNK_0x52261CE0(int pram0) { return Invoke<0x52261CE0, int>(pram0); }
static void SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(int pram0, int pram1, int pram2, int pram3) { Invoke<0x1229C536, void>(pram0, pram1, pram2, pram3); }
static void SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(int pram0, int pram1) { Invoke<0x4A3AE626, void>(pram0, pram1); }
static void SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(int pram0, int pram1) { Invoke<0x6FDE0A8C, void>(pram0, pram1); }
static int SET_PROP_AI_OBSTACLE_ENABLED(int pram0, int pram1) { return Invoke<0x0DC83543, int>(pram0, pram1); }
static void UNK_0x547166A7(int pram0) { Invoke<0x547166A7, void>(pram0); }
static void FIRE_RELEASE_HANDLE(int pram0, int pram1) { Invoke<0xB14B936A, void>(pram0, pram1); }
static void UNK_0x983ED842(int pram0) { Invoke<0x983ED842, void>(pram0); }
static void UNK_0x902781BF(int pram0, int pram1) { Invoke<0x902781BF, void>(pram0, pram1); }
static int UNK_0x965A4652(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x965A4652, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int CREATE_CORPSE_IN_LAYOUT_RANDOM(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x40856E8A, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void CREATE_DECAL(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x21588246, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0x0E41A6AC(int pram0) { Invoke<0x0E41A6AC, void>(pram0); }
static int FIRE_CREATE_HANDLE() { return Invoke<0xBBAE9CBD, int>(); }
static int UNK_0xB65ADFAC(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xB65ADFAC, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x3D5D3B26(int pram0, int pram1) { Invoke<0x3D5D3B26, void>(pram0, pram1); }
static int UNK_0xF1F8AFCA(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xF1F8AFCA, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int IS_SCRIPTED_CONVERSATION_ONGOING() { return Invoke<0xCB8FD96F, int>(); }
static int GET_JOURNAL_ENTRY(int pram0) { return Invoke<0xC450C870, int>(pram0); }
static void CLEAR_JOURNAL_ENTRY_DETAIL_LIST(int pram0, int pram1) { Invoke<0xD0567D03, void>(pram0, pram1); }
static void ADD_NEW_CONVERSATION_SPEAKER(int pram0, int pram1, int pram2) { Invoke<0xF1C40BCA, void>(pram0, pram1, pram2); }
static int SQUAD_GOAL_ADD_BATTLE_ALLIES(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x65888454, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x74CA8E22(int pram0) { Invoke<0x74CA8E22, void>(pram0); }
static void UNK_0x80317230(int pram0, int pram1, int pram2) { Invoke<0x80317230, void>(pram0, pram1, pram2); }
static int UNK_0x35C8FD4A(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x35C8FD4A, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x211DD9D2(int pram0) { return Invoke<0x211DD9D2, int>(pram0); }
static int UNK_0x2CF0010F(int pram0) { return Invoke<0x2CF0010F, int>(pram0); }
static void SET_ACTOR_PROOF(int pram0, int pram1) { Invoke<0xA5875DC8, void>(pram0, pram1); }
static void UNK_0x76A72D9A(int pram0, int pram1) { Invoke<0x76A72D9A, void>(pram0, pram1); }
static int CREATE_COVER_LOCATION_IN_LAYOUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x708C7D7B, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(int pram0, int pram1, int pram2) { Invoke<0x6AAB4CD0, void>(pram0, pram1, pram2); }
static int UNK_0xD4FBCCE0(int pram0) { return Invoke<0xD4FBCCE0, int>(pram0); }
static int SC_CHALLENGE_LAUNCH(int pram0) { return Invoke<0xCBBE41DD, int>(pram0); }
static void TASK_SHOOT_ENEMIES_FROM_COVER(int pram0, int pram1, int pram2, int pram3) { Invoke<0xCE584BCF, void>(pram0, pram1, pram2, pram3); }
static void TASK_GO_NEAR_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x5EA4F1FE, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void ATTACH_PLAYER_TO_COVER(int pram0, int pram1, int pram2) { Invoke<0x45F2A70A, void>(pram0, pram1, pram2); }
static void ACTOR_POP_NEXT_GAIT(int pram0, int pram1, int pram2) { Invoke<0xEAE75C6F, void>(pram0, pram1, pram2); }
static void UNK_0x6C194C1F(int pram0) { Invoke<0x6C194C1F, void>(pram0); }
static void HUD_TIMER_COUNTDOWN(int pram0) { Invoke<0xF4209CCC, void>(pram0); }
static void SET_ACTOR_FACE_STYLE(int pram0, int pram1) { Invoke<0x08654394, void>(pram0, pram1); }
static void TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xDC087173, void>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xB6E791F6(int pram0, int pram1) { return Invoke<0xB6E791F6, int>(pram0, pram1); }
static int GET_VEHICLE_BUMP_COUNT(int pram0) { return Invoke<0x04CF7C3E, int>(pram0); }
static void UNK_0x0E9BA223(int pram0) { Invoke<0x0E9BA223, void>(pram0); }
static void UI_SET_TEXT(char* entry, char* text) { Invoke<0xC464D5DD, void>(entry, text); }
static void UNK_0xE5D53722(int pram0, int pram1) { Invoke<0xE5D53722, void>(pram0, pram1); }
static void SET_TRANSITION_COLLISION_PARAMS(int pram0, int pram1, int pram2) { Invoke<0x22A746E1, void>(pram0, pram1, pram2); }
static void UNK_0xF76F2BB3(int pram0, int pram1, int pram2, int pram3) { Invoke<0xF76F2BB3, void>(pram0, pram1, pram2, pram3); }
static void ADD_CAMERASHOT_COLLISION_EXCLUSION(int pram0, int pram1, int pram2) { Invoke<0x58A0BFBF, void>(pram0, pram1, pram2); }
static void AI_DISABLE_PERCEPTION(int pram0) { Invoke<0x8BBB7B12, void>(pram0); }
static void AI_ENABLE_PERCEPTION(int pram0) { Invoke<0xAF77C42E, void>(pram0); }
static void TASK_SHOOT_ENEMIES_FROM_POSITION(int pram0, int pram1, int pram2, int pram3) { Invoke<0xCF8DB984, void>(pram0, pram1, pram2, pram3); }
static int SET_ACTOR_ANIM_CURRENT_TIME(int pram0, int pram1) { return Invoke<0x8626C1A0, int>(pram0, pram1); }
static void SET_ALLOW_DEADEYE_LOCKS(int pram0, int pram1) { Invoke<0xA1BFC1A5, void>(pram0, pram1); }
static void UNK_0xAC8D3A0C(int pram0, int pram1) { Invoke<0xAC8D3A0C, void>(pram0, pram1); }
static void SET_DEADEYE_LOCKS_ON_HEAD_ONLY(int pram0, int pram1) { Invoke<0x9375946B, void>(pram0, pram1); }
static bool _IS_KEY_DOWN(KeyCode _KeyCode) { return Invoke<0x358F874F, bool>(_KeyCode); }
static int UNK_0x5E339E16(int pram0) { return Invoke<0x5E339E16, int>(pram0); }
static int ATTACH_OBJECTS_CONTINUOUS(int pram0, int pram1, int pram2) { return Invoke<0x319D70BD, int>(pram0, pram1, pram2); }
static void TASK_OVERRIDE_CLEAR_POSTURE(int pram0) { Invoke<0x5394CF3B, void>(pram0); }
static int UNK_0x0208A8E0(int pram0, int pram1) { return Invoke<0x0208A8E0, int>(pram0, pram1); }
static void UNK_0x77402033(int pram0) { Invoke<0x77402033, void>(pram0); }
static void AI_RESET_FIRING_FSM(int pram0) { Invoke<0x46F51754, void>(pram0); }
static void STOP_PED_SPEAKING(int pram0, int pram1) { Invoke<0xFF92B49D, void>(pram0, pram1); }
static int UNK_0x77964B0C(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x77964B0C, int>(pram0, pram1, pram2, pram3, pram4); }
static bool IS_ACTOR_DRAFTED(int actor) { return Invoke<0xEF2C329D, bool>(actor); }
static void SET_ACTOR_POSTURE(int pram0, int pram1) { Invoke<0x708D9BD3, void>(pram0, pram1); }
static bool IS_ACTOR_LOCAL_PLAYER(int actor) { return Invoke<0x6542CF26, bool>(actor); }
static int UNK_0x8A0D25F2(int pram0, int pram1) { return Invoke<0x8A0D25F2, int>(pram0, pram1); }
static void AI_GOAL_LOOK_AT_COORD(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xB162690D, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int LEASH_CONSTRAIN(int pram0) { return Invoke<0x8EA68EB5, int>(pram0); }
static int LEASH_RESTART(int pram0) { return Invoke<0xE58339B3, int>(pram0); }
static int UNK_0x7F190CA3(int pram0, int pram1) { return Invoke<0x7F190CA3, int>(pram0, pram1); }
static int UNK_0x14BEC6F5(int pram0, int pram1) { return Invoke<0x14BEC6F5, int>(pram0, pram1); }
static int LEASH_BREAK(int pram0, int pram1) { return Invoke<0x8640261B, int>(pram0, pram1); }
static void TASK_TAUNT_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x9043D092, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0xAFC96669(int pram0) { return Invoke<0xAFC96669, int>(pram0); }
static void NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(int pram0, int pram1) { Invoke<0xAFA35FFA, void>(pram0, pram1); }
static int UNK_0x734CC17B(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x734CC17B, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int LEASH_IS_BROKEN(int pram0) { return Invoke<0x46BE1D43, int>(pram0); }
static int LEASH_RELEASE_CONSTRAINT(int pram0) { return Invoke<0x7A1376B0, int>(pram0); }
static void SET_ACTOR_HANGING_FROM_NOOSE(int pram0, int pram1) { Invoke<0x5262C0F7, void>(pram0, pram1); }
static void REMOVE_ACTOR_STAY_WITHIN_VOLUME(int pram0, int pram1) { Invoke<0x2974CAF6, void>(pram0, pram1); }
static int UNK_0x5A72DD49(int pram0, int pram1) { return Invoke<0x5A72DD49, int>(pram0, pram1); }
static int LEASH_ATTACH_TO_WORLD(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x0FCDB481, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void UNK_0x65DAA654(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x65DAA654, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x4B67B8BB(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11) { return Invoke<0x4B67B8BB, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11); }
static void UNK_0x1CD960B8(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x1CD960B8, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UI_REFRESH(const char* _UILayer) { Invoke<0xFAC3DF71, void>(_UILayer); }
static void UNK_0x6B5DF46D(int pram0, int pram1) { Invoke<0x6B5DF46D, void>(pram0, pram1); }
static int GRINGO_GET_TARGET(int pram0) { return Invoke<0xC70FDA39, int>(pram0); }
static int UNK_0x1FCC8FEF(int pram0) { return Invoke<0x1FCC8FEF, int>(pram0); }
static int UNK_0x48588CCB(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x48588CCB, int>(pram0, pram1, pram2, pram3); }
static void SQUAD_FLOCK_ADD_EXTERNAL_ALERT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x1F0E5B88, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x53609885, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(int pram0, int pram1, int pram2) { Invoke<0xE4E94286, void>(pram0, pram1, pram2); }
static int UNK_0x66A8AF91(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x66A8AF91, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void UNK_0x731F2C21(int pram0) { Invoke<0x731F2C21, void>(pram0); }
static void UNK_0xA90A13A5(int pram0, int pram1) { Invoke<0xA90A13A5, void>(pram0, pram1); }
static void UNK_0x7A759A53(int pram0, int pram1, int pram2, int pram3) { Invoke<0x7A759A53, void>(pram0, pram1, pram2, pram3); }
static void SET_ACTOR_PASSED_OUT(int pram0, int pram1) { Invoke<0x2A9FD09F, void>(pram0, pram1); }
static void FIRE_PROJECTILE(Actor Actor, const char* WeapGroup, float pram2, Vector3* Origin, Vector3* Target) { Invoke<0x195A4286, void>(Actor, WeapGroup, pram2, Origin, Target); }
static int ANIMAL_SPECIES_REL_GET_CAN_ATTACK(int pram0, int pram1) { return Invoke<0x3C5700DC, int>(pram0, pram1); }
static int GET_ACTOR_MAX_SPEED_ABSOLUTE(int pram0) { return Invoke<0x56DE7F21, int>(pram0); }
static void AI_ACTOR_FORCE_SPEED(int pram0, int pram1) { Invoke<0x70B409D5, void>(pram0, pram1); }
static void SET_ACTOR_MAX_SPEED_ABSOLUTE(Actor _Actor, int _Speed) { Invoke<0x950B8870, void>(_Actor, _Speed); }
static int IS_ACTOR_ON_GROUND(int actor) { return Invoke<0x709EC06C, int>(actor); }
static Vehicle GET_ACTOR_MOST_RECENT_VEHICLE(Actor _Actor) { return Invoke<0x58745E4B, Vehicle>(_Actor); }
static int GET_ACTOR_HOGTIE_STATE(int actor) { return Invoke<0xF45D9723, int>(actor); }
static int UNK_0xF7400A47(int pram0, int pram1) { return Invoke<0xF7400A47, int>(pram0, pram1); }
static void UNK_0xBFC8EF7C(int pram0, int pram1) { Invoke<0xBFC8EF7C, void>(pram0, pram1); }
static int UNK_0xD02757C1(int pram0, int pram1) { return Invoke<0xD02757C1, int>(pram0, pram1); }
static void UNK_0x0871084C(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0x0871084C, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0xF0354E46(int pram0) { return Invoke<0xF0354E46, int>(pram0); }
static void CREATE_DIRECTION_DECAL(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0xFB4CFBA0, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void ACTIVATE_PHYSINST(int pram0) { Invoke<0xC0961D18, void>(pram0); }
static void AI_GLOBAL_SET_PERMANENT_DANGER(int pram0, int pram1) { Invoke<0x64C177FB, void>(pram0, pram1); }
static void REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(int pram0, int pram1) { Invoke<0x42EF7DB7, void>(pram0, pram1); }
static void TASK_SURROUND_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x5DD80BEF, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void AI_GOAL_AIM_CLEAR(int pram0) { Invoke<0xD5100DC2, void>(pram0); }
static void MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(int pram0) { Invoke<0xDD965D74, void>(pram0); }
static void AI_SET_WEAPON_MIN_RANGE(int pram0, int pram1) { Invoke<0xE067A925, void>(pram0, pram1); }
static void AI_GOAL_SHOOT_CLEAR(int pram0) { Invoke<0xC43A9268, void>(pram0); }
static void ACTOR_FORCE_WEAPON_RENDER(int pram0, int pram1, int pram2) { Invoke<0x1511D111, void>(pram0, pram1, pram2); }
static void AI_SET_WEAPON_MAX_RANGE(int pram0, int pram1) { Invoke<0xD2BFA6E4, void>(pram0, pram1); }
static int HUD_TIMER_GET() { return Invoke<0x1C6919EF, int>(); }
static int UNK_0xAAC96EFF(int pram0, int pram1) { return Invoke<0xAAC96EFF, int>(pram0, pram1); }
static void TASK_BIRD_SOAR_AT_COORD(int pram0, int pram1, int pram2, int pram3) { Invoke<0x69CCFD7C, void>(pram0, pram1, pram2, pram3); }
static void SET_ACTOR_UNKILLABLE(Actor _Actor, bool _Value) { Invoke<0x0D9A35F6, void>(_Actor, _Value); }
static void UNK_0xF1A53C41(int pram0, int pram1, int pram2, int pram3) { Invoke<0xF1A53C41, void>(pram0, pram1, pram2, pram3); }
static int LEASH_ATTACH_TO_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x35D8B21E, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0x88943B5B(int pram0, int pram1) { Invoke<0x88943B5B, void>(pram0, pram1); }
static int UNK_0x941FC468(int pram0) { return Invoke<0x941FC468, int>(pram0); }
static void GET_GRINGO_ACTIVATION_SPHERE(int pram0, int pram1, int pram2) { Invoke<0xADA2EA30, void>(pram0, pram1, pram2); }
static bool UNK_0x8EB0B2AD() { return Invoke<0x8EB0B2AD, bool>(); }
static void SET_CAMERA_TARGET_OBJECT(Camera _Camera, Object _Object, int pram2) { Invoke<0xDBD1AE22, void>(_Camera, _Object, pram2); }
static int UNK_0xBFD6AE3D(int pram0) { return Invoke<0xBFD6AE3D, int>(pram0); }
static int GRINGO_QUERY_PROP(int pram0, int pram1) { return Invoke<0x2A7B1EFE, int>(pram0, pram1); }
static int ATTACH_OBJECTS_USING_LOCATOR(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xB6506558, int>(pram0, pram1, pram2, pram3, pram4); }
static int GET_PROP_VELOCITY(int pram0, int pram1) { return Invoke<0x5AEA8801, int>(pram0, pram1); }
static int UNK_0x945F518F(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x945F518F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void UNK_0x338F85D9(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x338F85D9, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0xFF642652(int pram0) { return Invoke<0xFF642652, int>(pram0); }
static int UNK_0xE27EBCBD(int pram0) { return Invoke<0xE27EBCBD, int>(pram0); }
static int IS_ACTOR_PLAYING_NODE_IN_TREE(int pram0, int pram1) { return Invoke<0x4E0300E2, int>(pram0, pram1); }
static int UNK_0x80B8A1BE(int pram0, int pram1, int pram2) { return Invoke<0x80B8A1BE, int>(pram0, pram1, pram2); }
static int UNK_0xECC40138(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xECC40138, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x43E2808B(int pram0) { Invoke<0x43E2808B, void>(pram0); }
static void UNK_0x527CB774(int pram0, int pram1) { Invoke<0x527CB774, void>(pram0, pram1); }
static int UNK_0x0733E811(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x0733E811, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int IS_AREA_OBSTRUCTED(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x5F655C68, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x561C9A6D(int pram0) { Invoke<0x561C9A6D, void>(pram0); }
static void UNK_0x528C7F3D(int pram0) { Invoke<0x528C7F3D, void>(pram0); }
static void UNK_0xE9E8C31A(int pram0) { Invoke<0xE9E8C31A, void>(pram0); }
static void SET_ACTOR_ACTION_SIGNAL(int pram0, int pram1, int pram2) { Invoke<0x382E7CCC, void>(pram0, pram1, pram2); }
static void UNK_0x5685A440(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x5685A440, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0x761BA4BD(int pram0, int pram1) { Invoke<0x761BA4BD, void>(pram0, pram1); }
static int UNK_0x92FE8D74(int pram0, int pram1) { return Invoke<0x92FE8D74, int>(pram0, pram1); }
static int UNK_0x08FD1D81(int pram0) { return Invoke<0x08FD1D81, int>(pram0); }
static void UNK_0x3627F773(int pram0, int pram1) { Invoke<0x3627F773, void>(pram0, pram1); }
static void AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(int pram0, int pram1) { Invoke<0xC900F0E8, void>(pram0, pram1); }
static void MEMORY_CLEAR_RIDING_PREFERENCE(int pram0) { Invoke<0x48AA959E, void>(pram0); }
static void SET_ACTOR_IS_COMPANION(int pram0, int pram1) { Invoke<0x4C94EB9E, void>(pram0, pram1); }
static void SET_ACTOR_IS_AMBIENT(int pram0, int pram1) { Invoke<0x4CB24141, void>(pram0, pram1); }
static void UNK_0xC28A5950(int pram0, int pram1) { Invoke<0xC28A5950, void>(pram0, pram1); }
static void SET_ALLOW_JACK(int pram0, int pram1) { Invoke<0x5D5BD1F0, void>(pram0, pram1); }
static void MEMORY_SHOULD_ALWAYS_PATHFIND_IN_FORMATION(int pram0, int pram1) { Invoke<0x052E865C, void>(pram0, pram1); }
static void ACTOR_DRAW_WEAPON(int pram0, int pram1, int pram2) { Invoke<0x953FB7EE, void>(pram0, pram1, pram2); }
static int UNK_0x8F8EDCCF(int pram0, int pram1, int pram2) { return Invoke<0x8F8EDCCF, int>(pram0, pram1, pram2); }
static int UNK_0x6ADC74CE(int pram0, int pram1) { return Invoke<0x6ADC74CE, int>(pram0, pram1); }
static void UNK_0x8DFF31DF(int pram0, int pram1) { Invoke<0x8DFF31DF, void>(pram0, pram1); }
static int UNK_0x620178B3(int pram0) { return Invoke<0x620178B3, int>(pram0); }
static void UNK_0xB3E44649(int pram0) { Invoke<0xB3E44649, void>(pram0); }
static void TOGGLE_COOP_JOURNAL_UI(int pram0) { Invoke<0x44A1ED5C, void>(pram0); }
static void UNK_0xE822010A(int pram0, int pram1) { Invoke<0xE822010A, void>(pram0, pram1); }
static int UNK_0x55C5BB93(int pram0) { return Invoke<0x55C5BB93, int>(pram0); }
static int UNK_0xBFCF32D9(int pram0) { return Invoke<0xBFCF32D9, int>(pram0); }
static int UNK_0xE8FFE727(int pram0, int pram1, int pram2) { return Invoke<0xE8FFE727, int>(pram0, pram1, pram2); }
static void HUD_SET_FADE_COLOR(int pram0, int pram1, int pram2, int pram3) { Invoke<0x4DA5F502, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x2148AC15(int pram0, int pram1) { Invoke<0x2148AC15, void>(pram0, pram1); }
static void STOP_ALL_FIRES() { Invoke<0x9544570A, void>(); }
static void UNK_0xA393AC4E(int pram0) { Invoke<0xA393AC4E, void>(pram0); }
static int UNK_0xFC52BD15(int pram0) { return Invoke<0xFC52BD15, int>(pram0); }
static void MISSION_AUDIO_BANK_NO_LONGER_NEEDED() { Invoke<0x4E92CC7A, void>(); }
static void UNK_0x87E40FB8(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x87E40FB8, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int GET_CUTSCENEOBJECT_SEQUENCE(int pram0) { return Invoke<0x3D26D852, int>(pram0); }
static void END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(int pram0) { Invoke<0xBE3F0168, void>(pram0); }
static void UNK_0x2FB85996(int pram0) { Invoke<0x2FB85996, void>(pram0); }
static void UNK_0xB226E8E3(int pram0) { Invoke<0xB226E8E3, void>(pram0); }
static int GET_CAMERA_CHANNEL_DIRECTION(int pram0, int pram1) { return Invoke<0x6ED00237, int>(pram0, pram1); }
static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xCC61CC5F, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int CUTSCENEOBJECT_ADD_TRANSITION_LERP(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xFC676413, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SET_CAMERASHOT_TARGET_POSITION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x0D6EC5D5, void>(pram0, pram1, pram2, pram3, pram4); }
static void UI_RESTORE(const char* _UILayer) { Invoke<0x7ADB2BE7, void>(_UILayer); }
static void UNK_0x444C3C32(int pram0, int pram1, int pram2) { Invoke<0x444C3C32, void>(pram0, pram1, pram2); }
static void UNK_0x4D0C8AA4(int pram0) { Invoke<0x4D0C8AA4, void>(pram0); }
static void NET_UPDATE_LEADERBOARD(int pram0, int pram1, int pram2, int pram3) { Invoke<0x12304873, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x89277EA3() { Invoke<0x89277EA3, void>(); }
static void UNK_0x7154D15B() { Invoke<0x7154D15B, void>(); }
static int UNK_0xE5C5CE63() { return Invoke<0xE5C5CE63, int>(); }
static int UNK_0xA684E813() { return Invoke<0xA684E813, int>(); }
static void UNK_0x88249424(int pram0, int pram1, int pram2) { Invoke<0x88249424, void>(pram0, pram1, pram2); }
static int UNK_0x81F24788() { return Invoke<0x81F24788, int>(); }
static int UNK_0xA80C6DE6(int pram0) { return Invoke<0xA80C6DE6, int>(pram0); }
static float GET_TIME_ACCELERATION() { return Invoke<0xC87F16A8, float>(); }
static int GET_NUM_PLAYERS() { return Invoke<0x0F99A8BC, int>(); }
static float _GET_FRAME_TIME_2() { return Invoke<0x49F96787, float>(); }
static void UNK_0xB5DDEF68(int pram0, int pram1) { Invoke<0xB5DDEF68, void>(pram0, pram1); }
static void UNK_0x7725001B(int pram0, int pram1, int pram2) { Invoke<0x7725001B, void>(pram0, pram1, pram2); }
static void UNK_0x437588E6(int pram0) { Invoke<0x437588E6, void>(pram0); }
static void CLEAR_ACTOR_PROOF(int pram0, int pram1) { Invoke<0xF5B74E20, void>(pram0, pram1); }
static int UNK_0x6396ABB7(int pram0) { return Invoke<0x6396ABB7, int>(pram0); }
static void UNK_0x7E0CDD87() { Invoke<0x7E0CDD87, void>(); }
static void UI_FOCUS(const char* _UILayer) { Invoke<0x699CC85E, void>(_UILayer); }
static int UNK_0x8EFDFE89(int pram0) { return Invoke<0x8EFDFE89, int>(pram0); }
static int UNK_0x7609A328(int pram0) { return Invoke<0x7609A328, int>(pram0); }
static void UNK_0x1105FB64(int pram0, int pram1) { Invoke<0x1105FB64, void>(pram0, pram1); }
static int UNK_0x9D20BDC4(int pram0) { return Invoke<0x9D20BDC4, int>(pram0); }
static int FLASH_GET_INT(const char* scaleformName, const char* scaleformVarName) { return Invoke<0x03568B83, int>(scaleformName, scaleformVarName); }
static void ACTOR_SET_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel, float _AmmoCount) { Invoke<0x8266C617, void>(_Actor, _WeaponModel, _AmmoCount); }
static int UNK_0xAB2D8A68(int pram0, int pram1, int pram2) { return Invoke<0xAB2D8A68, int>(pram0, pram1, pram2); }
static void UNK_0x3E8E7D7B(int pram0) { Invoke<0x3E8E7D7B, void>(pram0); }
static int UNK_0x0B071844(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x0B071844, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static Actor _CHANGE_ACTOR_MODEL_IN_LAYOUT(Layout _Layout, Actor _Actor, const char* _ActorInLayout, ActorModel _ActorModel, Vector2 _PositionXY, float _PositionZ, Vector2 _RotationXY, float _RotationZ, int _Unk0) { return Invoke<0x637E446B, Actor>(_Layout, _Actor, _ActorInLayout, _ActorModel, _PositionXY, _PositionZ, _RotationXY, _RotationZ, _Unk0); }
static void UNK_0x6F6D942B(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x6F6D942B, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SET_AMBIENT_VOICE_NAME(int pram0, int pram1) { Invoke<0xBD2EA1A1, void>(pram0, pram1); }
static void UNK_0xF2F77F44(int pram0, int pram1) { Invoke<0xF2F77F44, void>(pram0, pram1); }
static void SET_LOCAL_PLAYER_VOICE(int pram0) { Invoke<0xF0D28043, void>(pram0); }
static void SET_LOCAL_PLAYER_PAIN_VOICE(int pram0) { Invoke<0x33BD1A80, void>(pram0); }
static void UNK_0x1E56BAFD(int pram0) { Invoke<0x1E56BAFD, void>(pram0); }
static void SET_DEADEYE_INVULNERABILITY(Actor _Actor, bool _Value) { Invoke<0xA671FF8E, void>(_Actor, _Value); }
static void SET_DEADEYE_DAMAGE_SCALING(Actor _Actor, float _Scaling) { Invoke<0x0D583DAF, void>(_Actor, _Scaling); }
static void SET_DEADEYE_REGENERATION_RATE(Actor _Actor, float _Rate, bool _Unk) { Invoke<0x0415EE4C, void>(_Actor, _Rate, _Unk); }
static void SET_DEADEYE_TIMESCALE(Actor _Actor, float _TimeScale) { Invoke<0x5740CDC2, void>(_Actor, _TimeScale); }
static int DECOR_HANDLES_RELATIVE(int pram0) { return Invoke<0x8DAC4359, int>(pram0); }
static void UNK_0x9FC69F27(int pram0, int pram1) { Invoke<0x9FC69F27, void>(pram0, pram1); }
static void DETACH_CAMERASHOT(int pram0) { Invoke<0x059BBAA8, void>(pram0); }
static int GET_ACTOR_SLOT(int pram0) { return Invoke<0xAABF3356, int>(pram0); }
static void GET_CAMERASHOT_POSITION(int pram0, int pram1) { Invoke<0x4D05D470, void>(pram0, pram1); }
static int UNK_0x457A0510(int pram0, int pram1) { return Invoke<0x457A0510, int>(pram0, pram1); }
static void GET_CAMERASHOT_DIRECTION(int pram0, int pram1) { Invoke<0x4670416D, void>(pram0, pram1); }
static void SET_CAMERASHOT_DIRECTION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x21B099AB, void>(pram0, pram1, pram2, pram3, pram4); }
static int GET_CAMERASHOT_FOV(int pram0) { return Invoke<0xEAD6167D, int>(pram0); }
static void INIT_CAMERASHOT_FROM_GAME_CAMERA(int pram0) { Invoke<0x99314873, void>(pram0); }
static void STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(int pram0) { Invoke<0xBEABC729, void>(pram0); }
static int CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x1AD38A53, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void ADD_CAMERASHOT_COLLISION_BOUNDFLAG(int pram0, int pram1) { Invoke<0xCD28C63F, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_OBJECT(int pram0, int pram1) { Invoke<0xB6BDCF62, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(int pram0, int pram1) { Invoke<0x087B8DCE, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(int pram0, int pram1) { Invoke<0x0AD50615, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(int pram0, int pram1) { Invoke<0xEB9E1CB9, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(int pram0, int pram1, int pram2) { Invoke<0x0370451C, void>(pram0, pram1, pram2); }
static void SET_CAMERASHOT_TARGETDOF_SMOOTHING(int pram0, int pram1) { Invoke<0x74168B5F, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_FILTERTYPE(int pram0, int pram1) { Invoke<0x243CF01F, void>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_FSTOP(int pram0, int pram1) { Invoke<0x9E618676, void>(pram0, pram1); }
static void CAMERASHOT_ADD_ARC_BEHAVIOR(int pram0, int pram1) { Invoke<0xA1C665E0, void>(pram0, pram1); }
static void UI_SET_STRING_FORMAT(const char* _GXTName, const char* _Format, const char* _Str) { Invoke<0xEDA84121, void>(_GXTName, _Format, _Str); }
static int IN_SELECTED_PEDPATH(int pram0) { return Invoke<0xE2E6C722, int>(pram0); }
static int UNK_0xF81E2097(int pram0, int pram1) { return Invoke<0xF81E2097, int>(pram0, pram1); }
static int UNK_0xA6AA7B9E(int pram0, int pram1) { return Invoke<0xA6AA7B9E, int>(pram0, pram1); }
static unsigned int UNK_0xF83666A6() { return Invoke<0xF83666A6, unsigned int>(); }
static void UNK_0xC78B7436() { Invoke<0xC78B7436, void>(); }
static void UNK_0x49053A94(int pram0, int pram1) { Invoke<0x49053A94, void>(pram0, pram1); }
static void UI_UNFOCUS(const char* _UILayer) { Invoke<0x0ACEA059, void>(_UILayer); }
static int UNK_0xBA89F5EA(int pram0) { return Invoke<0xBA89F5EA, int>(pram0); }
static const char* GET_SLOT_NAME(int _SlotId) { return Invoke<0x34CBABAE, const char*>(_SlotId); }
static bool UNK_0xC0FC4B57() { return Invoke<0xC0FC4B57, bool>(); }
static int NET_IS_HOST_OF_THIS_SCRIPT() { return Invoke<0x6D403720, int>(); }
static void UNK_0x2547029C(int pram0, int pram1) { Invoke<0x2547029C, void>(pram0, pram1); }
static void UNK_0x46C39437(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x46C39437, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void OBJECT_ITERATOR_RESET(int pram0) { Invoke<0x351A482F, void>(pram0); }
static void UNK_0xEA2A40BC(int pram0, int pram1) { Invoke<0xEA2A40BC, void>(pram0, pram1); }
static void MEMORY_ALLOW_THROWING_EXPLOSIVES(int pram0, int pram1) { Invoke<0xDBDB57D0, void>(pram0, pram1); }
static void TASK_USE_TURRET_AGAINST_COORD(int pram0, int pram1, int pram2, int pram3) { Invoke<0x3B8DBA13, void>(pram0, pram1, pram2, pram3); }
static int COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(int pram0, int pram1) { return Invoke<0xAAD75024, int>(pram0, pram1); }
static int UNK_0xCDA6BB6C() { return Invoke<0xCDA6BB6C, int>(); }
static int UNK_0xFF1F1730() { return Invoke<0xFF1F1730, int>(); }
static int UNK_0x93050734() { return Invoke<0x93050734, int>(); }
static void UNK_0xE7A1C191() { Invoke<0xE7A1C191, void>(); }
static void ADD_CAMERATRANSITION_EVENT_HUDFADEIN(int pram0, int pram1, int pram2, int pram3) { Invoke<0x25A58402, void>(pram0, pram1, pram2, pram3); }
static void ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x269F5C75, void>(pram0, pram1, pram2, pram3); }
static int GET_VOLUME_HEADING(int pram0) { return Invoke<0x8D5609F2, int>(pram0); }
static void TASK_USE_TURRET(int pram0, int pram1, int pram2) { Invoke<0x6484F21E, void>(pram0, pram1, pram2); }
static void UNK_0x03240324(int pram0, int pram1) { Invoke<0x03240324, void>(pram0, pram1); }
static void UNK_0x6471D75C(int pram0, int pram1) { Invoke<0x6471D75C, void>(pram0, pram1); }
static void UNK_0x53895856(int pram0, int pram1) { Invoke<0x53895856, void>(pram0, pram1); }
static void UNK_0x9C471E7D(int pram0, int pram1) { Invoke<0x9C471E7D, void>(pram0, pram1); }
static void UNK_0x1A82B949(int pram0, int pram1) { Invoke<0x1A82B949, void>(pram0, pram1); }
static void UNK_0xE5E04E83(int pram0, int pram1) { Invoke<0xE5E04E83, void>(pram0, pram1); }
static void UNK_0x6CEFA97A(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x6CEFA97A, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0x5E84F53E(int pram0) { return Invoke<0x5E84F53E, int>(pram0); }
static void UNK_0x4FA19C01() { Invoke<0x4FA19C01, void>(); }
static int UNK_0x5BD2295E() { return Invoke<0x5BD2295E, int>(); }
static void UNK_0x3AE77125(int pram0, int pram1, int pram2, int pram3) { Invoke<0x3AE77125, void>(pram0, pram1, pram2, pram3); }
static void AI_SET_WEAPON_DESIRED_RANGE(int pram0, int pram1) { Invoke<0xDA005857, void>(pram0, pram1); }
static void UNK_0xA4E29C31(int pram0, int pram1) { Invoke<0xA4E29C31, void>(pram0, pram1); }
static int UNK_0x704DBAC9(int pram0) { return Invoke<0x704DBAC9, int>(pram0); }
static void DESTROY_OBJECT_GLOW(int pram0) { Invoke<0xFC261530, void>(pram0); }
static void UNK_0x77403213(int pram0, int pram1, int pram2) { Invoke<0x77403213, void>(pram0, pram1, pram2); }
static void UNK_0x418A22D5(int pram0, int pram1) { Invoke<0x418A22D5, void>(pram0, pram1); }
static void UNK_0xCEC355CE(int pram0, int pram1) { Invoke<0xCEC355CE, void>(pram0, pram1); }
static int UNK_0x650A7440(int pram0, int pram1) { return Invoke<0x650A7440, int>(pram0, pram1); }
static void UNK_0xD771AF0B(int pram0, int pram1, int pram2) { Invoke<0xD771AF0B, void>(pram0, pram1, pram2); }
static int UNK_0x7AB65B0C() { return Invoke<0x7AB65B0C, int>(); }
static int UNK_0xFB2B0CCF(int pram0) { return Invoke<0xFB2B0CCF, int>(pram0); }
static int UNK_0x2ADA3DD4() { return Invoke<0x2ADA3DD4, int>(); }
static void UNK_0x7837890B(int pram0) { Invoke<0x7837890B, void>(pram0); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { Invoke<0x66728EFE, void>(); }
static int UNK_0x78B73E47(int pram0) { return Invoke<0x78B73E47, int>(pram0); }
static int UNK_0x5908F7FE(int pram0) { return Invoke<0x5908F7FE, int>(pram0); }
static int UNK_0x19BD222F(int pram0) { return Invoke<0x19BD222F, int>(pram0); }
static void DESTROY_OBJECT_ANIMATOR(int pram0) { Invoke<0x1E5A227A, void>(pram0); }
static void TRAIN_SET_ENGINE_ENABLED(int pram0, int pram1) { Invoke<0x6C62C522, void>(pram0, pram1); }
static void UNK_0xADE865AE(int pram0, int pram1) { Invoke<0xADE865AE, void>(pram0, pram1); }
static void VEHICLE_SET_HANDBRAKE(Actor Vehicle, bool Handbreak) { Invoke<0x384BB6AB, void>(Vehicle, Handbreak); }
static void TRAIN_SET_TARGET_SPEED(int pram0, int pram1) { Invoke<0xEA2A8B79, void>(pram0, pram1); }
static int UNK_0x5B417C9C(int pram0) { return Invoke<0x5B417C9C, int>(pram0); }
static int UNK_0x1A4C98C1(int pram0, int pram1) { return Invoke<0x1A4C98C1, int>(pram0, pram1); }
static void GATEWAY_DISABLE(int pram0, int pram1) { Invoke<0x620A3C17, void>(pram0, pram1); }
static void ADD_PLAYER_DEADEYE_POINTS(int pram0, int pram1, int pram2) { Invoke<0xE2C4AEE7, void>(pram0, pram1, pram2); }
static void TASK_FOLLOW_PATH_FROM_NEAREST_POINT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x9591A996, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void TRAIN_SET_POSITION_DIRECTION(int pram0, int pram1, int pram2) { Invoke<0x9C488CB3, void>(pram0, pram1, pram2); }
static int GATEWAY_GET_VOLUME(int pram0) { return Invoke<0x987AD426, int>(pram0); }
static void UNK_0x5FEA3E61(int pram0, int pram1) { Invoke<0x5FEA3E61, void>(pram0, pram1); }
static int UNK_0x7D397CAA(int pram0) { return Invoke<0x7D397CAA, int>(pram0); }
static int GET_OBJECT_ATTACHED_TO(int pram0) { return Invoke<0x533475AE, int>(pram0); }
static int UNK_0x97931B87(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x97931B87, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xFE83A4FE(int pram0) { return Invoke<0xFE83A4FE, int>(pram0); }
static void UNK_0x1C147E14(int pram0, int pram1) { Invoke<0x1C147E14, void>(pram0, pram1); }
static void UNK_0x1306549E(int pram0, int pram1) { Invoke<0x1306549E, void>(pram0, pram1); }
static int UNK_0xCA6231C1(int pram0) { return Invoke<0xCA6231C1, int>(pram0); }
static void REMOVE_CAMERA_COLLISION_EXCLUSION(int pram0, int pram1) { Invoke<0x781D5599, void>(pram0, pram1); }
static int IS_PHYSINST_READY(int pram0) { return Invoke<0xE83E6A41, int>(pram0); }
static void SET_PROP_FIXED(int pram0, int pram1) { Invoke<0x7DBB277A, void>(pram0, pram1); }
static int IS_ACTOR_JUMPING(int pram0) { return Invoke<0xDFF96719, int>(pram0); }
static int IS_ACTOR_USING_COVER(int pram0) { return Invoke<0xD39C4A9E, int>(pram0); }
static int GET_PLAYER_ZOOM_STATE(int pram0) { return Invoke<0xBC521A38, int>(pram0); }
static int UNK_0x8C7E41E2(int pram0, int pram1) { return Invoke<0x8C7E41E2, int>(pram0, pram1); }
static int GET_EVENT_TYPE(int pram0) { return Invoke<0x6D660453, int>(pram0); }
static int UNK_0x7EB1ED99(int pram0) { return Invoke<0x7EB1ED99, int>(pram0); }
static void UI_ANIM_SETUP(int pram0, int pram1, int pram2, int pram3) { Invoke<0xCBDE38C6, void>(pram0, pram1, pram2, pram3); }
static void UI_ANIM_RESTART(int pram0) { Invoke<0x4068D2E4, void>(pram0); }
static int UNK_0xFF65A07C() { return Invoke<0xFF65A07C, int>(); }
static int SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xD52A28F0, int>(pram0, pram1, pram2, pram3); }
static void SCALE_VOLUME(int pram0, int pram1) { Invoke<0x14DCF1EF, void>(pram0, pram1); }
static int UNK_0x860FCDBD() { return Invoke<0x860FCDBD, int>(); }
static int UNK_0x0D0A66B6(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x0D0A66B6, int>(pram0, pram1, pram2, pram3); }
static int LINK_OBJECT_ANIMATOR_TO_ACTOR(int pram0, int pram1, int pram2) { return Invoke<0xBEDB066C, int>(pram0, pram1, pram2); }
static void ADD_CAMERA_COLLISION_EXCLUSION(int pram0, int pram1, int pram2) { Invoke<0x5BBFA4D7, void>(pram0, pram1, pram2); }
static void PRINT_SMALL_FORMAT(const char* _Text1, const char* _Text2, const char* _Text3, const char* _Text4, const char* _Text5, const char* _Text6, int _Unk0, bool _Unk1, int _Unk2) { Invoke<0xBBBDFF7C, void>(_Text1, _Text2, _Text3, _Text4, _Text5, _Text6, _Unk0, _Unk1, _Unk2); }
static void _SET_ACTOR_INFINITE_AMMO(Actor _Actor, WeaponModel _WeaponModel, bool _Infinite) { Invoke<0x4FE2B586, void>(_Actor, _WeaponModel, _Infinite); }
static Layout GET_EVENT_LAYOUT() { return Invoke<0xD938B523, Layout>(); }
static int IS_EVENT_VALID(int pram0) { return Invoke<0x4911EB99, int>(pram0); }
static int UNK_0xB64DDA6F(int pram0) { return Invoke<0xB64DDA6F, int>(pram0); }
static int TRAIN_CREATE_NEW_TRAIN(int pram0, int pram1, int pram2) { return Invoke<0x8533AC9D, int>(pram0, pram1, pram2); }
static void UNK_0xA7A672FA(int pram0, int pram1) { Invoke<0xA7A672FA, void>(pram0, pram1); }
static int TRAIN_GET_CAR(int pram0, int pram1) { return Invoke<0x41EF2EED, int>(pram0, pram1); }
static int CREATE_WORLD_SECTOR(int pram0, int pram1) { return Invoke<0xC94CC336, int>(pram0, pram1); }
static int UNK_0xC5E372BC(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xC5E372BC, int>(pram0, pram1, pram2, pram3); }
static void UNK_0xD4A54348(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD4A54348, void>(pram0, pram1, pram2, pram3); }
static int SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x5F4DEC49, int>(pram0, pram1, pram2, pram3, pram4); }
static void TASK_GO_NEAR_ACTORSET(int pram0, int pram1, int pram2, int pram3) { Invoke<0xF7B01E74, void>(pram0, pram1, pram2, pram3); }
static int UNK_0xA9F5CDCB(int pram0) { return Invoke<0xA9F5CDCB, int>(pram0); }
static void TRAIN_ENABLE_VISUAL_DEBUG(int pram0) { Invoke<0x4DF9283F, void>(pram0); }
static void DESTROY_LAYOUT_OBJECTS(int pram0) { Invoke<0x28A2A4CC, void>(pram0); }
static void UI_HIDE(const char* uiLayer) { Invoke<0x7508E7F3, void>(uiLayer); }
static void UI_SHOW(const char* uiLayer) { Invoke<0xD1D1D467, void>(uiLayer); }
static void UNK_0xB3FC8CB7(int pram0, int pram1) { Invoke<0xB3FC8CB7, void>(pram0, pram1); }
static void UNK_0x5AEA32D1(int pram0, int pram1) { Invoke<0x5AEA32D1, void>(pram0, pram1); }
static void UNK_0x175BE678(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x175BE678, void>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0xB4D9B233(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0xB4D9B233, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void SQUAD_FLOCK_ADD_EXTERNAL_VELOCITY_MATCH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xE8B7AA08, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x895AA97B, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(int pram0, int pram1, int pram2) { Invoke<0x6770774F, void>(pram0, pram1, pram2); }
static int UNK_0x142D9F3A(int pram0, int pram1) { return Invoke<0x142D9F3A, int>(pram0, pram1); }
static int UNK_0xBD374C00(int pram0) { return Invoke<0xBD374C00, int>(pram0); }
static void GET_PATH_POINT(int pram0, int pram1, int pram2) { Invoke<0x415F635C, void>(pram0, pram1, pram2); }
static void AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(int pram0, int pram1) { Invoke<0x29D07F70, void>(pram0, pram1); }
static void SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x224CFE5B, void>(pram0, pram1, pram2, pram3, pram4); }
static void GATEWAY_SET_ACTOR(int pram0, int pram1) { Invoke<0x26D24123, void>(pram0, pram1); }
static void GRINGO_ENABLE_TYPE(int pram0) { Invoke<0xCB58D301, void>(pram0); }
static void TRAIN_RELEASE_TRAIN(int pram0, int pram1) { Invoke<0x87082991, void>(pram0, pram1); }
static void TRAIN_DESTROY_TRAIN(int pram0) { Invoke<0x74CECEB3, void>(pram0); }
static int TRAIN_GET_NUM_CARS(int pram0) { return Invoke<0xFB2F9989, int>(pram0); }
static int UNK_0x138F38AC(int pram0) { return Invoke<0x138F38AC, int>(pram0); }
static void TASK_POINT_GUN_AT_COORD(int pram0, int pram1, int pram2) { Invoke<0xAD3729AD, void>(pram0, pram1, pram2); }
static int ACTOR_HAS_ANIM_SET(int pram0, int pram1) { return Invoke<0x31F5F57D, int>(pram0, pram1); }
static void CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int pram0, int pram1) { Invoke<0xEF639583, void>(pram0, pram1); }
static int GET_ACTOR_STUCK_STATE(int pram0) { return Invoke<0x7B4F9EAC, int>(pram0); }
static void UNK_0xD95C01D2(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD95C01D2, void>(pram0, pram1, pram2, pram3); }
static void UNK_0xE79F6CD4(int pram0, int pram1) { Invoke<0xE79F6CD4, void>(pram0, pram1); }
static void SET_PLAYER_CONTROL_CONFIG(int pram0, int pram1) { Invoke<0x01B84BCA, void>(pram0, pram1); }
static void SET_FORCE_PLAYER_AIM_MODE(int pram0, int pram1) { Invoke<0x1CFAF2EA, void>(pram0, pram1); }
static void UNK_0xB6CA7EBF(int pram0) { Invoke<0xB6CA7EBF, void>(pram0); }
static void UNK_0x160E79C6(int pram0, int pram1) { Invoke<0x160E79C6, void>(pram0, pram1); }
static void UNK_0x6E946AF8(int pram0) { Invoke<0x6E946AF8, void>(pram0); }
static int UNK_0xF9CC7F63(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xF9CC7F63, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void UI_SUPPRESS(char* uiLayer) { Invoke<0x182EC44A, void>(uiLayer); }
static int UNK_0x42A4CCD5(int pram0) { return Invoke<0x42A4CCD5, int>(pram0); }
static void GRINGO_DISABLE_TYPE(int pram0) { Invoke<0xCB91CC6E, void>(pram0); }
static void UNK_0xFD759593(int pram0, int pram1) { Invoke<0xFD759593, void>(pram0, pram1); }
static void SET_BOAT_EXTRA_STEER(int pram0, int pram1) { Invoke<0x6BB8BCFB, void>(pram0, pram1); }
static void UNK_0x44930268(int pram0, int pram1) { Invoke<0x44930268, void>(pram0, pram1); }
static void UNK_0x4FCE7B9D(int pram0) { Invoke<0x4FCE7B9D, void>(pram0); }
static void UNK_0xDD0320CB() { Invoke<0xDD0320CB, void>(); }
static void SET_DAMAGE_SCALE_ENABLE(int pram0, int pram1) { Invoke<0xDA0CDC91, void>(pram0, pram1); }
static void TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(int pram0, int pram1) { Invoke<0x96F3BD31, void>(pram0, pram1); }
static void UNK_0x0753A098(int pram0, int pram1) { Invoke<0x0753A098, void>(pram0, pram1); }
static void SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int pram0, int pram1, int pram2) { Invoke<0xBC44D31D, void>(pram0, pram1, pram2); }
static void SET_VEHICLE_EJECTION_ENABLED(int pram0, int pram1) { Invoke<0x0ABD83C0, void>(pram0, pram1); }
static void UNK_0x2B8F86ED(int pram0) { Invoke<0x2B8F86ED, void>(pram0); }
static int UNK_0x794F5C21(int pram0) { return Invoke<0x794F5C21, int>(pram0); }
static int UNK_0xC673362C(int pram0, int pram1) { return Invoke<0xC673362C, int>(pram0, pram1); }
static int UNK_0xC09ACD5C(int pram0) { return Invoke<0xC09ACD5C, int>(pram0); }
static int UNK_0x95A543E2(int pram0) { return Invoke<0x95A543E2, int>(pram0); }
static void UNK_0xBD42097A(int pram0) { Invoke<0xBD42097A, void>(pram0); }
static int UNK_0xFD355ED1(const char* pram0, int pram1) { return Invoke<0xFD355ED1, int>(pram0, pram1); }
static int UNK_0x805AC16A(int pram0, int pram1) { return Invoke<0x805AC16A, int>(pram0, pram1); }
static void UNK_0x67031EDA() { Invoke<0x67031EDA, void>(); }
static void UNK_0xD6111569(int pram0) { Invoke<0xD6111569, void>(pram0); }
static void UNK_0x0AAE9E6B(int pram0) { Invoke<0x0AAE9E6B, void>(pram0); }
static int UNK_0x4F652A00() { return Invoke<0x4F652A00, int>(); }
static int UNK_0xFC564903() { return Invoke<0xFC564903, int>(); }
static void UNK_0xD7572C68(int pram0) { Invoke<0xD7572C68, void>(pram0); }
static int UNK_0x76F09F04() { return Invoke<0x76F09F04, int>(); }
static void UNK_0x87A3A38D(int pram0) { Invoke<0x87A3A38D, void>(pram0); }
static int UNK_0xEC6F465F(int pram0, int pram1) { return Invoke<0xEC6F465F, int>(pram0, pram1); }
static void UNK_0x98FC68AF(int pram0) { Invoke<0x98FC68AF, void>(pram0); }
static void _UI_DISABLE(bool disable) { Invoke<0xA56B459C, void>(disable); }
static void UNK_0x20B684AB(int pram0) { Invoke<0x20B684AB, void>(pram0); }
static void UNK_0xFA382FCB(int pram0, int pram1) { Invoke<0xFA382FCB, void>(pram0, pram1); }
static void UNK_0x0547A660(int pram0) { Invoke<0x0547A660, void>(pram0); }
static void UNK_0xCF065186(const char* pram0) { Invoke<0xCF065186, void>(pram0); }
static void UNK_0xBE7965C8(int pram0) { Invoke<0xBE7965C8, void>(pram0); }
static void UNK_0xD4C7E0D5(int pram0) { Invoke<0xD4C7E0D5, void>(pram0); }
static float _GET_FRAME_TIME() { return Invoke<0x59466B4D, float>(); }
static int PLAY_SOUND_FROM_OBJECT(int pram0, int pram1) { return Invoke<0x6A515A49, int>(pram0, pram1); }
static void RELEASE_SOUND_ID(int pram0) { Invoke<0x9C080899, void>(pram0); }
static int UNK_0xADF7D54B(int pram0) { return Invoke<0xADF7D54B, int>(pram0); }
static Object CREATE_MP_TEXT(Object Prop, const char* UnkNullStr, const char* GXTTextToDisplay, Vector3 Position, Vector3 Rotation, bool MaybeIsStringLiteral) { return Invoke<0x5BF5A39C, Object>(Prop, UnkNullStr, GXTTextToDisplay, Position, Rotation, MaybeIsStringLiteral); }
static int UNK_0xE8739A48(int pram0) { return Invoke<0xE8739A48, int>(pram0); }
static void UNK_0x1F9EE9E1(int pram0, int pram1, int pram2, int pram3) { Invoke<0x1F9EE9E1, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x6AFF3122(int pram0) { return Invoke<0x6AFF3122, int>(pram0); }
static void UNK_0x1904CC1D(int pram0, int pram1, int pram2, int pram3) { Invoke<0x1904CC1D, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x08D06543(int pram0) { Invoke<0x08D06543, void>(pram0); }
static void SET_SECTOR_PROPS_SUPER_LOCKED(int pram0, int pram1) { Invoke<0xED3ADF67, void>(pram0, pram1); }
static void UNK_0x84CD0651(int pram0, int pram1, int pram2) { Invoke<0x84CD0651, void>(pram0, pram1, pram2); }
static int UNK_0x0AFC0B99() { return Invoke<0x0AFC0B99, int>(); }
static int IS_DOOR_CLOSING(int pram0) { return Invoke<0xCBA9F32C, int>(pram0); }
static int IS_DOOR_CLOSED(int pram0) { return Invoke<0x48659CD7, int>(pram0); }
static int IS_DOOR_OPENING(int pram0) { return Invoke<0x52BB0836, int>(pram0); }
static void CLOSE_DOOR(int pram0, int pram1) { Invoke<0x075B1736, void>(pram0, pram1); }
static void UNK_0x7CFD539A(int pram0, int pram1, int pram2) { Invoke<0x7CFD539A, void>(pram0, pram1, pram2); }
static int UNK_0xE92C3435(int pram0) { return Invoke<0xE92C3435, int>(pram0); }
static void UNK_0x591339B9(const char* ui_id, const char* new_text) { Invoke<0x591339B9, void>(ui_id, new_text); }
static void TOGGLE_JOURNAL_UI(int pram0, int pram1) { Invoke<0xE6726EF4, void>(pram0, pram1); }
static void UNK_0xB1B643E0(int pram0) { Invoke<0xB1B643E0, void>(pram0); }
static void UNK_0xA0AE0C98(int pram0, int pram1) { Invoke<0xA0AE0C98, void>(pram0, pram1); }
static void UNK_0x48123591(int pram0) { Invoke<0x48123591, void>(pram0); }
static void UNK_0xC741F051(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0xC741F051, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0xD291A820(int pram0) { Invoke<0xD291A820, void>(pram0); }
static void UNK_0xCE5CCF2E(int pram0, int pram1) { Invoke<0xCE5CCF2E, void>(pram0, pram1); }
static int UNK_0xC589CD7D() { return Invoke<0xC589CD7D, int>(); }
static void UNK_0xB0B4296A() { Invoke<0xB0B4296A, void>(); }
static void UNK_0x8A1D83F2() { Invoke<0x8A1D83F2, void>(); }
static int UNK_0x44C07DA5(int pram0) { return Invoke<0x44C07DA5, int>(pram0); }
static int UNK_0x69BE2817(int pram0) { return Invoke<0x69BE2817, int>(pram0); }
static int UNK_0xD8C8BEA1(int pram0) { return Invoke<0xD8C8BEA1, int>(pram0); }
static int UNK_0x679C5955(int pram0) { return Invoke<0x679C5955, int>(pram0); }
static int GET_OBJECT_NAMED_BONE_ORIENTATION(int pram0, int pram1, int pram2) { return Invoke<0xCAD543AD, int>(pram0, pram1, pram2); }
static int UNK_0x8BD88B43() { return Invoke<0x8BD88B43, int>(); }
static float _GET_TIME_SINCE_LAST_INPUT() { return Invoke<0xFDDB1BFA, float>(); }
static int UNK_0x1C7C0F86(int pram0, int pram1, int pram2) { return Invoke<0x1C7C0F86, int>(pram0, pram1, pram2); }
static int UNK_0x836F42DA(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x836F42DA, int>(pram0, pram1, pram2, pram3); }
static void INIT_CAMERA_FROM_CHANNEL(int pram0, int pram1) { Invoke<0x41EA7325, void>(pram0, pram1); }
static int UNK_0x85049505(int pram0, int pram1) { return Invoke<0x85049505, int>(pram0, pram1); }
static void UNK_0x9A56C3F3(int pram0, int pram1) { Invoke<0x9A56C3F3, void>(pram0, pram1); }
static int UNK_0xD9965A9A() { return Invoke<0xD9965A9A, int>(); }
static void UNK_0x4585821E(int pram0, int pram1, int pram2, int pram3) { Invoke<0x4585821E, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x4238C471() { Invoke<0x4238C471, void>(); }
static void SET_BLIP_VISIBLE(Blip _Blip, bool _Visible) { Invoke<0x9318D3D2, void>(_Blip, _Visible); }
static bool IS_BUTTON_RELEASED(Controller Controller, Button Button, int Unk1, int Unk0) { return Invoke<0xB04EB731, bool>(Controller, Button, Unk1, Unk0); }
static void UNK_0x408E28E2(int pram0) { Invoke<0x408E28E2, void>(pram0); }
static int NET_IS_PLAYER_PARTICIPANT(int pram0) { return Invoke<0x110A9B2F, int>(pram0); }
static void SET_FACTION_IS_LAWFUL_TO_ATTACK(int pram0, int pram1) { Invoke<0xDCB960C5, void>(pram0, pram1); }
static void MARK_REGION_READY(int pram0) { Invoke<0x276A420B, void>(pram0); }
static void TASK_ANIMAL_PATROL(int pram0, int pram1) { Invoke<0xF54E4D45, void>(pram0, pram1); }
static void UNK_0x27A00456(int pram0) { Invoke<0x27A00456, void>(pram0); }
static void UNK_0x5C4CAE3A(int pram0) { Invoke<0x5C4CAE3A, void>(pram0); }
static int NET_GET_HOST_OF_THIS_SCRIPT() { return Invoke<0x9272C3BA, int>(); }
static int UNK_0xB6006EA9(int pram0) { return Invoke<0xB6006EA9, int>(pram0); }
static int NET_GET_SCRIPT_STATUS() { return Invoke<0x667DA125, int>(); }
static void NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(int pram0) { Invoke<0xEE3B79EE, void>(pram0); }
static void UNK_0x4897DD37(int pram0) { Invoke<0x4897DD37, void>(pram0); }
static int UNK_0xE1D265FA(int pram0) { return Invoke<0xE1D265FA, int>(pram0); }
static void REMOVE_ALL_PICKUPS() { Invoke<0x04BF00F0, void>(); }
static int GET_SOUND_ID() { return Invoke<0x6AE0AD56, int>(); }
static void UNK_0xB157BBB4(int pram0, int pram1) { Invoke<0xB157BBB4, void>(pram0, pram1); }
static void AT_FIRED_LAST(int pram0, int pram1, int pram2) { Invoke<0x013A0D25, void>(pram0, pram1, pram2); }
static void UNK_0x1182C34F(int pram0) { Invoke<0x1182C34F, void>(pram0); }
static void UNK_0xD0FB6AF0(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD0FB6AF0, void>(pram0, pram1, pram2, pram3); }
static void UNK_0xDF50D8DE(int pram0, int pram1) { Invoke<0xDF50D8DE, void>(pram0, pram1); }
static int FLASH_SET_INT(const char* scaleformName, const char* scaleformVarName, int value) { return Invoke<0x4778A580, int>(scaleformName, scaleformVarName, value); }
static int UNK_0x554CF528(int pram0) { return Invoke<0x554CF528, int>(pram0); }
static int SET_OBJECT_ANIMATOR_NODE(int pram0, int pram1) { return Invoke<0xB9D7B63B, int>(pram0, pram1); }
static void UNK_0xC00F8181(int pram0) { Invoke<0xC00F8181, void>(pram0); }
static int CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(int pram0) { return Invoke<0x0A776763, int>(pram0); }
static int UNK_0x28DAED2A(int pram0) { return Invoke<0x28DAED2A, int>(pram0); }
static int UNK_0xD4DEBC08(int pram0) { return Invoke<0xD4DEBC08, int>(pram0); }
static void END_SCRIPTED_REQUEST(int pram0) { Invoke<0x1958F478, void>(pram0); }
static void UNK_0xE783219A(int pram0) { Invoke<0xE783219A, void>(pram0); }
static void UNK_0x6AF07F86(int pram0) { Invoke<0x6AF07F86, void>(pram0); }
static void UNK_0xCE7CE46D(int pram0, int pram1) { Invoke<0xCE7CE46D, void>(pram0, pram1); }
static void UNK_0xEA2B35DB() { Invoke<0xEA2B35DB, void>(); }
static void UI_HIDE_PROMPT(int pram0) { Invoke<0x545EC471, void>(pram0); }
static void UNK_0x5C7F63E3(int pram0) { Invoke<0x5C7F63E3, void>(pram0); }
static void SET_AUTO_CONVERSATION_LOOK(int pram0, int pram1) { Invoke<0xA29B9458, void>(pram0, pram1); }
static int UNK_0xECD4F604(int pram0, int pram1) { return Invoke<0xECD4F604, int>(pram0, pram1); }
static int UNK_0xDD807723(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xDD807723, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xAD313D88(int pram0, int pram1) { return Invoke<0xAD313D88, int>(pram0, pram1); }
static int UNK_0x9AD6D5B1(int pram0, int pram1) { return Invoke<0x9AD6D5B1, int>(pram0, pram1); }
static int IS_PROCESSING_CAMERA_SHOT_TRANSITION(int pram0) { return Invoke<0xDDB64AA9, int>(pram0); }
static void END_CURRENT_CAMERA_SHOT_TRANSITION(int pram0) { Invoke<0x01C1F583, void>(pram0); }
static void UNK_0x7D95325E() { Invoke<0x7D95325E, void>(); }
static int CREATE_OBJECT_LOCATOR(int pram0, int pram1) { return Invoke<0x11069324, int>(pram0, pram1); }
static int UNK_0xE25F407D(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xE25F407D, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void UNK_0x8FB32562(int pram0) { Invoke<0x8FB32562, void>(pram0); }
static float GET_ANALOG_BUTTON_VALUE(Controller Controller, Button Analog, bool Unk1) { return Invoke<0x23C9C74A, float>(Controller, Analog, Unk1); }
static void UNK_0x77D6ABF5(int pram0, int pram1) { Invoke<0x77D6ABF5, void>(pram0, pram1); }
static int CAMERA_GET_CURRENT_TRANSITION_TYPE(int pram0) { return Invoke<0xE55B5ADB, int>(pram0); }
static void UI_SET_PROMPT_STRING(int pram0, int pram1) { Invoke<0xFA0CF208, void>(pram0, pram1); }
static int UNK_0xE39B92B7(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0xE39B92B7, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void UI_SET_PROMPT_ICON(int pram0, int pram1) { Invoke<0xA77E0DDF, void>(pram0, pram1); }
static int UNK_0x0627DDEC(int pram0, int pram1) { return Invoke<0x0627DDEC, int>(pram0, pram1); }
static int UNK_0x9BC05C90(int pram0, int pram1) { return Invoke<0x9BC05C90, int>(pram0, pram1); }
static int SET_PANIM_PHASE(int pram0, int pram1) { return Invoke<0x94431F5A, int>(pram0, pram1); }
static int FLASH_SET_STRING(const char* scaleformName, const char* scaleformVarName, int pram2, int pram3) { return Invoke<0x9E31EEA7, int>(scaleformName, scaleformVarName, pram2, pram3); }
static int UNK_0x54A417F3(int pram0, int pram1) { return Invoke<0x54A417F3, int>(pram0, pram1); }
static void SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(int pram0, int pram1) { Invoke<0xEF0AB304, void>(pram0, pram1); }
static int ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x6E10E587, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(int pram0, int pram1, int pram2) { return Invoke<0xBF9B4FC6, int>(pram0, pram1, pram2); }
static int UNK_0x31940E4C(int pram0, int pram1) { return Invoke<0x31940E4C, int>(pram0, pram1); }
static void HIDE_PHYSINST(int pram0) { Invoke<0x0D6BFDD9, void>(pram0); }
static int UNK_0xD12802AF(int pram0) { return Invoke<0xD12802AF, int>(pram0); }
static void UNK_0xB3C3FF5E() { Invoke<0xB3C3FF5E, void>(); }
static int UNK_0x64C2DD40(int pram0, int pram1) { return Invoke<0x64C2DD40, int>(pram0, pram1); }
static int UNK_0x0D914C89() { return Invoke<0x0D914C89, int>(); }
static int UNK_0x9B903F45(int pram0) { return Invoke<0x9B903F45, int>(pram0); }
static void UNK_0xCF1B9B11(int pram0, int pram1) { Invoke<0xCF1B9B11, void>(pram0, pram1); }
static int NET_IS_POSSE_LEADER() { return Invoke<0x1CAD6D29, int>(); }
static int NET_GET_POSSE_COUNT() { return Invoke<0xC4F9DA6E, int>(); }
static void END_CURRENT_MINIGAME() { Invoke<0xCA746CD2, void>(); }
static void START_MINIGAME(int pram0) { Invoke<0xE8184916, void>(pram0); }
static int IS_LOCAL_PLAYER(int pram0) { return Invoke<0x40EF1003, int>(pram0); }
static bool UNK_0x554FC5E0() { return Invoke<0x554FC5E0, bool>(); }
static void UNK_0x1EEE7494(int pram0, int pram1) { Invoke<0x1EEE7494, void>(pram0, pram1); }
static void SET_ACTOR_ALLOW_DISMOUNT(int pram0, int pram1) { Invoke<0xC550644A, void>(pram0, pram1); }
static void UI_DEACTIVATE(const char* pram0) { Invoke<0xCA35BB5E, void>(pram0); }
static int UNK_0x1A59E608(int pram0) { return Invoke<0x1A59E608, int>(pram0); }
static void UNK_0xA3AE09EF() { Invoke<0xA3AE09EF, void>(); }
static void UNK_0x27D40FD1(int pram0, int pram1, int pram2) { Invoke<0x27D40FD1, void>(pram0, pram1, pram2); }
static void UNK_0xB4C867BD(int pram0, int pram1, int pram2, int pram3) { Invoke<0xB4C867BD, void>(pram0, pram1, pram2, pram3); }
static bool IS_ACTOR_SHOOTING(Actor Actor) { return Invoke<0x4B441DC4, bool>(Actor); }
static int IS_ACTOR_THROWING(int pram0) { return Invoke<0x886BD8AD, int>(pram0); }
static void SET_EQUIP_SLOT_ENABLED(int pram0, int pram1, int pram2) { Invoke<0xE6604B39, void>(pram0, pram1, pram2); }
static int COPY_VOLUME(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x122C916E, int>(pram0, pram1, pram2, pram3); }
static int OBJECT_ITERATOR_PREV(int pram0) { return Invoke<0x91A3A831, int>(pram0); }
static int UNK_0x276EFF8E(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x276EFF8E, int>(pram0, pram1, pram2, pram3); }
static void UNK_0xD792B93B(int pram0, int pram1) { Invoke<0xD792B93B, void>(pram0, pram1); }
static void SET_CAMERA_TARGETDOF_USING_SOFT_DOF(int pram0, int pram1, int pram2) { Invoke<0x7F1C5102, void>(pram0, pram1, pram2); }
static void UNK_0x0AA5D947(int pram0, int pram1) { Invoke<0x0AA5D947, void>(pram0, pram1); }
static void ACTOR_DISCARD_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel) { Invoke<0xEEC81873, void>(_Actor, _WeaponModel); }
static int UNK_0x4A8066FB() { return Invoke<0x4A8066FB, int>(); }
static void UNK_0xBEDF7AA8() { Invoke<0xBEDF7AA8, void>(); }
static int SS_REGISTER(int pram0, int pram1, int pram2) { return Invoke<0xFD717A47, int>(pram0, pram1, pram2); }
static void UNK_0xEC1E8210() { Invoke<0xEC1E8210, void>(); }
static void UNK_0x06B4A139(int pram0) { Invoke<0x06B4A139, void>(pram0); }
static void UNK_0x22424394(int pram0, int pram1) { Invoke<0x22424394, void>(pram0, pram1); }
static void UNK_0x83E043A6() { Invoke<0x83E043A6, void>(); }
static void UNK_0x03CD9C87(int pram0, int pram1) { Invoke<0x03CD9C87, void>(pram0, pram1); }
static void UNK_0x39F5EF0F(int pram0, int pram1) { Invoke<0x39F5EF0F, void>(pram0, pram1); }
static void UNK_0xD6CC6907(int pram0, int pram1) { Invoke<0xD6CC6907, void>(pram0, pram1); }
static void UNK_0x9D886C2F(int pram0, int pram1) { Invoke<0x9D886C2F, void>(pram0, pram1); }
static void UNK_0x714D5D09(int pram0, int pram1) { Invoke<0x714D5D09, void>(pram0, pram1); }
static void UNK_0xBF959948(int pram0) { Invoke<0xBF959948, void>(pram0); }
static void UNK_0x3C163FDD(int pram0) { Invoke<0x3C163FDD, void>(pram0); }
static void UNK_0x67770F4B(int pram0, int pram1, int pram2, int pram3) { Invoke<0x67770F4B, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_BOOL(int pram0, int pram1, int pram2, int pram3) { Invoke<0x651ACCB1, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x20AD711E, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_FLOCK_SET_PARAMETER(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xBF12100D, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_REL_SET_PREDATOR_AND_PREY(int pram0, int pram1) { Invoke<0x84B474ED, void>(pram0, pram1); }
static void ANIMAL_SPECIES_FLOCK_SET_BOOLEAN_PARAMETER(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x7C795382, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_FLOCK_SET_ENABLED(int pram0, int pram1, int pram2, int pram3) { Invoke<0x4DF576A7, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_TUNING_MOVE_SET_ATTRIB(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x10CC05F1, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_INIT_BEGIN(int pram0) { Invoke<0xE228CC1A, void>(pram0); }
static void ANIMAL_SPECIES_INIT_REGISTER(int pram0, int pram1) { Invoke<0xED6240F0, void>(pram0, pram1); }
static void ANIMAL_SPECIES_INIT_END() { Invoke<0x00760C27, void>(); }
static void ANIMAL_SPECIES_FLOCK_AND_TUNING_CLEAR_ALL() { Invoke<0x5EFB415E, void>(); }
static void ANIMAL_SPECIES_REL_CLEAR_ALL() { Invoke<0x98073A48, void>(); }
static void ANIMAL_SPECIES_TUNING_SET_ATTACHMENT_WITH_OFFSET(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0xA6A4651B, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void ANIMAL_SPECIES_REL_SET_EAT_GRINGO(int pram0, int pram1, int pram2) { Invoke<0xB5A63B67, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_CAN_WARN(int pram0, int pram1, int pram2) { Invoke<0x0482DD4E, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_THREAT(int pram0, int pram1, int pram2) { Invoke<0x9D5C43C9, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_ADD_EXTERNAL_INFLUENCE_FLOCK_REASONER(int pram0, int pram1) { Invoke<0x9D8C2744, void>(pram0, pram1); }
static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT_FROM_TIME(int pram0, int pram1, int pram2, int pram3) { Invoke<0x96B26945, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_ADD_EXTERNAL_REPULSION(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x4217D912, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_REL_SET_AVOID(int pram0, int pram1, int pram2) { Invoke<0xBF8B1BD7, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_ADD_EXTERNAL_RANDOM_NOISE(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x784C514C, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_SET_SPECIAL_USE_GRINGO(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x11DCCDAA, void>(pram0, pram1, pram2, pram3, pram4); }
static void ANIMAL_SPECIES_TUNING_SET_HUNTING_PREY_PROP(int pram0, int pram1) { Invoke<0xD05DDBB6, void>(pram0, pram1); }
static void ANIMAL_SPECIES_REL_SET_ATTACK_GRAB_ENABLED(int pram0, int pram1, int pram2) { Invoke<0x1E02527F, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_PLAY_GROWL(int pram0, int pram1, int pram2) { Invoke<0x70DE500E, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_PLAY_SNIFF(int pram0, int pram1, int pram2) { Invoke<0x6606A669, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_PLAY_HUNT(int pram0, int pram1, int pram2) { Invoke<0x3F747178, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_PLAY_CHASE(int pram0, int pram1, int pram2) { Invoke<0x586904BD, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_REL_SET_PLAY_BEG(int pram0, int pram1, int pram2) { Invoke<0x70C48A1C, void>(pram0, pram1, pram2); }
static void ANIMAL_SPECIES_SET_UNALERTED_BEHAVIOR(int pram0, int pram1, int pram2, int pram3) { Invoke<0x6B6191EE, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_TUNING_SET_ATTACHMENT_WITH_CHILDBONE(int pram0, int pram1, int pram2, int pram3) { Invoke<0x168AAB9B, void>(pram0, pram1, pram2, pram3); }
static void ANIMAL_SPECIES_NEEDS_DOMESTICATION_LEVELS(int pram0) { Invoke<0x1FD8BA91, void>(pram0); }
static void UNK_0x1957B498(int pram0, int pram1, int pram2, int pram3) { Invoke<0x1957B498, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x88FD9623(int pram0, int pram1, int pram2, int pram3) { Invoke<0x88FD9623, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x192973A0(int pram0, int pram1, int pram2, int pram3) { Invoke<0x192973A0, void>(pram0, pram1, pram2, pram3); }
static void SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(int pram0, int pram1, int pram2) { Invoke<0x463F75F8, void>(pram0, pram1, pram2); }
static void UNK_0xAD3877AF(int pram0) { Invoke<0xAD3877AF, void>(pram0); }
static void RELOAD_FACTIONS(int pram0) { Invoke<0x40ABFD17, void>(pram0); }
static void UNK_0x0079FD0F() { Invoke<0x0079FD0F, void>(); }
static void SET_VEHICLE_APPOINTMENT_TARGET() { Invoke<0xDCAE6935, void>(); }
static void UNK_0xF4641CF4(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xF4641CF4, void>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x4BCFADB1(int pram0, int pram1) { return Invoke<0x4BCFADB1, int>(pram0, pram1); }
static void UNK_0xF435CCDE(int pram0) { Invoke<0xF435CCDE, void>(pram0); }
static void UNK_0x39EF8DA7() { Invoke<0x39EF8DA7, void>(); }
static void UNK_0x8BE2D8B0(int pram0) { Invoke<0x8BE2D8B0, void>(pram0); }
static void UNK_0x724B4E9B(int pram0, int pram1) { Invoke<0x724B4E9B, void>(pram0, pram1); }
static int REMOVE_ASSET(int pram0, int pram1) { return Invoke<0xE7829D28, int>(pram0, pram1); }
static void UNK_0x10BD98C9(int pram0, int pram1, int pram2, int pram3) { Invoke<0x10BD98C9, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x4D42E285(int pram0, int pram1, int pram2, int pram3) { Invoke<0x4D42E285, void>(pram0, pram1, pram2, pram3); }
static void UNK_0xE694F53A(int pram0, int pram1, int pram2, int pram3) { Invoke<0xE694F53A, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x82609DC7(int pram0, int pram1, int pram2) { Invoke<0x82609DC7, void>(pram0, pram1, pram2); }
static void UNK_0x628E3173(int pram0, int pram1, int pram2) { Invoke<0x628E3173, void>(pram0, pram1, pram2); }
static void UNK_0xA6C4E59F(int pram0, int pram1, int pram2) { Invoke<0xA6C4E59F, void>(pram0, pram1, pram2); }
static void UNK_0xEA06907B(int pram0, int pram1, int pram2) { Invoke<0xEA06907B, void>(pram0, pram1, pram2); }
static void UNK_0xA2597101(int pram0, int pram1, int pram2) { Invoke<0xA2597101, void>(pram0, pram1, pram2); }
static bool UNK_0x629E2E88() { return Invoke<0x629E2E88, bool>(); }
static int COMBAT_CLASS_REQUEST_GET_ACTOR() { return Invoke<0x0EDD5D43, int>(); }
static void COMBAT_CLASS_REQUEST_COMPLETED() { Invoke<0xE66AD206, void>(); }
static void SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(int pram0, int pram1) { Invoke<0xBAF9D599, void>(pram0, pram1); }
static void AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(int pram0, int pram1, int pram2) { Invoke<0x5D752432, void>(pram0, pram1, pram2); }
static void SET_ACTOR_SEX(int pram0, int pram1) { Invoke<0x9C42B7A2, void>(pram0, pram1); }
static void UNK_0x4D53AC21(int pram0, int pram1) { Invoke<0x4D53AC21, void>(pram0, pram1); }
static void UNK_0x12A86E9D(int pram0, int pram1) { Invoke<0x12A86E9D, void>(pram0, pram1); }
static void UNK_0x91220723(int pram0, int pram1, int pram2) { Invoke<0x91220723, void>(pram0, pram1, pram2); }
static void UNK_0x5613615B(int pram0, int pram1) { Invoke<0x5613615B, void>(pram0, pram1); }
static int UNK_0x76478D6E() { return Invoke<0x76478D6E, int>(); }
static int UNK_0xA488E930(int pram0) { return Invoke<0xA488E930, int>(pram0); }
static void UNK_0x9679CF84(int pram0, int pram1) { Invoke<0x9679CF84, void>(pram0, pram1); }
static void UNK_0x39928706(int pram0, int pram1) { Invoke<0x39928706, void>(pram0, pram1); }
static int UNK_0x1EE7153B(int pram0, int pram1, int pram2) { return Invoke<0x1EE7153B, int>(pram0, pram1, pram2); }
static int UNK_0xA8F64D32(int pram0, int pram1) { return Invoke<0xA8F64D32, int>(pram0, pram1); }
static float ACTOR_GET_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x43DEDFAE, float>(_Actor, _WeaponModel); }
static void AI_SHOOT_TARGET_SET_BONE(int pram0, int pram1, int pram2) { Invoke<0x47C2C7B0, void>(pram0, pram1, pram2); }
static void TASK_USE_TURRET_AGAINST_OBJECT(int pram0, int pram1, int pram2, int pram3) { Invoke<0x49EC6A04, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x856C3A8A(int pram0, int pram1, int pram2) { Invoke<0x856C3A8A, void>(pram0, pram1, pram2); }
static int ANIMAL_ACTOR_GET_DOMESTICATION(int pram0) { return Invoke<0xCE23118D, int>(pram0); }
static int UNK_0x2A902148(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0x2A902148, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void AI_GLOBAL_CLEAR_DANGER(int pram0) { Invoke<0xB6FCFFAA, void>(pram0); }
static void UNK_0x468DDDB3(int pram0, int pram1) { Invoke<0x468DDDB3, void>(pram0, pram1); }
static int UNK_0x5DE07F18(int pram0) { return Invoke<0x5DE07F18, int>(pram0); }
static int SET_CURRENT_MAP(int pram0) { return Invoke<0x014C7C29, int>(pram0); }
static bool UNK_0xF62EE158() { return Invoke<0xF62EE158, bool>(); }
static void UNK_0x449D4A89(int pram0) { Invoke<0x449D4A89, void>(pram0); }
static int UNK_0xAEC955F8(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xAEC955F8, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x28FCBDF2(int pram0) { return Invoke<0x28FCBDF2, int>(pram0); }
static void ALLOW_TUMBLEWEEDS(int pram0) { Invoke<0xFDE8DFCE, void>(pram0); }
static void UI_SET_ICON(int pram0, int pram1) { Invoke<0x191BA4DF, void>(pram0, pram1); }
static void UNK_0xDF4627D1(int pram0, int pram1) { Invoke<0xDF4627D1, void>(pram0, pram1); }
static void UNK_0xDC330FB9(int pram0) { Invoke<0xDC330FB9, void>(pram0); }
static int UNK_0x9AC89564(int pram0, int pram1, int pram2) { return Invoke<0x9AC89564, int>(pram0, pram1, pram2); }
static bool UNK_0xA61FA36B() { return Invoke<0xA61FA36B, bool>(); }
static int UNK_0x1E81DB60(int pram0, int pram1, int pram2) { return Invoke<0x1E81DB60, int>(pram0, pram1, pram2); }
static void UNK_0x2F7CB0E3(int pram0, int pram1) { Invoke<0x2F7CB0E3, void>(pram0, pram1); }
static void UNK_0x955E5EEB(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x955E5EEB, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static void UNK_0x59A7835E() { Invoke<0x59A7835E, void>(); }
static int UNK_0x57FC0E16(int pram0) { return Invoke<0x57FC0E16, int>(pram0); }
static int IS_PHYSINST_IN_LEVEL(int pram0) { return Invoke<0x6243A6AF, int>(pram0); }
static int GET_JOURNAL_ENTRY_NUM_DETAILS(int pram0) { return Invoke<0xCF3A69FC, int>(pram0); }
static int GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(int pram0, int pram1) { return Invoke<0x1630EFC5, int>(pram0, pram1); }
static void UNK_0x5209C0C0(int pram0, int pram1, int pram2, int pram3) { Invoke<0x5209C0C0, void>(pram0, pram1, pram2, pram3); }
static void ENABLE_MOVER(Actor _Actor) { Invoke<0xE29F0A39, void>(_Actor); }
static int UNK_0x7246F438(int pram0) { return Invoke<0x7246F438, int>(pram0); }
static int UNK_0x6A0FE2A0(int pram0, int pram1) { return Invoke<0x6A0FE2A0, int>(pram0, pram1); }
static int UNK_0xAC5043C5() { return Invoke<0xAC5043C5, int>(); }
static void UNK_0x9E6CAD1D(int pram0, int pram1) { Invoke<0x9E6CAD1D, void>(pram0, pram1); }
static void SUSPEND_MOVER(Actor _Actor) { Invoke<0x017D270E, void>(_Actor); }
static void SET_CURVE_ACTIVE(int pram0, int pram1) { Invoke<0x74460602, void>(pram0, pram1); }
static void RELEASE_CONSTRAINT(int pram0) { Invoke<0x8B9659EF, void>(pram0); }
static void SET_BRIDGE_STIFFNESS(int pram0, int pram1) { Invoke<0x987FD4F6, void>(pram0, pram1); }
static int UNK_0x4A05AA7D(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x4A05AA7D, int>(pram0, pram1, pram2, pram3, pram4); }
static void SET_SLEEP_TOLERANCE(int pram0, int pram1) { Invoke<0x750ADBE5, void>(pram0, pram1); }
static int UNK_0xC039BBF1(int pram0, int pram1, int pram2) { return Invoke<0xC039BBF1, int>(pram0, pram1, pram2); }
static int UNK_0x51CF9A54(int pram0, int pram1, int pram2) { return Invoke<0x51CF9A54, int>(pram0, pram1, pram2); }
static bool GET_OBJECT_RELATIVE_OFFSET(Object _Object, Vector3* _Input, int _Unused, Vector3* _Output) { return Invoke<0x15CDF203, bool>(_Object, _Input, _Unused, _Output); }
static void UNK_0xBE17EB88(int pram0) { Invoke<0xBE17EB88, void>(pram0); }
static void UNK_0xABC78721(int pram0) { Invoke<0xABC78721, void>(pram0); }
static int GRINGO_QUERY_STRUCT(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x1528F08B, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xBBB2780E() { return Invoke<0xBBB2780E, int>(); }
static bool UNK_0xF4015EFC() { return Invoke<0xF4015EFC, bool>(); }
static bool IS_GRINGO_ACTIVE() { return Invoke<0x86F2C24D, bool>(); }
static bool UNK_0xF550F8E7() { return Invoke<0xF550F8E7, bool>(); }
static int UNK_0xCA589BAB() { return Invoke<0xCA589BAB, int>(); }
static int UNK_0x2F096285() { return Invoke<0x2F096285, int>(); }
static int UNK_0x54745DB0() { return Invoke<0x54745DB0, int>(); }
static int UNK_0xD62D413C(int pram0) { return Invoke<0xD62D413C, int>(pram0); }
static void GRINGO_ENABLE_PLAYER_CONTROL(int pram0, int pram1) { Invoke<0x0B853FD5, void>(pram0, pram1); }
static bool UNK_0x926FD361() { return Invoke<0x926FD361, bool>(); }
static void GRINGO_SET_MESSAGE_RETURN(int pram0) { Invoke<0x37D0F3E9, void>(pram0); }
static void GRINGO_WAIT(int pram0) { Invoke<0x738FA66B, void>(pram0); }
static void GRINGO_STOP() { Invoke<0x59647303, void>(); }
static int GRINGO_HANDLES_MOVEMENT(int pram0) { return Invoke<0xEDF3BF37, int>(pram0); }
static int SET_GRINGO_BOOL_ATTR(int pram0, int pram1, int pram2) { return Invoke<0xCF6822D7, int>(pram0, pram1, pram2); }
static Object GET_TARGET_OBJECT() { return Invoke<0x533AD3F2, Object>(); }
static void UNK_0x9A756A72(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x9A756A72, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static bool UNK_0x0A0E660E() { return Invoke<0x0A0E660E, bool>(); }
static int GET_GRINGO_BOOL_ATTR(int pram0, int pram1, int pram2) { return Invoke<0xFACF08C7, int>(pram0, pram1, pram2); }
static void UNK_0x89DE8A75(int pram0, int pram1) { Invoke<0x89DE8A75, void>(pram0, pram1); }
static int GET_GRINGO_STRING_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x6BA58AC7, int>(pram0, pram1, pram2); }
static int GET_GRINGO_FLOAT_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x2EFD2B55, int>(pram0, pram1, pram2); }
static void UNK_0x7284A71B(int pram0, int pram1) { Invoke<0x7284A71B, void>(pram0, pram1); }
static int UNK_0x5CFBF505(int pram0) { return Invoke<0x5CFBF505, int>(pram0); }
static int UNK_0x3A31175A(int pram0) { return Invoke<0x3A31175A, int>(pram0); }
static int UNK_0x6426CCD6(int pram0) { return Invoke<0x6426CCD6, int>(pram0); }
static int IS_GRINGO_COMPONENT_VALID(int pram0) { return Invoke<0xBD503DC2, int>(pram0); }
static int UNK_0xE18BCD70(int pram0, int pram1, int pram2) { return Invoke<0xE18BCD70, int>(pram0, pram1, pram2); }
static int UNK_0x4DB7C61C(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x4DB7C61C, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xA20141C0(int pram0) { return Invoke<0xA20141C0, int>(pram0); }
static int GRINGO_GET_ATTRIBUTE(int pram0, int pram1) { return Invoke<0x19411B1F, int>(pram0, pram1); }
static int GRINGO_GET_ATTRIBUTE_COUNT(int pram0) { return Invoke<0x39B7D772, int>(pram0); }
static int UNK_0xBED45A9A(int pram0) { return Invoke<0xBED45A9A, int>(pram0); }
static int UNK_0xBF322F5C(int pram0) { return Invoke<0xBF322F5C, int>(pram0); }
static int GRINGO_GET_ATTRIBUTE_HASH(int pram0) { return Invoke<0xD2680017, int>(pram0); }
static int UNK_0xD7BB1792(int pram0, int pram1) { return Invoke<0xD7BB1792, int>(pram0, pram1); }
static int UNK_0xD282013F(int pram0, int pram1) { return Invoke<0xD282013F, int>(pram0, pram1); }
static int IS_PROP_FIXED(int pram0) { return Invoke<0xBD2FFD8C, int>(pram0); }
static int UNK_0x663F1464(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x663F1464, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x4A1D2E25(int pram0) { return Invoke<0x4A1D2E25, int>(pram0); }
static int UNK_0x817B6952(int pram0) { return Invoke<0x817B6952, int>(pram0); }
static void UNK_0x53B9569C(int pram0, int pram1) { Invoke<0x53B9569C, void>(pram0, pram1); }
static int UNK_0x0912622D(int pram0) { return Invoke<0x0912622D, int>(pram0); }
static int NET_SET_NODE_REPLICATION(int pram0, int pram1, int pram2) { return Invoke<0xA4B5275C, int>(pram0, pram1, pram2); }
static int UNK_0xC17BAD12(int pram0) { return Invoke<0xC17BAD12, int>(pram0); }
static void SET_ANIMAL_CAN_ATTACK(int pram0, int pram1) { Invoke<0x2B403538, void>(pram0, pram1); }
static int UNK_0x35279C3F(int pram0, int pram1) { return Invoke<0x35279C3F, int>(pram0, pram1); }
static int UNK_0x5F516FC3(int pram0) { return Invoke<0x5F516FC3, int>(pram0); }
static void UNK_0xB62FE25C(int pram0, int pram1) { Invoke<0xB62FE25C, void>(pram0, pram1); }
static int AI_SPEECH_GET_ALLOW_FOR_ACTOR(int pram0) { return Invoke<0xFF0BF292, int>(pram0); }
static int UNK_0xE4C686BA(int pram0, int pram1, int pram2) { return Invoke<0xE4C686BA, int>(pram0, pram1, pram2); }
static int UNK_0xAE7B3880() { return Invoke<0xAE7B3880, int>(); }
static int UNK_0x600A0EE4(int pram0, int pram1) { return Invoke<0x600A0EE4, int>(pram0, pram1); }
static int UNK_0xAFF7D382(int pram0, int pram1, int pram2) { return Invoke<0xAFF7D382, int>(pram0, pram1, pram2); }
static int GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(int pram0) { return Invoke<0xB62D549E, int>(pram0); }
static void REPORT_GRINGO_USE_PHASE(int pram0, int pram1) { Invoke<0xA41B161C, void>(pram0, pram1); }
static int UNK_0xD3D8E8ED(int pram0, int pram1) { return Invoke<0xD3D8E8ED, int>(pram0, pram1); }
static void UNK_0x29AEB2DB(int pram0, int pram1) { Invoke<0x29AEB2DB, void>(pram0, pram1); }
static void UNK_0x6695E185(int pram0, int pram1) { Invoke<0x6695E185, void>(pram0, pram1); }
static int UNK_0x1D711058(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x1D711058, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x87BA5FE9(int pram0, int pram1) { return Invoke<0x87BA5FE9, int>(pram0, pram1); }
static int UNK_0x721FC9A4(int pram0) { return Invoke<0x721FC9A4, int>(pram0); }
static int UNK_0x6263F909(int pram0) { return Invoke<0x6263F909, int>(pram0); }
static int UNK_0x3E8F94BE(int pram0, int pram1) { return Invoke<0x3E8F94BE, int>(pram0, pram1); }
static int GRINGO_GET_PHYSINST(int pram0) { return Invoke<0x5EC1CABF, int>(pram0); }
static int UNK_0xB96874B4(int pram0) { return Invoke<0xB96874B4, int>(pram0); }
static int UNK_0x5B46757F(int pram0) { return Invoke<0x5B46757F, int>(pram0); }
static int UNK_0x15A0E28B(int pram0) { return Invoke<0x15A0E28B, int>(pram0); }
static int UNK_0x5AF74E19(int pram0, int pram1) { return Invoke<0x5AF74E19, int>(pram0, pram1); }
static int UNK_0x1F74EE6C(int pram0, int pram1, int pram2) { return Invoke<0x1F74EE6C, int>(pram0, pram1, pram2); }
static int UNK_0x405E3903(int pram0, int pram1) { return Invoke<0x405E3903, int>(pram0, pram1); }
static int UNK_0xEEE9C799(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0xEEE9C799, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int GET_GRINGO_VECTOR_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x5851C408, int>(pram0, pram1, pram2); }
static void UNK_0x026F7060(int pram0, int pram1, int pram2, int pram3) { Invoke<0x026F7060, void>(pram0, pram1, pram2, pram3); }
static int SET_GRINGO_VECTOR_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x5C6831F9, int>(pram0, pram1, pram2); }
static int SET_GRINGO_FLOAT_ATTR(int pram0, int pram1, int pram2) { return Invoke<0xBC3C401F, int>(pram0, pram1, pram2); }
static int GRINGO_ACTOR_MOVE_TO_AND_FACE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x0AF4FCB9, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static bool UNK_0xFF1FC1EF() { return Invoke<0xFF1FC1EF, bool>(); }
static int UNK_0x24BAABCA(int pram0) { return Invoke<0x24BAABCA, int>(pram0); }
static void RESET_REACT_NODE_FOR_ACTOR(int pram0) { Invoke<0x7B17C5C3, void>(pram0); }
static int UNK_0x5C11B011(int pram0, int pram1) { return Invoke<0x5C11B011, int>(pram0, pram1); }
static int UNK_0xA7E9DA22(int pram0) { return Invoke<0xA7E9DA22, int>(pram0); }
static void UNK_0x61664EC0(int pram0, int pram1, int pram2) { Invoke<0x61664EC0, void>(pram0, pram1, pram2); }
static int UNK_0x4F10FD5B(int pram0) { return Invoke<0x4F10FD5B, int>(pram0); }
static void RESET_PROP(int pram0) { Invoke<0x5E7A7E9B, void>(pram0); }
static void UNK_0x90FBBB8B(int pram0) { Invoke<0x90FBBB8B, void>(pram0); }
static void UNK_0x8C2914C4(int pram0, int pram1) { Invoke<0x8C2914C4, void>(pram0, pram1); }
static void UNK_0x22D573D2(int pram0) { Invoke<0x22D573D2, void>(pram0); }
static int UNK_0x51581898(int pram0) { return Invoke<0x51581898, int>(pram0); }
static int UNK_0x7E81694C(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { return Invoke<0x7E81694C, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static void GRINGO_SET_COMPONENT_USER(int pram0, int pram1) { Invoke<0x94F442D0, void>(pram0, pram1); }
static int UNK_0x9CD3385E(int pram0) { return Invoke<0x9CD3385E, int>(pram0); }
static void GRINGO_SET_REQUEST_STRING(int pram0) { Invoke<0x7F3020EB, void>(pram0); }
static int UNK_0xBC32DA9A(int pram0, int pram1, int pram2) { return Invoke<0xBC32DA9A, int>(pram0, pram1, pram2); }
static int GET_ACTOR_GAIT_TYPE(int pram0) { return Invoke<0xAC232F6E, int>(pram0); }
static void UNK_0x8CAF5C5C(int pram0) { Invoke<0x8CAF5C5C, void>(pram0); }
static int UNK_0x65CA3037(int pram0) { return Invoke<0x65CA3037, int>(pram0); }
static bool UNK_0x5388F37D() { return Invoke<0x5388F37D, bool>(); }
static int UNK_0x284DD17C(int pram0, int pram1) { return Invoke<0x284DD17C, int>(pram0, pram1); }
static int UNK_0x3FA5FC03(int pram0) { return Invoke<0x3FA5FC03, int>(pram0); }
static int UNK_0xD6EE9534(int pram0, int pram1, int pram2) { return Invoke<0xD6EE9534, int>(pram0, pram1, pram2); }
static void UNK_0xC8C0C708(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xC8C0C708, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x7BF01CCB() { return Invoke<0x7BF01CCB, int>(); }
static void UNK_0x8EA46104(int pram0) { Invoke<0x8EA46104, void>(pram0); }
static int GET_TARGET_ACTOR() { return Invoke<0x0EF7427B, int>(); }
static void UNK_0xBEF32D17(int pram0, int pram1) { Invoke<0xBEF32D17, void>(pram0, pram1); }
static void UNK_0x7D600F2F(int pram0, int pram1) { Invoke<0x7D600F2F, void>(pram0, pram1); }
static int UNK_0x2C57A529(int pram0, int pram1) { return Invoke<0x2C57A529, int>(pram0, pram1); }
static void GRINGO_SET_PROP_COLLISIONS(int pram0, int pram1) { Invoke<0x98543454, void>(pram0, pram1); }
static void UNK_0x175CD937(int pram0, int pram1, int pram2, int pram3) { Invoke<0x175CD937, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x47D2DE08(int pram0, int pram1) { Invoke<0x47D2DE08, void>(pram0, pram1); }
static int UNK_0x48B7C279(int pram0, int pram1) { return Invoke<0x48B7C279, int>(pram0, pram1); }
static void UNK_0xEB046CD9(int pram0) { Invoke<0xEB046CD9, void>(pram0); }
static void UNK_0x1C462085(int pram0) { Invoke<0x1C462085, void>(pram0); }
static void UNK_0x58018D83(int pram0) { Invoke<0x58018D83, void>(pram0); }
static int IS_PLAYER_SIGNED_IN() { return Invoke<0xC3C0F1F2, int>(); }
static bool UNK_0x1D177160() { return Invoke<0x1D177160, bool>(); }
static int UNK_0x1ADA1769() { return Invoke<0x1ADA1769, int>(); }
static void SET_CAMERASHOT_FROM_LENS(int pram0, int pram1) { Invoke<0x6F483443, void>(pram0, pram1); }
static void FORCE_CAMERASHOT_UPDATE(int pram0) { Invoke<0xF5CA55D4, void>(pram0); }
static int CAMERASHOT_IS_VISIBLE_ACTOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xCBA91134, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0xF52BA99F(int pram0) { return Invoke<0xF52BA99F, int>(pram0); }
static int IS_OBJECT_ATTACHED(int pram0) { return Invoke<0xAD08BA79, int>(pram0); }
static int IS_ACTOR_ON_BOAT(int pram0) { return Invoke<0x9EE8AB59, int>(pram0); }
static int TRAIN_GET_LOD_LEVEL(int pram0) { return Invoke<0xD8E0EF01, int>(pram0); }
static int TRAIN_GET_VELOCITY(int pram0) { return Invoke<0xF2373407, int>(pram0); }
static void UNK_0x1344515B() { Invoke<0x1344515B, void>(); }
static void UNK_0x364F41D6() { Invoke<0x364F41D6, void>(); }
static int IS_POPULATION_SET_REQUIRED_RESIDENT(int pram0) { return Invoke<0x76E416FD, int>(pram0); }
static int CREATE_ZONE_VOLUME(int pram0) { return Invoke<0xBB05B731, int>(pram0); }
static void SET_ZONE_POPULATION_TYPE(int pram0, int pram1) { Invoke<0xFC30948B, void>(pram0, pram1); }
static void UNK_0x9381D459(int pram0, int pram1) { Invoke<0x9381D459, void>(pram0, pram1); }
static void UNK_0xE0FDD026(int pram0, int pram1) { Invoke<0xE0FDD026, void>(pram0, pram1); }
static void UNK_0x5996941F(int pram0, int pram1) { Invoke<0x5996941F, void>(pram0, pram1); }
static void UNK_0x84FB15FA(int pram0, int pram1) { Invoke<0x84FB15FA, void>(pram0, pram1); }
static void UNK_0x1B271D85(int pram0, int pram1) { Invoke<0x1B271D85, void>(pram0, pram1); }
static void SET_ZONE_POPULATION_COUNT_RANDOM(int pram0, int pram1, int pram2) { Invoke<0xE339719A, void>(pram0, pram1, pram2); }
static void UNK_0xD28A3706(int pram0) { Invoke<0xD28A3706, void>(pram0); }
static void UNK_0x04EFC113(int pram0) { Invoke<0x04EFC113, void>(pram0); }
static void SET_ACCESSORYSET_ON_SPAWN(int pram0, int pram1, int pram2) { Invoke<0xC79F2BD3, void>(pram0, pram1, pram2); }
static int UNK_0xB0882841(int pram0, int pram1) { return Invoke<0xB0882841, int>(pram0, pram1); }
static int UNK_0x03B2D067(int pram0) { return Invoke<0x03B2D067, int>(pram0); }
static void UNK_0x93B6135B(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x93B6135B, void>(pram0, pram1, pram2, pram3, pram4); }
static void AMBIENT_SPAWN_PRESTREAM_SET(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x687545BF, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x0B24CE10(int pram0, int pram1) { Invoke<0x0B24CE10, void>(pram0, pram1); }
static void UNK_0xE4A789D8(int pram0, int pram1) { Invoke<0xE4A789D8, void>(pram0, pram1); }
static void UNK_0x07FD0A76(int pram0, int pram1) { Invoke<0x07FD0A76, void>(pram0, pram1); }
static int UNK_0xC1195126(int pram0) { return Invoke<0xC1195126, int>(pram0); }
static void SET_TOWN_DENSITY(int pram0) { Invoke<0x3748F199, void>(pram0); }
static void UNK_0x6C526E7B(int pram0) { Invoke<0x6C526E7B, void>(pram0); }
static int IS_ZONE_VALID(int pram0) { return Invoke<0x262164F8, int>(pram0); }
static void UNK_0xD72DF5C6(int pram0, int pram1) { Invoke<0xD72DF5C6, void>(pram0, pram1); }
static void UNK_0x7D4FB8C8(int pram0, int pram1) { Invoke<0x7D4FB8C8, void>(pram0, pram1); }
static void SET_ZONE_PRIORITY(int pram0, int pram1) { Invoke<0x4B8C0945, void>(pram0, pram1); }
static void UNK_0xE7F19909(int pram0, int pram1) { Invoke<0xE7F19909, void>(pram0, pram1); }
static void AI_GOAL_SHOOT_AT_COORD(int pram0, int pram1) { Invoke<0x6C65E46E, void>(pram0, pram1); }
static void SET_ALLOW_RIDE_BY_AI(int pram0, int pram1) { Invoke<0x2D9C0C0F, void>(pram0, pram1); }
static void AI_SET_ALLOWED_MOUNT_DIRECTIONS(int pram0, int pram1) { Invoke<0x7F07210F, void>(pram0, pram1); }
static int UNK_0x3F226995(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12) { return Invoke<0x3F226995, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12); }
static void UNK_0x261A4C0E(int pram0, int pram1, int pram2) { Invoke<0x261A4C0E, void>(pram0, pram1, pram2); }
static void SET_DOOR_CURRENT_SPEED(int pram0, int pram1, int pram2) { Invoke<0x5BCFC899, void>(pram0, pram1, pram2); }
static int CAMERA_IS_VISIBLE_VOLUME(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xA161768C, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0x15040CD2(int pram0) { Invoke<0x15040CD2, void>(pram0); }
static void RESET_EXCLUSIVE_JOURNAL_ID() { Invoke<0x45E34464, void>(); }
static void UNK_0x14ED45FB() { Invoke<0x14ED45FB, void>(); }
static void UNK_0x1BB84187() { Invoke<0x1BB84187, void>(); }
static void UNK_0xAC72E757(int pram0) { Invoke<0xAC72E757, void>(pram0); }
static void AUDIO_MISSION_RELEASE() { Invoke<0xD1FD31DE, void>(); }
static void ENABLE_JOURNAL_REPLAY(int pram0) { Invoke<0x957F1618, void>(pram0); }
static void UNK_0xF1779E65() { Invoke<0xF1779E65, void>(); }
static void UNK_0x6C7A3CE6() { Invoke<0x6C7A3CE6, void>(); }
static void UNK_0xBEF6031B(int pram0, int pram1) { Invoke<0xBEF6031B, void>(pram0, pram1); }
static int UNK_0xDB86F53B(int pram0) { return Invoke<0xDB86F53B, int>(pram0); }
static void DISABLE_VERIFY_SS(int pram0) { Invoke<0x5C580036, void>(pram0); }
static void UNK_0xB42EBC65(int pram0) { Invoke<0xB42EBC65, void>(pram0); }
static void UNK_0x374DE883(int pram0) { Invoke<0x374DE883, void>(pram0); }
static void STREAMING_ENABLE_BOUNDS(int pram0) { Invoke<0x0BEBB187, void>(pram0); }
static void CLEAR_MISSION_INFO() { Invoke<0x02092A6E, void>(); }
static void SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(int pram0, int pram1) { Invoke<0x151741A2, void>(pram0, pram1); }
static void UNK_0x07EC142B(int pram0) { Invoke<0x07EC142B, void>(pram0); }
static void UNK_0x7AB17813(int pram0, int pram1) { Invoke<0x7AB17813, void>(pram0, pram1); }
static int UNK_0xDE339CE1() { return Invoke<0xDE339CE1, int>(); }
static bool UNK_0xA6CFA220() { return Invoke<0xA6CFA220, bool>(); }
static bool UNK_0xEDF1D0B4() { return Invoke<0xEDF1D0B4, bool>(); }
static void UNK_0xC175F2B5(int pram0, int pram1) { Invoke<0xC175F2B5, void>(pram0, pram1); }
static int UNK_0x8287F8B3(int pram0, int pram1, int pram2) { return Invoke<0x8287F8B3, int>(pram0, pram1, pram2); }
static int UNK_0x3D014AB1(int pram0) { return Invoke<0x3D014AB1, int>(pram0); }
static int UNK_0x24F97294() { return Invoke<0x24F97294, int>(); }
static void UNK_0x2B45FADE() { Invoke<0x2B45FADE, void>(); }
static int UNK_0xA5691922() { return Invoke<0xA5691922, int>(); }
static int UNK_0xED0BA189(int pram0) { return Invoke<0xED0BA189, int>(pram0); }
static int UNK_0xD89902F1(int pram0) { return Invoke<0xD89902F1, int>(pram0); }
static void UNK_0xFD300D15(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xFD300D15, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0x0FE90DCB() { return Invoke<0x0FE90DCB, int>(); }
static void UNK_0x98A9AC9E() { Invoke<0x98A9AC9E, void>(); }
static void UNK_0xE808BFFB(int pram0) { Invoke<0xE808BFFB, void>(pram0); }
static int UNK_0x7653788C() { return Invoke<0x7653788C, int>(); }
static void UNK_0x98D0F458() { Invoke<0x98D0F458, void>(); }
static int ACTOR_IS_GRABBED_BY_CUTSCENE(int pram0) { return Invoke<0x776999DB, int>(pram0); }
static void SET_MOST_RECENT_MOUNT(int pram0, int pram1) { Invoke<0x00AF2CB0, void>(pram0, pram1); }
static void UNK_0x755382BC(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { Invoke<0x755382BC, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(int pram0, int pram1) { return Invoke<0xD79C7D6A, int>(pram0, pram1); }
static void UNK_0x99D215B4(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x99D215B4, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x7716B12B() { Invoke<0x7716B12B, void>(); }
static int UNK_0xB2F2A7F2(int pram0, int pram1, int pram2) { return Invoke<0xB2F2A7F2, int>(pram0, pram1, pram2); }
static int UNK_0x9410D992(int pram0, int pram1, int pram2) { return Invoke<0x9410D992, int>(pram0, pram1, pram2); }
static int UNK_0xC6557710(int pram0) { return Invoke<0xC6557710, int>(pram0); }
static int GET_LAST_NOTE_OBJECTIVE() { return Invoke<0xDC28C12F, int>(); }
static int UNK_0xD9E4A8DA() { return Invoke<0xD9E4A8DA, int>(); }
static int UNK_0xA56DCCF2(int pram0, int pram1, int pram2) { return Invoke<0xA56DCCF2, int>(pram0, pram1, pram2); }
static int UNK_0xEBAB5F62(int pram0) { return Invoke<0xEBAB5F62, int>(pram0); }
static void UNK_0x6287203C(int pram0) { Invoke<0x6287203C, void>(pram0); }
static int AI_HAS_ACTOR_BUMPED_INTO_ME(int pram0, int pram1, int pram2) { return Invoke<0x6BCC744A, int>(pram0, pram1, pram2); }
static int UNK_0x7263860F() { return Invoke<0x7263860F, int>(); }
static void SET_CUTSCENE_STREAMING_LOAD_SCENE(int pram0, int pram1) { Invoke<0x39D1CC17, void>(pram0, pram1); }
static void UNK_0x9E6A776F(int pram0, int pram1) { Invoke<0x9E6A776F, void>(pram0, pram1); }
static int UNK_0x2DB208A1() { return Invoke<0x2DB208A1, int>(); }
static void AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(int pram0, int pram1) { Invoke<0x98966941, void>(pram0, pram1); }
static int UNK_0x8020C45E(int pram0, int pram1, int pram2) { return Invoke<0x8020C45E, int>(pram0, pram1, pram2); }
static void UNK_0xF0DDF83D(int pram0) { Invoke<0xF0DDF83D, void>(pram0); }
static bool AUDIO_MUSIC_IS_PREPARED() { return Invoke<0xBF316157, bool>(); }
static bool AUDIO_MUSIC_PLAY_PREPARED() { return Invoke<0x7CC2738F, bool>(); }
static void UNK_0xE613AE52(int pram0) { Invoke<0xE613AE52, void>(pram0); }
static void UNK_0xF55B50ED(int pram0) { Invoke<0xF55B50ED, void>(pram0); }
static void UNK_0x6336182D(int pram0) { Invoke<0x6336182D, void>(pram0); }
static void UNK_0x84F3DD81(int pram0, int pram1) { Invoke<0x84F3DD81, void>(pram0, pram1); }
static int UNK_0xCE01609D(int pram0) { return Invoke<0xCE01609D, int>(pram0); }
static void UNK_0x3A6960B2(int pram0) { Invoke<0x3A6960B2, void>(pram0); }
static void SET_ACTOR_SPEED(int pram0, int pram1) { Invoke<0x09D78931, void>(pram0, pram1); }
static void AUDIO_MISSION_INIT() { Invoke<0xEB8A51C2, void>(); }
static void UNK_0x66FCA3F7(int pram0) { Invoke<0x66FCA3F7, void>(pram0); }
static void SET_EXCLUSIVE_JOURNAL_ID(int pram0) { Invoke<0x6398AF9A, void>(pram0); }
static void SET_MISSION_INFO(int pram0, int pram1) { Invoke<0x3B417D4E, void>(pram0, pram1); }
static int UNK_0xBDD4D4D5(int pram0) { return Invoke<0xBDD4D4D5, int>(pram0); }
static void TRAIN_SET_MAX_ACCEL(int pram0, int pram1) { Invoke<0xB5383B93, void>(pram0, pram1); }
static void TRAIN_SET_TARGET_POS(int pram0, int pram1) { Invoke<0x9091E0A3, void>(pram0, pram1); }
static void UNK_0x1440C806(int pram0, int pram1) { Invoke<0x1440C806, void>(pram0, pram1); }
static void UNK_0x0911BA31(int pram0, int pram1) { Invoke<0x0911BA31, void>(pram0, pram1); }
static void UNK_0x47FAE768(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x47FAE768, void>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0xB0479CB8(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xB0479CB8, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void TRAIN_FORCE_HIGH_LOD(int pram0, int pram1) { Invoke<0x43E6DCAC, void>(pram0, pram1); }
static void TRAIN_SET_MAX_DECEL(int pram0, int pram1) { Invoke<0xB7A4D403, void>(pram0, pram1); }
static void UNK_0x268D546D(int pram0, int pram1, int pram2, int pram3) { Invoke<0x268D546D, void>(pram0, pram1, pram2, pram3); }
static void UNK_0xE0BE8235(int pram0) { Invoke<0xE0BE8235, void>(pram0); }
static void TASK_SHOOT_FROM_COVER(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x506B8205, void>(pram0, pram1, pram2, pram3, pram4); }
static void ACTOR_SET_GRABBED_BY_CUTSCENE(int pram0, int pram1) { Invoke<0x6D3E430D, void>(pram0, pram1); }
static int UNK_0x1F9F8C04(int pram0, int pram1, int pram2) { return Invoke<0x1F9F8C04, int>(pram0, pram1, pram2); }
static int UNK_0xF37E8A9E(int pram0, int pram1) { return Invoke<0xF37E8A9E, int>(pram0, pram1); }
static void UNK_0x7007019D(int pram0, int pram1) { Invoke<0x7007019D, void>(pram0, pram1); }
static int UNK_0x8C0E3E29(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x8C0E3E29, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int UNK_0xB550D120(int pram0) { return Invoke<0xB550D120, int>(pram0); }
static void SET_PROP_TARGETABLE(int pram0, int pram1, int pram2) { Invoke<0x32C810BF, void>(pram0, pram1, pram2); }
static void AI_AVOID_IGNORE_ACTOR(int pram0, int pram1) { Invoke<0x68B268BE, void>(pram0, pram1); }
static void AI_SET_NAV_SUBGRID_CELL_SIZE(int pram0, int pram1) { Invoke<0xFF3CEFE2, void>(pram0, pram1); }
static int UNK_0x8ED2B0BC(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x8ED2B0BC, int>(pram0, pram1, pram2, pram3, pram4); }
static void TASK_FOLLOW_OBJECT_ALONG_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x626C97D5, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void ESTIMATE_TWO_DISTANCES_ALONG_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0xA1D9AF6B, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void TASK_HORSE_ACTION(int pram0, int pram1) { Invoke<0x916FF236, void>(pram0, pram1); }
static int UNK_0x5DB05BBC(int pram0) { return Invoke<0x5DB05BBC, int>(pram0); }
static void UNK_0x8062BD74(int pram0, int pram1, int pram2) { Invoke<0x8062BD74, void>(pram0, pram1, pram2); }
static void DESTROY_POINT_LIGHT(int pram0) { Invoke<0x6BC96263, void>(pram0); }
static void UNK_0x205E891C(int pram0, int pram1, int pram2) { Invoke<0x205E891C, void>(pram0, pram1, pram2); }
static void SET_DEADEYE_BLINK(int pram0) { Invoke<0xA543B120, void>(pram0); }
static void UNK_0x134AAF17(int pram0, int pram1, int pram2, int pram3) { Invoke<0x134AAF17, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x12558DBD(int pram0, int pram1, int pram2, int pram3) { Invoke<0x12558DBD, void>(pram0, pram1, pram2, pram3); }
static bool UNK_0x88863344() { return Invoke<0x88863344, bool>(); }
static int UNK_0xD062CBF6(int pram0, int pram1) { return Invoke<0xD062CBF6, int>(pram0, pram1); }
static void DEACTIVATE_JOURNAL_ENTRY(int pram0, int pram1) { Invoke<0x196A1EDE, void>(pram0, pram1); }
static void SET_RCM_ACTOR_CALL_OVER_ENABLE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0x2C6A5FAC, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int GET_JOURNAL_ENTRY_DISALLOW_TRACKING(int pram0) { return Invoke<0x93CA45DE, int>(pram0); }
static int GATEWAY_GET_MARKER(int pram0) { return Invoke<0xB62A4FB1, int>(pram0); }
static int GET_ACTOR_INVULNERABILITY(int pram0) { return Invoke<0xDB39D992, int>(pram0); }
static int IS_AI_ACTOR_ENGAGED_IN_COMBAT(int pram0) { return Invoke<0x2DBCB78A, int>(pram0); }
static void UNK_0xD15B53F8(int pram0) { Invoke<0xD15B53F8, void>(pram0); }
static int UNK_0xD89C14BA(int pram0) { return Invoke<0xD89C14BA, int>(pram0); }
static void UNK_0x50A2051C(int pram0) { Invoke<0x50A2051C, void>(pram0); }
static int UNK_0x79C748BE(int pram0, int pram1, int pram2) { return Invoke<0x79C748BE, int>(pram0, pram1, pram2); }
static bool IS_BLIP_VISIBLE(Blip _Blip) { return Invoke<0x1E7A6623, bool>(_Blip); }
static void UNK_0x2D40E85C(int pram0, int pram1, int pram2) { Invoke<0x2D40E85C, void>(pram0, pram1, pram2); }
static int SET_ACTOR_HEARING_MAX_RANGE(int pram0, int pram1) { return Invoke<0x55AACDFD, int>(pram0, pram1); }
static int IS_DOOR_OPEN_IN_DIRECTION(int pram0, int pram1) { return Invoke<0xDAD47AE6, int>(pram0, pram1); }
static void SET_DOOR_AUTO_CLOSE(int pram0, int pram1) { Invoke<0xD3300956, void>(pram0, pram1); }
static int UNK_0xD6F4FDAD(int pram0) { return Invoke<0xD6F4FDAD, int>(pram0); }
static bool GET_DRAW_ACTOR(Actor Actor) { return Invoke<0x085A9CA6, bool>(Actor); }
static void SET_PLAYER_DEADEYE_MODE(int pram0, int pram1) { Invoke<0xB6A47C37, void>(pram0, pram1); }
static void ACTOR_ADD_WEAPON_AMMO(Actor _Actor, WeaponModel _WeaponModel, float _AmmoCount) { Invoke<0xCC69DCC1, void>(_Actor, _WeaponModel, _AmmoCount); }
static void TASK_GUARD_STAND(int pram0, int pram1, int pram2) { Invoke<0x99F65CC0, void>(pram0, pram1, pram2); }
static int UNK_0x22558E3F(int pram0) { return Invoke<0x22558E3F, int>(pram0); }
static int UNK_0x26884138() { return Invoke<0x26884138, int>(); }
static bool UNK_0xE7371670() { return Invoke<0xE7371670, bool>(); }
static void SET_INFINITE_DEADEYE(Actor _Actor, bool _Infinite) { Invoke<0x0C0BC04E, void>(_Actor, _Infinite); }
static int HORSE_UNLOCK_FRESHNESS(int pram0) { return Invoke<0x6AFA044B, int>(pram0); }
static int HORSE_SET_CURR_FRESHNESS(int pram0, int pram1) { return Invoke<0xF3976D70, int>(pram0, pram1); }
static int HORSE_LOCK_FRESHNESS(int pram0) { return Invoke<0x8754817D, int>(pram0); }
static int DECOR_GET_VECTOR(int pram0, int pram1, int pram2) { return Invoke<0x56E84C59, int>(pram0, pram1, pram2); }
static void SET_STAMINA_BLINK(int pram0) { Invoke<0x39F2E5F1, void>(pram0); }
static int SET_ACTOR_MAX_FRESHNESS(int pram0, int pram1) { return Invoke<0xBADB24FB, int>(pram0, pram1); }
static int UNK_0x21BCC0A9(int pram0) { return Invoke<0x21BCC0A9, int>(pram0); }
static int UNK_0x75D4E33F(int pram0, int pram1) { return Invoke<0x75D4E33F, int>(pram0, pram1); }
static int UNK_0x99356925(int pram0, int pram1, int pram2) { return Invoke<0x99356925, int>(pram0, pram1, pram2); }
static int UNK_0x35051831(int pram0, int pram1, int pram2) { return Invoke<0x35051831, int>(pram0, pram1, pram2); }
static void UNK_0x14585073(int pram0, int pram1) { Invoke<0x14585073, void>(pram0, pram1); }
static void SET_RCM_WAS_JOHN_NOW_JACK(int pram0, int pram1) { Invoke<0xE4AA7B35, void>(pram0, pram1); }
static void AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(int pram0, int pram1) { Invoke<0x1F07FC4C, void>(pram0, pram1); }
static int AI_WAS_PUSHED_OVER(int pram0, int pram1) { return Invoke<0x09493438, int>(pram0, pram1); }
static int UNK_0xEBC9C2FD(int pram0, int pram1) { return Invoke<0xEBC9C2FD, int>(pram0, pram1); }
static int AI_GLOBAL_IS_DANGER(int pram0, int pram1) { return Invoke<0x5EC098F2, int>(pram0, pram1); }
static float GET_RADAR_RADIUS() { return Invoke<0x6B33CBCC, float>(); }
static void UNK_0xC6E36B1D(int pram0) { Invoke<0xC6E36B1D, void>(pram0); }
static void PLAY_SOUND(int pram0) { Invoke<0xB6E1917F, void>(pram0); }
static int _RETURN_NULL_0() { return Invoke<0x191658C0, int>(); }
static int _RETURN_NULL_1() { return Invoke<0x32D1DEB0, int>(); }
static void SET_JOURNAL_ENTRY_UPDATED(int pram0, int pram1) { Invoke<0xCD4633BD, void>(pram0, pram1); }
static void REGISTER_TRAFFIC_OBJECTSET(int pram0) { Invoke<0x398735FA, void>(pram0); }
static void SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(int pram0, int pram1) { Invoke<0xD9934D6E, void>(pram0, pram1); }
static void REGISTER_TRAFFIC_ACTOR(int pram0, int pram1) { Invoke<0x67FA18A1, void>(pram0, pram1); }
static int UNK_0x1BA90C92(int pram0) { return Invoke<0x1BA90C92, int>(pram0); }
static int IS_ACTOR_WHISTLING(int pram0) { return Invoke<0x3612AC73, int>(pram0); }
static int UNK_0x87C49DBD(int pram0, int pram1) { return Invoke<0x87C49DBD, int>(pram0, pram1); }
static int UNK_0x72F6EED0() { return Invoke<0x72F6EED0, int>(); }
static int GET_EVENT_TIME(int pram0) { return Invoke<0x82112B85, int>(pram0); }
static void SET_GPS_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { Invoke<0xD82F910C, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static void REGISTER_GPS_CURVE_OBJECTSET(int pram0) { Invoke<0x1444F022, void>(pram0); }
static int UNK_0xAA322DFC(int pram0) { return Invoke<0xAA322DFC, int>(pram0); }
static void SET_JOURNAL_ENTRY_DISALLOW_TRACKING(int pram0, int pram1) { Invoke<0xF7687D41, void>(pram0, pram1); }
static int UNK_0x427F4D58(int pram0, int pram1, int pram2) { return Invoke<0x427F4D58, int>(pram0, pram1, pram2); }
static int UNK_0x94F5E63F(int pram0) { return Invoke<0x94F5E63F, int>(pram0); }
static void UNK_0xAB8A1C15(int pram0) { Invoke<0xAB8A1C15, void>(pram0); }
static void UNK_0x8392855D(int pram0, int pram1) { Invoke<0x8392855D, void>(pram0, pram1); }
static int UNK_0x6B439149() { return Invoke<0x6B439149, int>(); }
static int NET_MAILBOX_IS_CHALLENGE_VALID(int pram0) { return Invoke<0xC9E96F78, int>(pram0); }
static int UNK_0xE85942F0(int pram0) { return Invoke<0xE85942F0, int>(pram0); }
static int UNK_0xFD6197EB(int pram0, int pram1) { return Invoke<0xFD6197EB, int>(pram0, pram1); }
static int SC_CHALLENGE_GET_VAR_INT(int pram0, int pram1) { return Invoke<0x2390DD18, int>(pram0, pram1); }
static int UNK_0xA183D927() { return Invoke<0xA183D927, int>(); }
static void UI_CHALLENGE_SET_OBJECTIVE(int pram0, int pram1, int pram2) { Invoke<0x9CF5C747, void>(pram0, pram1, pram2); }
static void UNK_0x761A6750(int pram0, int pram1) { Invoke<0x761A6750, void>(pram0, pram1); }
static void UNK_0xAFC9071D(int pram0, int pram1, int pram2) { Invoke<0xAFC9071D, void>(pram0, pram1, pram2); }
static void UI_BUTTON_SET_TEXT(const char* name, const char* str) { Invoke<0x3DB16A3D, void>(name, str); }
static void UNK_0xC201524D(int pram0, int pram1, int pram2) { Invoke<0xC201524D, void>(pram0, pram1, pram2); }
static void UI_CHALLENGE_SET_DESCRIPTION(int pram0, int pram1) { Invoke<0x2A39FD8A, void>(pram0, pram1); }
static void UNK_0x3731AC9F(int pram0, int pram1) { Invoke<0x3731AC9F, void>(pram0, pram1); }
static int SC_CHALLENGE_GET_COMMUNITY_VALUE(int pram0) { return Invoke<0xCEEEAE1D, int>(pram0); }
static int SC_CHALLENGE_GET_COMMUNITY_TOTAL(int pram0) { return Invoke<0xFFC55DA4, int>(pram0); }
static void UNK_0x4A598723(int pram0, int pram1, int pram2) { Invoke<0x4A598723, void>(pram0, pram1, pram2); }
static void UNK_0x9272926C(int pram0, int pram1, int pram2) { Invoke<0x9272926C, void>(pram0, pram1, pram2); }
static void UI_CHALLENGE_MAKE_CURRENT(int pram0) { Invoke<0x04A3022E, void>(pram0); }
static bool UNK_0xA3E1EF71() { return Invoke<0xA3E1EF71, bool>(); }
static bool UNK_0x34711B59() { return Invoke<0x34711B59, bool>(); }
static int UNK_0x5725C84F() { return Invoke<0x5725C84F, int>(); }
static int UNK_0x5FD52711() { return Invoke<0x5FD52711, int>(); }
static int UNK_0x86BC0A55(int pram0, int pram1) { return Invoke<0x86BC0A55, int>(pram0, pram1); }
static void UNK_0xEB4A6D85() { Invoke<0xEB4A6D85, void>(); }
static int UNK_0xD0808C42() { return Invoke<0xD0808C42, int>(); }
static bool UNK_0xE89C6E4F() { return Invoke<0xE89C6E4F, bool>(); }
static int UNK_0x49C2B05F(int pram0) { return Invoke<0x49C2B05F, int>(pram0); }
static int UNK_0x0791F35A() { return Invoke<0x0791F35A, int>(); }
static bool UNK_0xC813DBEF() { return Invoke<0xC813DBEF, bool>(); }
static int UNK_0x70AF0351(int pram0) { return Invoke<0x70AF0351, int>(pram0); }
static int UNK_0xE6B4F505() { return Invoke<0xE6B4F505, int>(); }
static bool UNK_0x097BB984() { return Invoke<0x097BB984, bool>(); }
static int UNK_0x3A8C77AD(int pram0) { return Invoke<0x3A8C77AD, int>(pram0); }
static int UNK_0xEA7ADF42() { return Invoke<0xEA7ADF42, int>(); }
static bool UNK_0x293C3288() { return Invoke<0x293C3288, bool>(); }
static int UNK_0x984749B4(int pram0) { return Invoke<0x984749B4, int>(pram0); }
static int UNK_0xA7F231B0() { return Invoke<0xA7F231B0, int>(); }
static void UNK_0x970AC1F7(int pram0, int pram1) { Invoke<0x970AC1F7, void>(pram0, pram1); }
static void UNK_0x0A87A573(int pram0, int pram1) { Invoke<0x0A87A573, void>(pram0, pram1); }
static int UNK_0x25EF49AD(int pram0) { return Invoke<0x25EF49AD, int>(pram0); }
static void UNK_0x23EB81F0(int pram0, int pram1) { Invoke<0x23EB81F0, void>(pram0, pram1); }
static void UPDATE_STAT(int pram0, int pram1, int pram2) { Invoke<0xC9212F76, void>(pram0, pram1, pram2); }
static void HIDE_STAT(int pram0, int pram1) { Invoke<0x1CF1FCC4, void>(pram0, pram1); }
static bool UNK_0x5B404EDA() { return Invoke<0x5B404EDA, bool>(); }
static int UNK_0x6A307D5F(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { return Invoke<0x6A307D5F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0x7FF20D84(int pram0) { Invoke<0x7FF20D84, void>(pram0); }
static void UNK_0x364450B1(int pram0) { Invoke<0x364450B1, void>(pram0); }
static bool CAN_PLAYER_DIE() { return Invoke<0x90F9555B, bool>(); }
static void UNK_0xCFE22435(int pram0) { Invoke<0xCFE22435, void>(pram0); }
static void RESET_RUMBLE() { Invoke<0xB3BE2F95, void>(); }
static void UNK_0x39B0CFE5() { Invoke<0x39B0CFE5, void>(); }
static void SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(int pram0, int pram1, int pram2) { Invoke<0xA9A18E5A, void>(pram0, pram1, pram2); }
static int NET_REQUEST_OBJECT(int pram0) { return Invoke<0x68EC589D, int>(pram0); }
static void TASK_RESPOND_TO_HORSE_WHISTLE(int pram0, int pram1) { Invoke<0x69B924A7, void>(pram0, pram1); }
static int UNK_0x50A7E334(int pram0) { return Invoke<0x50A7E334, int>(pram0); }
static void UNK_0x48DB367D(int pram0) { Invoke<0x48DB367D, void>(pram0); }
static void UNK_0xB4614D11(int pram0, int pram1) { Invoke<0xB4614D11, void>(pram0, pram1); }
static int UNK_0x919142BE() { return Invoke<0x919142BE, int>(); }
static int UNK_0x3A899B0E(int pram0) { return Invoke<0x3A899B0E, int>(pram0); }
static int GET_ACTOR_GROUND_MATERIAL(int pram0) { return Invoke<0x451A8EF2, int>(pram0); }
static int UNK_0x3E758743(int pram0) { return Invoke<0x3E758743, int>(pram0); }
static void UNK_0xE7F781B8() { Invoke<0xE7F781B8, void>(); }
static void AI_SET_SPECIAL_AREAS_TIME(int pram0, int pram1) { Invoke<0xF53EB511, void>(pram0, pram1); }
static int TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(int pram0) { return Invoke<0x4AD89F02, int>(pram0); }
static void SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(Actor _Actor, bool _Value) { Invoke<0xBEEDDD54, void>(_Actor, _Value); }
static int GRINGO_QUERY_BOOL(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x5C2174C7, int>(pram0, pram1, pram2, pram3); }
static int GET_GAME_STATE() { return Invoke<0xDD9BD22B, int>(); }
static int CREATE_JOURNAL_ENTRY_BY_HASH(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x619F1C3D, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x50C0E83F(int pram0) { return Invoke<0x50C0E83F, int>(pram0); }
static int UNK_0x2776B0F5(int pram0) { return Invoke<0x2776B0F5, int>(pram0); }
static void _SET_WEAPON_AMMO_FOR_ITEM(int pram0, int pram1, float pram2) { Invoke<0xB008EF49, void>(pram0, pram1, pram2); }
static int UNK_0xF750D150(int pram0, int pram1, int pram2) { return Invoke<0xF750D150, int>(pram0, pram1, pram2); }
static void UNK_0x0E712FCB(int pram0, int pram1) { Invoke<0x0E712FCB, void>(pram0, pram1); }
static void SET_PROP_TARGETABLE_ACQUISITION_RADIUS(int pram0, int pram1) { Invoke<0xE84EB2D5, void>(pram0, pram1); }
static void SET_PROP_TARGETABLE_SCORE_BIAS(int pram0, int pram1) { Invoke<0x0E2B0212, void>(pram0, pram1); }
static void SET_PROP_TARGETABLE_AS_ENEMY(int pram0, int pram1) { Invoke<0x5895EBBE, void>(pram0, pram1); }
static void SET_PROP_TARGETABLE_TARGET_BOX_SIZE(int pram0, int pram1, int pram2) { Invoke<0x6A937CBB, void>(pram0, pram1, pram2); }
static void SET_ACTOR_DEATH_DROP_DISTANCE(int pram0, int pram1) { Invoke<0x9F6B04C8, void>(pram0, pram1); }
static void FIRE_SET_OWNER(int pram0, int pram1) { Invoke<0xE5C7E4C9, void>(pram0, pram1); }
static int UNK_0x375A33F0(int pram0, int pram1) { return Invoke<0x375A33F0, int>(pram0, pram1); }
static int ACTOR_IS_VARIABLE_MESH_ENABLED(int pram0, int pram1) { return Invoke<0x5DE31288, int>(pram0, pram1); }
static int GET_ACTOR_PROOF(int pram0) { return Invoke<0x147EA072, int>(pram0); }
static void UNK_0x49BC0219(int pram0) { Invoke<0x49BC0219, void>(pram0); }
static void UNK_0x6085F7AC(int pram0, int pram1) { Invoke<0x6085F7AC, void>(pram0, pram1); }
static void ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(int pram0, int pram1, int pram2) { Invoke<0x3A8487A6, void>(pram0, pram1, pram2); }
static bool UNK_0xE5645CB3() { return Invoke<0xE5645CB3, bool>(); }
static void UNK_0xC9FCD3EC(int pram0) { Invoke<0xC9FCD3EC, void>(pram0); }
static void UNK_0xEC906A7A(int pram0) { Invoke<0xEC906A7A, void>(pram0); }
static void UNK_0xFA43DCC5(int pram0) { Invoke<0xFA43DCC5, void>(pram0); }
static int IS_ACTOR_FLYING(int pram0) { return Invoke<0x25670955, int>(pram0); }
static int COPY_EVENT(int pram0, int pram1) { return Invoke<0xF7DA8F09, int>(pram0, pram1); }
static int GET_LINKED_ANIM_TARGET(int pram0) { return Invoke<0xA4E9E7EE, int>(pram0); }
static int UNK_0x19F62133() { return Invoke<0x19F62133, int>(); }
static int UNK_0x586714AE(int pram0) { return Invoke<0x586714AE, int>(pram0); }
static int UNK_0xB573FF63(int pram0) { return Invoke<0xB573FF63, int>(pram0); }
static void SET_PROP_HEALTH(int pram0, int pram1) { Invoke<0xC6D12FF5, void>(pram0, pram1); }
static int UNK_0xFC718FC5(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xFC718FC5, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void GRINGO_SET_TARGET_OBJECT(int pram0, int pram1, int pram2) { Invoke<0x00776356, void>(pram0, pram1, pram2); }
static int UNK_0xB78BC233(int pram0, int pram1, int pram2) { return Invoke<0xB78BC233, int>(pram0, pram1, pram2); }
static void ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(int pram0, int pram1, int pram2) { Invoke<0x8D7070F3, void>(pram0, pram1, pram2); }
static bool CAMERA_PROBE(Vector3* Result, Vector3 Source, Vector3 Target, Actor Owner, int Flag) { return Invoke<0x720F2CA7, bool>(Result, Source, Target, Owner, Flag); }
static void UNK_0x8B011F5D() { Invoke<0x8B011F5D, void>(); }
static void UNK_0xA8226DFF(int pram0) { Invoke<0xA8226DFF, void>(pram0); }
static void UNK_0x831FC466(int pram0) { Invoke<0x831FC466, void>(pram0); }
static void UNK_0xCC9E6F4C(int pram0, int pram1, int pram2, int pram3) { Invoke<0xCC9E6F4C, void>(pram0, pram1, pram2, pram3); }
static void ADD_PERSISTENT_SCRIPT(int _ScriptId) { Invoke<0x2F109475, void>(_ScriptId); }
static void REMOVE_PERSISTENT_SCRIPT(int _ScriptId) { Invoke<0xC605E92F, void>(_ScriptId); }
static bool IS_GAME_PAUSED() { return Invoke<0x57246C02, bool>(); }
static IterationSet _GET_ITERATION_SET(int SetId) { return Invoke<0xBC58F1EA, IterationSet>(SetId); }
static int UI_GET_SELECTED_INDEX(const char* MenuID, bool UNK0) { return Invoke<0x8B63A008, int>(MenuID, UNK0); }
static void UI_TRANSITION_TO(int pram0) { Invoke<0xD0F2D2B6, void>(pram0); }
static void UNK_0x7BD7A465(int pram0, int pram1) { Invoke<0x7BD7A465, void>(pram0, pram1); }
static int UNK_0xFD91BE0D(int pram0) { return Invoke<0xFD91BE0D, int>(pram0); }
static void UNK_0xCF674E31(int pram0, int pram1) { Invoke<0xCF674E31, void>(pram0, pram1); }
static void SET_PLAYER_COMBATMODE(int pram0) { Invoke<0x57595189, void>(pram0); }
static void UI_GOTO(int pram0) { Invoke<0xA0159C77, void>(pram0); }
static void UNK_0x5F66B23E(int pram0, int pram1) { Invoke<0x5F66B23E, void>(pram0, pram1); }
static void SET_PERS_CHAR_ALLOW_SPAWN_ELSEWHERE(int pram0, int pram1) { Invoke<0x366B0AD1, void>(pram0, pram1); }
static void UNK_0x7614AEBA(int pram0, int pram1) { Invoke<0x7614AEBA, void>(pram0, pram1); }
static int UNK_0xD036DF91() { return Invoke<0xD036DF91, int>(); }
static void UNK_0x69FC319E() { Invoke<0x69FC319E, void>(); }
static int HAS_SOUND_FINISHED(int pram0) { return Invoke<0xE85AEC2E, int>(pram0); }
static void UNK_0x5B05E3E0(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x5B05E3E0, void>(pram0, pram1, pram2, pram3, pram4); }
static void MAKE_BIRD_FLY_FROM_POINT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x5E54E254, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void SQUAD_BATTLE_ALLIES_SET_FORMATION_DENSITY(int pram0, int pram1, int pram2) { Invoke<0x6BC42101, void>(pram0, pram1, pram2); }
static int PLAY_SIMPLE_PROP_ANIMATION(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xDC3FBAE6, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0xA607D290() { return Invoke<0xA607D290, int>(); }
static void SET_INDICATOR_DRAW(int pram0, int pram1) { Invoke<0x8E387228, void>(pram0, pram1); }
static void UNK_0x3375FB38(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x3375FB38, void>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0xE7A0A109(int pram0) { Invoke<0xE7A0A109, void>(pram0); }
static void UNK_0x0073024E(int pram0) { Invoke<0x0073024E, void>(pram0); }
static void UNK_0x82C54B8A(int pram0, int pram1) { Invoke<0x82C54B8A, void>(pram0, pram1); }
static void UNK_0x92CC441F(int pram0, int pram1) { Invoke<0x92CC441F, void>(pram0, pram1); }
static void SNAPSHOT_GLOBALS() { Invoke<0x5A25520E, void>(); }
static void UNK_0xFB227D11(int pram0) { Invoke<0xFB227D11, void>(pram0); }
static void UNK_0x85D62384() { Invoke<0x85D62384, void>(); }
static int UNK_0x8DF144C2(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x8DF144C2, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x17CF885F(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x17CF885F, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x20CE8AA8(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x20CE8AA8, void>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0x6D59A25F(int pram0, int pram1) { Invoke<0x6D59A25F, void>(pram0, pram1); }
static const char* UNK_0x8E867DDD(const char* pram0) { Invoke<0x8E867DDD, const char*>(pram0); }
static const char* UNK_0x6E79F939(int pram0, int pram1) { Invoke<0x6E79F939, const char*>(pram0, pram1); }
static void UNK_0xE8637D2B(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0xE8637D2B, void>(pram0, pram1, pram2, pram3, pram4); }
static void _DO_SOMETHING_WITH_SAVE_FILE(int _Unk0, const char* _Unk1, const char* _Unk2) { Invoke<0x3E647734, void>(_Unk0, _Unk1, _Unk2); }
static void UNK_0xE0553D6B(int pram0, int pram1) { Invoke<0xE0553D6B, void>(pram0, pram1); }
static void UNK_0xD68E04BB(int pram0, int pram1) { Invoke<0xD68E04BB, void>(pram0, pram1); }
static void UNK_0x638EAF70(int pram0, int pram1) { Invoke<0x638EAF70, void>(pram0, pram1); }
static void UNK_0xEA975A79(int pram0, int pram1) { Invoke<0xEA975A79, void>(pram0, pram1); }
static void UNK_0x6BB42C21(int pram0) { Invoke<0x6BB42C21, void>(pram0); }
static void UNK_0x0E634931(int pram0) { Invoke<0x0E634931, void>(pram0); }
static void UNK_0x567712E5(int pram0) { Invoke<0x567712E5, void>(pram0); }
static void UNK_0xB888B369(int pram0) { Invoke<0xB888B369, void>(pram0); }
static void UNK_0x306D9FEE(int pram0) { Invoke<0x306D9FEE, void>(pram0); }
static void UNK_0xC3614E0A(int pram0) { Invoke<0xC3614E0A, void>(pram0); }
static void UNK_0xF962F2B8(int pram0) { Invoke<0xF962F2B8, void>(pram0); }
static void UNK_0x22D0DF9B(int pram0) { Invoke<0x22D0DF9B, void>(pram0); }
static void UNK_0xA234C5D0(int pram0) { Invoke<0xA234C5D0, void>(pram0); }
static void UNK_0x733BA9F5(int pram0) { Invoke<0x733BA9F5, void>(pram0); }
static void UNK_0x79351E54(int pram0) { Invoke<0x79351E54, void>(pram0); }
static void UNK_0xCCBE7F0F(int pram0) { Invoke<0xCCBE7F0F, void>(pram0); }
static void UNK_0x5FCF3B85(int pram0) { Invoke<0x5FCF3B85, void>(pram0); }
static void UNK_0xF07F5E41(int pram0) { Invoke<0xF07F5E41, void>(pram0); }
static void UNK_0xCB139D15(int pram0) { Invoke<0xCB139D15, void>(pram0); }
static void UNK_0x886E06C2(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x886E06C2, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void UNK_0xB6839756() { Invoke<0xB6839756, void>(); }
static void UNK_0x6D0B8619(int pram0, int pram1, int pram2, int pram3) { Invoke<0x6D0B8619, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x807B9519(int pram0, int pram1, int pram2, int pram3) { Invoke<0x807B9519, void>(pram0, pram1, pram2, pram3); }
static void UNK_0xCBA75200(int pram0, int pram1, int pram2, int pram3) { Invoke<0xCBA75200, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x0A23A69C() { Invoke<0x0A23A69C, void>(); }
static void UNK_0x01C7193C(int pram0, int pram1) { Invoke<0x01C7193C, void>(pram0, pram1); }
static void UNK_0xE0DF7B3B(int pram0, int pram1, int pram2) { Invoke<0xE0DF7B3B, void>(pram0, pram1, pram2); }
static void UNK_0x2AD5D078(int pram0, int pram1, int pram2) { Invoke<0x2AD5D078, void>(pram0, pram1, pram2); }
static void UNK_0xF82711CC(int pram0, int pram1, int pram2) { Invoke<0xF82711CC, void>(pram0, pram1, pram2); }
static void UNK_0x92FE3677(int pram0, int pram1, int pram2) { Invoke<0x92FE3677, void>(pram0, pram1, pram2); }
static void UNK_0xA72B6620(int pram0, int pram1, int pram2) { Invoke<0xA72B6620, void>(pram0, pram1, pram2); }
static void UNK_0xBAC27559(int pram0, int pram1, int pram2) { Invoke<0xBAC27559, void>(pram0, pram1, pram2); }
static void SS_INIT(int pram0) { Invoke<0x8785E0CE, void>(pram0); }
static int SS_SET_TABLE_SIZE(int pram0, int pram1) { return Invoke<0xAFFA5ABE, int>(pram0, pram1); }
static void COMBAT_CLASS_NAME_REGISTER_INT(int pram0, int pram1) { Invoke<0x8DE6AF29, void>(pram0, pram1); }
static void UNK_0x0B396DFF(int pram0) { Invoke<0x0B396DFF, void>(pram0); }
static void UNK_0x24F3A0DB(int pram0) { Invoke<0x24F3A0DB, void>(pram0); }
static void UNK_0x9FEFA743(int pram0) { Invoke<0x9FEFA743, void>(pram0); }
static void AI_SPEECH_REGISTER_EVENT(int pram0, int pram1) { Invoke<0xDD925074, void>(pram0, pram1); }
static void AI_SPEECH_REGISTER_TAGS_BEGIN(int pram0) { Invoke<0xAB297CCB, void>(pram0); }
static void AI_SPEECH_REGISTER_TAG(int pram0, int pram1, int pram2, int pram3) { Invoke<0xA08B3E4B, void>(pram0, pram1, pram2, pram3); }
static void AI_SPEECH_REGISTER_TAGS_END() { Invoke<0x90B577F5, void>(); }
static int UNK_0xE77F61B2(int pram0, int pram1) { return Invoke<0xE77F61B2, int>(pram0, pram1); }
static int AI_SPEECH_ADD_PHRASE(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xD269F20B, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void AI_SPEECH_ADD_TAG_FOR_PHRASE(int pram0, int pram1, int pram2) { Invoke<0x15CFAB4C, void>(pram0, pram1, pram2); }
static void DEBUG_PLAYER_LOG(int pram0) { Invoke<0x829F3E70, void>(pram0); }
static void UNK_0x9953D4FC(int pram0) { Invoke<0x9953D4FC, void>(pram0); }
static void UNK_0x751809BB(int pram0) { Invoke<0x751809BB, void>(pram0); }
static void UNK_0x25A42C69(int pram0) { Invoke<0x25A42C69, void>(pram0); }
static void UNK_0x86CB8CFB(int pram0) { Invoke<0x86CB8CFB, void>(pram0); }
static void UNK_0xD6AD0016(int pram0) { Invoke<0xD6AD0016, void>(pram0); }
static void UNK_0x8C00C0BE(int pram0) { Invoke<0x8C00C0BE, void>(pram0); }
static void UNK_0x7CC67B30(int pram0) { Invoke<0x7CC67B30, void>(pram0); }
static void UNK_0xD4ECD97D(int pram0) { Invoke<0xD4ECD97D, void>(pram0); }
static void UNK_0x826BB889(int pram0) { Invoke<0x826BB889, void>(pram0); }
static void UNK_0x5473B93A(int pram0) { Invoke<0x5473B93A, void>(pram0); }
static void UNK_0x1B1EFCCB(int pram0) { Invoke<0x1B1EFCCB, void>(pram0); }
static void UNK_0xD85BAFA8(int pram0) { Invoke<0xD85BAFA8, void>(pram0); }
static void UNK_0xEB99D1A9(int pram0, int pram1, int pram2) { Invoke<0xEB99D1A9, void>(pram0, pram1, pram2); }
static void UNK_0x3C6FE75D(int pram0, int pram1) { Invoke<0x3C6FE75D, void>(pram0, pram1); }
static void UNK_0x7DA34015(int pram0, int pram1) { Invoke<0x7DA34015, void>(pram0, pram1); }
static void UNK_0x79EFDF7E(int pram0, int pram1) { Invoke<0x79EFDF7E, void>(pram0, pram1); }
static void UNK_0xCA669478(int pram0, int pram1) { Invoke<0xCA669478, void>(pram0, pram1); }
static void UNK_0x74E7F898(int pram0, int pram1) { Invoke<0x74E7F898, void>(pram0, pram1); }
static void GET_LOCKON_MISSION(int pram0, int pram1) { Invoke<0xB59AD5B1, void>(pram0, pram1); }
static void UNK_0xFCD2DE48(int pram0) { Invoke<0xFCD2DE48, void>(pram0); }
static void UNK_0xB8F1D736(int pram0) { Invoke<0xB8F1D736, void>(pram0); }
static void UNK_0x30402375(int pram0) { Invoke<0x30402375, void>(pram0); }
static void UNK_0x7922F870(int pram0) { Invoke<0x7922F870, void>(pram0); }
static void UNK_0x663723A0(int pram0) { Invoke<0x663723A0, void>(pram0); }
static void UNK_0x93CFB180(int pram0) { Invoke<0x93CFB180, void>(pram0); }
static void UNK_0xA1FCBA24(int pram0) { Invoke<0xA1FCBA24, void>(pram0); }
static void UNK_0x7ED8B78C() { Invoke<0x7ED8B78C, void>(); }
static void UNK_0xD4871BDB(int pram0) { Invoke<0xD4871BDB, void>(pram0); }
static void UNK_0xA88359B9(int pram0, int pram1) { Invoke<0xA88359B9, void>(pram0, pram1); }
static void UNK_0xC65F6751(int pram0) { Invoke<0xC65F6751, void>(pram0); }
static void UNK_0x83CBD612(int pram0) { Invoke<0x83CBD612, void>(pram0); }
static void UNK_0x4AD2BC30(int pram0) { Invoke<0x4AD2BC30, void>(pram0); }
static void UNK_0xA13D379B(int pram0, int pram1) { Invoke<0xA13D379B, void>(pram0, pram1); }
static void UNK_0xC4C59CA4(int pram0) { Invoke<0xC4C59CA4, void>(pram0); }
static void UNK_0xA915DC46(int pram0) { Invoke<0xA915DC46, void>(pram0); }
static void UNK_0xBAD8B9A8(int pram0) { Invoke<0xBAD8B9A8, void>(pram0); }
static void UNK_0x6CBF76AB(int pram0) { Invoke<0x6CBF76AB, void>(pram0); }
static void UNK_0x4F64116B(int pram0) { Invoke<0x4F64116B, void>(pram0); }
static void UNK_0x0386C556(int pram0, int pram1, int pram2) { Invoke<0x0386C556, void>(pram0, pram1, pram2); }
static void UNK_0xE0DD373F(int pram0) { Invoke<0xE0DD373F, void>(pram0); }
static void UNK_0xF63FA0A1(int pram0) { Invoke<0xF63FA0A1, void>(pram0); }
static void UNK_0x375BBD85(int pram0) { Invoke<0x375BBD85, void>(pram0); }
static void UNK_0x4819FB7C(int pram0) { Invoke<0x4819FB7C, void>(pram0); }
static void UNK_0xC4F468AA(int pram0) { Invoke<0xC4F468AA, void>(pram0); }
static void GAME_ESTIMATE_MOUNT(int pram0) { Invoke<0xBD3A0E6D, void>(pram0); }
static void UNK_0xD6BBC8AA(int pram0) { Invoke<0xD6BBC8AA, void>(pram0); }
static void UNK_0x354DDFED(int pram0, int pram1) { Invoke<0x354DDFED, void>(pram0, pram1); }
static void UNK_0x230AB95E(int pram0) { Invoke<0x230AB95E, void>(pram0); }
static void ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(int pram0, int pram1) { Invoke<0x64799CEE, void>(pram0, pram1); }
static void UNK_0xC43C4D76(int pram0, int pram1) { Invoke<0xC43C4D76, void>(pram0, pram1); }
static void UNK_0xFCA83D15(int pram0, int pram1, int pram2) { Invoke<0xFCA83D15, void>(pram0, pram1, pram2); }
static int UNK_0x9189EB8B(int pram0) { return Invoke<0x9189EB8B, int>(pram0); }
static int UNK_0x00CDD849(int pram0) { return Invoke<0x00CDD849, int>(pram0); }
static int UNK_0x6138B1B8(int pram0) { return Invoke<0x6138B1B8, int>(pram0); }
static void REMOVE_GLOW_INDICATOR(int pram0) { Invoke<0xCBDD5832, void>(pram0); }
static int IS_VOLUME_ENABLED(int pram0) { return Invoke<0x29ED6F03, int>(pram0); }
static int COUNT_FLAMES_IN_VOLUME(int pram0) { return Invoke<0x3DD3E1EB, int>(pram0); }
static int UNK_0x3B32AB84(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x3B32AB84, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x3E30A514(int pram0, int pram1) { Invoke<0x3E30A514, void>(pram0, pram1); }
static int SET_PANIM_PARAMS(int pram0, int pram1, int pram2) { return Invoke<0x5941295A, int>(pram0, pram1, pram2); }
static int GET_CURRENT_DUEL_SCORE(int pram0) { return Invoke<0x33CE5435, int>(pram0); }
static int UNK_0x26011C78(int pram0) { return Invoke<0x26011C78, int>(pram0); }
static int HAS_ACCESSORY_ENUM(int pram0, int pram1) { return Invoke<0x9B958A25, int>(pram0, pram1); }
static void UNK_0xD021B37F(int pram0) { Invoke<0xD021B37F, void>(pram0); }
static void UNK_0x94A24A5C(int pram0) { Invoke<0x94A24A5C, void>(pram0); }
static int BEGIN_DUEL(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10, int pram11, int pram12) { return Invoke<0x44B7FF7E, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10, pram11, pram12); }
static int UNK_0x7FDDF876(int pram0, int pram1) { return Invoke<0x7FDDF876, int>(pram0, pram1); }
static int ADD_DUEL_HOSTAGE(int pram0, int pram1) { return Invoke<0x82A6B8FC, int>(pram0, pram1); }
static void SET_EMOTION(int pram0, int pram1, int pram2) { Invoke<0x1D1D9387, void>(pram0, pram1, pram2); }
static int SET_DUEL_DIFFICULTY(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x3E5C3C2D, int>(pram0, pram1, pram2, pram3); }
static void UNK_0xADCC16A2() { Invoke<0xADCC16A2, void>(); }
static int REMOVE_EVENT_RESPONSE(int pram0, int pram1, int pram2) { return Invoke<0xFEE731AF, int>(pram0, pram1, pram2); }
static void CLEAR_PLAYER_BLOOD() { Invoke<0x807C9D01, void>(); }
static void UNK_0x9D9E093E(int pram0) { Invoke<0x9D9E093E, void>(pram0); }
static void UNK_0x338DF299() { Invoke<0x338DF299, void>(); }
static int IS_ACTOR_ANIM_PHASE_LOCKED(int pram0) { return Invoke<0xE0AC4B86, int>(pram0); }
static void RELEASE_ACTOR_ANIM_PHASE_LOCK(int pram0) { Invoke<0xAEBAE989, void>(pram0); }
static void UNK_0xDE7C65CE() { Invoke<0xDE7C65CE, void>(); }
static void UNK_0x32F2D6F1(int pram0) { Invoke<0x32F2D6F1, void>(pram0); }
static void HUD_TIMER_PAUSE() { Invoke<0x3383E839, void>(); }
static void UNK_0x7784BB85() { Invoke<0x7784BB85, void>(); }
static int UNK_0xD3A523FD(int pram0) { return Invoke<0xD3A523FD, int>(pram0); }
static void SET_ACTOR_ANIM_PHASE_LOCK(int pram0, int pram1) { Invoke<0xB03616C2, void>(pram0, pram1); }
static void UNK_0x24AE7AFB() { Invoke<0x24AE7AFB, void>(); }
static int UNK_0xA091179F(int pram0, int pram1) { return Invoke<0xA091179F, int>(pram0, pram1); }
static void UNK_0x0CCE435E(int pram0, int pram1, int pram2) { Invoke<0x0CCE435E, void>(pram0, pram1, pram2); }
static void UNK_0x87A2C1D5(int pram0) { Invoke<0x87A2C1D5, void>(pram0); }
static void AI_RESET_NAV_SUBGRID_CELL_SIZE(int pram0) { Invoke<0x750A1EF6, void>(pram0); }
static int UNK_0x544BCE48(int pram0, int pram1) { return Invoke<0x544BCE48, int>(pram0, pram1); }
static void UNK_0x4D629653(int pram0, int pram1, int pram2) { Invoke<0x4D629653, void>(pram0, pram1, pram2); }
static int UNK_0x9B083FD2() { return Invoke<0x9B083FD2, int>(); }
static int GET_PHYSINST_VELOCITY(int pram0, int pram1) { return Invoke<0x17B69196, int>(pram0, pram1); }
static float SQRT(float pram0) { return Invoke<0x145C7701, float>(pram0); }
static int GET_ACTOR_UPDATE_PRIORITY(int pram0) { return Invoke<0x6D322CD3, int>(pram0); }
static void HUD_COUNTER_SET(int pram0) { Invoke<0x7D94675D, void>(pram0); }
static int EXP(int pram0) { return Invoke<0xE2313450, int>(pram0); }
static int UNK_0xD058BD70() { return Invoke<0xD058BD70, int>(); }
static int _RETURN_500000() { return Invoke<0x4C48EA4D, int>(); }
static int UNK_0x35CDFDC5(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x35CDFDC5, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x8A2A1A51(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x8A2A1A51, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x581CAC89() { return Invoke<0x581CAC89, int>(); }
static int UNK_0x79AFAB1F(int pram0, int pram1) { return Invoke<0x79AFAB1F, int>(pram0, pram1); }
static int GUI_MAKE_OVERLAY(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA2A68BAD, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int UNK_0xD019FF37(int pram0) { return Invoke<0xD019FF37, int>(pram0); }
static int UNK_0xA7FF2899(int pram0, int pram1, int pram2) { return Invoke<0xA7FF2899, int>(pram0, pram1, pram2); }
static GUIWindow GUI_MAIN_WINDOW() { return Invoke<0x5405B8AA, GUIWindow>(); }
static void UNK_0x72168160(int pram0) { Invoke<0x72168160, void>(pram0); }
static int GET_MOST_RECENT_RIDER(int pram0) { return Invoke<0x668E55C3, int>(pram0); }
static void UNK_0x8DEC3E03(int pram0) { Invoke<0x8DEC3E03, void>(pram0); }
static int UNK_0x14708CB1() { return Invoke<0x14708CB1, int>(); }
static void UNK_0x7A99E7DE() { Invoke<0x7A99E7DE, void>(); }
static void UNK_0x1D5E39A0() { Invoke<0x1D5E39A0, void>(); }
static int GRINGO_QUERY_FLOAT(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x69CF9B75, int>(pram0, pram1, pram2, pram3); }
static int IS_ACTOR_INITED(int pram0) { return Invoke<0x24F4DAB2, int>(pram0); }
static void UNK_0xA870B28E(int pram0, int pram1) { Invoke<0xA870B28E, void>(pram0, pram1); }
static int UNK_0x9DDB29B1(int pram0) { return Invoke<0x9DDB29B1, int>(pram0); }
static bool UNK_0x24A1B923() { return Invoke<0x24A1B923, bool>(); }
static int DECOR_REMOVE_ALL(int pram0) { return Invoke<0xFDB9E349, int>(pram0); }
static void UNK_0x713B1D7F(int pram0, int pram1) { Invoke<0x713B1D7F, void>(pram0, pram1); }
static int UNK_0x34F03EC7(int pram0, int pram1, int pram2) { return Invoke<0x34F03EC7, int>(pram0, pram1, pram2); }
static void UNK_0x573BEF3B(int pram0, int pram1) { Invoke<0x573BEF3B, void>(pram0, pram1); }
static void UI_SET_TEXT_HASH(int pram0, int pram1) { Invoke<0x06FD03D2, void>(pram0, pram1); }
static void UNK_0x50C18480(const char* pram0, int pram1) { Invoke<0x50C18480, void>(pram0, pram1); }
static int UNK_0x6A0A241A(int pram0) { return Invoke<0x6A0A241A, int>(pram0); }
static int NET_GET_NAT_TYPE() { return Invoke<0x31700C0A, int>(); }
static int UNK_0xC1A30BB5() { return Invoke<0xC1A30BB5, int>(); }
static void UNK_0x2C4CBC25(int pram0) { Invoke<0x2C4CBC25, void>(pram0); }
static int UNK_0xF2140DEE(int pram0) { return Invoke<0xF2140DEE, int>(pram0); }
static void UNK_0xBECB3EEC(int pram0, int pram1, int pram2, int pram3) { Invoke<0xBECB3EEC, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x98A5CDC5(int pram0) { return Invoke<0x98A5CDC5, int>(pram0); }
static int UNK_0x8808546E() { return Invoke<0x8808546E, int>(); }
static int UNK_0x1A47001B() { return Invoke<0x1A47001B, int>(); }
static bool UNK_0x0FF6B8F4() { return Invoke<0x0FF6B8F4, bool>(); }
static void UNK_0xCE8F6304(int pram0) { Invoke<0xCE8F6304, void>(pram0); }
static void UNK_0x41921C98(int pram0) { Invoke<0x41921C98, void>(pram0); }
static void UNK_0xAB32D5D9(int pram0) { Invoke<0xAB32D5D9, void>(pram0); }
static int UNK_0x75F27D60(int pram0) { return Invoke<0x75F27D60, int>(pram0); }
static int UNK_0x6A7B9FAD(int pram0) { return Invoke<0x6A7B9FAD, int>(pram0); }
static int UNK_0x106CE441(int pram0) { return Invoke<0x106CE441, int>(pram0); }
static void UNK_0xA64A451E(int pram0, int pram1) { Invoke<0xA64A451E, void>(pram0, pram1); }
static int UNK_0xB514ECA7(int pram0, int pram1) { return Invoke<0xB514ECA7, int>(pram0, pram1); }
static int GET_ACTOR_COMBAT_CLASS(int pram0) { return Invoke<0x0129B715, int>(pram0); }
static void SET_VEHICLE_PASSENGERS_ALLOWED(int pram0, int pram1) { Invoke<0xBD0C1BEA, void>(pram0, pram1); }
static void SQUADS_MERGE(int pram0, int pram1) { Invoke<0x320E2604, void>(pram0, pram1); }
static void UNK_0x91BB8548(int pram0, int pram1) { Invoke<0x91BB8548, void>(pram0, pram1); }
static void SET_VOLUME_PARAMS(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0xFEC1CBC6, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static int UNK_0x15D6F3C7(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x15D6F3C7, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x746897AB(int pram0, int pram1, int pram2, int pram3) { Invoke<0x746897AB, void>(pram0, pram1, pram2, pram3); }
static int UNK_0x0B24362F(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8) { return Invoke<0x0B24362F, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8); }
static int GET_PLAYER_CONTROL_CONFIG(int pram0) { return Invoke<0x8421033D, int>(pram0); }
static void UNK_0xE5FE0A6A(int pram0) { Invoke<0xE5FE0A6A, void>(pram0); }
static void UNK_0x08D84437(int pram0) { Invoke<0x08D84437, void>(pram0); }
static void UNK_0xAFFBBE78(int pram0) { Invoke<0xAFFBBE78, void>(pram0); }
static void UNK_0xF34B8448(int pram0) { Invoke<0xF34B8448, void>(pram0); }
static void UNK_0x796E66E7(int pram0) { Invoke<0x796E66E7, void>(pram0); }
static void UNK_0x784F04DD(int pram0) { Invoke<0x784F04DD, void>(pram0); }
static void UNK_0x3248D20E(int pram0) { Invoke<0x3248D20E, void>(pram0); }
static void UNK_0xBC46E3E1(int pram0, int pram1, int pram2) { Invoke<0xBC46E3E1, void>(pram0, pram1, pram2); }
static void UNK_0x2634F265(int pram0, int pram1) { Invoke<0x2634F265, void>(pram0, pram1); }
static void UNK_0xA0A5FF80(int pram0, int pram1) { Invoke<0xA0A5FF80, void>(pram0, pram1); }
static int UNK_0x52C10147(int pram0) { return Invoke<0x52C10147, int>(pram0); }
static void UNK_0x90008899(int pram0) { Invoke<0x90008899, void>(pram0); }
static int NET_GET_AREA_OVERLOAD_STATE_FOR_SLOT(int pram0) { return Invoke<0xCB42389E, int>(pram0); }
static int UNK_0x63034F52(int pram0) { return Invoke<0x63034F52, int>(pram0); }
static int UNK_0xE9EAC45C(int pram0) { return Invoke<0xE9EAC45C, int>(pram0); }
static int UNK_0xBDF22FCA(int pram0) { return Invoke<0xBDF22FCA, int>(pram0); }
static int UNK_0xA174152C(int pram0) { return Invoke<0xA174152C, int>(pram0); }
static int UNK_0x0183A3F0(int pram0) { return Invoke<0x0183A3F0, int>(pram0); }
static void UNK_0x9EA132A3(int pram0) { Invoke<0x9EA132A3, void>(pram0); }
static int GUI_MAKE_WINDOW(GUIWindow Parent, int pram1, const char* WindowName, const char* pram3) { return Invoke<0xA20246AB, int>(Parent, pram1, WindowName, pram3); }
static void UNK_0x2F7B457B(int pram0, int pram1, int pram2, int pram3) { Invoke<0x2F7B457B, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x651F6299(int pram0) { Invoke<0x651F6299, void>(pram0); }
static int UNK_0x4A721118(int pram0) { return Invoke<0x4A721118, int>(pram0); }
static int UNK_0x4500B98A(int pram0) { return Invoke<0x4500B98A, int>(pram0); }
static int GET_WEAPON_GOLD(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0x6DBD1DDB, int>(_Actor, _WeaponModel); }
static int UNK_0x3AE1062C() { return Invoke<0x3AE1062C, int>(); }
static bool _IS_ACTOR_AMMO_INFINITE(Actor _Actor, WeaponModel _WeaponModel) { return Invoke<0xC666B987, bool>(_Actor, _WeaponModel); }
static void READY_ITEM(const char* ItemName, Actor Actor) { Invoke<0x2B00A643, void>(ItemName, Actor); }
static int UNK_0x0B2D5E4B() { return Invoke<0x0B2D5E4B, int>(); }
static void UNK_0xCB0BCAE2(int pram0) { Invoke<0xCB0BCAE2, void>(pram0); }
static void DISABLE_PLAYER_GRINGO_USE(int pram0, int pram1) { Invoke<0x6FCF6BC8, void>(pram0, pram1); }
static void UNK_0xF7B747CA() { Invoke<0xF7B747CA, void>(); }
static void UNK_0x1184EC7B(int pram0) { Invoke<0x1184EC7B, void>(pram0); }
static void UNK_0x120E6123(int pram0) { Invoke<0x120E6123, void>(pram0); }
static bool UNK_0xF5B7B208() { return Invoke<0xF5B7B208, bool>(); }
static int UNK_0xBD269877(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xBD269877, int>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0x43C5F320() { Invoke<0x43C5F320, void>(); }
static void SET_CAMERA_FOCUS_OBJECT(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { Invoke<0x48C3D85A, void>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0xEB214384(int pram0) { Invoke<0xEB214384, void>(pram0); }
static int GET_SLOT_FACING(int pram0, int pram1) { return Invoke<0x34A9866B, int>(pram0, pram1); }
static void UNK_0x6E303287(int pram0, int pram1) { Invoke<0x6E303287, void>(pram0, pram1); }
static void _UI_ENTER_EXCLUSIVE(char* scaleformLayer) { Invoke<0xB1A2028A, void>(scaleformLayer); }
static void BURN_ACTOR(int pram0, int pram1, int pram2) { Invoke<0xA257C16D, void>(pram0, pram1, pram2); }
static int GRINGO_STAY_ACTIVE(int pram0, int pram1) { return Invoke<0x9175FCFA, int>(pram0, pram1); }
static int _PUSH_NEG_ONE_2() { return Invoke<0xD8218A5B, int>(); }
static int UNK_0x74EE96B8(int pram0) { return Invoke<0x74EE96B8, int>(pram0); }
static int UNK_0x2374C1E0() { return Invoke<0x2374C1E0, int>(); }
static void TRAIN_DESTROY_CAR(int pram0, int pram1) { Invoke<0x2040FB19, void>(pram0, pram1); }
static int TRAIN_GET_NEAREST_POI_DISTANCE(int pram0) { return Invoke<0x6FC1847D, int>(pram0); }
static void UNK_0x90DD37E7(int pram0, int pram1, int pram2) { Invoke<0x90DD37E7, void>(pram0, pram1, pram2); }
static int AI_GLOBAL_GET_PERMANENT_DANGER(int pram0) { return Invoke<0xFF00B4E6, int>(pram0); }
static void DESTROY_CRIME(int pram0) { Invoke<0xE9AB08C0, void>(pram0); }
static int UNK_0x72A048B7(int pram0) { return Invoke<0x72A048B7, int>(pram0); }
static int GET_CRIME_FACTION(int pram0) { return Invoke<0xE2FE0673, int>(pram0); }
static int UNK_0x67F224B4(int pram0) { return Invoke<0x67F224B4, int>(pram0); }
static int AI_SELF_DEFENSE_GET_ATTACKED_PLAYER_FIRST(int pram0) { return Invoke<0x68C50F50, int>(pram0); }
static int GET_LAST_DAMAGE(int pram0) { return Invoke<0x45556269, int>(pram0); }
static int GET_JOURNAL_ENTRY_PROGRESS(int pram0) { return Invoke<0xF2C1D690, int>(pram0); }
static int UNK_0x91396EB7(int pram0) { return Invoke<0x91396EB7, int>(pram0); }
static int FIRE_GET_OWNER(int pram0) { return Invoke<0x15683736, int>(pram0); }
static void UNK_0x40C2576F(int pram0, int pram1) { Invoke<0x40C2576F, void>(pram0, pram1); }
static void UNK_0xDF3DF05A(int pram0) { Invoke<0xDF3DF05A, void>(pram0); }
static bool AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return Invoke<0x86E995D1, bool>(); }
static int GET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(int pram0) { return Invoke<0x78B7976E, int>(pram0); }
static int UNK_0xD19EFFC1(int pram0, int pram1) { return Invoke<0xD19EFFC1, int>(pram0, pram1); }
static void HUD_STAMINA_OVERRIDE(int pram0, int pram1, int pram2) { Invoke<0xADBD44F6, void>(pram0, pram1, pram2); }
static int UNK_0x6F513950(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x6F513950, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int GET_CAMERA_SHOT_TRANSITION(int pram0) { return Invoke<0x7AC13DF5, int>(pram0); }
static void SET_FIXED_TRANSITION_T(int pram0, int pram1) { Invoke<0x143A617C, void>(pram0, pram1); }
static void ANIMAL_ACTOR_SET_DOCILE(Actor Actor, bool Docile) { Invoke<0xABFCFF01, void>(Actor, Docile); }
static void GET_CAMERA_UP_VECTOR(int pram0, int pram1) { Invoke<0x94A10ECD, void>(pram0, pram1); }
static int CUTSCENEOBJECT_ADD_TRANSITION_FIXED(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x7A48EDDF, int>(pram0, pram1, pram2, pram3, pram4); }
static void UNK_0xCA99D3B4() { Invoke<0xCA99D3B4, void>(); }
static int SC_CHALLENGE_GET_VAR_BOOL(int pram0, int pram1) { return Invoke<0xB40622F1, int>(pram0, pram1); }
static int SC_CHALLENGE_GET_VAR_FLOAT(int pram0, int pram1) { return Invoke<0xC322556E, int>(pram0, pram1); }
static void UI_CHALLENGE_CREATE(int pram0, int pram1, int pram2) { Invoke<0x1EB9AF29, void>(pram0, pram1, pram2); }
static void UI_CHALLENGE_SET_PROGRESS(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x10F5386D, void>(pram0, pram1, pram2, pram3, pram4); }
static int SC_CHALLENGE_GET_EXPIRATION_STATE(int pram0) { return Invoke<0x4BD61354, int>(pram0); }
static void SC_CHALLENGE_PROCESS_EXPIRATION(int pram0) { Invoke<0x1876B04E, void>(pram0); }
static void SC_CHALLENGE_RELEASE(int pram0) { Invoke<0xD2513200, void>(pram0); }
static int SC_CHALLENGE_GET_LEADERBOARD_ID(int pram0, int pram1) { return Invoke<0xC21048BF, int>(pram0, pram1); }
static void SC_CHALLENGE_CLEAN_UP(int pram0) { Invoke<0xB7DE2AF2, void>(pram0); }
static void UNK_0x9D9CDCE3(int pram0, int pram1) { Invoke<0x9D9CDCE3, void>(pram0, pram1); }
static void UNK_0xD5ED5FCB(int pram0, int pram1) { Invoke<0xD5ED5FCB, void>(pram0, pram1); }
static void SC_CHALLENGE_RESET_EXPIRATION_STATE(int pram0) { Invoke<0xF5F97702, void>(pram0); }
static int SC_CHALLENGE_IS_ACTIVE(int pram0) { return Invoke<0x5D7197BC, int>(pram0); }
static int SC_CHALLENGE_IS_RUNNING(int pram0) { return Invoke<0x79F09AC7, int>(pram0); }
static int UNK_0xBBF4F7E4() { return Invoke<0xBBF4F7E4, int>(); }
static int UNK_0xAFD53217(int pram0, int pram1, int pram2) { return Invoke<0xAFD53217, int>(pram0, pram1, pram2); }
static int UNK_0xB555A648(int pram0, int pram1, int pram2) { return Invoke<0xB555A648, int>(pram0, pram1, pram2); }
static int GET_GRINGO_INT_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x8A86AF8B, int>(pram0, pram1, pram2); }
static int SET_GRINGO_INT_ATTR(int pram0, int pram1, int pram2) { return Invoke<0x377B2C54, int>(pram0, pram1, pram2); }
static int GRINGO_GET_COMPONENT_HASH(int pram0) { return Invoke<0x14E53D6F, int>(pram0); }
static int UNK_0xC15C3361(int pram0, int pram1) { return Invoke<0xC15C3361, int>(pram0, pram1); }
static int UNK_0xA766EA5C(int pram0, int pram1) { return Invoke<0xA766EA5C, int>(pram0, pram1); }
static int IS_PROP_STREAMED_IN(int pram0) { return Invoke<0x5131AEF1, int>(pram0); }
static void GRAVE_SET_DUG_UP(int pram0, int pram1) { Invoke<0x674156BB, void>(pram0, pram1); }
static int GET_GRAVE_FROM_OBJECT(int pram0) { return Invoke<0xA90E602F, int>(pram0); }
static int UNK_0x04507DBC(int pram0, int pram1) { return Invoke<0x04507DBC, int>(pram0, pram1); }
static int UNK_0x88F7432C(int pram0, int pram1) { return Invoke<0x88F7432C, int>(pram0, pram1); }
static int GET_ACTOR_ANIM_CURRENT_TIME(int pram0, int pram1) { return Invoke<0x8609F5E1, int>(pram0, pram1); }
static int SET_PROP_VELOCITY_ON_AXIS(int pram0, int pram1, int pram2) { return Invoke<0xC9F3981D, int>(pram0, pram1, pram2); }
static int UNK_0x3736FF43(int pram0) { return Invoke<0x3736FF43, int>(pram0); }
static void UNK_0xF95DDBF2(int pram0, int pram1) { Invoke<0xF95DDBF2, void>(pram0, pram1); }
static void UNK_0x6BA667B5(int pram0) { Invoke<0x6BA667B5, void>(pram0); }
static int UNK_0xB8C419C3(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xB8C419C3, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int IS_ACTOR_ANIM_PLAYING(int pram0, int pram1) { return Invoke<0x1ADE21EB, int>(pram0, pram1); }
static int UNK_0x08D76BB0(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x08D76BB0, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xA2DEC153(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA2DEC153, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static int IS_VEHICLE_ENGINE_RUNNING(int pram0) { return Invoke<0x8257A916, int>(pram0); }
static void SET_VEHICLE_ENGINE_RUNNING(Actor Vehicle, bool Running) { Invoke<0x462B5FDF, void>(Vehicle, Running); }
static int UNK_0x6517FF1B(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x6517FF1B, int>(pram0, pram1, pram2, pram3, pram4); }
static int GRINGO_IS_ACTIVE(int pram0) { return Invoke<0xB8A48688, int>(pram0); }
static void DESTROY_ZONE(int pram0) { Invoke<0xD62F3D27, void>(pram0); }
static int UNK_0x7E4681E8(int pram0, int pram1, int pram2) { return Invoke<0x7E4681E8, int>(pram0, pram1, pram2); }
static int GRINGO_ACTOR_FACE(int pram0, int pram1, int pram2) { return Invoke<0x29C63CE6, int>(pram0, pram1, pram2); }
static int UNK_0x217B4264(int pram0, int pram1, int pram2) { return Invoke<0x217B4264, int>(pram0, pram1, pram2); }
static int UNK_0x3DEA631B(int pram0, int pram1) { return Invoke<0x3DEA631B, int>(pram0, pram1); }
static void PUSH_MINIGAME_INPUT(int pram0, int pram1) { Invoke<0xE2B894D1, void>(pram0, pram1); }
static void UNK_0x8275FDD4(int pram0) { Invoke<0x8275FDD4, void>(pram0); }
static int UNK_0x6AAD0420(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x6AAD0420, int>(pram0, pram1, pram2, pram3); }
static int UNK_0x655D350B(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x655D350B, int>(pram0, pram1, pram2, pram3); }
static int SET_OBJECT_ANIMATOR_RATE(int pram0, int pram1) { return Invoke<0x0B4D9AFA, int>(pram0, pram1); }
static int SET_OBJECT_ANIMATOR_PHASE(int pram0, int pram1) { return Invoke<0xC0128653, int>(pram0, pram1); }
static bool IS_MINIGAME_RUNNING() { return Invoke<0x117D7E71, bool>(); }
static int HAS_PROP_BEEN_DAMAGED(int pram0) { return Invoke<0x7151E7F0, int>(pram0); }
static int CREATE_OBJECT_ANIMATOR(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x856D5842, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x188B6431(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x188B6431, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xB57D4110(int pram0, int pram1, int pram2) { return Invoke<0xB57D4110, int>(pram0, pram1, pram2); }
static int UNK_0x97951004(int pram0) { return Invoke<0x97951004, int>(pram0); }
static int UNK_0x325F7E50(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0x325F7E50, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void UNK_0x507BBD3A(int pram0, int pram1) { Invoke<0x507BBD3A, void>(pram0, pram1); }
static void UNK_0xC93116B1() { Invoke<0xC93116B1, void>(); }
static int UNK_0xEB33480A(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7) { return Invoke<0xEB33480A, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7); }
static int UNK_0xA9E00433(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5) { return Invoke<0xA9E00433, int>(pram0, pram1, pram2, pram3, pram4, pram5); }
static void AI_SET_DISARMED(int pram0, int pram1) { Invoke<0x2444577C, void>(pram0, pram1); }
static void LASSO_EVENT(int pram0, int pram1) { Invoke<0x98FAF5D7, void>(pram0, pram1); }
static void UNK_0x96161235(int pram0) { Invoke<0x96161235, void>(pram0); }
static int UNK_0x1AA3A0C0(int pram0, int pram1) { return Invoke<0x1AA3A0C0, int>(pram0, pram1); }
static void AI_GLOBAL_REPORT_DANGER(int pram0) { Invoke<0xCF70330C, void>(pram0); }
static int UNK_0x6689F85C(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x6689F85C, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xEC28CA8E(int pram0, int pram1, int pram2) { return Invoke<0xEC28CA8E, int>(pram0, pram1, pram2); }
static int UNK_0xA332ACE3(int pram0, int pram1) { return Invoke<0xA332ACE3, int>(pram0, pram1); }
static void UNK_0x3184B507() { Invoke<0x3184B507, void>(); }
static void UNK_0x489B3078() { Invoke<0x489B3078, void>(); }
static void AUDIO_PLAY_PAIN(int pram0, int pram1) { Invoke<0x123709E8, void>(pram0, pram1); }
static int GRINGO_ACTOR_MOVE_TO(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0x698105FC, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0xC5205015(int pram0) { return Invoke<0xC5205015, int>(pram0); }
static int UNK_0xADBF3ADF(int pram0) { return Invoke<0xADBF3ADF, int>(pram0); }
static void UNK_0x38636EBF(int pram0, int pram1) { Invoke<0x38636EBF, void>(pram0, pram1); }
static int UNK_0x869D5D92(int pram0, int pram1, int pram2) { return Invoke<0x869D5D92, int>(pram0, pram1, pram2); }
static int IS_HOGTIE_CUTFREE_OBSTRUCTED(int pram0, int pram1) { return Invoke<0x9377291F, int>(pram0, pram1); }
static void CLEAR_HOGTIE_ATTACH_VICTIM(int pram0) { Invoke<0xB7A802C2, void>(pram0); }
static int UNK_0x60D10483(int pram0, int pram1) { return Invoke<0x60D10483, int>(pram0, pram1); }
static void SET_HOGTIE_ATTACH_VICTIM(int pram0, int pram1) { Invoke<0xFA2B916E, void>(pram0, pram1); }
static int GET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(int pram0, int pram1) { return Invoke<0x784398CB, int>(pram0, pram1); }
static int UNK_0xBCED635B(int pram0) { return Invoke<0xBCED635B, int>(pram0); }
static int UNK_0x9634D42E(int pram0, int pram1) { return Invoke<0x9634D42E, int>(pram0, pram1); }
static int GET_ACTOR_POSTURE(int pram0) { return Invoke<0xDB993A4F, int>(pram0); }
static void SET_PLAYER_DISABLE_TARGETING(int pram0, int pram1) { Invoke<0x0959C27A, void>(pram0, pram1); }
static void UNK_0x6E86FCB5(int pram0, int pram1, int pram2) { Invoke<0x6E86FCB5, void>(pram0, pram1, pram2); }
static void UNK_0x7BCE4845(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { Invoke<0x7BCE4845, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static void UNK_0xD1C91A7F(int pram0, int pram1, int pram2, int pram3) { Invoke<0xD1C91A7F, void>(pram0, pram1, pram2, pram3); }
static void TRAIN_GET_POSITION(int pram0, int pram1) { Invoke<0x06D055AB, void>(pram0, pram1); }
static int UNK_0x90B514B9(int pram0, int pram1, int pram2) { return Invoke<0x90B514B9, int>(pram0, pram1, pram2); }
static void GRINGO_UNLOAD_ANIMATION(int pram0) { Invoke<0x777842E3, void>(pram0); }
static void GRINGO_LOAD_ANIMATION(int pram0) { Invoke<0x78B655B1, void>(pram0); }
static void CAMERASHOT_ADD_LOOKSTICK_ROTATION_BEHAVIOR(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0x59AE458A, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int UNK_0xE782EB20(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9, int pram10) { return Invoke<0xE782EB20, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9, pram10); }
static void UNK_0x660DBDDD(int pram0) { Invoke<0x660DBDDD, void>(pram0); }
static int GRINGO_QUERY_INT(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x6B1F2FEB, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xDEE6523D(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xDEE6523D, int>(pram0, pram1, pram2, pram3); }
static void UNK_0x466C02BA(int pram0, int pram1, int pram2, int pram3) { Invoke<0x466C02BA, void>(pram0, pram1, pram2, pram3); }
static int UNK_0xE9C74577(int pram0) { return Invoke<0xE9C74577, int>(pram0); }
static int UNK_0xF573B7DE(int pram0, int pram1) { return Invoke<0xF573B7DE, int>(pram0, pram1); }
static int GET_GRINGO_STRUCT_ATTR(int pram0, int pram1, int pram2, int pram3) { return Invoke<0xFA22A365, int>(pram0, pram1, pram2, pram3); }
static int DEACTIVATE_ACTOR_FOR_PERS_CHAR(int pram0) { return Invoke<0x9B2A39BC, int>(pram0); }
static void TASK_WANDER_IN_BOX(int pram0, int pram1, int pram2, int pram3) { Invoke<0x6840D3C1, void>(pram0, pram1, pram2, pram3); }
static void TASK_GUARD_PATROL_PATH(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { Invoke<0xFA5BB172, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static int GRINGO_QUERY_STRING(int pram0, int pram1, int pram2, int pram3) { return Invoke<0x30AF0FA8, int>(pram0, pram1, pram2, pram3); }
static int UNK_0xF0991C9F(int pram0, int pram1) { return Invoke<0xF0991C9F, int>(pram0, pram1); }
static int UNK_0x257C73C5(int pram0) { return Invoke<0x257C73C5, int>(pram0); }
static int GET_ACTOR_HEIGHT(int pram0) { return Invoke<0xE173CE48, int>(pram0); }
static int UNK_0xE9612679(int pram0, int pram1, int pram2, int pram3, int pram4) { return Invoke<0xE9612679, int>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x67258116(int pram0, int pram1) { return Invoke<0x67258116, int>(pram0, pram1); }
static void SET_ACTOR_IS_SHOPKEEPER(int pram0, int pram1, int pram2) { Invoke<0x0880DBF5, void>(pram0, pram1, pram2); }
static int WAS_AI_ACTOR_PLAYER_WEAPON_THREATENED_BY(int pram0, int pram1, int pram2) { return Invoke<0xF5752F72, int>(pram0, pram1, pram2); }
static int AI_HAS_ACTOR_THREATENED_RECENTLY(int pram0) { return Invoke<0x5D72FDB6, int>(pram0); }
static void UNK_0x0B9AE52F(int pram0) { Invoke<0x0B9AE52F, void>(pram0); }
static void UNK_0x5F4C08A2(int pram0) { Invoke<0x5F4C08A2, void>(pram0); }
static void DOF_POP() { Invoke<0x5EBE0C41, void>(); }
static void UNK_0x3601E3E2(int pram0) { Invoke<0x3601E3E2, void>(pram0); }
static int UNK_0x5A12BB48() { return Invoke<0x5A12BB48, int>(); }
static void UNK_0xB84DE662(int pram0) { Invoke<0xB84DE662, void>(pram0); }
static void SHOP_REFRESH(int pram0) { Invoke<0xE7F6AA5D, void>(pram0); }
static int UNK_0x42CBA241(int pram0) { return Invoke<0x42CBA241, int>(pram0); }
static int UNK_0x1BF8FD6D(int pram0) { return Invoke<0x1BF8FD6D, int>(pram0); }
static int UNK_0x94D8F49E(int pram0) { return Invoke<0x94D8F49E, int>(pram0); }
static void UNK_0xB75FAD6A(int pram0) { Invoke<0xB75FAD6A, void>(pram0); }
static int UNK_0xFAF37414(int pram0) { return Invoke<0xFAF37414, int>(pram0); }
static void UNK_0xA40EFFFF(int pram0, int pram1) { Invoke<0xA40EFFFF, void>(pram0, pram1); }
static int SS_GET_STRING_ID(int pram0, int pram1) { return Invoke<0xA2D27A1F, int>(pram0, pram1); }
static int UNK_0xB954DE78(int pram0) { return Invoke<0xB954DE78, int>(pram0); }
static void UNK_0x777CF9FA(int pram0, int pram1) { Invoke<0x777CF9FA, void>(pram0, pram1); }
static void UNK_0x7A34C33D(int pram0, int pram1) { Invoke<0x7A34C33D, void>(pram0, pram1); }
static void SHOP_CLEAR() { Invoke<0xCEBD595A, void>(); }
static int UNK_0x2FCD8CCA(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0x2FCD8CCA, int>(pram0, pram1, pram2, pram3, pram4, pram5, pram6); }
static void DOF_PUSH() { Invoke<0xF665F9D1, void>(); }
static int GET_CAMERASHOT_FAR_CLIP_PLANE(int pram0) { return Invoke<0xD86CB952, int>(pram0); }
static void DOF_SET(int pram0, int pram1, int pram2, int pram3) { Invoke<0xEA8964CC, void>(pram0, pram1, pram2, pram3); }
static void UNK_0x47A8DDED(int pram0) { Invoke<0x47A8DDED, void>(pram0); }
static int STRINGTABLE_LENGTH(int pram0) { return Invoke<0x71D550C6, int>(pram0); }
static int TRAIN_IS_VALID(int pram0) { return Invoke<0x7224CD9B, int>(pram0); }
static void TASK_FAILURE_MODE_SET(int pram0, int pram1) { Invoke<0x26EBE467, void>(pram0, pram1); }
static int HORSE_GET_CURR_FRESHNESS(int pram0) { return Invoke<0xB8665D8A, int>(pram0); }
static int GET_ACTOR_MAX_FRESHNESS(int pram0) { return Invoke<0xF1D2A13E, int>(pram0); }
static void UNK_0x9603D3B2(int pram0, int pram1) { Invoke<0x9603D3B2, void>(pram0, pram1); }
static bool UNK_0x00EF33EF() { return Invoke<0x00EF33EF, bool>(); }
static int GET_CAMERA_FOV(int pram0) { return Invoke<0x7B302F36, int>(pram0); }
static void UPDATE_AIMRAMP(int pram0, int pram1, int pram2, int pram3, int pram4) { Invoke<0x86066A65, void>(pram0, pram1, pram2, pram3, pram4); }
static int UNK_0x9BD37A3D(int pram0) { return Invoke<0x9BD37A3D, int>(pram0); }
static int UNK_0xDA50B18B(int pram0, int pram1) { return Invoke<0xDA50B18B, int>(pram0, pram1); }
static int UNK_0x4062688A(int pram0) { return Invoke<0x4062688A, int>(pram0); }
static int UNK_0xE13B49BD(int pram0) { return Invoke<0xE13B49BD, int>(pram0); }
static void UNK_0x4486E8C7() { Invoke<0x4486E8C7, void>(); }
static int UNK_0x55E6227E(int pram0, int pram1) { return Invoke<0x55E6227E, int>(pram0, pram1); }
static void UNK_0xEB8325B3(int pram0) { Invoke<0xEB8325B3, void>(pram0); }
static void UNK_0xE74C4851() { Invoke<0xE74C4851, void>(); }
static void SET_CAMERASHOT_CONTROL_SEQUENCE_VEC3(int pram0, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6, int pram7, int pram8, int pram9) { Invoke<0x0229585E, void>(pram0, pram1, pram2, pram3, pram4, pram5, pram6, pram7, pram8, pram9); }
static void UNK_0x382C47C5(int pram0) { Invoke<0x382C47C5, void>(pram0); }
static int GET_TASK_NEXT_POINT_ON_PATH(int pram0, int pram1) { return Invoke<0xF726557C, int>(pram0, pram1); }
static int SET_CUTSCENEINPUTS_TARGET_GUID(int pram0, int pram1, int pram2) { return Invoke<0xF74B5ADE, int>(pram0, pram1, pram2); }
static int UNK_0x8701F1F6() { return Invoke<0x8701F1F6, int>(); }
static int _GET_MAX_PLAYERS() { return Invoke<0xB5401D4A, int>(); }
static bool UNK_0x80B30545() { return Invoke<0x80B30545, bool>(); }
static bool GET_LAST_HIT_ZONE(Actor Actor, int* out) { return Invoke<0x855F9A3B, bool>(Actor, *out); }
static const char* GET_WEAPON_DISPLAY_NAME(WeaponModel _WeaponModel) { return Invoke<0x35CD589C, const char*>(_WeaponModel); }
static Blip GET_BLIP_ON_OBJECT(Object Obj) { return Invoke<0xE3E30992, Blip>(Obj); }
static int NET_GET_SESSION_GAMER_COUNT() { return Invoke<0x7AB65B0C, int>(); }
static Actor GET_LAST_ATTACK_TARGET(Actor actor) { return Invoke<0xEB40C2FC, Actor>(actor); }
static void SET_CAMERA_FOLLOW_ACTOR(Actor actor) { Invoke<0x8EFDFE89, void>(actor); }
static int ADD_SCRIPT_USE_CONTEXT(const char* context, int pram0, Button b, int pram1, int pram2, int pram3, int pram4, int pram5, int pram6) { return Invoke<0xD7591B0E, int>(context, pram0, b, pram1, pram2, pram3, pram4, pram5, pram6); }
static Object GET_OBJECT_FROM_ACTOR(Actor _Actor) { return Invoke<0x4A2063EC, Object>(_Actor); }
static Blip GET_BLIP_ON_ACTOR(Actor _Actor) { return Invoke<0x1449EE9E, Blip>(_Actor); }
static const char* GET_LOCAL_PLAYER_NAME() { return Invoke<0xA183D927, const char*>(); }
static const char* _DLC_PREINIT() { return Invoke<0x0728B211, const char*>(); }
static int _DLC_INIT() { return Invoke<0xEC86DB0E, int>(); }
static int _DLC_FRAGMENT(const char* pram0) { return Invoke<0x57D9950B, int>(pram0); }
static int _DLC_CLIST(int pram0, int pram1) { return Invoke<0xF4D0807E, int>(pram0, pram1); }
static bool UNK_0x853F71F6(int pram0) { return Invoke<0x853F71F6, bool>(pram0); }