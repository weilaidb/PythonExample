#define _SDL_uikitwindow_h
#import "SDL_uikitvideo.h"
#import "SDL_uikitview.h"
#import "SDL_uikitviewcontroller.h"
extern int UIKit_CreateWindow(_THIS, SDL_Window * window);
extern void UIKit_SetWindowTitle(_THIS, SDL_Window * window);
extern void UIKit_ShowWindow(_THIS, SDL_Window * window);
extern void UIKit_HideWindow(_THIS, SDL_Window * window);
extern void UIKit_RaiseWindow(_THIS, SDL_Window * window);
extern void UIKit_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered);
extern void UIKit_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
extern void UIKit_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool UIKit_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo * info);
extern NSUInteger UIKit_GetSupportedOrientations(SDL_Window * window);
@class UIWindow;
@interface SDL_WindowData : NSObject
@property (nonatomic, strong) UIWindow *uiwindow;
@property (nonatomic, strong) SDL_uikitviewcontroller *viewcontroller;
@property (nonatomic, copy) NSMutableArray *views;
@end
