#if NTDDI_VERSION >= NTDDI_WINBLUE
#define SDL_WINRT_USE_APPLICATIONVIEW 1
extern "C"
typedef struct SDL_VideoData  SDL_VideoData;
extern SDL_Window * WINRT_GlobalSDLWindow;
extern void WINRT_UpdateWindowFlags(SDL_Window * window, Uint32 mask);
extern "C" Uint32 WINRT_DetectWindowFlags(SDL_Window * window);
#define WINRT_DIPS_TO_PHYSICAL_PIXELS(DIPS)     ((int)(0.5f + (((float)(DIPS) * (float)WINRT_DISPLAY_PROPERTY(LogicalDpi)) / 96.f)))
#define WINRT_PHYSICAL_PIXELS_TO_DIPS(PHYSPIX)  (((float)(PHYSPIX) * 96.f)/WINRT_DISPLAY_PROPERTY(LogicalDpi))
struct SDL_WindowData
;
