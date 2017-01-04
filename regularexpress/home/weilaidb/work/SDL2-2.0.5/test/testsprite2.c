#define NUM_SPRITES    100
#define MAX_SPEED     1
static SDLTest_CommonState *state;
static int num_sprites;
static SDL_Texture **sprites;
static SDL_bool cycle_color;
static SDL_bool cycle_alpha;
static int cycle_direction = 1;
static int current_alpha = 0;
static int current_color = 0;
static SDL_Rect *positions;
static SDL_Rect *velocities;
static int sprite_w, sprite_h;
static SDL_BlendMode blendMode = SDL_BLENDMODE_BLEND;
static int iterations = -1;
int done;
static void
quit(int rc)
int
LoadSprite(const char *file)
void
MoveSprites(SDL_Renderer * renderer, SDL_Texture * sprite)
void
loop()
int
main(int argc, char *argv[])
