#if defined(SDL_LOADSO_DUMMY) || defined(SDL_LOADSO_DISABLED)
void *
SDL_LoadObject(const char *sofile)
void *
SDL_LoadFunction(void *handle, const char *name)
void
SDL_UnloadObject(void *handle)
