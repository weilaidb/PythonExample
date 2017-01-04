#if SDL_THREADS_DISABLED
static SDL_error SDL_global_error;
#define SDL_GetErrBuf() (&SDL_global_error)
extern SDL_error *SDL_GetErrBuf(void);
#define SDL_ERRBUFIZE   1024
static const char *
SDL_LookupString(const char *key)
int
SDL_SetError(SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
static char *
SDL_GetErrorMsg(char *errstr, int maxlen)
const char *
SDL_GetError(void)
void
SDL_ClearError(void)
int
SDL_Error(SDL_errorcode code)
int
main(int argc, char *argv[])
