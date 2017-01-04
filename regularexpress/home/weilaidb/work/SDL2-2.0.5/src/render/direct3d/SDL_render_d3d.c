#if SDL_VIDEO_RENDER_D3D && !SDL_RENDER_DISABLED
#if SDL_VIDEO_RENDER_D3D
#define D3D_DEBUG_INFO
typedef interface ID3DXBuffer ID3DXBuffer;
typedef interface ID3DXBuffer *LPD3DXBUFFER;
DEFINE_GUID(IID_ID3DXBuffer,
0x8ba5fb08, 0x5195, 0x40e2, 0xac, 0x58, 0xd, 0x98, 0x9c, 0x3a, 0x1, 0x2);
#undef INTERFACE
#define INTERFACE ID3DXBuffer
typedef interface ID3DXBuffer  ID3DXBuffer;
typedef const struct ID3DXBufferVtbl ID3DXBufferVtbl;
const struct ID3DXBufferVtbl
;
HRESULT WINAPI
D3DXAssembleShader(
LPCSTR                          pSrcData,
UINT                            SrcDataLen,
CONST LPVOID*                   pDefines,
LPVOID                          pInclude,
DWORD                           Flags,
LPD3DXBUFFER*                   ppShader,
LPD3DXBUFFER*                   ppErrorMsgs);
static void PrintShaderData(LPDWORD shader_data, DWORD shader_size)
static SDL_Renderer *D3D_CreateRenderer(SDL_Window * window, Uint32 flags);
static void D3D_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int D3D_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D_RecreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels,
int pitch);
static int D3D_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
static int D3D_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void D3D_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D_SetRenderTargetInternal(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D_UpdateViewport(SDL_Renderer * renderer);
static int D3D_UpdateClipRect(SDL_Renderer * renderer);
static int D3D_RenderClear(SDL_Renderer * renderer);
static int D3D_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int D3D_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int D3D_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int D3D_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect);
static int D3D_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip);
static int D3D_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch);
static void D3D_RenderPresent(SDL_Renderer * renderer);
static void D3D_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void D3D_DestroyRenderer(SDL_Renderer * renderer);
SDL_RenderDriver D3D_RenderDriver = ;
typedef struct
D3D_RenderData;
typedef struct
D3D_TextureRep;
typedef struct
D3D_TextureData;
typedef struct
Vertex;
static int
D3D_SetError(const char *prefix, HRESULT result)
static D3DFORMAT
PixelFormatToD3DFMT(Uint32 format)
static Uint32
D3DFMTToPixelFormat(D3DFORMAT format)
static void
D3D_InitRenderState(D3D_RenderData *data)
static int
D3D_Reset(SDL_Renderer * renderer)
static int
D3D_ActivateRenderer(SDL_Renderer * renderer)
SDL_Renderer *
D3D_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
D3D_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static D3DTEXTUREFILTERTYPE
GetScaleQuality(void)
static int
D3D_CreateTextureRep(IDirect3DDevice9 *device, D3D_TextureRep *texture, DWORD usage, Uint32 format, int w, int h)
static int
D3D_CreateStagingTexture(IDirect3DDevice9 *device, D3D_TextureRep *texture)
static int
D3D_BindTextureRep(IDirect3DDevice9 *device, D3D_TextureRep *texture, DWORD sampler)
static int
D3D_RecreateTextureRep(IDirect3DDevice9 *device, D3D_TextureRep *texture, Uint32 format, int w, int h)
static int
D3D_UpdateTextureRep(IDirect3DDevice9 *device, D3D_TextureRep *texture, Uint32 format, int x, int y, int w, int h, const void *pixels, int pitch)
static void
D3D_DestroyTextureRep(D3D_TextureRep *texture)
static int
D3D_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D_RecreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *pixels, int pitch)
static int
D3D_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
static int
D3D_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
D3D_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D_SetRenderTargetInternal(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D_UpdateViewport(SDL_Renderer * renderer)
static int
D3D_UpdateClipRect(SDL_Renderer * renderer)
static int
D3D_RenderClear(SDL_Renderer * renderer)
static void
D3D_SetBlendMode(D3D_RenderData * data, int blendMode)
static int
D3D_RenderDrawPoints(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
D3D_RenderDrawLines(SDL_Renderer * renderer, const SDL_FPoint * points,
int count)
static int
D3D_RenderFillRects(SDL_Renderer * renderer, const SDL_FRect * rects,
int count)
static void
D3D_UpdateTextureScaleMode(D3D_RenderData *data, D3D_TextureData *texturedata, unsigned index)
static int
D3D_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
D3D_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip)
static int
D3D_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch)
static void
D3D_RenderPresent(SDL_Renderer * renderer)
static void
D3D_DestroyTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
D3D_DestroyRenderer(SDL_Renderer * renderer)
IDirect3DDevice9 *
SDL_RenderGetD3D9Device(SDL_Renderer * renderer)
