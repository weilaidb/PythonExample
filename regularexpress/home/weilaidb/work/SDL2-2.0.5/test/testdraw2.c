#define NUM_OBJECTS 100
static SDLTest_CommonState *state;
static int num_objects;
static SDL_bool cycle_color;
static SDL_bool cycle_alpha;
static int cycle_direction = 1;
static int current_alpha = 255;
static int current_color = 255;
static SDL_BlendMode blendMode = SDL_BLENDMODE_NONE;
int done;
void
DrawPoints(SDL_Renderer * renderer)
void
DrawLines(SDL_Renderer * renderer)
void
DrawRects(SDL_Renderer * renderer)
void
loop()
int
main(int argc, char *argv[])
