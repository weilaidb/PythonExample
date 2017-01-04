#if defined(__HAIKU__)
int SDL_BeAppActive = 0;
static SDL_Thread *SDL_AppThread = NULL;
static int
StartBeApp(void *unused)
int
SDL_InitBeApp(void)
void
SDL_QuitBeApp(void)
void SDL_BApp::ClearID(SDL_BWin *bwin)
