#if SDL_VIDEO_DRIVER_DIRECTFB
#define DFB_VERSIONNUM(X, Y, Z)                     \
((X)*1000 + (Y)*100 + (Z))
#define DFB_COMPILEDVERSION \
DFB_VERSIONNUM(DIRECTFB_MAJOR_VERSION, DIRECTFB_MINOR_VERSION, DIRECTFB_MICRO_VERSION)
#define DFB_VERSION_ATLEAST(X, Y, Z) \
(DFB_COMPILEDVERSION >= DFB_VERSIONNUM(X, Y, Z))
#define SDL_DFB_CHECK(x)    x
#define USE_DISPLAY_PALETTE         (0)
#define SDL_DFB_RENDERERDATA(rend) DirectFB_RenderData *renddata = ((rend) ? (DirectFB_RenderData *) (rend)->driverdata : NULL)
static SDL_Renderer *DirectFB_CreateRenderer(SDL_Window * window,
Uint32 flags);
static void DirectFB_ActivateRenderer(SDL_Renderer * renderer);
static int DirectFB_CreateTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static int DirectFB_QueryTexturePixels(SDL_Renderer * renderer,
SDL_Texture * texture,
void **pixels, int *pitch);
static int DirectFB_SetTexturePalette(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Color * colors,
int firstcolor, int ncolors);
static int DirectFB_GetTexturePalette(SDL_Renderer * renderer,
SDL_Texture * texture,
SDL_Color * colors,
int firstcolor, int ncolors);
static int DirectFB_SetTextureAlphaMod(SDL_Renderer * renderer,
SDL_Texture * texture);
static int DirectFB_SetTextureColorMod(SDL_Renderer * renderer,
SDL_Texture * texture);
static int DirectFB_SetTextureBlendMode(SDL_Renderer * renderer,
SDL_Texture * texture);
static int DirectFB_SetTextureScaleMode(SDL_Renderer * renderer,
SDL_Texture * texture);
static int DirectFB_UpdateTexture(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Rect * rect,
const void *pixels, int pitch);
static int DirectFB_LockTexture(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Rect * rect,
void **pixels, int *pitch);
static void DirectFB_UnlockTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void DirectFB_DirtyTexture(SDL_Renderer * renderer,
SDL_Texture * texture, int numrects,
const SDL_Rect * rects);
static int DirectFB_SetDrawBlendMode(SDL_Renderer * renderer);
static int DirectFB_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int DirectFB_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int DirectFB_RenderDrawRects(SDL_Renderer * renderer,
const SDL_Rect ** rects, int count);
static int DirectFB_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int DirectFB_RenderCopy(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Rect * srcrect,
const SDL_FRect * dstrect);
static void DirectFB_RenderPresent(SDL_Renderer * renderer);
static void DirectFB_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void DirectFB_DestroyRenderer(SDL_Renderer * renderer);
static int DirectFB_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch);
static int DirectFB_RenderWritePixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, const void * pixels, int pitch);
static int DirectFB_UpdateViewport(SDL_Renderer * renderer);
static int DirectFB_UpdateClipRect(SDL_Renderer * renderer);
static int DirectFB_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static int PrepareDraw(SDL_Renderer * renderer);
#define SDL_DFB_WINDOWSURFACE(win)  IDirectFBSurface *destsurf = ((DFB_WindowData *) ((win)->driverdata))->surface;
SDL_RenderDriver DirectFB_RenderDriver = ;
typedef struct
DirectFB_RenderData;
typedef struct
DirectFB_TextureData;
static SDL_INLINE void
SDLtoDFBRect(const SDL_Rect * sr, DFBRectangle * dr)
static SDL_INLINE void
SDLtoDFBRect_Float(const SDL_FRect * sr, DFBRectangle * dr)
static int
TextureHasAlpha(DirectFB_TextureData * data)
static SDL_INLINE IDirectFBSurface *get_dfb_surface(SDL_Window *window)
static SDL_INLINE IDirectFBWindow *get_dfb_window(SDL_Window *window)
static void
SetBlendMode(DirectFB_RenderData * data, int blendMode,
DirectFB_TextureData * source)
static int
DisplayPaletteChanged(void *userdata, SDL_Palette * palette)
static void
DirectFB_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
int
DirectFB_RenderClear(SDL_Renderer * renderer)
SDL_Renderer *
DirectFB_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
DirectFB_ActivateRenderer(SDL_Renderer * renderer)
static int
DirectFB_AcquireVidLayer(SDL_Renderer * renderer, SDL_Texture * texture)
static int
DirectFB_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
DirectFB_QueryTexturePixels(SDL_Renderer * renderer,
SDL_Texture * texture, void **pixels, int *pitch)
static int
DirectFB_SetTexturePalette(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Color * colors, int firstcolor,
int ncolors)
static int
DirectFB_GetTexturePalette(SDL_Renderer * renderer,
SDL_Texture * texture, SDL_Color * colors,
int firstcolor, int ncolors)
static int
DirectFB_SetTextureAlphaMod(SDL_Renderer * renderer, SDL_Texture * texture)
static int
DirectFB_SetTextureColorMod(SDL_Renderer * renderer, SDL_Texture * texture)
static int
DirectFB_SetTextureBlendMode(SDL_Renderer * renderer, SDL_Texture * texture)
static int
DirectFB_SetDrawBlendMode(SDL_Renderer * renderer)
return 0;
}
static int
DirectFB_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
DirectFB_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
DirectFB_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int DirectFB_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
PrepareDraw(SDL_Renderer * renderer)
static int DirectFB_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count)
static int DirectFB_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count)
static int
DirectFB_RenderDrawRects(SDL_Renderer * renderer, const SDL_Rect ** rects, int count)
static int
DirectFB_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects, int count)
static int
DirectFB_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static void
DirectFB_RenderPresent(SDL_Renderer * renderer)
static void
DirectFB_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
DirectFB_DestroyRenderer(SDL_Renderer * renderer)
static int
DirectFB_UpdateViewport(SDL_Renderer * renderer)
static int
DirectFB_UpdateClipRect(SDL_Renderer * renderer)
static int
DirectFB_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch)
