#define _CRT_SECURE_NO_WARNINGS
const char* RWopsReadTestFilename = "rwops_read";
const char* RWopsWriteTestFilename = "rwops_write";
const char* RWopsAlphabetFilename = "rwops_alphabet";
static const char RWopsHelloWorldTestString[] = "Hello World!";
static const char RWopsHelloWorldCompString[] = "Hello World!";
static const char RWopsAlphabetString[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void
RWopsSetUp(void *arg)
void
RWopsTearDown(void *arg)
void
_testGenericRWopsValidations(SDL_RWops *rw, int write)
int
rwops_testParamNegative (void)
int
rwops_testMem (void)
int
rwops_testConstMem (void)
int
rwops_testFileRead(void)
int
rwops_testFileWrite(void)
int
rwops_testFPRead(void)
int
rwops_testFPWrite(void)
int
rwops_testAllocFree (void)
int
rwops_testCompareRWFromMemWithRWFromFile(void)
int
rwops_testFileWriteReadEndian(void)
static const SDLTest_TestCaseReference rwopsTest1 =
;
static const SDLTest_TestCaseReference rwopsTest2 =
;
static const SDLTest_TestCaseReference rwopsTest3 =
;
static const SDLTest_TestCaseReference rwopsTest4 =
;
static const SDLTest_TestCaseReference rwopsTest5 =
;
static const SDLTest_TestCaseReference rwopsTest6 =
;
static const SDLTest_TestCaseReference rwopsTest7 =
;
static const SDLTest_TestCaseReference rwopsTest8 =
;
static const SDLTest_TestCaseReference rwopsTest9 =
;
static const SDLTest_TestCaseReference rwopsTest10 =
;
static const SDLTest_TestCaseReference *rwopsTests[] =  ;
SDLTest_TestSuiteReference rwopsTestSuite = ;
