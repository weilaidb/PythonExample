#define NUM_THREADS 10
static SDL_sem *sem;
int alive = 1;
int SDLCALL
ThreadFunc(void *data)
static void
killed(int sig)
static void
TestWaitTimeout(void)
int
main(int argc, char **argv)
