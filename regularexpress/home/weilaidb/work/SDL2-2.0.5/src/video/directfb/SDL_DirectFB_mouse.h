#define _SDL_DirectFB_mouse_h
typedef struct _DFB_CursorData DFB_CursorData;
struct _DFB_CursorData
;
#define SDL_DFB_CURSORDATA(curs)  DFB_CursorData *curdata = (DFB_CursorData *) ((curs) ? (curs)->driverdata : NULL)
extern void DirectFB_InitMouse(_THIS);
extern void DirectFB_QuitMouse(_THIS);
