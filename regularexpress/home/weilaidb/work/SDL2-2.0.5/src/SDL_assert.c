#if defined(__WIN32__)
#define WS_OVERLAPPEDWINDOW 0
#if ! defined(__WINRT__)
static SDL_assert_state
SDL_PromptAssertion(const SDL_assert_data *data, void *userdata);
static SDL_assert_data *triggered_assertions = NULL;
static SDL_mutex *assertion_mutex = NULL;
static SDL_AssertionHandler assertion_handler = SDL_PromptAssertion;
static void *assertion_userdata = NULL;
static void
debug_print(const char *fmt, ...) __attribute__((format (printf, 1, 2)));
static void
debug_print(const char *fmt, ...)
static void SDL_AddAssertionToReport(SDL_assert_data *data)
static void SDL_GenerateAssertionReport(void)
static void SDL_ExitProcess(int exitcode)
static void SDL_AbortAssertion(void)
static SDL_assert_state
SDL_PromptAssertion(const SDL_assert_data *data, void *userdata)
SDL_assert_state
SDL_ReportAssertion(SDL_assert_data *data, const char *func, const char *file,
int line)
void SDL_AssertionsQuit(void)
void SDL_SetAssertionHandler(SDL_AssertionHandler handler, void *userdata)
const SDL_assert_data *SDL_GetAssertionReport(void)
void SDL_ResetAssertionReport(void)
SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void)
SDL_AssertionHandler SDL_GetAssertionHandler(void **userdata)
