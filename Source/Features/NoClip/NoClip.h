#pragma once



class NoClip
{
	public:
		static void Update();

	private:
		static inline bool s_NoClip = false;
		static inline const std::vector<float> s_NoClipSpeeds = { 10.0f, 50.0f, 100.0f, 300.0f };
		static inline size_t s_NoClipSpeedIndex = 1;
};