#if !defined(__LP64__) && !defined(MAC_OS_X_VERSION_10_7)
#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *
FMRec_New(FMetricRec *itself)
static PyObject *Fm_Error;
static PyObject *Fm_GetFontName(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetFNum(PyObject *_self, PyObject *_args)
static PyObject *Fm_RealFont(PyObject *_self, PyObject *_args)
static PyObject *Fm_SetFScaleDisable(PyObject *_self, PyObject *_args)
static PyObject *Fm_FontMetrics(PyObject *_self, PyObject *_args)
static PyObject *Fm_SetFractEnable(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetDefFontSize(PyObject *_self, PyObject *_args)
static PyObject *Fm_IsOutline(PyObject *_self, PyObject *_args)
static PyObject *Fm_SetOutlinePreferred(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetOutlinePreferred(PyObject *_self, PyObject *_args)
static PyObject *Fm_SetPreserveGlyph(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetPreserveGlyph(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetSysFont(PyObject *_self, PyObject *_args)
static PyObject *Fm_GetAppFont(PyObject *_self, PyObject *_args)
static PyObject *Fm_QDTextBounds(PyObject *_self, PyObject *_args)
static PyMethodDef Fm_methods[] = ;
static PyMethodDef Fm_methods[] = ;
void init_Fm(void)
