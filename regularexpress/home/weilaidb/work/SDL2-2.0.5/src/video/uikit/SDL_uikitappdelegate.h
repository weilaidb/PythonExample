#import <UIKit/UIKit.h>
@interface SDLLaunchScreenController : UIViewController
- (instancetype)init;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
- (void)loadView;
@end
@interface SDLUIKitDelegate : NSObject<UIApplicationDelegate>
+ (id)sharedAppDelegate;
+ (NSString *)getAppDelegateClassName;
- (void)hideLaunchScreen;
@end
