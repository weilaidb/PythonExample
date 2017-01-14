#import <Cocoa/Cocoa.h>
#import
@interface PreferencesWindowController : NSWindowController <FileSettingsSource>
+ getPreferencesWindow;
- (IBAction)do_reset:(id)sender;
- (IBAction)do_apply:(id)sender;
- (IBAction)do_filetype:(id)sender;
- (void)controlTextDidChange:(NSNotification *)aNotification;
- (unsigned int)comboBox:(NSComboBox *)aComboBox indexOfItemWithStringValue:(NSString *)aString;
- (id)comboBox:(NSComboBox *)aComboBox objectValueForItemAtIndex:(int)index;
- (int)numberOfItemsInComboBox:(NSComboBox *)aComboBox;
@end
