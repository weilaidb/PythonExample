#define _SDL_test_images_h
typedef struct SDLTest_SurfaceImage_s  SDLTest_SurfaceImage_t;
SDL_Surface *SDLTest_ImageBlit();
SDL_Surface *SDLTest_ImageBlitColor();
SDL_Surface *SDLTest_ImageBlitAlpha();
SDL_Surface *SDLTest_ImageBlitBlendAdd();
SDL_Surface *SDLTest_ImageBlitBlend();
SDL_Surface *SDLTest_ImageBlitBlendMod();
SDL_Surface *SDLTest_ImageBlitBlendNone();
SDL_Surface *SDLTest_ImageBlitBlendAll();
SDL_Surface *SDLTest_ImageFace();
SDL_Surface *SDLTest_ImagePrimitives();
SDL_Surface *SDLTest_ImagePrimitivesBlend();
