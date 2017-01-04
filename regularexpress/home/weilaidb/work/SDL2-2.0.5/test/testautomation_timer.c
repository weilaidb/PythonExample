int _paramCheck = 0;
int _paramValue = 0;
int _timerCallbackCalled = 0;
void
_timerSetUp(void *arg)
int
timer_getPerformanceCounter(void *arg)
int
timer_getPerformanceFrequency(void *arg)
int
timer_delayAndGetTicks(void *arg)
Uint32 _timerTestCallback(Uint32 interval, void *param)
int
timer_addRemoveTimer(void *arg)
static const SDLTest_TestCaseReference timerTest1 =
;
static const SDLTest_TestCaseReference timerTest2 =
;
static const SDLTest_TestCaseReference timerTest3 =
;
static const SDLTest_TestCaseReference timerTest4 =
;
static const SDLTest_TestCaseReference *timerTests[] =  ;
SDLTest_TestSuiteReference timerTestSuite = ;
