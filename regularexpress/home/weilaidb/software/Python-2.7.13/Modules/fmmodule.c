typedef struct  fhobject;
static PyTypeObject Fhtype;
#define is_fhobject(v)          ((v)->ob_type == &Fhtype)
static PyObject *
newfhobject(fmfonthandle fh)
static PyObject *
fh_scalefont(fhobject *self, PyObject *args)
static PyObject *
fh_setfont(fhobject *self)
static PyObject *
fh_getfontname(fhobject *self)
static PyObject *
fh_getcomment(fhobject *self)
static PyObject *
fh_getfontinfo(fhobject *self)
static PyObject *
fh_getstrwidth(fhobject *self, PyObject *args)
static PyMethodDef fh_methods[] = ;
static PyObject *
fh_getattr(fhobject *fhp, char *name)
static void
fh_dealloc(fhobject *fhp)
static PyTypeObject Fhtype = ;
static PyObject *
fm_init(PyObject *self)
static PyObject *
fm_findfont(PyObject *self, PyObject *args)
static PyObject *
fm_prstr(PyObject *self, PyObject *args)
static PyObject *fontlist;
static void
clientproc(char *fontname)
static PyObject *
fm_enumerate(PyObject *self)
static PyObject *
fm_setpath(PyObject *self, PyObject *args)
static PyObject *
fm_fontpath(PyObject *self)
static PyMethodDef fm_methods[] = ;
void
initfm(void)
