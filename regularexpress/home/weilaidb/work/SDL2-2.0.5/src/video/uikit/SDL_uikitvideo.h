#define _SDL_uikitvideo_h
@interface SDL_VideoData : NSObject
@property (nonatomic) id pasteboardObserver;
@end
CGRect UIKit_ComputeViewFrame(SDL_Window *window, UIScreen *screen);
void UIKit_SuspendScreenSaver(_THIS);
SDL_bool UIKit_IsSystemVersionAtLeast(double version);
