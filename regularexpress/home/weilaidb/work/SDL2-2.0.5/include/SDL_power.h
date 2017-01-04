#define _SDL_power_h
typedef enum
SDL_PowerState;
extern DECLSPEC SDL_PowerState SDLCALL SDL_GetPowerInfo(int *secs, int *pct);
