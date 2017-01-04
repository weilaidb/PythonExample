#define WINDOW_WIDTH    640
#define WINDOW_HEIGHT   480
#define NUM_SPRITES     100
#define MAX_SPEED       1
static SDL_Texture *sprite;
static SDL_Rect positions[NUM_SPRITES];
static SDL_Rect velocities[NUM_SPRITES];
static int sprite_w, sprite_h;
SDL_Renderer *renderer;
int done;
static void
quit(int rc)
int
LoadSprite(char *file, SDL_Renderer *renderer)
void
MoveSprites(SDL_Renderer * renderer, SDL_Texture * sprite)
void loop()
int
main(int argc, char *argv[])
