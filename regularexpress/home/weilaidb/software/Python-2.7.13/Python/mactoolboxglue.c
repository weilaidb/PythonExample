char *
PyMac_StrError(int err)
PyObject *PyMac_OSErrException;
PyObject *
PyMac_GetOSErrException(void)
PyObject *
PyErr_Mac(PyObject *eobj, int err)
PyObject *
PyMac_Error(OSErr err)
#if APPLE_SUPPORTS_QUICKTIME
OSErr
PyMac_GetFullPathname(FSSpec *fss, char *path, int len)
int
PyMac_GetOSType(PyObject *v, OSType *pr)
PyObject *
PyMac_BuildOSType(OSType t)
PyObject *
PyMac_BuildNumVersion(NumVersion t)
int
PyMac_GetStr255(PyObject *v, Str255 pbuf)
PyObject *
PyMac_BuildStr255(Str255 s)
PyObject *
PyMac_BuildOptStr255(Str255 s)
int
PyMac_GetRect(PyObject *v, Rect *r)
PyObject *
PyMac_BuildRect(Rect *r)
int
PyMac_GetPoint(PyObject *v, Point *p)
PyObject *
PyMac_BuildPoint(Point p)
int
PyMac_GetEventRecord(PyObject *v, EventRecord *e)
PyObject *
PyMac_BuildEventRecord(EventRecord *e)
int
PyMac_GetFixed(PyObject *v, Fixed *f)
PyObject *
PyMac_BuildFixed(Fixed f)
int
PyMac_Getwide(PyObject *v, wide *rv)
PyObject *
PyMac_Buildwide(wide *w)
#define GLUE_NEW(object, routinename, module) \
PyObject *(*PyMacGluePtr_##routinename)(object); \
\
PyObject *routinename(object cobj)
#define GLUE_CONVERT(object, routinename, module) \
int (*PyMacGluePtr_##routinename)(PyObject *, object *); \
\
int routinename(PyObject *pyobj, object *cobj)
GLUE_NEW(FSSpec *, PyMac_BuildFSSpec, "Carbon.File")
GLUE_CONVERT(FSSpec, PyMac_GetFSSpec, "Carbon.File")
GLUE_NEW(FSRef *, PyMac_BuildFSRef, "Carbon.File")
GLUE_CONVERT(FSRef, PyMac_GetFSRef, "Carbon.File")
GLUE_NEW(AppleEvent *, AEDesc_New, "Carbon.AE")
GLUE_NEW(AppleEvent *, AEDesc_NewBorrowed, "Carbon.AE")
GLUE_CONVERT(AppleEvent, AEDesc_Convert, "Carbon.AE")
GLUE_NEW(Component, CmpObj_New, "Carbon.Cm")
GLUE_CONVERT(Component, CmpObj_Convert, "Carbon.Cm")
GLUE_NEW(ComponentInstance, CmpInstObj_New, "Carbon.Cm")
GLUE_CONVERT(ComponentInstance, CmpInstObj_Convert, "Carbon.Cm")
GLUE_NEW(ControlHandle, CtlObj_New, "Carbon.Ctl")
GLUE_CONVERT(ControlHandle, CtlObj_Convert, "Carbon.Ctl")
GLUE_NEW(DialogPtr, DlgObj_New, "Carbon.Dlg")
GLUE_CONVERT(DialogPtr, DlgObj_Convert, "Carbon.Dlg")
GLUE_NEW(DialogPtr, DlgObj_WhichDialog, "Carbon.Dlg")
GLUE_NEW(DragReference, DragObj_New, "Carbon.Drag")
GLUE_CONVERT(DragReference, DragObj_Convert, "Carbon.Drag")
GLUE_NEW(ListHandle, ListObj_New, "Carbon.List")
GLUE_CONVERT(ListHandle, ListObj_Convert, "Carbon.List")
GLUE_NEW(MenuHandle, MenuObj_New, "Carbon.Menu")
GLUE_CONVERT(MenuHandle, MenuObj_Convert, "Carbon.Menu")
GLUE_NEW(GrafPtr, GrafObj_New, "Carbon.Qd")
GLUE_CONVERT(GrafPtr, GrafObj_Convert, "Carbon.Qd")
GLUE_NEW(BitMapPtr, BMObj_New, "Carbon.Qd")
GLUE_CONVERT(BitMapPtr, BMObj_Convert, "Carbon.Qd")
GLUE_NEW(RGBColor *, QdRGB_New, "Carbon.Qd")
GLUE_CONVERT(RGBColor, QdRGB_Convert, "Carbon.Qd")
GLUE_NEW(GWorldPtr, GWorldObj_New, "Carbon.Qdoffs")
GLUE_CONVERT(GWorldPtr, GWorldObj_Convert, "Carbon.Qdoffs")
#if APPLE_SUPPORTS_QUICKTIME
GLUE_NEW(Track, TrackObj_New, "Carbon.Qt")
GLUE_CONVERT(Track, TrackObj_Convert, "Carbon.Qt")
GLUE_NEW(Movie, MovieObj_New, "Carbon.Qt")
GLUE_CONVERT(Movie, MovieObj_Convert, "Carbon.Qt")
GLUE_NEW(MovieController, MovieCtlObj_New, "Carbon.Qt")
GLUE_CONVERT(MovieController, MovieCtlObj_Convert, "Carbon.Qt")
GLUE_NEW(TimeBase, TimeBaseObj_New, "Carbon.Qt")
GLUE_CONVERT(TimeBase, TimeBaseObj_Convert, "Carbon.Qt")
GLUE_NEW(UserData, UserDataObj_New, "Carbon.Qt")
GLUE_CONVERT(UserData, UserDataObj_Convert, "Carbon.Qt")
GLUE_NEW(Media, MediaObj_New, "Carbon.Qt")
GLUE_CONVERT(Media, MediaObj_Convert, "Carbon.Qt")
GLUE_NEW(Handle, ResObj_New, "Carbon.Res")
GLUE_CONVERT(Handle, ResObj_Convert, "Carbon.Res")
GLUE_NEW(Handle, OptResObj_New, "Carbon.Res")
GLUE_CONVERT(Handle, OptResObj_Convert, "Carbon.Res")
GLUE_NEW(TEHandle, TEObj_New, "Carbon.TE")
GLUE_CONVERT(TEHandle, TEObj_Convert, "Carbon.TE")
GLUE_NEW(WindowPtr, WinObj_New, "Carbon.Win")
GLUE_CONVERT(WindowPtr, WinObj_Convert, "Carbon.Win")
GLUE_NEW(WindowPtr, WinObj_WhichWindow, "Carbon.Win")
GLUE_CONVERT(CFTypeRef, CFObj_Convert, "Carbon.CF")
GLUE_NEW(CFTypeRef, CFObj_New, "Carbon.CF")
GLUE_CONVERT(CFTypeRef, CFTypeRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFTypeRef, CFTypeRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFStringRef, CFStringRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFStringRef, CFStringRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFMutableStringRef, CFMutableStringRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFMutableStringRef, CFMutableStringRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFArrayRef, CFArrayRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFArrayRef, CFArrayRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFMutableArrayRef, CFMutableArrayRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFMutableArrayRef, CFMutableArrayRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFDictionaryRef, CFDictionaryRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFDictionaryRef, CFDictionaryRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFMutableDictionaryRef, CFMutableDictionaryRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFMutableDictionaryRef, CFMutableDictionaryRefObj_New, "Carbon.CF")
GLUE_CONVERT(CFURLRef, CFURLRefObj_Convert, "Carbon.CF")
GLUE_CONVERT(CFURLRef, OptionalCFURLRefObj_Convert, "Carbon.CF")
GLUE_NEW(CFURLRef, CFURLRefObj_New, "Carbon.CF")
