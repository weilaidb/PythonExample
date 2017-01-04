extern int SDL_WinRTInitNonXAMLApp(int (*mainFunction)(int, char **));
ref class SDL_WinRTApp sealed : public Windows::ApplicationModel::Core::IFrameworkView
;
extern SDL_WinRTApp ^ SDL_WinRTGlobalApp;
