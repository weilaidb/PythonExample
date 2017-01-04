#define _SDL_loadso_h
extern DECLSPEC void *SDLCALL SDL_LoadObject(const char *sofile);
extern DECLSPEC void *SDLCALL SDL_LoadFunction(void *handle,
const char *name);
extern DECLSPEC void SDLCALL SDL_UnloadObject(void *handle);
