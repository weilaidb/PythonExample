#if SDL_VIDEO_RENDER_OGL && !SDL_RENDER_DISABLED
#define RENDERER_CONTEXT_MAJOR 2
#define RENDERER_CONTEXT_MINOR 1
extern int SDL_RecreateWindow(SDL_Window * window, Uint32 flags);
static const float inv255f = 1.0f / 255.0f;
static SDL_Renderer *GL_CreateRenderer(SDL_Window * window, Uint32 flags);
static void GL_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int GL_GetOutputSize(SDL_Renderer * renderer, int *w, int *h);
static int GL_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int GL_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels,
int pitch);
static int GL_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
static int GL_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void GL_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int GL_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static int GL_UpdateViewport(SDL_Renderer * renderer);
static int GL_UpdateClipRect(SDL_Renderer * renderer);
static int GL_RenderClear(SDL_Renderer * renderer);
static int GL_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int GL_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int GL_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int GL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect);
static int GL_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip);
static int GL_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch);
static void GL_RenderPresent(SDL_Renderer * renderer);
static void GL_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static void GL_DestroyRenderer(SDL_Renderer * renderer);
static int GL_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh);
static int GL_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture);
SDL_RenderDriver GL_RenderDriver = ;
typedef struct GL_FBOList GL_FBOList;
struct GL_FBOList
;
typedef struct
GL_RenderData;
typedef struct
GL_TextureData;
SDL_FORCE_INLINE const char*
GL_TranslateError (GLenum error)
SDL_FORCE_INLINE void
GL_ClearErrors(SDL_Renderer *renderer)
SDL_FORCE_INLINE int
GL_CheckAllErrors (const char *prefix, SDL_Renderer *renderer, const char *file, int line, const char *function)
static int
GL_LoadFunctions(GL_RenderData * data)
static SDL_GLContext SDL_CurrentContext = NULL;
static int
GL_ActivateRenderer(SDL_Renderer * renderer)
static void
GL_ResetState(SDL_Renderer *renderer)
static void APIENTRY
GL_HandleDebugMessage(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const char *message, const void *userParam)
static GL_FBOList *
GL_GetFBO(GL_RenderData *data, Uint32 w, Uint32 h)
SDL_Renderer *
GL_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
GL_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static int
GL_GetOutputSize(SDL_Renderer * renderer, int *w, int *h)
SDL_FORCE_INLINE int
power_of_2(int input)
SDL_FORCE_INLINE SDL_bool
convert_format(GL_RenderData *renderdata, Uint32 pixel_format,
GLint* internalFormat, GLenum* format, GLenum* type)
static GLenum
GetScaleQuality(void)
static int
GL_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GL_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
GL_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
static int
GL_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
GL_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GL_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GL_UpdateViewport(SDL_Renderer * renderer)
static int
GL_UpdateClipRect(SDL_Renderer * renderer)
static void
GL_SetShader(GL_RenderData * data, GL_Shader shader)
static void
GL_SetColor(GL_RenderData * data, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static void
GL_SetBlendMode(GL_RenderData * data, int blendMode)
static void
GL_SetDrawingState(SDL_Renderer * renderer)
static int
GL_RenderClear(SDL_Renderer * renderer)
static int
GL_RenderDrawPoints(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
GL_RenderDrawLines(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
GL_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects, int count)
static int
GL_SetupCopy(SDL_Renderer * renderer, SDL_Texture * texture)
static int
GL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
GL_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip)
static int
GL_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch)
static void
GL_RenderPresent(SDL_Renderer * renderer)
static void
GL_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
GL_DestroyRenderer(SDL_Renderer * renderer)
static int
GL_BindTexture (SDL_Renderer * renderer, SDL_Texture *texture, float *texw, float *texh)
static int
GL_UnbindTexture (SDL_Renderer * renderer, SDL_Texture *texture)
