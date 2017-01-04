#import <UIKit/UIKit.h>
@interface SDL_uikitview : UIView
- (instancetype)initWithFrame:(CGRect)frame;
- (void)setSDLWindow:(SDL_Window *)window;
- (CGPoint)touchLocation:(UITouch *)touch shouldNormalize:(BOOL)normalize;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
@end
