#define MOOSEPIC_W 64
#define MOOSEPIC_H 88
#define MOOSEFRAME_SIZE (MOOSEPIC_W * MOOSEPIC_H)
#define MOOSEFRAMES_COUNT 10
SDL_Color MooseColors[84] = ;
Uint8 MooseFrame[MOOSEFRAMES_COUNT][MOOSEFRAME_SIZE*2];
SDL_Texture *MooseTexture;
SDL_Rect displayrect;
int window_w;
int window_h;
SDL_Window *window;
SDL_Renderer *renderer;
int paused = 0;
int i;
SDL_bool done = SDL_FALSE;
Uint32 pixel_format = SDL_PIXELFORMAT_YV12;
int fpsdelay;
static void
quit(int rc)
void
RGBtoYUV(Uint8 * rgb, int *yuv, int monochrome, int luminance)
void
ConvertRGBtoYV12(Uint8 *rgb, Uint8 *out, int w, int h,
int monochrome, int luminance)
void
ConvertRGBtoNV12(Uint8 *rgb, Uint8 *out, int w, int h,
int monochrome, int luminance)
static void
PrintUsage(char *argv0)
void
loop()
int
main(int argc, char **argv)
