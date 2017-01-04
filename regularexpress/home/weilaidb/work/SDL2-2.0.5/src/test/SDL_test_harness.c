#define SDLTEST_INVALID_NAME_FORMAT "(Invalid)"
#define SDLTEST_LOG_SUMMARY_FORMAT "%s Summary: Total=%d Passed=%d Failed=%d Skipped=%d"
#define SDLTEST_FINAL_RESULT_FORMAT ">>> %s '%s': %s\n"
static Uint32 SDLTest_TestCaseTimeout = 3600;
char *
SDLTest_GenerateRunSeed(const int length)
Uint64
SDLTest_GenerateExecKey(char *runSeed, char *suiteName, char *testName, int iteration)
SDL_TimerID
SDLTest_SetTestTimeout(int timeout, void (*callback)())
void
SDLTest_BailOut()
int
SDLTest_RunTest(SDLTest_TestSuiteReference *testSuite, SDLTest_TestCaseReference *testCase, Uint64 execKey, SDL_bool forceTestRun)
void SDLTest_LogTestSuiteSummary(SDLTest_TestSuiteReference *testSuites)
float GetClock()
int SDLTest_RunSuites(SDLTest_TestSuiteReference *testSuites[], const char *userRunSeed, Uint64 userExecKey, const char *filter, int testIterations)
