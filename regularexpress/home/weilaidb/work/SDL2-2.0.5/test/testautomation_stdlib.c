#undef SDL_strlcpy
int
stdlib_strlcpy(void *arg)
#undef SDL_snprintf
int
stdlib_snprintf(void *arg)
int
stdlib_getsetenv(void *arg)
#undef SDL_sscanf
int
stdlib_sscanf(void *arg)
static const SDLTest_TestCaseReference stdlibTest1 =
;
static const SDLTest_TestCaseReference stdlibTest2 =
;
static const SDLTest_TestCaseReference stdlibTest3 =
;
static const SDLTest_TestCaseReference stdlibTest4 =
;
static const SDLTest_TestCaseReference *stdlibTests[] =  ;
SDLTest_TestSuiteReference stdlibTestSuite = ;
