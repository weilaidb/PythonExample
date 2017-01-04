#define SDL_WINDOWRENDERDATA    "_SDL_WindowRenderData"
#define CHECK_RENDERER_MAGIC(renderer, retval) \
if (!renderer || renderer->magic != &renderer_magic)
#define CHECK_TEXTURE_MAGIC(texture, retval) \
if (!texture || texture->magic != &texture_magic)
#if !SDL_RENDER_DISABLED
static const SDL_RenderDriver *render_drivers[] = ;
static char renderer_magic;
static char texture_magic;
static int UpdateLogicalSize(SDL_Renderer *renderer);
int
SDL_GetNumRenderDrivers(void)
int
SDL_GetRenderDriverInfo(int index, SDL_RendererInfo * info)
static int
SDL_RendererEventWatch(void *userdata, SDL_Event *event)
int
SDL_CreateWindowAndRenderer(int width, int height, Uint32 window_flags,
SDL_Window **window, SDL_Renderer **renderer)
SDL_Renderer *
SDL_CreateRenderer(SDL_Window * window, int index, Uint32 flags)
SDL_Renderer *
SDL_CreateSoftwareRenderer(SDL_Surface * surface)
SDL_Renderer *
SDL_GetRenderer(SDL_Window * window)
int
SDL_GetRendererInfo(SDL_Renderer * renderer, SDL_RendererInfo * info)
int
SDL_GetRendererOutputSize(SDL_Renderer * renderer, int *w, int *h)
static SDL_bool
IsSupportedFormat(SDL_Renderer * renderer, Uint32 format)
static Uint32
GetClosestSupportedFormat(SDL_Renderer * renderer, Uint32 format)
SDL_Texture *
SDL_CreateTexture(SDL_Renderer * renderer, Uint32 format, int access, int w, int h)
SDL_Texture *
SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface)
int
SDL_QueryTexture(SDL_Texture * texture, Uint32 * format, int *access,
int *w, int *h)
int
SDL_SetTextureColorMod(SDL_Texture * texture, Uint8 r, Uint8 g, Uint8 b)
int
SDL_GetTextureColorMod(SDL_Texture * texture, Uint8 * r, Uint8 * g,
Uint8 * b)
int
SDL_SetTextureAlphaMod(SDL_Texture * texture, Uint8 alpha)
int
SDL_GetTextureAlphaMod(SDL_Texture * texture, Uint8 * alpha)
int
SDL_SetTextureBlendMode(SDL_Texture * texture, SDL_BlendMode blendMode)
int
SDL_GetTextureBlendMode(SDL_Texture * texture, SDL_BlendMode *blendMode)
static int
SDL_UpdateTextureYUV(SDL_Texture * texture, const SDL_Rect * rect,
const void *pixels, int pitch)
static int
SDL_UpdateTextureNative(SDL_Texture * texture, const SDL_Rect * rect,
const void *pixels, int pitch)
int
SDL_UpdateTexture(SDL_Texture * texture, const SDL_Rect * rect,
const void *pixels, int pitch)
static int
SDL_UpdateTextureYUVPlanar(SDL_Texture * texture, const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
int SDL_UpdateYUVTexture(SDL_Texture * texture, const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
static int
SDL_LockTextureYUV(SDL_Texture * texture, const SDL_Rect * rect,
void **pixels, int *pitch)
static int
SDL_LockTextureNative(SDL_Texture * texture, const SDL_Rect * rect,
void **pixels, int *pitch)
int
SDL_LockTexture(SDL_Texture * texture, const SDL_Rect * rect,
void **pixels, int *pitch)
static void
SDL_UnlockTextureYUV(SDL_Texture * texture)
static void
SDL_UnlockTextureNative(SDL_Texture * texture)
void
SDL_UnlockTexture(SDL_Texture * texture)
SDL_bool
SDL_RenderTargetSupported(SDL_Renderer *renderer)
int
SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture)
SDL_Texture *
SDL_GetRenderTarget(SDL_Renderer *renderer)
static int
UpdateLogicalSize(SDL_Renderer *renderer)
int
SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h)
void
SDL_RenderGetLogicalSize(SDL_Renderer * renderer, int *w, int *h)
int
SDL_RenderSetIntegerScale(SDL_Renderer * renderer, SDL_bool enable)
SDL_bool
SDLCALL SDL_RenderGetIntegerScale(SDL_Renderer * renderer)
int
SDL_RenderSetViewport(SDL_Renderer * renderer, const SDL_Rect * rect)
void
SDL_RenderGetViewport(SDL_Renderer * renderer, SDL_Rect * rect)
int
SDL_RenderSetClipRect(SDL_Renderer * renderer, const SDL_Rect * rect)
void
SDL_RenderGetClipRect(SDL_Renderer * renderer, SDL_Rect * rect)
SDL_bool
SDL_RenderIsClipEnabled(SDL_Renderer * renderer)
int
SDL_RenderSetScale(SDL_Renderer * renderer, float scaleX, float scaleY)
void
SDL_RenderGetScale(SDL_Renderer * renderer, float *scaleX, float *scaleY)
int
SDL_SetRenderDrawColor(SDL_Renderer * renderer,
Uint8 r, Uint8 g, Uint8 b, Uint8 a)
int
SDL_GetRenderDrawColor(SDL_Renderer * renderer,
Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a)
int
SDL_SetRenderDrawBlendMode(SDL_Renderer * renderer, SDL_BlendMode blendMode)
int
SDL_GetRenderDrawBlendMode(SDL_Renderer * renderer, SDL_BlendMode *blendMode)
int
SDL_RenderClear(SDL_Renderer * renderer)
int
SDL_RenderDrawPoint(SDL_Renderer * renderer, int x, int y)
static int
RenderDrawPointsWithRects(SDL_Renderer * renderer,
const SDL_Point * points, int count)
int
SDL_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_Point * points, int count)
int
SDL_RenderDrawLine(SDL_Renderer * renderer, int x1, int y1, int x2, int y2)
static int
RenderDrawLinesWithRects(SDL_Renderer * renderer,
const SDL_Point * points, int count)
int
SDL_RenderDrawLines(SDL_Renderer * renderer,
const SDL_Point * points, int count)
int
SDL_RenderDrawRect(SDL_Renderer * renderer, const SDL_Rect * rect)
int
SDL_RenderDrawRects(SDL_Renderer * renderer,
const SDL_Rect * rects, int count)
int
SDL_RenderFillRect(SDL_Renderer * renderer, const SDL_Rect * rect)
int
SDL_RenderFillRects(SDL_Renderer * renderer,
const SDL_Rect * rects, int count)
int
SDL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_Rect * dstrect)
int
SDL_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_Rect * dstrect,
const double angle, const SDL_Point *center, const SDL_RendererFlip flip)
int
SDL_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch)
void
SDL_RenderPresent(SDL_Renderer * renderer)
void
SDL_DestroyTexture(SDL_Texture * texture)
void
SDL_DestroyRenderer(SDL_Renderer * renderer)
int SDL_GL_BindTexture(SDL_Texture *texture, float *texw, float *texh)
int SDL_GL_UnbindTexture(SDL_Texture *texture)
