#define _SDL_sysrender_h
typedef struct SDL_RenderDriver SDL_RenderDriver;
typedef struct
SDL_FPoint;
typedef struct
SDL_FRect;
struct SDL_Texture
;
struct SDL_Renderer
;
struct SDL_RenderDriver
;
#if !SDL_RENDER_DISABLED
#if SDL_VIDEO_RENDER_D3D
extern SDL_RenderDriver D3D_RenderDriver;
#if SDL_VIDEO_RENDER_D3D11
extern SDL_RenderDriver D3D11_RenderDriver;
#if SDL_VIDEO_RENDER_OGL
extern SDL_RenderDriver GL_RenderDriver;
#if SDL_VIDEO_RENDER_OGL_ES2
extern SDL_RenderDriver GLES2_RenderDriver;
#if SDL_VIDEO_RENDER_OGL_ES
extern SDL_RenderDriver GLES_RenderDriver;
#if SDL_VIDEO_RENDER_DIRECTFB
extern SDL_RenderDriver DirectFB_RenderDriver;
#if SDL_VIDEO_RENDER_PSP
extern SDL_RenderDriver PSP_RenderDriver;
extern SDL_RenderDriver SW_RenderDriver;
