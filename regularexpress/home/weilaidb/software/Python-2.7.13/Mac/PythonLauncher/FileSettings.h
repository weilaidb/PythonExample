#import <Foundation/Foundation.h>
@protocol FileSettingsSource
- (NSString *) interpreter;
- (BOOL) honourhashbang;
- (BOOL) debug;
- (BOOL) verbose;
- (BOOL) inspect;
- (BOOL) optimize;
- (BOOL) nosite;
- (BOOL) tabs;
- (NSString *) others;
- (BOOL) with_terminal;
- (NSString *) scriptargs;
@end
@interface FileSettings : NSObject <FileSettingsSource>
+ (id)getDefaultsForFileType: (NSString *)filetype;
+ (id)getFactorySettingsForFileType: (NSString *)filetype;
+ (id)newSettingsForFileType: (NSString *)filetype;
- (id)initForFileType: (NSString *)filetype;
- (id)initForFSDefaultFileType: (NSString *)filetype;
- (id)initForDefaultFileType: (NSString *)filetype;
- (void)updateFromSource: (id <FileSettingsSource>)source;
- (NSString *)commandLineForScript: (NSString *)script;
- (void)applyValuesFromDict: (NSDictionary *)dict;
- (void)reset;
- (NSArray *) interpreters;
@end
