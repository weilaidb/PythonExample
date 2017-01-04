#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
static SDL_Surface *referenceSurface = NULL;
static SDL_Surface *testSurface = NULL;
#define TEST_SURFACE_WIDTH testSurface->w
#define TEST_SURFACE_HEIGHT testSurface->h
void
_surfaceSetUp(void *arg)
void
_surfaceTearDown(void *arg)
void _clearTestSurface()
void _testBlitBlendMode(int mode)
void
_AssertFileExist(const char *filename)
int
surface_testSaveLoadBitmap(void *arg)
int
surface_testSurfaceConversion(void *arg)
int
surface_testCompleteSurfaceConversion(void *arg)
int
surface_testLoadFailure(void *arg)
int
surface_testBlit(void *arg)
int
surface_testBlitColorMod(void *arg)
int
surface_testBlitAlphaMod(void *arg)
int
surface_testBlitBlendNone(void *arg)
int
surface_testBlitBlendBlend(void *arg)
int
surface_testBlitBlendAdd(void *arg)
int
surface_testBlitBlendMod(void *arg)
int
surface_testBlitBlendLoop(void *arg)
static const SDLTest_TestCaseReference surfaceTest1 =
;
static const SDLTest_TestCaseReference surfaceTest2 =
;
static const SDLTest_TestCaseReference surfaceTest3 =
;
static const SDLTest_TestCaseReference surfaceTest4 =
;
static const SDLTest_TestCaseReference surfaceTest5 =
;
static const SDLTest_TestCaseReference surfaceTest6 =
;
static const SDLTest_TestCaseReference surfaceTest7 =
;
static const SDLTest_TestCaseReference surfaceTest8 =
;
static const SDLTest_TestCaseReference surfaceTest9 =
;
static const SDLTest_TestCaseReference surfaceTest10 =
;
static const SDLTest_TestCaseReference surfaceTest11 =
;
static const SDLTest_TestCaseReference surfaceTest12 =
;
static const SDLTest_TestCaseReference *surfaceTests[] =  ;
SDLTest_TestSuiteReference surfaceTestSuite = ;
