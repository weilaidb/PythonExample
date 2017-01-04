#define DEFAULT_FONT "C:\\Windows\\Fonts\\yugothic.ttf"
#define DEFAULT_FONT "NoDefaultFont.ttf"
#define DEFAULT_FONT "unifont-9.0.02.hex"
#define MAX_TEXT_LENGTH 256
static SDLTest_CommonState *state;
static SDL_Rect textRect, markedRect;
static SDL_Color lineColor = ;
static SDL_Color backColor = ;
static SDL_Color textColor = ;
static char text[MAX_TEXT_LENGTH], markedText[SDL_TEXTEDITINGEVENT_TEXT_SIZE];
static int cursor = 0;
static TTF_Font *font;
#define UNIFONT_MAX_CODEPOINT 0x1ffff
#define UNIFONT_NUM_GLYPHS 0x20000
#define UNIFONT_TEXTURE_WIDTH 512
#define UNIFONT_GLYPHS_IN_ROW (UNIFONT_TEXTURE_WIDTH / 16)
#define UNIFONT_GLYPHS_IN_TEXTURE (UNIFONT_GLYPHS_IN_ROW * UNIFONT_GLYPHS_IN_ROW)
#define UNIFONT_NUM_TEXTURES ((UNIFONT_NUM_GLYPHS + UNIFONT_GLYPHS_IN_TEXTURE - 1) / UNIFONT_GLYPHS_IN_TEXTURE)
#define UNIFONT_TEXTURE_SIZE (UNIFONT_TEXTURE_WIDTH * UNIFONT_TEXTURE_WIDTH * 4)
#define UNIFONT_TEXTURE_PITCH (UNIFONT_TEXTURE_WIDTH * 4)
#define UNIFONT_DRAW_SCALE 2
struct UnifontGlyph  *unifontGlyph;
static SDL_Texture **unifontTexture;
static Uint8 unifontTextureLoaded[UNIFONT_NUM_TEXTURES] = ;
static Uint8 dehex(char c)
static Uint8 dehex2(char c1, char c2)
static Uint8 validate_hex(const char *cp, size_t len, Uint32 *np)
static void unifont_init(const char *fontname)
static void unifont_make_rgba(Uint8 *src, Uint8 *dst, Uint8 width)
static void unifont_load_texture(Uint32 textureID)
static Sint32 unifont_draw_glyph(Uint32 codepoint, int rendererID, SDL_Rect *dstrect)
static void unifont_cleanup()
size_t utf8_length(unsigned char c)
char *utf8_next(char *p)
char *utf8_advance(char *p, size_t distance)
Uint32 utf8_decode(char *p, size_t len)
void usage()
void InitInput()
void CleanupVideo()
void _Redraw(int rendererID)
void Redraw()
int main(int argc, char *argv[])
