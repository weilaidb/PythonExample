static SDL_mutex *mutex = NULL;
static SDL_threadID mainthread;
static SDL_Thread *threads[6];
static SDL_atomic_t doterminate;
static void
SDL_Quit_Wrapper(void)
void
printid(void)
void
terminate(int sig)
void
closemutex(int sig)
int SDLCALL
Run(void *data)
int
main(int argc, char *argv[])
