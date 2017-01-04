#if SDL_VIDEO_RENDER_OGL_ES2 && !SDL_RENDER_DISABLED
#define SDL_GLES2_USE_VBOS 1
#define SDL_GLES2_USE_VBOS 0
#define RENDERER_CONTEXT_MAJOR 2
#define RENDERER_CONTEXT_MINOR 0
extern int SDL_RecreateWindow(SDL_Window * window, Uint32 flags);
static SDL_Renderer *GLES2_CreateRenderer(SDL_Window *window, Uint32 flags);
SDL_RenderDriver GLES2_RenderDriver = ;
typedef struct GLES2_FBOList GLES2_FBOList;
struct GLES2_FBOList
;
typedef struct GLES2_TextureData
GLES2_TextureData;
typedef struct GLES2_ShaderCacheEntry
GLES2_ShaderCacheEntry;
typedef struct GLES2_ShaderCache
GLES2_ShaderCache;
typedef struct GLES2_ProgramCacheEntry
GLES2_ProgramCacheEntry;
typedef struct GLES2_ProgramCache
GLES2_ProgramCache;
typedef enum
GLES2_Attribute;
typedef enum
GLES2_Uniform;
typedef enum
GLES2_ImageSource;
typedef struct GLES2_DriverContext
GLES2_DriverContext;
#define GLES2_MAX_CACHED_PROGRAMS 8
SDL_FORCE_INLINE const char*
GL_TranslateError (GLenum error)
SDL_FORCE_INLINE void
GL_ClearErrors(SDL_Renderer *renderer)
SDL_FORCE_INLINE int
GL_CheckAllErrors (const char *prefix, SDL_Renderer *renderer, const char *file, int line, const char *function)
static int GLES2_ActivateRenderer(SDL_Renderer *renderer);
static void GLES2_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int GLES2_UpdateViewport(SDL_Renderer * renderer);
static void GLES2_DestroyRenderer(SDL_Renderer *renderer);
static int GLES2_SetOrthographicProjection(SDL_Renderer *renderer);
static SDL_GLContext SDL_CurrentContext = NULL;
static int GLES2_LoadFunctions(GLES2_DriverContext * data)
GLES2_FBOList *
GLES2_GetFBO(GLES2_DriverContext *data, Uint32 w, Uint32 h)
static int
GLES2_ActivateRenderer(SDL_Renderer * renderer)
static void
GLES2_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static int
GLES2_GetOutputSize(SDL_Renderer * renderer, int *w, int *h)
static int
GLES2_UpdateViewport(SDL_Renderer * renderer)
static int
GLES2_UpdateClipRect(SDL_Renderer * renderer)
static void
GLES2_DestroyRenderer(SDL_Renderer *renderer)
static int GLES2_CreateTexture(SDL_Renderer *renderer, SDL_Texture *texture);
static int GLES2_UpdateTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect,
const void *pixels, int pitch);
static int GLES2_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
static int GLES2_LockTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect,
void **pixels, int *pitch);
static void GLES2_UnlockTexture(SDL_Renderer *renderer, SDL_Texture *texture);
static int GLES2_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static void GLES2_DestroyTexture(SDL_Renderer *renderer, SDL_Texture *texture);
static GLenum
GetScaleQuality(void)
static int
GLES2_CreateTexture(SDL_Renderer *renderer, SDL_Texture *texture)
static int
GLES2_TexSubImage2D(GLES2_DriverContext *data, GLenum target, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels, GLint pitch, GLint bpp)
static int
GLES2_UpdateTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect,
const void *pixels, int pitch)
static int
GLES2_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
static int
GLES2_LockTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *rect,
void **pixels, int *pitch)
static void
GLES2_UnlockTexture(SDL_Renderer *renderer, SDL_Texture *texture)
static int
GLES2_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static void
GLES2_DestroyTexture(SDL_Renderer *renderer, SDL_Texture *texture)
static GLES2_ShaderCacheEntry *GLES2_CacheShader(SDL_Renderer *renderer, GLES2_ShaderType type,
SDL_BlendMode blendMode);
static void GLES2_EvictShader(SDL_Renderer *renderer, GLES2_ShaderCacheEntry *entry);
static GLES2_ProgramCacheEntry *GLES2_CacheProgram(SDL_Renderer *renderer,
GLES2_ShaderCacheEntry *vertex,
GLES2_ShaderCacheEntry *fragment,
SDL_BlendMode blendMode);
static int GLES2_SelectProgram(SDL_Renderer *renderer, GLES2_ImageSource source,
SDL_BlendMode blendMode);
static GLES2_ProgramCacheEntry *
GLES2_CacheProgram(SDL_Renderer *renderer, GLES2_ShaderCacheEntry *vertex,
GLES2_ShaderCacheEntry *fragment, SDL_BlendMode blendMode)
static GLES2_ShaderCacheEntry *
GLES2_CacheShader(SDL_Renderer *renderer, GLES2_ShaderType type, SDL_BlendMode blendMode)
static void
GLES2_EvictShader(SDL_Renderer *renderer, GLES2_ShaderCacheEntry *entry)
static int
GLES2_SelectProgram(SDL_Renderer *renderer, GLES2_ImageSource source, SDL_BlendMode blendMode)
static int
GLES2_SetOrthographicProjection(SDL_Renderer *renderer)
static const float inv255f = 1.0f / 255.0f;
static int GLES2_RenderClear(SDL_Renderer *renderer);
static int GLES2_RenderDrawPoints(SDL_Renderer *renderer, const SDL_FPoint *points, int count);
static int GLES2_RenderDrawLines(SDL_Renderer *renderer, const SDL_FPoint *points, int count);
static int GLES2_RenderFillRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count);
static int GLES2_RenderCopy(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *srcrect,
const SDL_FRect *dstrect);
static int GLES2_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip);
static int GLES2_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch);
static void GLES2_RenderPresent(SDL_Renderer *renderer);
static SDL_bool
CompareColors(Uint8 r1, Uint8 g1, Uint8 b1, Uint8 a1,
Uint8 r2, Uint8 g2, Uint8 b2, Uint8 a2)
static int
GLES2_RenderClear(SDL_Renderer * renderer)
static void
GLES2_SetBlendMode(GLES2_DriverContext *data, int blendMode)
static void
GLES2_SetTexCoords(GLES2_DriverContext * data, SDL_bool enabled)
static int
GLES2_SetDrawingState(SDL_Renderer * renderer)
static int
GLES2_UpdateVertexBuffer(SDL_Renderer *renderer, GLES2_Attribute attr,
const void *vertexData, size_t dataSizeInBytes)
static int
GLES2_RenderDrawPoints(SDL_Renderer *renderer, const SDL_FPoint *points, int count)
static int
GLES2_RenderDrawLines(SDL_Renderer *renderer, const SDL_FPoint *points, int count)
static int
GLES2_RenderFillRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count)
static int
GLES2_SetupCopy(SDL_Renderer *renderer, SDL_Texture *texture)
static int
GLES2_RenderCopy(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *srcrect,
const SDL_FRect *dstrect)
static int
GLES2_RenderCopyEx(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_Rect *srcrect,
const SDL_FRect *dstrect, const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip)
static int
GLES2_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch)
static void
GLES2_RenderPresent(SDL_Renderer *renderer)
static int GLES2_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh);
static int GLES2_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture);
static int GLES2_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh)
static int GLES2_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture)
#define GL_NVIDIA_PLATFORM_BINARY_NV 0x890B
static void
GLES2_ResetState(SDL_Renderer *renderer)
static SDL_Renderer *
GLES2_CreateRenderer(SDL_Window *window, Uint32 flags)
