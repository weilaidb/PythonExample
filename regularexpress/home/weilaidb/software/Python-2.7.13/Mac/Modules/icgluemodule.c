extern int ResObj_Convert(PyObject *, Handle *);
static PyObject *ErrorObject;
typedef struct  iciobject;
static PyTypeObject Icitype;
static char ici_ICGetSeed__doc__[] =
"()->int; Returns int that changes when configuration does"
;
static PyObject *
ici_ICGetSeed(iciobject *self, PyObject *args)
static char ici_ICBegin__doc__[] =
"(perm)->None; Lock config file for read/write"
;
static PyObject *
ici_ICBegin(iciobject *self, PyObject *args)
static char ici_ICFindPrefHandle__doc__[] =
"(key, handle)->attrs; Lookup key, store result in handle, return attributes"
;
static PyObject *
ici_ICFindPrefHandle(iciobject *self, PyObject *args)
static char ici_ICSetPref__doc__[] =
"(key, attr, data)->None; Set preference key to data with attributes"
;
static PyObject *
ici_ICSetPref(iciobject *self, PyObject *args)
static char ici_ICCountPref__doc__[] =
"()->int; Return number of preferences"
;
static PyObject *
ici_ICCountPref(iciobject *self, PyObject *args)
static char ici_ICGetIndPref__doc__[] =
"(num)->key; Return key of preference with given index"
;
static PyObject *
ici_ICGetIndPref(iciobject *self, PyObject *args)
static char ici_ICDeletePref__doc__[] =
"(key)->None; Delete preference"
;
static PyObject *
ici_ICDeletePref(iciobject *self, PyObject *args)
static char ici_ICEnd__doc__[] =
"()->None; Unlock file after ICBegin call"
;
static PyObject *
ici_ICEnd(iciobject *self, PyObject *args)
static char ici_ICEditPreferences__doc__[] =
"(key)->None; Ask user to edit preferences, staring with key"
;
static PyObject *
ici_ICEditPreferences(iciobject *self, PyObject *args)
static char ici_ICParseURL__doc__[] =
"(hint, data, selStart, selEnd, handle)->selStart, selEnd; Find a URL, return in handle"
;
static PyObject *
ici_ICParseURL(iciobject *self, PyObject *args)
static char ici_ICLaunchURL__doc__[] =
"(hint, data, selStart, selEnd)->None; Find a URL and launch the correct app"
;
static PyObject *
ici_ICLaunchURL(iciobject *self, PyObject *args)
static char ici_ICMapFilename__doc__[] =
"(filename)->mapinfo; Get filemap info for given filename"
;
static PyObject *
ici_ICMapFilename(iciobject *self, PyObject *args)
static char ici_ICMapTypeCreator__doc__[] =
"(type, creator, filename)->mapinfo; Get filemap info for given tp/cr/filename"
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
"Internet Config instance"
;
static PyTypeObject Icitype = ;
static char ic_ICStart__doc__[] =
"(OSType)->ic_instance; Create an Internet Config instance"
;
static PyObject *
ic_ICStart(PyObject *self, PyObject *args)
static struct PyMethodDef ic_methods[] = ;
static char icglue_module_documentation[] =
"Implements low-level Internet Config interface"
;
void
initicglue(void)
