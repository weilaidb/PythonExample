#if SDL_VIDEO_DRIVER_MIR
#define DEBUG_DYNAMIC_MIR 0
#if DEBUG_DYNAMIC_MIR
typedef struct
mirdynlib;
#define SDL_VIDEO_DRIVER_MIR_DYNAMIC NULL
#define SDL_VIDEO_DRIVER_MIR_DYNAMIC_XKBCOMMON NULL
static mirdynlib mirlibs[] = ;
static void *
MIR_GetSym(const char *fnname, int *pHasModule)
#define SDL_MIR_MODULE(modname) int SDL_MIR_HAVE_##modname = 0;
#define SDL_MIR_SYM(rc,fn,params) SDL_DYNMIRFN_##fn MIR_##fn = NULL;
#define SDL_MIR_SYM_CONST(type,name) SDL_DYMMIRCONST_##name MIR_##name = NULL;
static int mir_load_refcount = 0;
void
SDL_MIR_UnloadSymbols(void)
int
SDL_MIR_LoadSymbols(void)
