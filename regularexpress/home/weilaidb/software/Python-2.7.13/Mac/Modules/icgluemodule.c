extern int ResObj_Convert(PyObject *, Handle *);
static PyObject *ErrorObject;
typedef struct  iciobject;
static PyTypeObject Icitype;
static char ici_ICGetSeed__doc__[] =
;
static PyObject *
ici_ICGetSeed(iciobject *self, PyObject *args)
static char ici_ICBegin__doc__[] =
;
static PyObject *
ici_ICBegin(iciobject *self, PyObject *args)
static char ici_ICFindPrefHandle__doc__[] =
;
static PyObject *
ici_ICFindPrefHandle(iciobject *self, PyObject *args)
static char ici_ICSetPref__doc__[] =
;
static PyObject *
ici_ICSetPref(iciobject *self, PyObject *args)
static char ici_ICCountPref__doc__[] =
;
static PyObject *
ici_ICCountPref(iciobject *self, PyObject *args)
static char ici_ICGetIndPref__doc__[] =
;
static PyObject *
ici_ICGetIndPref(iciobject *self, PyObject *args)
static char ici_ICDeletePref__doc__[] =
;
static PyObject *
ici_ICDeletePref(iciobject *self, PyObject *args)
static char ici_ICEnd__doc__[] =
;
static PyObject *
ici_ICEnd(iciobject *self, PyObject *args)
static char ici_ICEditPreferences__doc__[] =
;
static PyObject *
ici_ICEditPreferences(iciobject *self, PyObject *args)
static char ici_ICParseURL__doc__[] =
;
static PyObject *
ici_ICParseURL(iciobject *self, PyObject *args)
static char ici_ICLaunchURL__doc__[] =
;
static PyObject *
ici_ICLaunchURL(iciobject *self, PyObject *args)
static char ici_ICMapFilename__doc__[] =
;
static PyObject *
ici_ICMapFilename(iciobject *self, PyObject *args)
static char ici_ICMapTypeCreator__doc__[] =
;
static PyObject *
ici_ICMapTypeCreator(iciobject *self, PyObject *args)
static struct PyMethodDef ici_methods[] = ;
static iciobject *
newiciobject(OSType creator)
static void
ici_dealloc(iciobject *self)
static PyObject *
ici_getattr(iciobject *self, char *name)
static char Icitype__doc__[] =
;
static PyTypeObject Icitype = ;
static char ic_ICStart__doc__[] =
;
static PyObject *
ic_ICStart(PyObject *self, PyObject *args)
static struct PyMethodDef ic_methods[] = ;
static char icglue_module_documentation[] =
;
void
initicglue(void)
