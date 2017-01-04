#define _CRT_SECURE_NO_WARNINGS
void
_audioSetUp(void *arg)
void
_audioTearDown(void *arg)
int _audio_testCallbackCounter;
int _audio_testCallbackLength;
void _audio_testCallback(void *userdata, Uint8 *stream, int len)
int audio_quitInitAudioSubSystem()
int audio_initQuitAudio()
int audio_initOpenCloseQuitAudio()
int audio_pauseUnpauseAudio()
int audio_enumerateAndNameAudioDevices()
int audio_enumerateAndNameAudioDevicesNegativeTests()
int audio_printAudioDrivers()
int audio_printCurrentAudioDriver()
const int _numAudioFormats = 18;
SDL_AudioFormat _audioFormats[] = ;
char *_audioFormatsVerbose[] = ;
const int _numAudioChannels = 4;
Uint8 _audioChannels[] = ;
const int _numAudioFrequencies = 4;
int _audioFrequencies[] = ;
int audio_buildAudioCVT()
int audio_buildAudioCVTNegative()
int audio_getAudioStatus()
int audio_openCloseAndGetAudioStatus()
int audio_lockUnlockOpenAudioDevice()
int audio_convertAudio()
int audio_openCloseAudioDeviceConnected()
static const SDLTest_TestCaseReference audioTest1 =
;
static const SDLTest_TestCaseReference audioTest2 =
;
static const SDLTest_TestCaseReference audioTest3 =
;
static const SDLTest_TestCaseReference audioTest4 =
;
static const SDLTest_TestCaseReference audioTest5 =
;
static const SDLTest_TestCaseReference audioTest6 =
;
static const SDLTest_TestCaseReference audioTest7 =
;
static const SDLTest_TestCaseReference audioTest8 =
;
static const SDLTest_TestCaseReference audioTest9 =
;
static const SDLTest_TestCaseReference audioTest10 =
;
static const SDLTest_TestCaseReference audioTest11 =
;
static const SDLTest_TestCaseReference audioTest12 =
;
static const SDLTest_TestCaseReference audioTest13 =
;
static const SDLTest_TestCaseReference audioTest14 =
;
static const SDLTest_TestCaseReference audioTest15 =
;
static const SDLTest_TestCaseReference *audioTests[] =  ;
SDLTest_TestSuiteReference audioTestSuite = ;
