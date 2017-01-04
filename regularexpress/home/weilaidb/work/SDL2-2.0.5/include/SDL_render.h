#define _SDL_render_h
typedef enum
SDL_RendererFlags;
typedef struct SDL_RendererInfo
SDL_RendererInfo;
typedef enum
SDL_TextureAccess;
typedef enum
SDL_TextureModulate;
typedef enum
SDL_RendererFlip;
struct SDL_Renderer;
typedef struct SDL_Renderer SDL_Renderer;
struct SDL_Texture;
typedef struct SDL_Texture SDL_Texture;
extern DECLSPEC int SDLCALL SDL_GetNumRenderDrivers(void);
extern DECLSPEC int SDLCALL SDL_GetRenderDriverInfo(int index,
SDL_RendererInfo * info);
extern DECLSPEC int SDLCALL SDL_CreateWindowAndRenderer(
int width, int height, Uint32 window_flags,
SDL_Window **window, SDL_Renderer **renderer);
extern DECLSPEC SDL_Renderer * SDLCALL SDL_CreateRenderer(SDL_Window * window,
int index, Uint32 flags);
extern DECLSPEC SDL_Renderer * SDLCALL SDL_CreateSoftwareRenderer(SDL_Surface * surface);
extern DECLSPEC SDL_Renderer * SDLCALL SDL_GetRenderer(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_GetRendererInfo(SDL_Renderer * renderer,
SDL_RendererInfo * info);
extern DECLSPEC int SDLCALL SDL_GetRendererOutputSize(SDL_Renderer * renderer,
int *w, int *h);
extern DECLSPEC SDL_Texture * SDLCALL SDL_CreateTexture(SDL_Renderer * renderer,
Uint32 format,
int access, int w,
int h);
extern DECLSPEC SDL_Texture * SDLCALL SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface);
extern DECLSPEC int SDLCALL SDL_QueryTexture(SDL_Texture * texture,
Uint32 * format, int *access,
int *w, int *h);
extern DECLSPEC int SDLCALL SDL_SetTextureColorMod(SDL_Texture * texture,
Uint8 r, Uint8 g, Uint8 b);
extern DECLSPEC int SDLCALL SDL_GetTextureColorMod(SDL_Texture * texture,
Uint8 * r, Uint8 * g,
Uint8 * b);
extern DECLSPEC int SDLCALL SDL_SetTextureAlphaMod(SDL_Texture * texture,
Uint8 alpha);
extern DECLSPEC int SDLCALL SDL_GetTextureAlphaMod(SDL_Texture * texture,
Uint8 * alpha);
extern DECLSPEC int SDLCALL SDL_SetTextureBlendMode(SDL_Texture * texture,
SDL_BlendMode blendMode);
extern DECLSPEC int SDLCALL SDL_GetTextureBlendMode(SDL_Texture * texture,
SDL_BlendMode *blendMode);
extern DECLSPEC int SDLCALL SDL_UpdateTexture(SDL_Texture * texture,
const SDL_Rect * rect,
const void *pixels, int pitch);
extern DECLSPEC int SDLCALL SDL_UpdateYUVTexture(SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
extern DECLSPEC int SDLCALL SDL_LockTexture(SDL_Texture * texture,
const SDL_Rect * rect,
void **pixels, int *pitch);
extern DECLSPEC void SDLCALL SDL_UnlockTexture(SDL_Texture * texture);
extern DECLSPEC SDL_bool SDLCALL SDL_RenderTargetSupported(SDL_Renderer *renderer);
extern DECLSPEC int SDLCALL SDL_SetRenderTarget(SDL_Renderer *renderer,
SDL_Texture *texture);
extern DECLSPEC SDL_Texture * SDLCALL SDL_GetRenderTarget(SDL_Renderer *renderer);
extern DECLSPEC int SDLCALL SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h);
extern DECLSPEC void SDLCALL SDL_RenderGetLogicalSize(SDL_Renderer * renderer, int *w, int *h);
extern DECLSPEC int SDLCALL SDL_RenderSetIntegerScale(SDL_Renderer * renderer,
SDL_bool enable);
extern DECLSPEC SDL_bool SDLCALL SDL_RenderGetIntegerScale(SDL_Renderer * renderer);
extern DECLSPEC int SDLCALL SDL_RenderSetViewport(SDL_Renderer * renderer,
const SDL_Rect * rect);
extern DECLSPEC void SDLCALL SDL_RenderGetViewport(SDL_Renderer * renderer,
SDL_Rect * rect);
extern DECLSPEC int SDLCALL SDL_RenderSetClipRect(SDL_Renderer * renderer,
const SDL_Rect * rect);
extern DECLSPEC void SDLCALL SDL_RenderGetClipRect(SDL_Renderer * renderer,
SDL_Rect * rect);
extern DECLSPEC SDL_bool SDLCALL SDL_RenderIsClipEnabled(SDL_Renderer * renderer);
extern DECLSPEC int SDLCALL SDL_RenderSetScale(SDL_Renderer * renderer,
float scaleX, float scaleY);
extern DECLSPEC void SDLCALL SDL_RenderGetScale(SDL_Renderer * renderer,
float *scaleX, float *scaleY);
extern DECLSPEC int SDLCALL SDL_SetRenderDrawColor(SDL_Renderer * renderer,
Uint8 r, Uint8 g, Uint8 b,
Uint8 a);
extern DECLSPEC int SDLCALL SDL_GetRenderDrawColor(SDL_Renderer * renderer,
Uint8 * r, Uint8 * g, Uint8 * b,
Uint8 * a);
extern DECLSPEC int SDLCALL SDL_SetRenderDrawBlendMode(SDL_Renderer * renderer,
SDL_BlendMode blendMode);
extern DECLSPEC int SDLCALL SDL_GetRenderDrawBlendMode(SDL_Renderer * renderer,
SDL_BlendMode *blendMode);
extern DECLSPEC int SDLCALL SDL_RenderClear(SDL_Renderer * renderer);
extern DECLSPEC int SDLCALL SDL_RenderDrawPoint(SDL_Renderer * renderer,
int x, int y);
extern DECLSPEC int SDLCALL SDL_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_Point * points,
int count);
extern DECLSPEC int SDLCALL SDL_RenderDrawLine(SDL_Renderer * renderer,
int x1, int y1, int x2, int y2);
extern DECLSPEC int SDLCALL SDL_RenderDrawLines(SDL_Renderer * renderer,
const SDL_Point * points,
int count);
extern DECLSPEC int SDLCALL SDL_RenderDrawRect(SDL_Renderer * renderer,
const SDL_Rect * rect);
extern DECLSPEC int SDLCALL SDL_RenderDrawRects(SDL_Renderer * renderer,
const SDL_Rect * rects,
int count);
extern DECLSPEC int SDLCALL SDL_RenderFillRect(SDL_Renderer * renderer,
const SDL_Rect * rect);
extern DECLSPEC int SDLCALL SDL_RenderFillRects(SDL_Renderer * renderer,
const SDL_Rect * rects,
int count);
extern DECLSPEC int SDLCALL SDL_RenderCopy(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Rect * srcrect,
const SDL_Rect * dstrect);
extern DECLSPEC int SDLCALL SDL_RenderCopyEx(SDL_Renderer * renderer,
SDL_Texture * texture,
const SDL_Rect * srcrect,
const SDL_Rect * dstrect,
const double angle,
const SDL_Point *center,
const SDL_RendererFlip flip);
extern DECLSPEC int SDLCALL SDL_RenderReadPixels(SDL_Renderer * renderer,
const SDL_Rect * rect,
Uint32 format,
void *pixels, int pitch);
extern DECLSPEC void SDLCALL SDL_RenderPresent(SDL_Renderer * renderer);
extern DECLSPEC void SDLCALL SDL_DestroyTexture(SDL_Texture * texture);
extern DECLSPEC void SDLCALL SDL_DestroyRenderer(SDL_Renderer * renderer);
extern DECLSPEC int SDLCALL SDL_GL_BindTexture(SDL_Texture *texture, float *texw, float *texh);
extern DECLSPEC int SDLCALL SDL_GL_UnbindTexture(SDL_Texture *texture);
