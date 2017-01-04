#if SDL_VIDEO_RENDER_D3D11 && !SDL_RENDER_DISABLED
void * D3D11_GetCoreWindowFromSDLRenderer(SDL_Renderer * renderer);
DXGI_MODE_ROTATION D3D11_GetCurrentRotation();
