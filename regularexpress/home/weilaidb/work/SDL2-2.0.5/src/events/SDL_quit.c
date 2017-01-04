static SDL_bool disable_signals = SDL_FALSE;
static SDL_bool send_quit_pending = SDL_FALSE;
static void
SDL_HandleSIG(int sig)
static int
SDL_QuitInit_Internal(void)
{
struct sigaction action;
sigaction(SIGINT, NULL, &action);
if ( action.sa_handler == SIG_DFL && action.sa_sigaction == (void*)SIG_DFL ) {
if ( action.sa_handler == SIG_DFL )
sigaction(SIGTERM, NULL, &action);
if ( action.sa_handler == SIG_DFL && action.sa_sigaction == (void*)SIG_DFL )
int
SDL_QuitInit(void)
static void
SDL_QuitQuit_Internal(void)
void
SDL_QuitQuit(void)
int
SDL_SendQuit(void)
void
SDL_SendPendingQuit(void)
