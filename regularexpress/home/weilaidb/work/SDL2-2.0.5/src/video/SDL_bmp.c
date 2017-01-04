#define SAVE_32BIT_BMP
#define BI_RGB      0
#define BI_RLE8     1
#define BI_RLE4     2
#define BI_BITFIELDS    3
#define LCS_WINDOWS_COLOR_SPACE    0x57696E20
static void CorrectAlphaChannel(SDL_Surface *surface)
SDL_Surface *
SDL_LoadBMP_RW(SDL_RWops * src, int freesrc)
int
SDL_SaveBMP_RW(SDL_Surface * saveme, SDL_RWops * dst, int freedst)
