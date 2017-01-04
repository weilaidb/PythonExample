#define _SDL_sysvideo_h
typedef struct SDL_WindowShaper SDL_WindowShaper;
typedef struct SDL_ShapeDriver SDL_ShapeDriver;
typedef struct SDL_VideoDisplay SDL_VideoDisplay;
typedef struct SDL_VideoDevice SDL_VideoDevice;
struct SDL_WindowShaper
;
struct SDL_ShapeDriver
;
typedef struct SDL_WindowUserData
SDL_WindowUserData;
struct SDL_Window
;
#define FULLSCREEN_VISIBLE(W) \
(((W)->flags & SDL_WINDOW_FULLSCREEN) && \
((W)->flags & SDL_WINDOW_SHOWN) && \
!((W)->flags & SDL_WINDOW_MINIMIZED))
struct SDL_VideoDisplay
;
struct SDL_SysWMinfo;
#define _THIS   SDL_VideoDevice *_this
struct SDL_VideoDevice
;
typedef struct VideoBootStrap
VideoBootStrap;
#if SDL_VIDEO_DRIVER_COCOA
extern VideoBootStrap COCOA_bootstrap;
#if SDL_VIDEO_DRIVER_X11
extern VideoBootStrap X11_bootstrap;
#if SDL_VIDEO_DRIVER_MIR
extern VideoBootStrap MIR_bootstrap;
#if SDL_VIDEO_DRIVER_DIRECTFB
extern VideoBootStrap DirectFB_bootstrap;
#if SDL_VIDEO_DRIVER_WINDOWS
extern VideoBootStrap WINDOWS_bootstrap;
#if SDL_VIDEO_DRIVER_WINRT
extern VideoBootStrap WINRT_bootstrap;
#if SDL_VIDEO_DRIVER_HAIKU
extern VideoBootStrap HAIKU_bootstrap;
#if SDL_VIDEO_DRIVER_PANDORA
extern VideoBootStrap PND_bootstrap;
#if SDL_VIDEO_DRIVER_UIKIT
extern VideoBootStrap UIKIT_bootstrap;
#if SDL_VIDEO_DRIVER_ANDROID
extern VideoBootStrap Android_bootstrap;
#if SDL_VIDEO_DRIVER_PSP
extern VideoBootStrap PSP_bootstrap;
#if SDL_VIDEO_DRIVER_RPI
extern VideoBootStrap RPI_bootstrap;
#if SDL_VIDEO_DRIVER_DUMMY
extern VideoBootStrap DUMMY_bootstrap;
#if SDL_VIDEO_DRIVER_WAYLAND
extern VideoBootStrap Wayland_bootstrap;
#if SDL_VIDEO_DRIVER_NACL
extern VideoBootStrap NACL_bootstrap;
#if SDL_VIDEO_DRIVER_VIVANTE
extern VideoBootStrap VIVANTE_bootstrap;
#if SDL_VIDEO_DRIVER_EMSCRIPTEN
extern VideoBootStrap Emscripten_bootstrap;
extern SDL_VideoDevice *SDL_GetVideoDevice(void);
extern int SDL_AddBasicVideoDisplay(const SDL_DisplayMode * desktop_mode);
extern int SDL_AddVideoDisplay(const SDL_VideoDisplay * display);
extern SDL_bool SDL_AddDisplayMode(SDL_VideoDisplay *display, const SDL_DisplayMode * mode);
extern SDL_VideoDisplay *SDL_GetDisplayForWindow(SDL_Window *window);
extern void *SDL_GetDisplayDriverData( int displayIndex );
extern int SDL_RecreateWindow(SDL_Window * window, Uint32 flags);
extern void SDL_OnWindowShown(SDL_Window * window);
extern void SDL_OnWindowHidden(SDL_Window * window);
extern void SDL_OnWindowResized(SDL_Window * window);
extern void SDL_OnWindowMinimized(SDL_Window * window);
extern void SDL_OnWindowRestored(SDL_Window * window);
extern void SDL_OnWindowEnter(SDL_Window * window);
extern void SDL_OnWindowLeave(SDL_Window * window);
extern void SDL_OnWindowFocusGained(SDL_Window * window);
extern void SDL_OnWindowFocusLost(SDL_Window * window);
extern void SDL_UpdateWindowGrab(SDL_Window * window);
extern SDL_Window * SDL_GetFocusWindow(void);
extern SDL_bool SDL_ShouldAllowTopmost(void);
extern float SDL_ComputeDiagonalDPI(int hpix, int vpix, float hinches, float vinches);
