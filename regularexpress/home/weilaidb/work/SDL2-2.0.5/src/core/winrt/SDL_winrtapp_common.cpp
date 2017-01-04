int (*WINRT_SDLAppEntryPoint)(int, char **) = NULL;
extern "C" DECLSPEC int
SDL_WinRTRunApp(int (*mainFunction)(int, char **), void * xamlBackgroundPanel)
