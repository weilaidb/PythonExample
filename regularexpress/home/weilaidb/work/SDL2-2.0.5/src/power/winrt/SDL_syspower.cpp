#if SDL_POWER_WINRT
extern "C"
SDL_bool
SDL_GetPowerInfo_WinRT(SDL_PowerState * state, int *seconds, int *percent)
