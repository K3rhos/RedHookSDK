#pragma once

// © Copyright K3rhos 2024
// https://discord.gg/8b7NVWnthY



template <typename T>
static inline void NativePush(T _Value)
{
	uint64_t value = 0;

	if (sizeof(T) > sizeof(uint64_t))
	{
		throw "error, value size > 64 bit";
	}

	*reinterpret_cast<T*>(&value) = _Value;

	NativePush64(value);
}



template<unsigned int _Hash, typename Result, typename... Args>
inline Result Invoke(Args... _Args)
{
	NativeInit(_Hash);

	(NativePush(_Args), ...);

	if constexpr (std::is_void_v<Result>)
	{
		NativeCall();
	}
	else
	{
		return *reinterpret_cast<Result*>(NativeCall());
	}
}