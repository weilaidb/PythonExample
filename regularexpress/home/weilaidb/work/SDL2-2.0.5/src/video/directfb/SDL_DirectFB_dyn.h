#define _SDL_DirectFB_dyn_h
#define DFB_SYMS \
DFB_SYM(DFBResult, DirectFBError, (const char *msg, DFBResult result), (msg, result), return) \
DFB_SYM(DFBResult, DirectFBErrorFatal, (const char *msg, DFBResult result), (msg, result), return) \
DFB_SYM(const char *, DirectFBErrorString, (DFBResult result), (result), return) \
DFB_SYM(const char *, DirectFBUsageString, ( void ), (), return) \
DFB_SYM(DFBResult, DirectFBInit, (int *argc, char *(*argv[]) ), (argc, argv), return) \
DFB_SYM(DFBResult, DirectFBSetOption, (const char *name, const char *value), (name, value), return) \
DFB_SYM(DFBResult, DirectFBCreate, (IDirectFB **interface), (interface), return) \
DFB_SYM(const char *, DirectFBCheckVersion, (unsigned int required_major, unsigned int required_minor, unsigned int required_micro), \
(required_major, required_minor, required_micro), return)
int SDL_DirectFB_LoadLibrary(void);
void SDL_DirectFB_UnLoadLibrary(void);
