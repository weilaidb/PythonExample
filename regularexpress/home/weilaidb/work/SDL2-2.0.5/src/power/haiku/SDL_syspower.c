#if SDL_POWER_HAIKU
#define APM_DEVICE_PATH "/dev/misc/apm"
#define APM_FUNC_OFFSET 0x5300
#define APM_FUNC_GET_POWER_STATUS 10
#define APM_DEVICE_ALL 1
#define APM_BIOS_CALL (B_DEVICE_OP_CODES_END + 3)
SDL_bool
SDL_GetPowerInfo_Haiku(SDL_PowerState * state, int *seconds, int *percent)
