#if SDL_VIDEO_RENDER_PSP
extern int SDL_RecreateWindow(SDL_Window * window, Uint32 flags);
static SDL_Renderer *PSP_CreateRenderer(SDL_Window * window, Uint32 flags);
static void PSP_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int PSP_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int PSP_SetTextureColorMod(SDL_Renderer * renderer,
SDL_Texture * texture);
static int PSP_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels,
int pitch);
static int PSP_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void PSP_UnlockTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static int PSP_SetRenderTarget(SDL_Renderer * renderer,
SDL_Texture * texture);
static int PSP_UpdateViewport(SDL_Renderer * renderer);
static int PSP_RenderClear(SDL_Renderer * renderer);
static int PSP_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int PSP_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int PSP_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int PSP_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect,
const SDL_FRect * dstrect);
static int PSP_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch);
static int PSP_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip);
static void PSP_RenderPresent(SDL_Renderer * renderer);
static void PSP_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void PSP_DestroyRenderer(SDL_Renderer * renderer);
SDL_RenderDriver PSP_RenderDriver = ;
#define PSP_SCREEN_WIDTH    480
#define PSP_SCREEN_HEIGHT   272
#define PSP_FRAME_BUFFER_WIDTH  512
#define PSP_FRAME_BUFFER_SIZE   (PSP_FRAME_BUFFER_WIDTH*PSP_SCREEN_HEIGHT)
static unsigned int __attribute__((aligned(16))) DisplayList[262144];
#define COL5650(r,g,b,a)    ((r>>3) | ((g>>2)<<5) | ((b>>3)<<11))
#define COL5551(r,g,b,a)    ((r>>3) | ((g>>3)<<5) | ((b>>3)<<10) | (a>0?0x7000:0))
#define COL4444(r,g,b,a)    ((r>>4) | ((g>>4)<<4) | ((b>>4)<<8) | ((a>>4)<<12))
#define COL8888(r,g,b,a)    ((r) | ((g)<<8) | ((b)<<16) | ((a)<<24))
typedef struct
PSP_RenderData;
typedef struct
PSP_TextureData;
typedef struct
VertV;
typedef struct
VertTV;
static int
TextureNextPow2(unsigned int w)
static int
GetScaleQuality(void)
static int
PixelFormatToPSPFMT(Uint32 format)
void
StartDrawing(SDL_Renderer * renderer)
int
TextureSwizzle(PSP_TextureData *psp_texture)
int TextureUnswizzle(PSP_TextureData *psp_texture)
SDL_Renderer *
PSP_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
PSP_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static int
PSP_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
PSP_SetTextureColorMod(SDL_Renderer * renderer, SDL_Texture * texture)
void
TextureActivate(SDL_Texture * texture)
static int
PSP_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
PSP_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
PSP_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
PSP_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
PSP_UpdateViewport(SDL_Renderer * renderer)
static void
PSP_SetBlendMode(SDL_Renderer * renderer, int blendMode)
static int
PSP_RenderClear(SDL_Renderer * renderer)
static int
PSP_RenderDrawPoints(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
PSP_RenderDrawLines(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
PSP_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects,
int count)
#define PI   3.14159265358979f
#define radToDeg(x) ((x)*180.f/PI)
#define degToRad(x) ((x)*PI/180.f)
float MathAbs(float x)
void MathSincos(float r, float *s, float *c)
void Swap(float *a, float *b)
static int
PSP_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
PSP_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 pixel_format, void * pixels, int pitch)
static int
PSP_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint *center, const SDL_RendererFlip flip)
static void
PSP_RenderPresent(SDL_Renderer * renderer)
static void
PSP_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
PSP_DestroyRenderer(SDL_Renderer * renderer)
