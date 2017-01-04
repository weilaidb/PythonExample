#define _SDL_mirdyn_h
int SDL_MIR_LoadSymbols(void);
void SDL_MIR_UnloadSymbols(void);
#define SDL_MIR_SYM(rc,fn,params) \
typedef rc (*SDL_DYNMIRFN_##fn) params; \
extern SDL_DYNMIRFN_##fn MIR_##fn;
#define SDL_MIR_SYM_CONST(type, name) \
typedef type SDL_DYMMIRCONST_##name; \
extern SDL_DYMMIRCONST_##name MIR_##name;
