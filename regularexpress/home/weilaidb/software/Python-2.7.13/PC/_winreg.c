static BOOL PyHKEY_AsHKEY(PyObject *ob, HKEY *pRes, BOOL bNoneOK);
static PyObject *PyHKEY_FromHKEY(HKEY h);
static BOOL PyHKEY_Close(PyObject *obHandle);
static char errNotAHandle[] = ;
#define PyErr_SetFromWindowsErrWithFunction(rc, fnname) \
PyErr_SetFromWindowsErr(rc)
PyDoc_STRVAR(module_doc,
);
PyDoc_STRVAR(CloseKey_doc,
);
PyDoc_STRVAR(ConnectRegistry_doc,
);
PyDoc_STRVAR(CreateKey_doc,
);
PyDoc_STRVAR(CreateKeyEx_doc,
);
PyDoc_STRVAR(DeleteKey_doc,
);
PyDoc_STRVAR(DeleteKeyEx_doc,
);
PyDoc_STRVAR(DeleteValue_doc,
);
PyDoc_STRVAR(EnumKey_doc,
);
PyDoc_STRVAR(EnumValue_doc,
);
PyDoc_STRVAR(ExpandEnvironmentStrings_doc,
);
PyDoc_STRVAR(FlushKey_doc,
);
PyDoc_STRVAR(LoadKey_doc,
);
PyDoc_STRVAR(OpenKey_doc,
);
PyDoc_STRVAR(OpenKeyEx_doc, );
PyDoc_STRVAR(QueryInfoKey_doc,
);
PyDoc_STRVAR(QueryValue_doc,
);
PyDoc_STRVAR(QueryValueEx_doc,
);
PyDoc_STRVAR(SaveKey_doc,
);
PyDoc_STRVAR(SetValue_doc,
);
PyDoc_STRVAR(SetValueEx_doc,
);
PyDoc_STRVAR(DisableReflectionKey_doc,
);
PyDoc_STRVAR(EnableReflectionKey_doc,
);
PyDoc_STRVAR(QueryReflectionKey_doc,
);
PyDoc_STRVAR(PyHKEY_doc,
);
PyDoc_STRVAR(PyHKEY_Close_doc,
);
PyDoc_STRVAR(PyHKEY_Detach_doc,
);
typedef struct  PyHKEYObject;
#define PyHKEY_Check(op) ((op)->ob_type == &PyHKEY_Type)
static char *failMsg = ;
static PyObject *
PyHKEY_unaryFailureFunc(PyObject *ob)
static PyObject *
PyHKEY_binaryFailureFunc(PyObject *ob1, PyObject *ob2)
static PyObject *
PyHKEY_ternaryFailureFunc(PyObject *ob1, PyObject *ob2, PyObject *ob3)
static void
PyHKEY_deallocFunc(PyObject *ob)
static int
PyHKEY_nonzeroFunc(PyObject *ob)
static PyObject *
PyHKEY_intFunc(PyObject *ob)
static int
PyHKEY_printFunc(PyObject *ob, FILE *fp, int flags)
static PyObject *
PyHKEY_strFunc(PyObject *ob)
static int
PyHKEY_compareFunc(PyObject *ob1, PyObject *ob2)
static long
PyHKEY_hashFunc(PyObject *ob)
static PyNumberMethods PyHKEY_NumberMethods =
;
static PyObject *PyHKEY_CloseMethod(PyObject *self, PyObject *args);
static PyObject *PyHKEY_DetachMethod(PyObject *self, PyObject *args);
static PyObject *PyHKEY_Enter(PyObject *self);
static PyObject *PyHKEY_Exit(PyObject *self, PyObject *args);
static struct PyMethodDef PyHKEY_methods[] = ;
static PyMemberDef PyHKEY_memberlist[] = ;
PyTypeObject PyHKEY_Type =
;
static PyObject *
PyHKEY_CloseMethod(PyObject *self, PyObject *args)
static PyObject *
PyHKEY_DetachMethod(PyObject *self, PyObject *args)
static PyObject *
PyHKEY_Enter(PyObject *self)
static PyObject *
PyHKEY_Exit(PyObject *self, PyObject *args)
PyObject *
PyHKEY_New(HKEY hInit)
BOOL
PyHKEY_Close(PyObject *ob_handle)
BOOL
PyHKEY_AsHKEY(PyObject *ob, HKEY *pHANDLE, BOOL bNoneOK)
PyObject *
PyHKEY_FromHKEY(HKEY h)
BOOL
PyWinObject_CloseHKEY(PyObject *obHandle)
static void
fixupMultiSZ(char **str, char *data, int len)
static int
countStrings(char *data, int len)
static BOOL
Py2Reg(PyObject *value, DWORD typ, BYTE **retDataBuf, DWORD *retDataSize)
static PyObject *
Reg2Py(char *retDataBuf, DWORD retDataSize, DWORD typ)
static PyObject *
PyCloseKey(PyObject *self, PyObject *args)
static PyObject *
PyConnectRegistry(PyObject *self, PyObject *args)
static PyObject *
PyCreateKey(PyObject *self, PyObject *args)
static PyObject *
PyCreateKeyEx(PyObject *self, PyObject *args)
static PyObject *
PyDeleteKey(PyObject *self, PyObject *args)
static PyObject *
PyDeleteKeyEx(PyObject *self, PyObject *args)
static PyObject *
PyDeleteValue(PyObject *self, PyObject *args)
static PyObject *
PyEnumKey(PyObject *self, PyObject *args)
static PyObject *
PyEnumValue(PyObject *self, PyObject *args)
static PyObject *
PyExpandEnvironmentStrings(PyObject *self, PyObject *args)
static PyObject *
PyFlushKey(PyObject *self, PyObject *args)
static PyObject *
PyLoadKey(PyObject *self, PyObject *args)
static PyObject *
PyOpenKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryInfoKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryValue(PyObject *self, PyObject *args)
static PyObject *
PyQueryValueEx(PyObject *self, PyObject *args)
static PyObject *
PySaveKey(PyObject *self, PyObject *args)
static PyObject *
PySetValue(PyObject *self, PyObject *args)
static PyObject *
PySetValueEx(PyObject *self, PyObject *args)
static PyObject *
PyDisableReflectionKey(PyObject *self, PyObject *args)
static PyObject *
PyEnableReflectionKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryReflectionKey(PyObject *self, PyObject *args)
static struct PyMethodDef winreg_methods[] = ;
static void
insint(PyObject * d, char * name, long value)
#define ADD_INT(val) insint(d, #val, val)
static void
inskey(PyObject * d, char * name, HKEY key)
#define ADD_KEY(val) inskey(d, #val, val)
PyMODINIT_FUNC init_winreg(void)
