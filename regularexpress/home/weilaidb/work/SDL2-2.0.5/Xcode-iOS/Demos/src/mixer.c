#define NUM_CHANNELS 8
#define NUM_DRUMS 4
static struct
buttons[NUM_DRUMS];
struct sound
;
static struct sound drums[NUM_DRUMS];
void handleMouseButtonDown(SDL_Event * event);
void handleMouseButtonUp(SDL_Event * event);
int playSound(struct sound *);
void initializeButtons(SDL_Renderer *);
void audioCallback(void *userdata, Uint8 * stream, int len);
void loadSound(const char *file, struct sound *s);
struct
mixer;
void
initializeButtons(SDL_Renderer *renderer)
void
loadSound(const char *file, struct sound *s)
void
handleMouseButtonDown(SDL_Event * event)
void
handleMouseButtonUp(SDL_Event * event)
void
render(SDL_Renderer *renderer)
int
playSound(struct sound *s)
void
audioCallback(void *userdata, Uint8 * stream, int len)
int
main(int argc, char *argv[])
