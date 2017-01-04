typedef struct  svobject;
typedef struct  captureobject;
static PyObject *SvError;
static PyObject *newcaptureobject(svobject *, void *, int);
static PyObject *
sv_error(void)
static PyObject *
svc_conversion(captureobject *self, PyObject *args, void (*function)(), float factor)
static PyObject *
svc_YUVtoYUV422DC(captureobject *self, PyObject *args)
static PyObject *
svc_YUVtoYUV422DC_quarter(captureobject *self, PyObject *args)
static PyObject *
svc_YUVtoYUV422DC_sixteenth(captureobject *self, PyObject *args)
static PyObject *
svc_YUVtoRGB(captureobject *self, PyObject *args)
static PyObject *
svc_RGB8toRGB32(captureobject *self, PyObject *args)
static PyObject *
svc_InterleaveFields(captureobject *self, PyObject *args)
static PyObject *
svc_GetFields(captureobject *self, PyObject *args)
static PyObject *
svc_UnlockCaptureData(captureobject *self, PyObject *args)
static PyObject *
svc_lrectwrite(captureobject *self, PyObject *args)
static PyObject *
svc_writefile(captureobject *self, PyObject *args)
static PyObject *
svc_FindVisibleRegion(captureobject *self, PyObject *args)
static PyMethodDef capture_methods[] = ;
static void
capture_dealloc(captureobject *self)
static PyObject *
capture_getattr(svobject *self, char *name)
PyTypeObject Capturetype = ;
static PyObject *
newcaptureobject(svobject *self, void *ptr, int mustunlock)
static PyObject *
sv_GetCaptureData(svobject *self, PyObject *args)
static PyObject *
sv_BindGLWindow(svobject *self, PyObject *args)
static PyObject *
sv_EndContinuousCapture(svobject *self, PyObject *args)
static PyObject *
sv_IsVideoDisplayed(svobject *self, PyObject *args)
static PyObject *
sv_OutputOffset(svobject *self, PyObject *args)
static PyObject *
sv_PutFrame(svobject *self, PyObject *args)
static PyObject *
sv_QuerySize(svobject *self, PyObject *args)
static PyObject *
sv_SetSize(svobject *self, PyObject *args)
static PyObject *
sv_SetStdDefaults(svobject *self, PyObject *args)
static PyObject *
sv_UseExclusive(svobject *self, PyObject *args)
static PyObject *
sv_WindowOffset(svobject *self, PyObject *args)
static PyObject *
sv_CaptureBurst(svobject *self, PyObject *args)
static PyObject *
sv_CaptureOneFrame(svobject *self, PyObject *args)
static PyObject *
sv_InitContinuousCapture(svobject *self, PyObject *args)
static PyObject *
sv_LoadMap(svobject *self, PyObject *args)
static PyObject *
sv_CloseVideo(svobject *self, PyObject *args)
static PyObject *
doParams(svobject *self, PyObject *args,
int (*func)(SV_nodeP, long *, int), int modified)
static PyObject *
sv_GetParam(PyObject *self, PyObject *args)
static PyObject *
sv_GetParamRange(PyObject *self, PyObject *args)
static PyObject *
sv_SetParam(PyObject *self, PyObject *args)
static PyMethodDef svideo_methods[] = ;
static PyObject *
sv_conversion(PyObject *self, PyObject *args, void (*function)(),
int inputfactor, float factor)
static PyObject *
sv_InterleaveFields(PyObject *self, PyObject *args)
static PyObject *
sv_RGB8toRGB32(PyObject *self, PyObject *args)
static PyObject *
sv_YUVtoRGB(PyObject *self, PyObject *args)
static void
svideo_dealloc(svobject *self)
static PyObject *
svideo_getattr(svobject *self, char *name)
PyTypeObject Svtype = ;
static PyObject *
newsvobject(SV_nodeP svp)
static PyObject *
sv_OpenVideo(PyObject *self, PyObject *args)
static PyMethodDef sv_methods[] = ;
void
initsv(void)
