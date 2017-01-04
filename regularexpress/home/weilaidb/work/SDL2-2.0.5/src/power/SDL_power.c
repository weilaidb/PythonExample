typedef SDL_bool
(*SDL_GetPowerInfo_Impl) (SDL_PowerState * state, int *seconds,
int *percent);
SDL_bool SDL_GetPowerInfo_Linux_sys_class_power_supply(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Linux_proc_acpi(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Linux_proc_apm(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Windows(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_MacOSX(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Haiku(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_UIKit(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Android(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_PSP(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_WinRT(SDL_PowerState *, int *, int *);
SDL_bool SDL_GetPowerInfo_Emscripten(SDL_PowerState *, int *, int *);
static SDL_bool
SDL_GetPowerInfo_Hardwired(SDL_PowerState * state, int *seconds, int *percent)
static SDL_GetPowerInfo_Impl implementations[] = ;
SDL_PowerState
SDL_GetPowerInfo(int *seconds, int *percent)
