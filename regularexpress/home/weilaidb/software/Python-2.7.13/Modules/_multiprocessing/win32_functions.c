#define WIN32_FUNCTION(func) \
#define WIN32_CONSTANT(fmt, con) \
PyDict_SetItemString(Win32Type.tp_dict, #con, Py_BuildValue(fmt, con))
static PyObject *
win32_CloseHandle(PyObject *self, PyObject *args)
static PyObject *
win32_ConnectNamedPipe(PyObject *self, PyObject *args)
static PyObject *
win32_CreateFile(PyObject *self, PyObject *args)
static PyObject *
win32_CreateNamedPipe(PyObject *self, PyObject *args)
static PyObject *
win32_ExitProcess(PyObject *self, PyObject *args)
static PyObject *
win32_GetLastError(PyObject *self, PyObject *args)
static PyObject *
win32_OpenProcess(PyObject *self, PyObject *args)
static PyObject *
win32_SetNamedPipeHandleState(PyObject *self, PyObject *args)
static PyObject *
win32_WaitNamedPipe(PyObject *self, PyObject *args)
static PyMethodDef win32_methods[] = ;
PyTypeObject Win32Type = ;
PyObject *
create_win32_namespace(void)
