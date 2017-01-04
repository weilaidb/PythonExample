#if SDL_DYNAMIC_API
#define SDL_DYNAPI_VERSION 1
static void SDL_InitDynamicAPI(void);
#define DISABLE_JUMP_MAGIC 1
#if DISABLE_JUMP_MAGIC
#define SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, logname, prio) \
_static void SDL_Log##logname##name(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
#define SDL_DYNAPI_VARARGS(_static, name, initcall) \
_static int SDL_SetError##name(SDL_PRINTF_FORMAT_STRING const char *fmt, ...)  \
_static int SDL_sscanf##name(const char *buf, SDL_SCANF_FORMAT_STRING const char *fmt, ...)  \
_static int SDL_snprintf##name(SDL_OUT_Z_CAP(maxlen) char *buf, size_t maxlen, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)  \
_static void SDL_Log##name(SDL_PRINTF_FORMAT_STRING const char *fmt, ...)  \
_static void SDL_LogMessage##name(int category, SDL_LogPriority priority, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)  \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Verbose, VERBOSE) \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Debug, DEBUG) \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Info, INFO) \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Warn, WARN) \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Error, ERROR) \
SDL_DYNAPI_VARARGS_LOGFN(_static, name, initcall, Critical, CRITICAL)
#define SDL_DYNAPI_PROC(rc,fn,params,args,ret) \
typedef rc (*SDL_DYNAPIFN_##fn) params; \
static rc fn##_DEFAULT params; \
extern rc fn##_REAL params;
#undef SDL_DYNAPI_PROC
typedef struct  SDL_DYNAPI_jump_table;
#define SDL_DYNAPI_PROC(rc,fn,params,args,ret) static rc fn##_DEFAULT params;
#undef SDL_DYNAPI_PROC
static SDL_DYNAPI_jump_table jump_table = ;
#if DISABLE_JUMP_MAGIC
#define SDL_DYNAPI_PROC(rc,fn,params,args,ret) \
static rc fn##_DEFAULT params
#define SDL_DYNAPI_PROC_NO_VARARGS 1
#undef SDL_DYNAPI_PROC
#undef SDL_DYNAPI_PROC_NO_VARARGS
SDL_DYNAPI_VARARGS(static, _DEFAULT, SDL_InitDynamicAPI())
#error Write me.
#if DISABLE_JUMP_MAGIC
#define SDL_DYNAPI_PROC(rc,fn,params,args,ret) \
rc fn params
#define SDL_DYNAPI_PROC_NO_VARARGS 1
#undef SDL_DYNAPI_PROC
#undef SDL_DYNAPI_PROC_NO_VARARGS
SDL_DYNAPI_VARARGS(,,)
#error Write me.
typedef Sint32 (SDLCALL *SDL_DYNAPI_ENTRYFN)(Uint32 apiver, void *table, Uint32 tablesize);
extern DECLSPEC Sint32 SDLCALL SDL_DYNAPI_entry(Uint32, void *, Uint32);
Sint32
SDL_DYNAPI_entry(Uint32 apiver, void *table, Uint32 tablesize)
#if defined(WIN32) || defined(_WIN32) || defined(__CYGWIN__)
#define WIN32_LEAN_AND_MEAN 1
static SDL_INLINE void *get_sdlapi_entry(const char *fname, const char *sym)
#elif defined(__HAIKU__)
static SDL_INLINE void *get_sdlapi_entry(const char *fname, const char *sym)
#elif defined(unix) || defined(__unix__) || defined(__APPLE__)
static SDL_INLINE void *get_sdlapi_entry(const char *fname, const char *sym)
#error Please define your platform.
static void
SDL_InitDynamicAPILocked(void)
static void
SDL_InitDynamicAPI(void)
