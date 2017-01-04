#if HAVE_SIGNAL_H
static SDL_AudioSpec spec;
static Uint8 *sound = NULL;
static Uint32 soundlen = 0;
static int posindex = 0;
static Uint32 positions[64];
static void
quit(int rc)
void SDLCALL
fillerup(void *_pos, Uint8 * stream, int len)
static int done = 0;
void
poked(int sig)
static const char*
devtypestr(int iscapture)
static void
iteration()
void
loop()
int
main(int argc, char *argv[])
