#if SDL_VIDEO_DRIVER_X11
static int shm_error;
static int (*X_handler)(Display *, XErrorEvent *) = NULL;
static int shm_errhandler(Display *d, XErrorEvent *e)
static SDL_bool have_mitshm(void)
int
X11_CreateWindowFramebuffer(_THIS, SDL_Window * window, Uint32 * format,
void ** pixels, int *pitch)
int
X11_UpdateWindowFramebuffer(_THIS, SDL_Window * window, const SDL_Rect * rects,
int numrects)
void
X11_DestroyWindowFramebuffer(_THIS, SDL_Window * window)
