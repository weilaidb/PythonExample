int _mouseStateCheck(Uint32 state)
int
mouse_getMouseState(void *arg)
int
mouse_getRelativeMouseState(void *arg)
static const char *_mouseArrowData[] = ;
static SDL_Cursor *_initArrowCursor(const char *image[])
int
mouse_createFreeCursor(void *arg)
int
mouse_createFreeColorCursor(void *arg)
void _changeCursorVisibility(int state)
int
mouse_showCursor(void *arg)
int
mouse_setCursor(void *arg)
int
mouse_getCursor(void *arg)
int
mouse_getSetRelativeMouseMode(void *arg)
#define MOUSE_TESTWINDOW_WIDTH  320
#define MOUSE_TESTWINDOW_HEIGHT 200
SDL_Window *_createMouseSuiteTestWindow()
void _destroyMouseSuiteTestWindow(SDL_Window *window)
int
mouse_warpMouseInWindow(void *arg)
int
mouse_getMouseFocus(void *arg)
static const SDLTest_TestCaseReference mouseTest1 =
;
static const SDLTest_TestCaseReference mouseTest2 =
;
static const SDLTest_TestCaseReference mouseTest3 =
;
static const SDLTest_TestCaseReference mouseTest4 =
;
static const SDLTest_TestCaseReference mouseTest5 =
;
static const SDLTest_TestCaseReference mouseTest6 =
;
static const SDLTest_TestCaseReference mouseTest7 =
;
static const SDLTest_TestCaseReference mouseTest8 =
;
static const SDLTest_TestCaseReference mouseTest9 =
;
static const SDLTest_TestCaseReference mouseTest10 =
;
static const SDLTest_TestCaseReference *mouseTests[] =  ;
SDLTest_TestSuiteReference mouseTestSuite = ;
