#define _SDL_cocoakeyboard_h
extern void Cocoa_InitKeyboard(_THIS);
extern void Cocoa_HandleKeyEvent(_THIS, NSEvent * event);
extern void Cocoa_QuitKeyboard(_THIS);
extern void Cocoa_StartTextInput(_THIS);
extern void Cocoa_StopTextInput(_THIS);
extern void Cocoa_SetTextInputRect(_THIS, SDL_Rect *rect);
