#if !SDL_RENDER_DISABLED
static SDL_Renderer *SW_CreateRenderer(SDL_Window * window, Uint32 flags);
static void SW_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int SW_GetOutputSize(SDL_Renderer * renderer, int *w, int *h);
static int SW_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int SW_SetTextureColorMod(SDL_Renderer * renderer,
SDL_Texture * texture);
static int SW_SetTextureAlphaMod(SDL_Renderer * renderer,
SDL_Texture * texture);
static int SW_SetTextureBlendMode(SDL_Renderer * renderer,
SDL_Texture * texture);
static int SW_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels,
int pitch);
static int SW_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void SW_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int SW_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static int SW_UpdateViewport(SDL_Renderer * renderer);
static int SW_UpdateClipRect(SDL_Renderer * renderer);
static int SW_RenderClear(SDL_Renderer * renderer);
static int SW_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int SW_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int SW_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int SW_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect);
static int SW_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip);
static int SW_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch);
static void SW_RenderPresent(SDL_Renderer * renderer);
static void SW_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static void SW_DestroyRenderer(SDL_Renderer * renderer);
SDL_RenderDriver SW_RenderDriver = ;
typedef struct
SW_RenderData;
static SDL_Surface *
SW_ActivateRenderer(SDL_Renderer * renderer)
SDL_Renderer *
SW_CreateRendererForSurface(SDL_Surface * surface)
SDL_Renderer *
SW_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
SW_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static int
SW_GetOutputSize(SDL_Renderer * renderer, int *w, int *h)
static int
SW_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_SetTextureColorMod(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_SetTextureAlphaMod(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_SetTextureBlendMode(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
SW_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
SW_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
SW_UpdateViewport(SDL_Renderer * renderer)
static int
SW_UpdateClipRect(SDL_Renderer * renderer)
static int
SW_RenderClear(SDL_Renderer * renderer)
static int
SW_RenderDrawPoints(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
SW_RenderDrawLines(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
SW_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects, int count)
static int
SW_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
GetScaleQuality(void)
static int
SW_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip)
static int
SW_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch)
static void
SW_RenderPresent(SDL_Renderer * renderer)
static void
SW_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
SW_DestroyRenderer(SDL_Renderer * renderer)
