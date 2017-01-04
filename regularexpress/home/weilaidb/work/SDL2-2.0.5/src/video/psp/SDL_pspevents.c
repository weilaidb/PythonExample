#if SDL_VIDEO_DRIVER_PSP
#define IRKBD_CONFIG_FILE     NULL
static int irkbd_ready = 0;
static SDL_Keycode keymap[256];
static enum PspHprmKeys hprm = 0;
static SDL_sem *event_sem = NULL;
static SDL_Thread *thread = NULL;
static int running = 0;
static struct  keymap_psp[] = ;
int EventUpdate(void *data)
void PSP_PumpEvents(_THIS)
void PSP_InitOSKeymap(_THIS)
void PSP_EventInit(_THIS)
void PSP_EventQuit(_THIS)
