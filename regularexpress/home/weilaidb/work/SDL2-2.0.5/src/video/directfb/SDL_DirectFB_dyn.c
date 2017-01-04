#if SDL_VIDEO_DRIVER_DIRECTFB
#define DFB_SYM(ret, name, args, al, func) ret (*name) args;
static struct _SDL_DirectFB_Symbols
SDL_DirectFB_Symbols;
#undef DFB_SYM
#define DFB_SYM(ret, name, args, al, func) ret name args
DFB_SYMS
#undef DFB_SYM
static void *handle = NULL;
int
SDL_DirectFB_LoadLibrary(void)
void
SDL_DirectFB_UnLoadLibrary(void)
int
SDL_DirectFB_LoadLibrary(void)
void
SDL_DirectFB_UnLoadLibrary(void)
