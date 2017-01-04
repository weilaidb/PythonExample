#define _SDL_assert_h
#define SDL_ASSERT_LEVEL SDL_DEFAULT_ASSERT_LEVEL
#elif defined(_DEBUG) || defined(DEBUG) || \
(defined(__GNUC__) && !defined(__OPTIMIZE__))
#define SDL_ASSERT_LEVEL 2
#define SDL_ASSERT_LEVEL 1
#if defined(_MSC_VER)
extern void __cdecl __debugbreak(void);
#define SDL_TriggerBreakpoint() __debugbreak()
#elif (!defined(__NACL__) && defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__)))
#define SDL_TriggerBreakpoint() __asm__ __volatile__ ( "int $3\n\t" )
#elif defined(HAVE_SIGNAL_H)
#define SDL_TriggerBreakpoint() raise(SIGTRAP)
#define SDL_TriggerBreakpoint()
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#   define SDL_FUNCTION __func__
#elif ((__GNUC__ >= 2) || defined(_MSC_VER))
#   define SDL_FUNCTION __FUNCTION__
#   define SDL_FUNCTION "???"
#define SDL_FILE    __FILE__
#define SDL_LINE    __LINE__
#define SDL_NULL_WHILE_LOOP_CONDITION (0,0)
#define SDL_NULL_WHILE_LOOP_CONDITION (0)
#define SDL_disabled_assert(condition) \
do  while (SDL_NULL_WHILE_LOOP_CONDITION)
typedef enum
SDL_AssertState;
typedef struct SDL_AssertData
SDL_AssertData;
#if (SDL_ASSERT_LEVEL > 0)
extern DECLSPEC SDL_AssertState SDLCALL SDL_ReportAssertion(SDL_AssertData *,
const char *,
const char *, int)
#if defined(__clang__)
#if __has_feature(attribute_analyzer_noreturn)
__attribute__((analyzer_noreturn))
;
#define SDL_enabled_assert(condition) \
do  while (SDL_NULL_WHILE_LOOP_CONDITION)
#if SDL_ASSERT_LEVEL == 0
#   define SDL_assert(condition) SDL_disabled_assert(condition)
#   define SDL_assert_release(condition) SDL_disabled_assert(condition)
#   define SDL_assert_paranoid(condition) SDL_disabled_assert(condition)
#elif SDL_ASSERT_LEVEL == 1
#   define SDL_assert(condition) SDL_disabled_assert(condition)
#   define SDL_assert_release(condition) SDL_enabled_assert(condition)
#   define SDL_assert_paranoid(condition) SDL_disabled_assert(condition)
#elif SDL_ASSERT_LEVEL == 2
#   define SDL_assert(condition) SDL_enabled_assert(condition)
#   define SDL_assert_release(condition) SDL_enabled_assert(condition)
#   define SDL_assert_paranoid(condition) SDL_disabled_assert(condition)
#elif SDL_ASSERT_LEVEL == 3
#   define SDL_assert(condition) SDL_enabled_assert(condition)
#   define SDL_assert_release(condition) SDL_enabled_assert(condition)
#   define SDL_assert_paranoid(condition) SDL_enabled_assert(condition)
#   error Unknown assertion level.
#define SDL_assert_always(condition) SDL_enabled_assert(condition)
typedef SDL_AssertState (SDLCALL *SDL_AssertionHandler)(
const SDL_AssertData* data, void* userdata);
extern DECLSPEC void SDLCALL SDL_SetAssertionHandler(
SDL_AssertionHandler handler,
void *userdata);
extern DECLSPEC SDL_AssertionHandler SDLCALL SDL_GetDefaultAssertionHandler(void);
extern DECLSPEC SDL_AssertionHandler SDLCALL SDL_GetAssertionHandler(void **puserdata);
extern DECLSPEC const SDL_AssertData * SDLCALL SDL_GetAssertionReport(void);
extern DECLSPEC void SDLCALL SDL_ResetAssertionReport(void);
#define SDL_assert_state SDL_AssertState
#define SDL_assert_data SDL_AssertData
