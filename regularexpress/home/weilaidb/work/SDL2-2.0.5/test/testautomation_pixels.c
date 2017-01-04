const int _numRGBPixelFormats = 30;
Uint32 _RGBPixelFormats[] =
;
char* _RGBPixelFormatsVerbose[] =
;
const int _numNonRGBPixelFormats = 7;
Uint32 _nonRGBPixelFormats[] =
;
char* _nonRGBPixelFormatsVerbose[] =
;
const int _numInvalidPixelFormats = 2;
Uint32 _invalidPixelFormats[] =
;
char* _invalidPixelFormatsVerbose[] =
;
int
pixels_allocFreeFormat(void *arg)
int
pixels_getPixelFormatName(void *arg)
int
pixels_allocFreePalette(void *arg)
int
pixels_calcGammaRamp(void *arg)
static const SDLTest_TestCaseReference pixelsTest1 =
;
static const SDLTest_TestCaseReference pixelsTest2 =
;
static const SDLTest_TestCaseReference pixelsTest3 =
;
static const SDLTest_TestCaseReference pixelsTest4 =
;
static const SDLTest_TestCaseReference *pixelsTests[] =  ;
SDLTest_TestSuiteReference pixelsTestSuite = ;
