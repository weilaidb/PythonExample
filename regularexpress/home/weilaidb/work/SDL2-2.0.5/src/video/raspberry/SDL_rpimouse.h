#define _SDL_RPI_mouse_h
typedef struct _RPI_CursorData RPI_CursorData;
struct _RPI_CursorData
;
#define SDL_RPI_CURSORDATA(curs)  RPI_CursorData *curdata = (RPI_CursorData *) ((curs) ? (curs)->driverdata : NULL)
extern void RPI_InitMouse(_THIS);
extern void RPI_QuitMouse(_THIS);
