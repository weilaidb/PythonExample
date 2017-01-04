#define SDLTEST_ASSERT_CHECK_FORMAT "Assert '%s': %s"
#define SDLTEST_ASSERT_SUMMARY_FORMAT "Assert Summary: Total=%d Passed=%d Failed=%d"
static Uint32 SDLTest_AssertsFailed = 0;
static Uint32 SDLTest_AssertsPassed = 0;
void SDLTest_Assert(int assertCondition, SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...)
int SDLTest_AssertCheck(int assertCondition, SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...)
void SDLTest_AssertPass(SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...)
void SDLTest_ResetAssertSummary()
void SDLTest_LogAssertSummary()
int SDLTest_AssertSummaryToTestResult()
