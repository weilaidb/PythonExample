#import <Cocoa/Cocoa.h>
@interface MyAppDelegate : NSObject
- (id)init;
- (IBAction)showPreferences:(id)sender;
- (BOOL)shouldShowUI;
- (BOOL)shouldTerminate;
- (void)testFileTypeBinding;
@end
