extern int SDL_InitFormat(SDL_PixelFormat * format, Uint32 pixel_format);
extern SDL_BlitMap *SDL_AllocBlitMap(void);
extern void SDL_InvalidateMap(SDL_BlitMap * map);
extern int SDL_MapSurface(SDL_Surface * src, SDL_Surface * dst);
extern void SDL_FreeBlitMap(SDL_BlitMap * map);
extern int SDL_CalculatePitch(SDL_Surface * surface);
extern void SDL_DitherColors(SDL_Color * colors, int bpp);
extern Uint8 SDL_FindColor(SDL_Palette * pal, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
