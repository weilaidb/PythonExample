#define _SDL_uikitclipboard_h
extern int UIKit_SetClipboardText(_THIS, const char *text);
extern char *UIKit_GetClipboardText(_THIS);
extern SDL_bool UIKit_HasClipboardText(_THIS);
extern void UIKit_InitClipboard(_THIS);
extern void UIKit_QuitClipboard(_THIS);
