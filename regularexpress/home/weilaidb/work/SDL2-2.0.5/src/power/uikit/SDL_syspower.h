#if SDL_POWER_UIKIT
void SDL_UIKit_UpdateBatteryMonitoring(void);
SDL_bool SDL_GetPowerInfo_UIKit(SDL_PowerState * state, int *seconds, int *percent);
