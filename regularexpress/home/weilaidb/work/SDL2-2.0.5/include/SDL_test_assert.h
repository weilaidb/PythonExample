#define _SDL_test_assert_h
#define ASSERT_FAIL     0
#define ASSERT_PASS     1
void SDLTest_Assert(int assertCondition, SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...) SDL_PRINTF_VARARG_FUNC(2);
int SDLTest_AssertCheck(int assertCondition, SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...) SDL_PRINTF_VARARG_FUNC(2);
void SDLTest_AssertPass(SDL_PRINTF_FORMAT_STRING const char *assertDescription, ...) SDL_PRINTF_VARARG_FUNC(1);
void SDLTest_ResetAssertSummary();
void SDLTest_LogAssertSummary();
int SDLTest_AssertSummaryToTestResult();
