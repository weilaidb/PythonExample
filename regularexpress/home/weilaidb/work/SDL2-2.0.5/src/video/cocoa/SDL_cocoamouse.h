#define _SDL_cocoamouse_h
extern void Cocoa_InitMouse(_THIS);
extern void Cocoa_HandleMouseEvent(_THIS, NSEvent * event);
extern void Cocoa_HandleMouseWheel(SDL_Window *window, NSEvent * event);
extern void Cocoa_HandleMouseWarp(CGFloat x, CGFloat y);
extern void Cocoa_QuitMouse(_THIS);
typedef struct  SDL_MouseData;
@interface NSCursor (InvisibleCursor)
+ (NSCursor *)invisibleCursor;
@end
