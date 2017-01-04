#if defined(_MSC_VER) && _MSC_VER <= 1500
#define UINT8_MAX   ~(Uint8)0
#define UINT16_MAX  ~(Uint16)0
#define UINT32_MAX  ~(Uint32)0
#define UINT64_MAX  ~(Uint64)0
SDL_Window *_createVideoSuiteTestWindow(const char *title)
void _destroyVideoSuiteTestWindow(SDL_Window *window)
int
video_enableDisableScreensaver(void *arg)
int
video_createWindowVariousPositions(void *arg)
int
video_createWindowVariousSizes(void *arg)
int
video_createWindowVariousFlags(void *arg)
int
video_getWindowFlags(void *arg)
int
video_getNumDisplayModes(void *arg)
int
video_getNumDisplayModesNegative(void *arg)
int
video_getClosestDisplayModeCurrentResolution(void *arg)
int
video_getClosestDisplayModeRandomResolution(void *arg)
int
video_getWindowBrightness(void *arg)
int
video_getWindowBrightnessNegative(void *arg)
int
video_getWindowDisplayMode(void *arg)
void _checkInvalidWindowError()
int
video_getWindowDisplayModeNegative(void *arg)
int
video_getWindowGammaRamp(void *arg)
int
video_getWindowGammaRampNegative(void *arg)
void
_setAndCheckWindowGrabState(SDL_Window* window, SDL_bool desiredState)
int
video_getSetWindowGrab(void *arg)
int
video_getWindowId(void *arg)
int
video_getWindowPixelFormat(void *arg)
int
video_getSetWindowPosition(void *arg)
void _checkInvalidParameterError()
int
video_getSetWindowSize(void *arg)
int
video_getSetWindowMinimumSize(void *arg)
int
video_getSetWindowMaximumSize(void *arg)
int
video_getSetWindowData(void *arg)
static const SDLTest_TestCaseReference videoTest1 =
;
static const SDLTest_TestCaseReference videoTest2 =
;
static const SDLTest_TestCaseReference videoTest3 =
;
static const SDLTest_TestCaseReference videoTest4 =
;
static const SDLTest_TestCaseReference videoTest5 =
;
static const SDLTest_TestCaseReference videoTest6 =
;
static const SDLTest_TestCaseReference videoTest7 =
;
static const SDLTest_TestCaseReference videoTest8 =
;
static const SDLTest_TestCaseReference videoTest9 =
;
static const SDLTest_TestCaseReference videoTest10 =
;
static const SDLTest_TestCaseReference videoTest11 =
;
static const SDLTest_TestCaseReference videoTest12 =
;
static const SDLTest_TestCaseReference videoTest13 =
;
static const SDLTest_TestCaseReference videoTest14 =
;
static const SDLTest_TestCaseReference videoTest15 =
;
static const SDLTest_TestCaseReference videoTest16 =
;
static const SDLTest_TestCaseReference videoTest17 =
;
static const SDLTest_TestCaseReference videoTest18 =
;
static const SDLTest_TestCaseReference videoTest19 =
;
static const SDLTest_TestCaseReference videoTest20 =
;
static const SDLTest_TestCaseReference videoTest21 =
;
static const SDLTest_TestCaseReference videoTest22 =
;
static const SDLTest_TestCaseReference videoTest23 =
;
static const SDLTest_TestCaseReference *videoTests[] =  ;
SDLTest_TestSuiteReference videoTestSuite = ;
