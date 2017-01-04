#if SDL_VIDEO_OPENGL_EGL
#if SDL_VIDEO_DRIVER_WINDOWS || SDL_VIDEO_DRIVER_WINRT
#define EGL_OPENGL_ES3_BIT_KHR 0x00000040
#if SDL_VIDEO_DRIVER_RPI
#define DEFAULT_EGL "/opt/vc/lib/libEGL.so"
#define DEFAULT_OGL_ES2 "/opt/vc/lib/libGLESv2.so"
#define DEFAULT_OGL_ES_PVR "/opt/vc/lib/libGLES_CM.so"
#define DEFAULT_OGL_ES "/opt/vc/lib/libGLESv1_CM.so"
#elif SDL_VIDEO_DRIVER_ANDROID || SDL_VIDEO_DRIVER_VIVANTE
#define DEFAULT_EGL "libEGL.so"
#define DEFAULT_OGL_ES2 "libGLESv2.so"
#define DEFAULT_OGL_ES_PVR "libGLES_CM.so"
#define DEFAULT_OGL_ES "libGLESv1_CM.so"
#elif SDL_VIDEO_DRIVER_WINDOWS || SDL_VIDEO_DRIVER_WINRT
#define DEFAULT_EGL "libEGL.dll"
#define DEFAULT_OGL_ES2 "libGLESv2.dll"
#define DEFAULT_OGL_ES_PVR "libGLES_CM.dll"
#define DEFAULT_OGL_ES "libGLESv1_CM.dll"
#define DEFAULT_OGL "libGL.so.1"
#define DEFAULT_EGL "libEGL.so.1"
#define DEFAULT_OGL_ES2 "libGLESv2.so.2"
#define DEFAULT_OGL_ES_PVR "libGLES_CM.so.1"
#define DEFAULT_OGL_ES "libGLESv1_CM.so.1"
#define LOAD_FUNC(NAME) \
_this->egl_data->NAME = SDL_LoadFunction(_this->egl_data->dll_handle, #NAME); \
if (!_this->egl_data->NAME) \
static int SDL_EGL_HasExtension(_THIS, const char *ext)
void *
SDL_EGL_GetProcAddress(_THIS, const char *proc)
int
SDL_EGL_ChooseConfig(_THIS)
SDL_GLContext
SDL_EGL_CreateContext(_THIS, EGLSurface egl_surface)
int
SDL_EGL_MakeCurrent(_THIS, EGLSurface egl_surface, SDL_GLContext context)
int
SDL_EGL_SetSwapInterval(_THIS, int interval)
int
SDL_EGL_GetSwapInterval(_THIS)
void
SDL_EGL_SwapBuffers(_THIS, EGLSurface egl_surface)
void
SDL_EGL_DeleteContext(_THIS, SDL_GLContext context)
EGLSurface *
SDL_EGL_CreateSurface(_THIS, NativeWindowType nw)
void
SDL_EGL_DestroySurface(_THIS, EGLSurface egl_surface)
