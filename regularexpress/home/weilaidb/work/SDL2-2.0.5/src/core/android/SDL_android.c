#define LOG_TAG "SDL_android"
#define LOGI(...) do  while (0)
#define LOGE(...) do  while (0)
static void Android_JNI_ThreadDestroyed(void*);
static pthread_key_t mThreadKey;
static JavaVM* mJavaVM;
static jclass mActivityClass;
static jmethodID midGetNativeSurface;
static jmethodID midAudioOpen;
static jmethodID midAudioWriteShortBuffer;
static jmethodID midAudioWriteByteBuffer;
static jmethodID midAudioClose;
static jmethodID midCaptureOpen;
static jmethodID midCaptureReadShortBuffer;
static jmethodID midCaptureReadByteBuffer;
static jmethodID midCaptureClose;
static jmethodID midPollInputDevices;
static float fLastAccelerometer[3];
static SDL_bool bHasNewData;
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
JNIEXPORT void JNICALL SDL_Android_Init(JNIEnv* mEnv, jclass cls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeDropFile(
JNIEnv* env, jclass jcls,
jstring filename)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeResize(
JNIEnv* env, jclass jcls,
jint width, jint height, jint format, jfloat rate)
JNIEXPORT jint JNICALL Java_org_libsdl_app_SDLActivity_onNativePadDown(
JNIEnv* env, jclass jcls,
jint device_id, jint keycode)
JNIEXPORT jint JNICALL Java_org_libsdl_app_SDLActivity_onNativePadUp(
JNIEnv* env, jclass jcls,
jint device_id, jint keycode)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeJoy(
JNIEnv* env, jclass jcls,
jint device_id, jint axis, jfloat value)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeHat(
JNIEnv* env, jclass jcls,
jint device_id, jint hat_id, jint x, jint y)
JNIEXPORT jint JNICALL Java_org_libsdl_app_SDLActivity_nativeAddJoystick(
JNIEnv* env, jclass jcls,
jint device_id, jstring device_name, jint is_accelerometer,
jint nbuttons, jint naxes, jint nhats, jint nballs)
JNIEXPORT jint JNICALL Java_org_libsdl_app_SDLActivity_nativeRemoveJoystick(
JNIEnv* env, jclass jcls, jint device_id)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeSurfaceChanged(JNIEnv* env, jclass jcls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeSurfaceDestroyed(JNIEnv* env, jclass jcls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeKeyDown(
JNIEnv* env, jclass jcls, jint keycode)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeKeyUp(
JNIEnv* env, jclass jcls, jint keycode)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeKeyboardFocusLost(
JNIEnv* env, jclass jcls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeTouch(
JNIEnv* env, jclass jcls,
jint touch_device_id_in, jint pointer_finger_id_in,
jint action, jfloat x, jfloat y, jfloat p)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeMouse(
JNIEnv* env, jclass jcls,
jint button, jint action, jfloat x, jfloat y)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_onNativeAccel(
JNIEnv* env, jclass jcls,
jfloat x, jfloat y, jfloat z)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_nativeLowMemory(
JNIEnv* env, jclass cls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_nativeQuit(
JNIEnv* env, jclass cls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_nativePause(
JNIEnv* env, jclass cls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLActivity_nativeResume(
JNIEnv* env, jclass cls)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLInputConnection_nativeCommitText(
JNIEnv* env, jclass cls,
jstring text, jint newCursorPosition)
JNIEXPORT void JNICALL Java_org_libsdl_app_SDLInputConnection_nativeSetComposingText(
JNIEnv* env, jclass cls,
jstring text, jint newCursorPosition)
JNIEXPORT jstring JNICALL Java_org_libsdl_app_SDLActivity_nativeGetHint(JNIEnv* env, jclass cls, jstring name)
static int s_active = 0;
struct LocalReferenceHolder
;
static struct LocalReferenceHolder LocalReferenceHolder_Setup(const char *func)
static SDL_bool LocalReferenceHolder_Init(struct LocalReferenceHolder *refholder, JNIEnv *env)
static void LocalReferenceHolder_Cleanup(struct LocalReferenceHolder *refholder)
static SDL_bool LocalReferenceHolder_IsActive(void)
ANativeWindow* Android_JNI_GetNativeWindow(void)
void Android_JNI_SetActivityTitle(const char *title)
SDL_bool Android_JNI_GetAccelerometerValues(float values[3])
static void Android_JNI_ThreadDestroyed(void* value)
JNIEnv* Android_JNI_GetEnv(void)
int Android_JNI_SetupThread(void)
static jboolean audioBuffer16Bit = JNI_FALSE;
static jobject audioBuffer = NULL;
static void* audioBufferPinned = NULL;
static jboolean captureBuffer16Bit = JNI_FALSE;
static jobject captureBuffer = NULL;
int Android_JNI_OpenAudioDevice(int iscapture, int sampleRate, int is16Bit, int channelCount, int desiredBufferFrames)
void * Android_JNI_GetAudioBuffer(void)
void Android_JNI_WriteAudioBuffer(void)
int Android_JNI_CaptureAudioBuffer(void *buffer, int buflen)
void Android_JNI_FlushCapturedAudio(void)
void Android_JNI_CloseAudioDevice(const int iscapture)
static SDL_bool Android_JNI_ExceptionOccurred(SDL_bool silent)
static int Internal_Android_JNI_FileOpen(SDL_RWops* ctx)
int Android_JNI_FileOpen(SDL_RWops* ctx,
const char* fileName, const char* mode)
size_t Android_JNI_FileRead(SDL_RWops* ctx, void* buffer,
size_t size, size_t maxnum)
size_t Android_JNI_FileWrite(SDL_RWops* ctx, const void* buffer,
size_t size, size_t num)
static int Internal_Android_JNI_FileClose(SDL_RWops* ctx, SDL_bool release)
Sint64 Android_JNI_FileSize(SDL_RWops* ctx)
Sint64 Android_JNI_FileSeek(SDL_RWops* ctx, Sint64 offset, int whence)
int Android_JNI_FileClose(SDL_RWops* ctx)
static jobject Android_JNI_GetSystemServiceObject(const char* name)
#define SETUP_CLIPBOARD(error) \
struct LocalReferenceHolder refs = LocalReferenceHolder_Setup(__FUNCTION__); \
JNIEnv* env = Android_JNI_GetEnv(); \
jobject clipboard; \
if (!LocalReferenceHolder_Init(&refs, env))  \
clipboard = Android_JNI_GetSystemServiceObject("clipboard"); \
if (!clipboard)
#define CLEANUP_CLIPBOARD() \
LocalReferenceHolder_Cleanup(&refs);
int Android_JNI_SetClipboardText(const char* text)
char* Android_JNI_GetClipboardText(void)
SDL_bool Android_JNI_HasClipboardText(void)
int Android_JNI_GetPowerInfo(int* plugged, int* charged, int* battery, int* seconds, int* percent)
int Android_JNI_GetTouchDeviceIds(int **ids)
void Android_JNI_PollInputDevices(void)
#define COMMAND_SET_KEEP_SCREEN_ON    5
int Android_JNI_SendMessage(int command, int param)
void Android_JNI_SuspendScreenSaver(SDL_bool suspend)
void Android_JNI_ShowTextInput(SDL_Rect *inputRect)
void Android_JNI_HideTextInput(void)
int Android_JNI_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid)
void *SDL_AndroidGetJNIEnv()
void *SDL_AndroidGetActivity()
const char * SDL_AndroidGetInternalStoragePath()
int SDL_AndroidGetExternalStorageState()
const char * SDL_AndroidGetExternalStoragePath()
jclass Android_JNI_GetActivityClass(void)
