#if SDL_VIDEO_DRIVER_HAIKU
#define BE_StartTextInput NULL
#define BE_StopTextInput NULL
#define BE_SetTextInputRect NULL
static SDL_VideoDevice *
BE_CreateDevice(int devindex)
VideoBootStrap HAIKU_bootstrap = ;
void BE_DeleteDevice(SDL_VideoDevice * device)
int BE_VideoInit(_THIS)
int BE_Available(void)
void BE_VideoQuit(_THIS)
