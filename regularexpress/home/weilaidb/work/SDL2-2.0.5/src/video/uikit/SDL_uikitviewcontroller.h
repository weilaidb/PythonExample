#import <UIKit/UIKit.h>
#if TARGET_OS_TV
#import <GameController/GameController.h>
#define SDLRootViewController GCEventViewController
#define SDLRootViewController UIViewController
#if SDL_IPHONE_KEYBOARD
@interface SDL_uikitviewcontroller : SDLRootViewController <UITextFieldDelegate>
@interface SDL_uikitviewcontroller : SDLRootViewController
@property (nonatomic, assign) SDL_Window *window;
- (instancetype)initWithSDLWindow:(SDL_Window *)_window;
- (void)setAnimationCallback:(int)interval
callback:(void (*)(void*))callback
callbackParam:(void*)callbackParam;
- (void)startAnimation;
- (void)stopAnimation;
- (void)doLoop:(CADisplayLink*)sender;
- (void)loadView;
- (void)viewDidLayoutSubviews;
#if !TARGET_OS_TV
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
#if SDL_IPHONE_KEYBOARD
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)initKeyboard;
- (void)deinitKeyboard;
- (void)keyboardWillShow:(NSNotification *)notification;
- (void)keyboardWillHide:(NSNotification *)notification;
- (void)updateKeyboard;
@property (nonatomic, assign, getter=isKeyboardVisible) BOOL keyboardVisible;
@property (nonatomic, assign) SDL_Rect textInputRect;
@property (nonatomic, assign) int keyboardHeight;
@end
#if SDL_IPHONE_KEYBOARD
SDL_bool UIKit_HasScreenKeyboardSupport(_THIS);
void UIKit_ShowScreenKeyboard(_THIS, SDL_Window *window);
void UIKit_HideScreenKeyboard(_THIS, SDL_Window *window);
SDL_bool UIKit_IsScreenKeyboardShown(_THIS, SDL_Window *window);
void UIKit_SetTextInputRect(_THIS, SDL_Rect *rect);
