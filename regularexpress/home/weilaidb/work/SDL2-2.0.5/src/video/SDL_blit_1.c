static void
Blit1to1(SDL_BlitInfo * info)
#if ( SDL_BYTEORDER == SDL_LIL_ENDIAN )
#define HI	1
#define LO	0
#define HI	0
#define LO	1
static void
Blit1to2(SDL_BlitInfo * info)
static void
Blit1to3(SDL_BlitInfo * info)
static void
Blit1to4(SDL_BlitInfo * info)
static void
Blit1to1Key(SDL_BlitInfo * info)
static void
Blit1to2Key(SDL_BlitInfo * info)
static void
Blit1to3Key(SDL_BlitInfo * info)
static void
Blit1to4Key(SDL_BlitInfo * info)
static void
Blit1toNAlpha(SDL_BlitInfo * info)
static void
Blit1toNAlphaKey(SDL_BlitInfo * info)
static const SDL_BlitFunc one_blit[] = ;
static const SDL_BlitFunc one_blitkey[] = ;
SDL_BlitFunc
SDL_CalculateBlit1(SDL_Surface * surface)
