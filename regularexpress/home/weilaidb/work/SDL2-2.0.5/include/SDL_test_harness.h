#define _SDL_test_harness_h
#define TEST_ENABLED  1
#define TEST_DISABLED 0
#define TEST_ABORTED        -1
#define TEST_STARTED         0
#define TEST_COMPLETED       1
#define TEST_SKIPPED         2
#define TEST_RESULT_PASSED              0
#define TEST_RESULT_FAILED              1
#define TEST_RESULT_NO_ASSERT           2
#define TEST_RESULT_SKIPPED             3
#define TEST_RESULT_SETUP_FAILURE       4
typedef void (*SDLTest_TestCaseSetUpFp)(void *arg);
typedef int (*SDLTest_TestCaseFp)(void *arg);
typedef void  (*SDLTest_TestCaseTearDownFp)(void *arg);
typedef struct SDLTest_TestCaseReference  SDLTest_TestCaseReference;
typedef struct SDLTest_TestSuiteReference  SDLTest_TestSuiteReference;
int SDLTest_RunSuites(SDLTest_TestSuiteReference *testSuites[], const char *userRunSeed, Uint64 userExecKey, const char *filter, int testIterations);
