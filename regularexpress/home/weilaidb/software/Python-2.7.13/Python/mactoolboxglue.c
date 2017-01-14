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
GLUE_NEW(FSSpec *, PyMac_BuildFSSpec, )
GLUE_CONVERT(FSSpec, PyMac_GetFSSpec, )
GLUE_NEW(FSRef *, PyMac_BuildFSRef, )
GLUE_CONVERT(FSRef, PyMac_GetFSRef, )
GLUE_NEW(AppleEvent *, AEDesc_New, )
GLUE_NEW(AppleEvent *, AEDesc_NewBorrowed, )
GLUE_CONVERT(AppleEvent, AEDesc_Convert, )
GLUE_NEW(Component, CmpObj_New, )
GLUE_CONVERT(Component, CmpObj_Convert, )
GLUE_NEW(ComponentInstance, CmpInstObj_New, )
GLUE_CONVERT(ComponentInstance, CmpInstObj_Convert, )
GLUE_NEW(ControlHandle, CtlObj_New, )
GLUE_CONVERT(ControlHandle, CtlObj_Convert, )
GLUE_NEW(DialogPtr, DlgObj_New, )
GLUE_CONVERT(DialogPtr, DlgObj_Convert, )
GLUE_NEW(DialogPtr, DlgObj_WhichDialog, )
GLUE_NEW(DragReference, DragObj_New, )
GLUE_CONVERT(DragReference, DragObj_Convert, )
GLUE_NEW(ListHandle, ListObj_New, )
GLUE_CONVERT(ListHandle, ListObj_Convert, )
GLUE_NEW(MenuHandle, MenuObj_New, )
GLUE_CONVERT(MenuHandle, MenuObj_Convert, )
GLUE_NEW(GrafPtr, GrafObj_New, )
GLUE_CONVERT(GrafPtr, GrafObj_Convert, )
GLUE_NEW(BitMapPtr, BMObj_New, )
GLUE_CONVERT(BitMapPtr, BMObj_Convert, )
GLUE_NEW(RGBColor *, QdRGB_New, )
GLUE_CONVERT(RGBColor, QdRGB_Convert, )
GLUE_NEW(GWorldPtr, GWorldObj_New, )
GLUE_CONVERT(GWorldPtr, GWorldObj_Convert, )
#if APPLE_SUPPORTS_QUICKTIME
GLUE_NEW(Track, TrackObj_New, )
GLUE_CONVERT(Track, TrackObj_Convert, )
GLUE_NEW(Movie, MovieObj_New, )
GLUE_CONVERT(Movie, MovieObj_Convert, )
GLUE_NEW(MovieController, MovieCtlObj_New, )
GLUE_CONVERT(MovieController, MovieCtlObj_Convert, )
GLUE_NEW(TimeBase, TimeBaseObj_New, )
GLUE_CONVERT(TimeBase, TimeBaseObj_Convert, )
GLUE_NEW(UserData, UserDataObj_New, )
GLUE_CONVERT(UserData, UserDataObj_Convert, )
GLUE_NEW(Media, MediaObj_New, )
GLUE_CONVERT(Media, MediaObj_Convert, )
GLUE_NEW(Handle, ResObj_New, )
GLUE_CONVERT(Handle, ResObj_Convert, )
GLUE_NEW(Handle, OptResObj_New, )
GLUE_CONVERT(Handle, OptResObj_Convert, )
GLUE_NEW(TEHandle, TEObj_New, )
GLUE_CONVERT(TEHandle, TEObj_Convert, )
GLUE_NEW(WindowPtr, WinObj_New, )
GLUE_CONVERT(WindowPtr, WinObj_Convert, )
GLUE_NEW(WindowPtr, WinObj_WhichWindow, )
GLUE_CONVERT(CFTypeRef, CFObj_Convert, )
GLUE_NEW(CFTypeRef, CFObj_New, )
GLUE_CONVERT(CFTypeRef, CFTypeRefObj_Convert, )
GLUE_NEW(CFTypeRef, CFTypeRefObj_New, )
GLUE_CONVERT(CFStringRef, CFStringRefObj_Convert, )
GLUE_NEW(CFStringRef, CFStringRefObj_New, )
GLUE_CONVERT(CFMutableStringRef, CFMutableStringRefObj_Convert, )
GLUE_NEW(CFMutableStringRef, CFMutableStringRefObj_New, )
GLUE_CONVERT(CFArrayRef, CFArrayRefObj_Convert, )
GLUE_NEW(CFArrayRef, CFArrayRefObj_New, )
GLUE_CONVERT(CFMutableArrayRef, CFMutableArrayRefObj_Convert, )
GLUE_NEW(CFMutableArrayRef, CFMutableArrayRefObj_New, )
GLUE_CONVERT(CFDictionaryRef, CFDictionaryRefObj_Convert, )
GLUE_NEW(CFDictionaryRef, CFDictionaryRefObj_New, )
GLUE_CONVERT(CFMutableDictionaryRef, CFMutableDictionaryRefObj_Convert, )
GLUE_NEW(CFMutableDictionaryRef, CFMutableDictionaryRefObj_New, )
GLUE_CONVERT(CFURLRef, CFURLRefObj_Convert, )
GLUE_CONVERT(CFURLRef, OptionalCFURLRefObj_Convert, )
GLUE_NEW(CFURLRef, CFURLRefObj_New, )
