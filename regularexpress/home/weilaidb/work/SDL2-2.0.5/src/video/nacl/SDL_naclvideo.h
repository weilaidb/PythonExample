#define _SDL_naclvideo_h
#define _THIS  SDL_VideoDevice *_this
typedef struct SDL_VideoData  SDL_VideoData;
extern void NACL_SetScreenResolution(int width, int height, Uint32 format);
