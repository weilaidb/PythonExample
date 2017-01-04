#define GLYPH_SIZE_IMAGE 16
#define GLYPH_SIZE_SCREEN 32
static SDL_Texture *texture;
void cleanup(void);
void drawBlank(int x, int y);
static SDL_Renderer *renderer;
static int numChars = 0;
static SDL_bool lastCharWasColon = 0;
static SDL_Color bg_color = ;
typedef struct
fontMapping;
#define TABLE_SIZE 51
fontMapping map[TABLE_SIZE] = ;
int
keyToIndex(SDL_Keysym key)
void
getPositionForCharNumber(int n, int *x, int *y)
void
drawIndex(int index)
void
drawCursor(void)
void
drawBlank(int x, int y)
void
backspace(void)
SDL_Texture*
loadFont(void)
int
main(int argc, char *argv[])
void
cleanup(void)
