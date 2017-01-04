#define _SDL_syswm_h
struct SDL_SysWMinfo;
#if defined(SDL_VIDEO_DRIVER_WINDOWS)
#define WIN32_LEAN_AND_MEAN
#if defined(SDL_VIDEO_DRIVER_WINRT)
#if defined(SDL_VIDEO_DRIVER_X11)
#if defined(__APPLE__) && defined(__MACH__)
#define Cursor X11Cursor
#if defined(__APPLE__) && defined(__MACH__)
#undef Cursor
#if defined(SDL_VIDEO_DRIVER_DIRECTFB)
#if defined(SDL_VIDEO_DRIVER_COCOA)
@class NSWindow;
typedef struct _NSWindow NSWindow;
#if defined(SDL_VIDEO_DRIVER_UIKIT)
typedef struct _UIWindow UIWindow;
typedef struct _UIViewController UIViewController;
typedef Uint32 GLuint;
#if defined(SDL_VIDEO_DRIVER_ANDROID)
typedef struct ANativeWindow ANativeWindow;
typedef void *EGLSurface;
#if defined(SDL_VIDEO_DRIVER_VIVANTE)
typedef enum
SDL_SYSWM_TYPE;
struct SDL_SysWMmsg
;
struct SDL_SysWMinfo
;
typedef struct SDL_SysWMinfo SDL_SysWMinfo;
extern DECLSPEC SDL_bool SDLCALL SDL_GetWindowWMInfo(SDL_Window * window,
SDL_SysWMinfo * info);
