extern int SDL_RLESurface(SDL_Surface * surface);
extern int SDL_RLEBlit(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
extern int SDL_RLEAlphaBlit(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
extern void SDL_UnRLESurface(SDL_Surface * surface, int recode);
