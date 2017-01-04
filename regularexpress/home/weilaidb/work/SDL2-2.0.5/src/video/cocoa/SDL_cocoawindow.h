#define _SDL_cocoawindow_h
#import <Cocoa/Cocoa.h>
typedef struct SDL_WindowData SDL_WindowData;
typedef enum
PendingWindowOperation;
@interface Cocoa_WindowListener : NSResponder <NSWindowDelegate>
-(void) listen:(SDL_WindowData *) data;
-(void) pauseVisibleObservation;
-(void) resumeVisibleObservation;
-(BOOL) setFullscreenSpace:(BOOL) state;
-(BOOL) isInFullscreenSpace;
-(BOOL) isInFullscreenSpaceTransition;
-(void) addPendingWindowOperation:(PendingWindowOperation) operation;
-(void) close;
-(BOOL) isMoving;
-(void) setPendingMoveX:(int)x Y:(int)y;
-(void) windowDidFinishMoving;
-(BOOL) windowShouldClose:(id) sender;
-(void) windowDidExpose:(NSNotification *) aNotification;
-(void) windowDidMove:(NSNotification *) aNotification;
-(void) windowDidResize:(NSNotification *) aNotification;
-(void) windowDidMiniaturize:(NSNotification *) aNotification;
-(void) windowDidDeminiaturize:(NSNotification *) aNotification;
-(void) windowDidBecomeKey:(NSNotification *) aNotification;
-(void) windowDidResignKey:(NSNotification *) aNotification;
-(void) windowDidChangeBackingProperties:(NSNotification *) aNotification;
-(void) windowWillEnterFullScreen:(NSNotification *) aNotification;
-(void) windowDidEnterFullScreen:(NSNotification *) aNotification;
-(void) windowWillExitFullScreen:(NSNotification *) aNotification;
-(void) windowDidExitFullScreen:(NSNotification *) aNotification;
-(NSApplicationPresentationOptions)window:(NSWindow *)window willUseFullScreenPresentationOptions:(NSApplicationPresentationOptions)proposedOptions;
-(BOOL) processHitTest:(NSEvent *)theEvent;
-(void) mouseDown:(NSEvent *) theEvent;
-(void) rightMouseDown:(NSEvent *) theEvent;
-(void) otherMouseDown:(NSEvent *) theEvent;
-(void) mouseUp:(NSEvent *) theEvent;
-(void) rightMouseUp:(NSEvent *) theEvent;
-(void) otherMouseUp:(NSEvent *) theEvent;
-(void) mouseMoved:(NSEvent *) theEvent;
-(void) mouseDragged:(NSEvent *) theEvent;
-(void) rightMouseDragged:(NSEvent *) theEvent;
-(void) otherMouseDragged:(NSEvent *) theEvent;
-(void) scrollWheel:(NSEvent *) theEvent;
-(void) touchesBeganWithEvent:(NSEvent *) theEvent;
-(void) touchesMovedWithEvent:(NSEvent *) theEvent;
-(void) touchesEndedWithEvent:(NSEvent *) theEvent;
-(void) touchesCancelledWithEvent:(NSEvent *) theEvent;
-(void) handleTouches:(NSTouchPhase) phase withEvent:(NSEvent*) theEvent;
@end
@class SDLOpenGLContext;
struct SDL_WindowData
;
extern int Cocoa_CreateWindow(_THIS, SDL_Window * window);
extern int Cocoa_CreateWindowFrom(_THIS, SDL_Window * window,
const void *data);
extern void Cocoa_SetWindowTitle(_THIS, SDL_Window * window);
extern void Cocoa_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
extern void Cocoa_SetWindowPosition(_THIS, SDL_Window * window);
extern void Cocoa_SetWindowSize(_THIS, SDL_Window * window);
extern void Cocoa_SetWindowMinimumSize(_THIS, SDL_Window * window);
extern void Cocoa_SetWindowMaximumSize(_THIS, SDL_Window * window);
extern int Cocoa_SetWindowOpacity(_THIS, SDL_Window * window, float opacity);
extern void Cocoa_ShowWindow(_THIS, SDL_Window * window);
extern void Cocoa_HideWindow(_THIS, SDL_Window * window);
extern void Cocoa_RaiseWindow(_THIS, SDL_Window * window);
extern void Cocoa_MaximizeWindow(_THIS, SDL_Window * window);
extern void Cocoa_MinimizeWindow(_THIS, SDL_Window * window);
extern void Cocoa_RestoreWindow(_THIS, SDL_Window * window);
extern void Cocoa_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered);
extern void Cocoa_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable);
extern void Cocoa_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
extern int Cocoa_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp);
extern int Cocoa_GetWindowGammaRamp(_THIS, SDL_Window * window, Uint16 * ramp);
extern void Cocoa_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
extern void Cocoa_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool Cocoa_GetWindowWMInfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo *info);
extern int Cocoa_SetWindowHitTest(SDL_Window *window, SDL_bool enabled);
