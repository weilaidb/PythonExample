#define WINDOW_WIDTH    640
#define WINDOW_HEIGHT   480
static SDLTest_CommonState *state;
typedef struct  DrawState;
DrawState *drawstates;
int done;
static void
quit(int rc)
SDL_Texture *
LoadTexture(SDL_Renderer *renderer, char *file, SDL_bool transparent)
void
Draw(DrawState *s)
void
loop()
int
main(int argc, char *argv[])
