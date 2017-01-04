#define WINDOW_W    640
#define WINDOW_H    480
#define NUM_SPRITES 100
#define MAX_SPEED   1
static NativeWindowFactory *factories[] = ;
static NativeWindowFactory *factory = NULL;
static void *native_window;
static SDL_Rect *positions, *velocities;
static void
quit(int rc)
SDL_Texture *
LoadSprite(SDL_Renderer *renderer, char *file)
void
MoveSprites(SDL_Renderer * renderer, SDL_Texture * sprite)
int
main(int argc, char *argv[])
