#if defined(SDL_FILESYSTEM_DUMMY) || defined(SDL_FILESYSTEM_DISABLED)
char *
SDL_GetBasePath(void)
char *
SDL_GetPrefPath(const char *org, const char *app)
