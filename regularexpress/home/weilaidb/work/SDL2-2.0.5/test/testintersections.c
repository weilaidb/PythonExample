#define SWAP(typ,a,b) dowhile(0)
#define NUM_OBJECTS 100
static SDLTest_CommonState *state;
static int num_objects;
static SDL_bool cycle_color;
static SDL_bool cycle_alpha;
static int cycle_direction = 1;
static int current_alpha = 255;
static int current_color = 255;
static SDL_BlendMode blendMode = SDL_BLENDMODE_NONE;
int mouse_begin_x = -1, mouse_begin_y = -1;
int done;
void
DrawPoints(SDL_Renderer * renderer)
#define MAX_LINES 16
int num_lines = 0;
SDL_Rect lines[MAX_LINES];
static int
add_line(int x1, int y1, int x2, int y2)
void
DrawLines(SDL_Renderer * renderer)
#define MAX_RECTS 16
int num_rects = 0;
SDL_Rect rects[MAX_RECTS];
static int
add_rect(int x1, int y1, int x2, int y2)
static void
DrawRects(SDL_Renderer * renderer)
static void
DrawRectLineIntersections(SDL_Renderer * renderer)
static void
DrawRectRectIntersections(SDL_Renderer * renderer)
void
loop()
int
main(int argc, char *argv[])
