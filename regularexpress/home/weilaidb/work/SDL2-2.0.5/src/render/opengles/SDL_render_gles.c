#if SDL_VIDEO_RENDER_OGL_ES && !SDL_RENDER_DISABLED
#define RENDERER_CONTEXT_MAJOR 1
#define RENDERER_CONTEXT_MINOR 1
#if defined(SDL_VIDEO_DRIVER_PANDORA)
GL_API void GL_APIENTRY
glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
extern int SDL_RecreateWindow(SDL_Window * window, Uint32 flags);
static const float inv255f = 1.0f / 255.0f;
static SDL_Renderer *GLES_CreateRenderer(SDL_Window * window, Uint32 flags);
static void GLES_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int GLES_GetOutputSize(SDL_Renderer * renderer, int *w, int *h);
static int GLES_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int GLES_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels,
int pitch);
static int GLES_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void GLES_UnlockTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static int GLES_SetRenderTarget(SDL_Renderer * renderer,
SDL_Texture * texture);
static int GLES_UpdateViewport(SDL_Renderer * renderer);
static int GLES_UpdateClipRect(SDL_Renderer * renderer);
static int GLES_RenderClear(SDL_Renderer * renderer);
static int GLES_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int GLES_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int GLES_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int GLES_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect,
const SDL_FRect * dstrect);
static int GLES_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip);
static int GLES_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch);
static void GLES_RenderPresent(SDL_Renderer * renderer);
static void GLES_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void GLES_DestroyRenderer(SDL_Renderer * renderer);
static int GLES_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh);
static int GLES_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture);
typedef struct GLES_FBOList GLES_FBOList;
struct GLES_FBOList
;
SDL_RenderDriver GLES_RenderDriver = ;
typedef struct
GLES_RenderData;
typedef struct
GLES_TextureData;
static int
GLES_SetError(const char *prefix, GLenum result)
static int GLES_LoadFunctions(GLES_RenderData * data)
static SDL_GLContext SDL_CurrentContext = NULL;
GLES_FBOList *
GLES_GetFBO(GLES_RenderData *data, Uint32 w, Uint32 h)
static int
GLES_ActivateRenderer(SDL_Renderer * renderer)
static void
GLES_ResetState(SDL_Renderer *renderer)
SDL_Renderer *
GLES_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
GLES_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static int
GLES_GetOutputSize(SDL_Renderer * renderer, int *w, int *h)
static SDL_INLINE int
power_of_2(int input)
static GLenum
GetScaleQuality(void)
static int
GLES_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GLES_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
GLES_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
GLES_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GLES_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GLES_UpdateViewport(SDL_Renderer * renderer)
static int
GLES_UpdateClipRect(SDL_Renderer * renderer)
static void
GLES_SetColor(GLES_RenderData * data, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static void
GLES_SetBlendMode(GLES_RenderData * data, int blendMode)
static void
GLES_SetTexCoords(GLES_RenderData * data, SDL_bool enabled)
static void
GLES_SetDrawingState(SDL_Renderer * renderer)
static int
GLES_RenderClear(SDL_Renderer * renderer)
static int
GLES_RenderDrawPoints(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
GLES_RenderDrawLines(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
GLES_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects,
int count)
static int
GLES_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
GLES_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip)
static int
GLES_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch)
static void
GLES_RenderPresent(SDL_Renderer * renderer)
static void
GLES_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
GLES_DestroyRenderer(SDL_Renderer * renderer)
static int GLES_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh)
static int GLES_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture)
