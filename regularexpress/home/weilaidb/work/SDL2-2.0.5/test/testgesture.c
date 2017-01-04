#define WIDTH 640
#define HEIGHT 480
#define BPP 4
#define DEPTH 32
#define EVENT_BUF_SIZE 256
#define VERBOSE 0
static SDL_Event events[EVENT_BUF_SIZE];
static int eventWrite;
static int colors[7] = ;
SDL_Surface *screen;
SDL_Window *window;
SDL_bool quitting = SDL_FALSE;
typedef struct  Point;
typedef struct  Knob;
static Knob knob;
void setpix(SDL_Surface *screen, float _x, float _y, unsigned int col)
void drawLine(SDL_Surface *screen,float x0,float y0,float x1,float y1,unsigned int col)
void drawCircle(SDL_Surface* screen,float x,float y,float r,unsigned int c)
void drawKnob(SDL_Surface* screen,Knob k)
void DrawScreen(SDL_Surface* screen, SDL_Window* window)
SDL_Window* initWindow(SDL_Window *window, int width,int height)
void loop()
int main(int argc, char* argv[])
