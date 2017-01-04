#define SDL_TESTFONTDATAMAX (8*256)
static unsigned char SDLTest_FontData[SDL_TESTFONTDATAMAX] = ;
static SDL_Texture *SDLTest_CharTextureCache[256];
int SDLTest_DrawCharacter(SDL_Renderer *renderer, int x, int y, char c)
int SDLTest_DrawString(SDL_Renderer * renderer, int x, int y, const char *s)
