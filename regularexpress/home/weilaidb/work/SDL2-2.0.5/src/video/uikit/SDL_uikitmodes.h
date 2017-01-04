#define _SDL_uikitmodes_h
@interface SDL_DisplayData : NSObject
@property (nonatomic, strong) UIScreen *uiscreen;
@end
@interface SDL_DisplayModeData : NSObject
@property (nonatomic, strong) UIScreenMode *uiscreenmode;
@end
extern SDL_bool UIKit_IsDisplayLandscape(UIScreen *uiscreen);
extern int UIKit_InitModes(_THIS);
extern void UIKit_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
extern int UIKit_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
extern void UIKit_QuitModes(_THIS);
extern int UIKit_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect);
