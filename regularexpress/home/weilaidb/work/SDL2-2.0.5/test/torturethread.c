#define NUMTHREADS 10
static SDL_atomic_t time_for_threads_to_die[NUMTHREADS];
static void
quit(int rc)
int SDLCALL
SubThreadFunc(void *data)
int
main(int argc, char *argv[])
