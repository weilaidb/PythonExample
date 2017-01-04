#define _SDL_androidvideo_h
extern void Android_SetScreenResolution(int width, int height, Uint32 format, float rate);
typedef struct SDL_VideoData
SDL_VideoData;
extern int Android_ScreenWidth;
extern int Android_ScreenHeight;
extern Uint32 Android_ScreenFormat;
extern SDL_sem *Android_PauseSem, *Android_ResumeSem;
extern SDL_Window *Android_Window;
