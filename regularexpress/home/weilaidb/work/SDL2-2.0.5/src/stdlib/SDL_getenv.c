#if defined(__clang_analyzer__) && !defined(SDL_DISABLE_ANALYZE_MACROS)
#define SDL_DISABLE_ANALYZE_MACROS 1
#if defined(__WIN32__)
#if defined(__WIN32__) && (!defined(HAVE_SETENV) || !defined(HAVE_GETENV))
static char *SDL_envmem = NULL;
static size_t SDL_envmemlen = 0;
if (!name || SDL_strlen(name) == 0 || SDL_strchr(name, '=') != NULL || !value)
return setenv(name, value, overwrite);
}
#elif defined(__WIN32__)
int
SDL_setenv(const char *name, const char *value, int overwrite)
#elif (defined(HAVE_GETENV) && defined(HAVE_PUTENV) && !defined(HAVE_SETENV))
int
SDL_setenv(const char *name, const char *value, int overwrite)
static char **SDL_env = (char **) 0;
int
SDL_setenv(const char *name, const char *value, int overwrite)
#if defined(HAVE_GETENV)
char *
SDL_getenv(const char *name)
#elif defined(__WIN32__)
char *
SDL_getenv(const char *name)
char *
SDL_getenv(const char *name)
int
main(int argc, char *argv[])
