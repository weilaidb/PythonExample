#if SDL_VIDEO_DRIVER_WINDOWS
#define TEXT_FORMAT  CF_UNICODETEXT
#define TEXT_FORMAT  CF_TEXT
static HWND
GetWindowHandle(_THIS)
int
WIN_SetClipboardText(_THIS, const char *text)
char *
WIN_GetClipboardText(_THIS)
SDL_bool
WIN_HasClipboardText(_THIS)
void
WIN_CheckClipboardUpdate(struct SDL_VideoData * data)
