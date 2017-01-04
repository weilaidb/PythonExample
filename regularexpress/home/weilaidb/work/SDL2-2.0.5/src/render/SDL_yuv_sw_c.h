struct SDL_SW_YUVTexture
;
typedef struct SDL_SW_YUVTexture SDL_SW_YUVTexture;
SDL_SW_YUVTexture *SDL_SW_CreateYUVTexture(Uint32 format, int w, int h);
int SDL_SW_QueryYUVTexturePixels(SDL_SW_YUVTexture * swdata, void **pixels,
int *pitch);
int SDL_SW_UpdateYUVTexture(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
const void *pixels, int pitch);
int SDL_SW_UpdateYUVTexturePlanar(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch);
int SDL_SW_LockYUVTexture(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
void **pixels, int *pitch);
void SDL_SW_UnlockYUVTexture(SDL_SW_YUVTexture * swdata);
int SDL_SW_CopyYUVToRGB(SDL_SW_YUVTexture * swdata, const SDL_Rect * srcrect,
Uint32 target_format, int w, int h, void *pixels,
int pitch);
void SDL_SW_DestroyYUVTexture(SDL_SW_YUVTexture * swdata);
