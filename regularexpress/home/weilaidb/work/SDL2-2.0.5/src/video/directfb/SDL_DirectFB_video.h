#define _SDL_DirectFB_video_h
#define DFB_VERSIONNUM(X, Y, Z)                     \
((X)*1000 + (Y)*100 + (Z))
#define DFB_COMPILEDVERSION \
DFB_VERSIONNUM(DIRECTFB_MAJOR_VERSION, DIRECTFB_MINOR_VERSION, DIRECTFB_MICRO_VERSION)
#define DFB_VERSION_ATLEAST(X, Y, Z) \
(DFB_COMPILEDVERSION >= DFB_VERSIONNUM(X, Y, Z))
#if (DFB_VERSION_ATLEAST(1,0,0))
#define SDL_DIRECTFB_OPENGL 1
#error "SDL_DIRECTFB: Please compile against libdirectfb version >= 1.0.0"
#define USE_MULTI_API   (0)
#if (DFB_COMPILEDVERSION == DFB_VERSIONNUM(1, 4, 3))
#define ENABLE_LUT8     (0)
#define ENABLE_LUT8     (1)
#define DIRECTFB_DEBUG 1
#define DFBENV_USE_YUV_UNDERLAY     "SDL_DIRECTFB_YUV_UNDERLAY"
#define DFBENV_USE_YUV_DIRECT       "SDL_DIRECTFB_YUV_DIRECT"
#define DFBENV_USE_X11_CHECK        "SDL_DIRECTFB_X11_CHECK"
#define DFBENV_USE_LINUX_INPUT      "SDL_DIRECTFB_LINUX_INPUT"
#define DFBENV_USE_WM               "SDL_DIRECTFB_WM"
#define SDL_DFB_RELEASE(x) do  while (0)
#define SDL_DFB_FREE(x) do  while (0)
#define SDL_DFB_UNLOCK(x) do  while (0)
#define SDL_DFB_CONTEXT "SDL_DirectFB"
#define SDL_DFB_ERR(x...) SDL_LogError(SDL_LOG_CATEGORY_ERROR, x)
#if (DIRECTFB_DEBUG)
#define SDL_DFB_LOG(x...) SDL_LogInfo(SDL_LOG_CATEGORY_VIDEO, x)
#define SDL_DFB_DEBUG(x...) SDL_LogDebug(SDL_LOG_CATEGORY_VIDEO, x)
static SDL_INLINE DFBResult sdl_dfb_check(DFBResult ret, const char *src_file, int src_line)
#define SDL_DFB_CHECK(x...) do  while (0)
#define SDL_DFB_CHECKERR(x...) do  while (0)
#define SDL_DFB_CHECK(x...) x
#define SDL_DFB_CHECKERR(x...) do  while (0)
#define SDL_DFB_LOG(x...) do  while (0)
#define SDL_DFB_DEBUG(x...) do  while (0)
#define SDL_DFB_CALLOC(r, n, s) \
do  while (0)
#define SDL_DFB_ALLOC_CLEAR(r, s) SDL_DFB_CALLOC(r, 1, s)
#define SDL_DFB_DEVICEDATA(dev)  DFB_DeviceData *devdata = (dev ? (DFB_DeviceData *) ((dev)->driverdata) : NULL)
#define DFB_MAX_SCREENS 10
typedef struct _DFB_KeyboardData DFB_KeyboardData;
struct _DFB_KeyboardData
;
typedef struct _DFB_DeviceData DFB_DeviceData;
struct _DFB_DeviceData
;
Uint32 DirectFB_DFBToSDLPixelFormat(DFBSurfacePixelFormat pixelformat);
DFBSurfacePixelFormat DirectFB_SDLToDFBPixelFormat(Uint32 format);
void DirectFB_SetSupportedPixelFormats(SDL_RendererInfo *ri);
