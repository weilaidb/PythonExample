#if SDL_VIDEO_DRIVER_WINDOWS
#if SDL_VIDEO_OPENGL_WGL
#define DEFAULT_OPENGL "OPENGL32.DLL"
#define WGL_ARB_create_context
#define WGL_CONTEXT_MAJOR_VERSION_ARB   0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB   0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB     0x2093
#define WGL_CONTEXT_FLAGS_ARB           0x2094
#define WGL_CONTEXT_DEBUG_BIT_ARB       0x0001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB  0x0002
#define WGL_ARB_create_context_profile
#define WGL_CONTEXT_PROFILE_MASK_ARB              0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB          0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define WGL_ARB_create_context_robustness
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB         0x00000004
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB     0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB                   0x8261
#define WGL_LOSE_CONTEXT_ON_RESET_ARB                   0x8252
#define WGL_EXT_create_context_es2_profile
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT           0x00000004
#define WGL_EXT_create_context_es_profile
#define WGL_CONTEXT_ES_PROFILE_BIT_EXT            0x00000004
#define WGL_ARB_framebuffer_sRGB
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB                0x20A9
#define WGL_ARB_context_flush_control
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB   0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB           0x0000
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB          0x2098
typedef HGLRC(APIENTRYP PFNWGLCREATECONTEXTATTRIBSARBPROC) (HDC hDC,
HGLRC
hShareContext,
const int
*attribList);
int
WIN_GL_LoadLibrary(_THIS, const char *path)
void *
WIN_GL_GetProcAddress(_THIS, const char *proc)
void
WIN_GL_UnloadLibrary(_THIS)
static void
WIN_GL_SetupPixelFormat(_THIS, PIXELFORMATDESCRIPTOR * pfd)
static int
WIN_GL_ChoosePixelFormat(HDC hdc, PIXELFORMATDESCRIPTOR * target)
static SDL_bool
HasExtension(const char *extension, const char *extensions)
void
WIN_GL_InitExtensions(_THIS)
static int
WIN_GL_ChoosePixelFormatARB(_THIS, int *iAttribs, float *fAttribs)
static int
WIN_GL_SetupWindowInternal(_THIS, SDL_Window * window)
int
WIN_GL_SetupWindow(_THIS, SDL_Window * window)
SDL_GLContext
WIN_GL_CreateContext(_THIS, SDL_Window * window)
int
WIN_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
int
WIN_GL_SetSwapInterval(_THIS, int interval)
int
WIN_GL_GetSwapInterval(_THIS)
void
WIN_GL_SwapWindow(_THIS, SDL_Window * window)
void
WIN_GL_DeleteContext(_THIS, SDL_GLContext context)
SDL_bool
WIN_GL_SetPixelFormatFrom(_THIS, SDL_Window * fromWindow, SDL_Window * toWindow)
