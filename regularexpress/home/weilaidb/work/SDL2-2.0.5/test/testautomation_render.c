#define TESTRENDER_SCREEN_W     80
#define TESTRENDER_SCREEN_H     60
#define RENDER_COMPARE_FORMAT  SDL_PIXELFORMAT_ARGB8888
#define RENDER_COMPARE_AMASK   0xff000000
#define RENDER_COMPARE_RMASK   0x00ff0000
#define RENDER_COMPARE_GMASK   0x0000ff00
#define RENDER_COMPARE_BMASK   0x000000ff
#define ALLOWABLE_ERROR_OPAQUE  0
#define ALLOWABLE_ERROR_BLENDED 64
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
static int _clearScreen (void);
static void _compare(SDL_Surface *reference, int allowable_error);
static int _hasTexAlpha(void);
static int _hasTexColor(void);
static SDL_Texture *_loadTestFace(void);
static int _hasBlendModes(void);
static int _hasDrawColor(void);
static int _isSupported(int code);
void InitCreateRenderer(void *arg)
void CleanupDestroyRenderer(void *arg)
int
render_testGetNumRenderDrivers(void *arg)
int render_testPrimitives (void *arg)
int render_testPrimitivesBlend (void *arg)
int
render_testBlit(void *arg)
int
render_testBlitColor (void *arg)
int
render_testBlitAlpha (void *arg)
static void
_testBlitBlendMode( SDL_Texture * tface, int mode )
int
render_testBlitBlend (void *arg)
static int
_isSupported( int code )
static int
_hasDrawColor (void)
static int
_hasBlendModes (void)
static SDL_Texture *
_loadTestFace(void)
static int
_hasTexColor (void)
static int
_hasTexAlpha(void)
static void
_compare(SDL_Surface *referenceSurface, int allowable_error)
static int
_clearScreen(void)
static const SDLTest_TestCaseReference renderTest1 =
;
static const SDLTest_TestCaseReference renderTest2 =
;
static const SDLTest_TestCaseReference renderTest3 =
;
static const SDLTest_TestCaseReference renderTest4 =
;
static const SDLTest_TestCaseReference renderTest5 =
;
static const SDLTest_TestCaseReference renderTest6 =
;
static const SDLTest_TestCaseReference renderTest7 =
;
static const SDLTest_TestCaseReference *renderTests[] =  ;
SDLTest_TestSuiteReference renderTestSuite = ;
