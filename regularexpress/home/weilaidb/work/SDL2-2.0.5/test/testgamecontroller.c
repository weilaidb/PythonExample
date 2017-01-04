#define SCREEN_WIDTH    480
#define SCREEN_HEIGHT    320
#define SCREEN_WIDTH    512
#define SCREEN_HEIGHT   320
static const struct  button_positions[] = ;
static const struct  axis_positions[] = ;
SDL_Renderer *screen = NULL;
SDL_bool retval = SDL_FALSE;
SDL_bool done = SDL_FALSE;
SDL_Texture *background, *button, *axis;
static SDL_Texture *
LoadTexture(SDL_Renderer *renderer, const char *file, SDL_bool transparent)
void
loop(void *arg)
SDL_bool
WatchGameController(SDL_GameController * gamecontroller)
int
main(int argc, char *argv[])
int
main(int argc, char *argv[])
