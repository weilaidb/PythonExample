#if SDL_VIDEO_RENDER_D3D11 && !SDL_RENDER_DISABLED
extern "C"
#if WINAPI_FAMILY == WINAPI_FAMILY_APP
using namespace Windows::UI::Core;
using namespace Windows::Graphics::Display;
extern "C" void *
D3D11_GetCoreWindowFromSDLRenderer(SDL_Renderer * renderer)
extern "C" DXGI_MODE_ROTATION
D3D11_GetCurrentRotation()
