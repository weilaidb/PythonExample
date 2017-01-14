#if (defined(CMSG_LEN) && defined(SCM_RIGHTS))
#define HAVE_FD_TRANSFER 1
#define HAVE_FD_TRANSFER 0
PyObject *create_win32_namespace(void);
PyObject *pickle_dumps, *pickle_loads, *pickle_protocol;
PyObject *ProcessError, *BufferTooShort;
PyObject *
mp_SetError(PyObject *Type, int num)
HANDLE sigint_event = NULL;
static BOOL WINAPI
ProcessingCtrlHandler(DWORD dwCtrlType)
#if HAVE_FD_TRANSFER
PyErr_SetString(PyExc_RuntimeError, );
return NULL;
}
fd = * (int *) CMSG_DATA(cmsg);
return Py_BuildValue(, fd);
}
static PyObject*
multiprocessing_address_of_buffer(PyObject *self, PyObject *obj)
static PyMethodDef module_methods[] = ;
PyMODINIT_FUNC
init_multiprocessing(void)
