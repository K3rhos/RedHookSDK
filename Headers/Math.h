#pragma once

// © Copyright K3rhos 2024
// https://discord.gg/8b7NVWnthY



template<typename T>
class Math
{
	static_assert
	(
		std::is_same<T, float>::value ||
		std::is_same<T, double>::value ||
		std::is_same<T, int>::value,

		"T is not a valid type"
	);

	public:
		inline static const T PI = (T)3.141592653589793;
		inline static const T DegToRad = PI / (T)180.0;
		inline static const T RadToDeg = (T)180.0 / PI;
};