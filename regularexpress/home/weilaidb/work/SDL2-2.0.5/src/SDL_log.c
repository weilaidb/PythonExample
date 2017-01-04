#if defined(__WIN32__) || defined(__WINRT__)
#if HAVE_STDIO_H
#if defined(__ANDROID__)
#define DEFAULT_PRIORITY                SDL_LOG_PRIORITY_CRITICAL
#define DEFAULT_ASSERT_PRIORITY         SDL_LOG_PRIORITY_WARN
#define DEFAULT_APPLICATION_PRIORITY    SDL_LOG_PRIORITY_INFO
#define DEFAULT_TEST_PRIORITY           SDL_LOG_PRIORITY_VERBOSE
typedef struct SDL_LogLevel
SDL_LogLevel;
static void SDL_LogOutput(void *userdata,
int category, SDL_LogPriority priority,
const char *message);
static SDL_LogLevel *SDL_loglevels;
static SDL_LogPriority SDL_default_priority = DEFAULT_PRIORITY;
static SDL_LogPriority SDL_assert_priority = DEFAULT_ASSERT_PRIORITY;
static SDL_LogPriority SDL_application_priority = DEFAULT_APPLICATION_PRIORITY;
static SDL_LogPriority SDL_test_priority = DEFAULT_TEST_PRIORITY;
static SDL_LogOutputFunction SDL_log_function = SDL_LogOutput;
static void *SDL_log_userdata = NULL;
static const char *SDL_priority_prefixes[SDL_NUM_LOG_PRIORITIES] = ;
static const char *SDL_category_prefixes[SDL_LOG_CATEGORY_RESERVED1] = ;
static int SDL_android_priority[SDL_NUM_LOG_PRIORITIES] = ;
void
SDL_LogSetAllPriority(SDL_LogPriority priority)
void
SDL_LogSetPriority(int category, SDL_LogPriority priority)
SDL_LogPriority
SDL_LogGetPriority(int category)
void
SDL_LogResetPriorities(void)
void
SDL_Log(SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogVerbose(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogDebug(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogInfo(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogWarn(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogError(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogCritical(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
void
SDL_LogMessage(int category, SDL_LogPriority priority, SDL_PRINTF_FORMAT_STRING const char *fmt, ...)
static const char *
GetCategoryPrefix(int category)
void
SDL_LogMessageV(int category, SDL_LogPriority priority, const char *fmt, va_list ap)
#if defined(__WIN32__)
static int consoleAttached = 0;
static HANDLE stderrHandle = NULL;
static void
SDL_LogOutput(void *userdata, int category, SDL_LogPriority priority,
const char *message)
void
SDL_LogGetOutputFunction(SDL_LogOutputFunction *callback, void **userdata)
void
SDL_LogSetOutputFunction(SDL_LogOutputFunction callback, void *userdata)
