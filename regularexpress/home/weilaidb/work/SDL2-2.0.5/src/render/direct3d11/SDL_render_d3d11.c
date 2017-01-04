#if SDL_VIDEO_RENDER_D3D11 && !SDL_RENDER_DISABLED
#define COBJMACROS
#if NTDDI_VERSION > NTDDI_WIN8
#if WINAPI_FAMILY == WINAPI_FAMILY_APP
extern ISwapChainBackgroundPanelNative * WINRT_GlobalSwapChainBackgroundPanelNative;
#define SDL_COMPOSE_ERROR(str) SDL_STRINGIFY_ARG(__FUNCTION__) ", " str
#define SAFE_RELEASE(X) if ((X))
typedef struct
VertexShaderConstants;
typedef struct
VertexPositionColor;
typedef struct
D3D11_TextureData;
typedef struct
D3D11_RenderData;
static const GUID SDL_IID_IDXGIFactory2 = ;
static const GUID SDL_IID_IDXGIDevice1 = ;
static const GUID SDL_IID_IDXGIDevice3 = ;
static const GUID SDL_IID_ID3D11Texture2D = ;
static const GUID SDL_IID_ID3D11Device1 = ;
static const GUID SDL_IID_ID3D11DeviceContext1 = ;
static const GUID SDL_IID_ID3D11Debug = ;
#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#define D3D11_USE_SHADER_MODEL_4_0_level_9_3
#define D3D11_USE_SHADER_MODEL_4_0_level_9_1
#if defined(D3D11_USE_SHADER_MODEL_4_0_level_9_1)
static const DWORD D3D11_PixelShader_Colors[] = ;
#elif defined(D3D11_USE_SHADER_MODEL_4_0_level_9_3)
static const DWORD D3D11_PixelShader_Colors[] = ;
#error "An appropriate 'colors' pixel shader is not defined."
#if defined(D3D11_USE_SHADER_MODEL_4_0_level_9_1)
static const DWORD D3D11_PixelShader_Textures[] = ;
#elif defined(D3D11_USE_SHADER_MODEL_4_0_level_9_3)
static const DWORD D3D11_PixelShader_Textures[] = ;
#error "An appropriate 'textures' pixel shader is not defined"
#if defined(D3D11_USE_SHADER_MODEL_4_0_level_9_1)
static const DWORD D3D11_PixelShader_YUV[] = ;
#elif defined(D3D11_USE_SHADER_MODEL_4_0_level_9_3)
static const DWORD D3D11_PixelShader_YUV[] = ;
#error "An appropriate 'yuv' pixel shader is not defined."
#if defined(D3D11_USE_SHADER_MODEL_4_0_level_9_1)
static const DWORD D3D11_VertexShader[] = ;
#elif defined(D3D11_USE_SHADER_MODEL_4_0_level_9_3)
static const DWORD D3D11_VertexShader[] = ;
#error "An appropriate vertex shader is not defined."
static SDL_Renderer *D3D11_CreateRenderer(SDL_Window * window, Uint32 flags);
static void D3D11_WindowEvent(SDL_Renderer * renderer,
const SDL_WindowEvent *event);
static int D3D11_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D11_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void *srcPixels,
int srcPitch);
static int D3D11_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
static int D3D11_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch);
static void D3D11_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D11_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture);
static int D3D11_UpdateViewport(SDL_Renderer * renderer);
static int D3D11_UpdateClipRect(SDL_Renderer * renderer);
static int D3D11_RenderClear(SDL_Renderer * renderer);
static int D3D11_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int D3D11_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count);
static int D3D11_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count);
static int D3D11_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect);
static int D3D11_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip);
static int D3D11_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch);
static void D3D11_RenderPresent(SDL_Renderer * renderer);
static void D3D11_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture);
static void D3D11_DestroyRenderer(SDL_Renderer * renderer);
static HRESULT D3D11_CreateDeviceResources(SDL_Renderer * renderer);
static HRESULT D3D11_CreateWindowSizeDependentResources(SDL_Renderer * renderer);
static HRESULT D3D11_UpdateForWindowSizeChange(SDL_Renderer * renderer);
static HRESULT D3D11_HandleDeviceLost(SDL_Renderer * renderer);
static void D3D11_ReleaseMainRenderTargetView(SDL_Renderer * renderer);
SDL_RenderDriver D3D11_RenderDriver = ;
Uint32
D3D11_DXGIFormatToSDLPixelFormat(DXGI_FORMAT dxgiFormat)
static DXGI_FORMAT
SDLPixelFormatToDXGIFormat(Uint32 sdlFormat)
SDL_Renderer *
D3D11_CreateRenderer(SDL_Window * window, Uint32 flags)
static void
D3D11_ReleaseAll(SDL_Renderer * renderer)
static void
D3D11_DestroyRenderer(SDL_Renderer * renderer)
static HRESULT
D3D11_CreateBlendMode(SDL_Renderer * renderer,
BOOL enableBlending,
D3D11_BLEND srcBlend,
D3D11_BLEND destBlend,
D3D11_BLEND srcBlendAlpha,
D3D11_BLEND destBlendAlpha,
ID3D11BlendState ** blendStateOutput)
static HRESULT
D3D11_CreateDeviceResources(SDL_Renderer * renderer)
static DXGI_MODE_ROTATION
D3D11_GetCurrentRotation()
static BOOL
D3D11_IsDisplayRotated90Degrees(DXGI_MODE_ROTATION rotation)
static int
D3D11_GetRotationForCurrentRenderTarget(SDL_Renderer * renderer)
static int
D3D11_GetViewportAlignedD3DRect(SDL_Renderer * renderer, const SDL_Rect * sdlRect, D3D11_RECT * outRect, BOOL includeViewportOffset)
static HRESULT
D3D11_CreateSwapChain(SDL_Renderer * renderer, int w, int h)
static HRESULT
D3D11_CreateWindowSizeDependentResources(SDL_Renderer * renderer)
static HRESULT
D3D11_UpdateForWindowSizeChange(SDL_Renderer * renderer)
HRESULT
D3D11_HandleDeviceLost(SDL_Renderer * renderer)
void
D3D11_Trim(SDL_Renderer * renderer)
static void
D3D11_WindowEvent(SDL_Renderer * renderer, const SDL_WindowEvent *event)
static D3D11_FILTER
GetScaleQuality(void)
static int
D3D11_CreateTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static void
D3D11_DestroyTexture(SDL_Renderer * renderer,
SDL_Texture * texture)
static int
D3D11_UpdateTextureInternal(D3D11_RenderData *rendererData, ID3D11Texture2D *texture, Uint32 format, int x, int y, int w, int h, const void *pixels, int pitch)
static int
D3D11_UpdateTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, const void * srcPixels,
int srcPitch)
static int
D3D11_UpdateTextureYUV(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
static int
D3D11_LockTexture(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * rect, void **pixels, int *pitch)
static void
D3D11_UnlockTexture(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D11_SetRenderTarget(SDL_Renderer * renderer, SDL_Texture * texture)
static void
D3D11_SetModelMatrix(SDL_Renderer *renderer, const Float4X4 *matrix)
static int
D3D11_UpdateViewport(SDL_Renderer * renderer)
static int
D3D11_UpdateClipRect(SDL_Renderer * renderer)
static void
D3D11_ReleaseMainRenderTargetView(SDL_Renderer * renderer)
static ID3D11RenderTargetView *
D3D11_GetCurrentRenderTargetView(SDL_Renderer * renderer)
static int
D3D11_RenderClear(SDL_Renderer * renderer)
static int
D3D11_UpdateVertexBuffer(SDL_Renderer *renderer,
const void * vertexData, size_t dataSizeInBytes)
static void
D3D11_RenderStartDrawOp(SDL_Renderer * renderer)
static void
D3D11_RenderSetBlendMode(SDL_Renderer * renderer, SDL_BlendMode blendMode)
static void
D3D11_SetPixelShader(SDL_Renderer * renderer,
ID3D11PixelShader * shader,
int numShaderResources,
ID3D11ShaderResourceView ** shaderResources,
ID3D11SamplerState * sampler)
static void
D3D11_RenderFinishDrawOp(SDL_Renderer * renderer,
D3D11_PRIMITIVE_TOPOLOGY primitiveTopology,
UINT vertexCount)
static int
D3D11_RenderDrawPoints(SDL_Renderer * renderer,
const SDL_FPoint * points, int count)
static int
D3D11_RenderDrawLines(SDL_Renderer * renderer,
const SDL_FPoint * points, int count)
static int
D3D11_RenderFillRects(SDL_Renderer * renderer,
const SDL_FRect * rects, int count)
static ID3D11SamplerState *
D3D11_RenderGetSampler(SDL_Renderer * renderer, SDL_Texture * texture)
static int
D3D11_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect)
static int
D3D11_RenderCopyEx(SDL_Renderer * renderer, SDL_Texture * texture,
const SDL_Rect * srcrect, const SDL_FRect * dstrect,
const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip)
static int
D3D11_RenderReadPixels(SDL_Renderer * renderer, const SDL_Rect * rect,
Uint32 format, void * pixels, int pitch)
static void
D3D11_RenderPresent(SDL_Renderer * renderer)
