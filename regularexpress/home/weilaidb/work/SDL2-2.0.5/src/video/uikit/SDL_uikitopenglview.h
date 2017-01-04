#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES3/gl.h>
#import "SDL_uikitview.h"
@interface SDL_uikitopenglview : SDL_uikitview
- (instancetype)initWithFrame:(CGRect)frame
scale:(CGFloat)scale
retainBacking:(BOOL)retained
rBits:(int)rBits
gBits:(int)gBits
bBits:(int)bBits
aBits:(int)aBits
depthBits:(int)depthBits
stencilBits:(int)stencilBits
sRGB:(BOOL)sRGB
multisamples:(int)multisamples
context:(EAGLContext *)glcontext;
@property (nonatomic, readonly, weak) EAGLContext *context;
@property (nonatomic, readonly) int backingWidth;
@property (nonatomic, readonly) int backingHeight;
@property (nonatomic, readonly) GLuint drawableRenderbuffer;
@property (nonatomic, readonly) GLuint drawableFramebuffer;
@property (nonatomic, readonly) GLuint msaaResolveFramebuffer;
- (void)swapBuffers;
- (void)updateFrame;
@end
