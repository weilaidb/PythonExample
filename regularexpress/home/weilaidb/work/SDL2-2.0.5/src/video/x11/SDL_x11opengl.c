#if SDL_VIDEO_DRIVER_X11
#if SDL_VIDEO_OPENGL_GLX
#if defined(__IRIX__)
#define DEFAULT_OPENGL  "libGL.so"
#elif defined(__MACOSX__)
#define DEFAULT_OPENGL  "/usr/X11R6/lib/libGL.1.dylib"
#elif defined(__QNXNTO__)
#define DEFAULT_OPENGL  "libGL.so.3"
#define DEFAULT_OPENGL  "libGL.so.1"
#define GLX_NONE_EXT                       0x8000
#define GLX_ARB_multisample
#define GLX_SAMPLE_BUFFERS_ARB             100000
#define GLX_SAMPLES_ARB                    100001
#define GLX_EXT_visual_rating
#define GLX_VISUAL_CAVEAT_EXT              0x20
#define GLX_NONE_EXT                       0x8000
#define GLX_SLOW_VISUAL_EXT                0x8001
#define GLX_NON_CONFORMANT_VISUAL_EXT      0x800D
#define GLX_EXT_visual_info
#define GLX_X_VISUAL_TYPE_EXT              0x22
#define GLX_DIRECT_COLOR_EXT               0x8003
#define GLX_ARB_create_context
#define GLX_CONTEXT_MAJOR_VERSION_ARB      0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB      0x2092
#define GLX_CONTEXT_FLAGS_ARB              0x2094
#define GLX_CONTEXT_DEBUG_BIT_ARB          0x0001
#define GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x0002
typedef GLXContext(*PFNGLXCREATECONTEXTATTRIBSARBPROC) (Display * dpy,
GLXFBConfig config,
GLXContext
share_context,
Bool direct,
const int
*attrib_list);
#define GLX_ARB_create_context_profile
#define GLX_CONTEXT_PROFILE_MASK_ARB       0x9126
#define GLX_CONTEXT_CORE_PROFILE_BIT_ARB   0x00000001
#define GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define GLX_ARB_create_context_robustness
#define GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB  0x00000004
#define GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB     0x8256
#define GLX_NO_RESET_NOTIFICATION_ARB                   0x8261
#define GLX_LOSE_CONTEXT_ON_RESET_ARB                   0x8252
#define GLX_EXT_create_context_es2_profile
#define GLX_CONTEXT_ES2_PROFILE_BIT_EXT    0x00000002
#define GLX_ARB_framebuffer_sRGB
#define GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB                0x20B2
#define GLX_SWAP_INTERVAL_EXT              0x20F1
#define GLX_MAX_SWAP_INTERVAL_EXT          0x20F2
#define GLX_LATE_SWAPS_TEAR_EXT 0x20F3
#define GLX_ARB_context_flush_control
#define GLX_CONTEXT_RELEASE_BEHAVIOR_ARB   0x2097
#define GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB           0x0000
#define GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB          0x2098
#define OPENGL_REQUIRES_DLOPEN
#if defined(OPENGL_REQUIRES_DLOPEN) && defined(SDL_LOADSO_DLOPEN)
#define GL_LoadObject(X)    dlopen(X, (RTLD_NOW|RTLD_GLOBAL))
#define GL_LoadFunction     dlsym
#define GL_UnloadObject     dlclose
#define GL_LoadObject   SDL_LoadObject
#define GL_LoadFunction SDL_LoadFunction
#define GL_UnloadObject SDL_UnloadObject
static void X11_GL_InitExtensions(_THIS);
int
X11_GL_LoadLibrary(_THIS, const char *path)
void *
X11_GL_GetProcAddress(_THIS, const char *proc)
void
X11_GL_UnloadLibrary(_THIS)
static SDL_bool
HasExtension(const char *extension, const char *extensions)
static void
X11_GL_InitExtensions(_THIS)
static int
X11_GL_GetAttributes(_THIS, Display * display, int screen, int * attribs, int size, Bool for_FBConfig)
XVisualInfo *
X11_GL_GetVisual(_THIS, Display * display, int screen)
#define GLXBadContext 0
#define GLXBadFBConfig 9
#define GLXBadProfileARB 13
static int (*handler) (Display *, XErrorEvent *) = NULL;
static const char *errorHandlerOperation = NULL;
static int errorBase = 0;
static int errorCode = 0;
static int
X11_GL_ErrorHandler(Display * d, XErrorEvent * e)
SDL_GLContext
X11_GL_CreateContext(_THIS, SDL_Window * window)
int
X11_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
static int swapinterval = 0;
int
X11_GL_SetSwapInterval(_THIS, int interval)
int
X11_GL_GetSwapInterval(_THIS)
void
X11_GL_SwapWindow(_THIS, SDL_Window * window)
void
X11_GL_DeleteContext(_THIS, SDL_GLContext context)
