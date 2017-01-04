#if SDL_VIDEO_DRIVER_ANDROID
#define SDL_ANDROID_BLOCK_ON_PAUSE  1
void android_egl_context_backup();
void android_egl_context_restore();
#if SDL_AUDIO_DRIVER_ANDROID
void ANDROIDAUDIO_ResumeDevices(void);
void ANDROIDAUDIO_PauseDevices(void);
static void ANDROIDAUDIO_ResumeDevices(void)
static void ANDROIDAUDIO_PauseDevices(void)
void
android_egl_context_restore()
void
android_egl_context_backup()
void
Android_PumpEvents(_THIS)
{
static int isPaused = 0;
#if SDL_ANDROID_BLOCK_ON_PAUSE
static int isPausing = 0;
#if SDL_ANDROID_BLOCK_ON_PAUSE
if (isPaused && !isPausing) {
android_egl_context_backup();
ANDROIDAUDIO_PauseDevices();
if(SDL_SemWait(Android_ResumeSem) == 0)
