#define _SDL_test_font_h
#define FONT_CHARACTER_SIZE  8
int SDLTest_DrawCharacter( SDL_Renderer *renderer, int x, int y, char c );
int SDLTest_DrawString( SDL_Renderer * renderer, int x, int y, const char *s );
