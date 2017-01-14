#import <Cocoa/Cocoa.h>
#import
@interface MyDocument : NSDocument <FileSettingsSource>
- (IBAction)do_run:(id)sender;
- (IBAction)do_cancel:(id)sender;
- (IBAction)do_reset:(id)sender;
- (IBAction)do_apply:(id)sender;
- (void)controlTextDidChange:(NSNotification *)aNotification;
@end
