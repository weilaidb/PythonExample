#if SDL_VIDEO_DRIVER_UIKIT
extern SDL_bool UIKit_ShowingMessageBox();
extern int UIKit_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid);
