#define _SDL_vivanteplatform_h
#if SDL_VIDEO_DRIVER_VIVANTE
#if defined(CAVIUM)
#define VIVANTE_PLATFORM_CAVIUM
#elif defined(MARVELL)
#define VIVANTE_PLATFORM_MARVELL
#define VIVANTE_PLATFORM_GENERIC
extern int VIVANTE_SetupPlatform(_THIS);
extern void VIVANTE_CleanupPlatform(_THIS);
