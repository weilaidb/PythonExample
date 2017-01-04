int
PyArg_GetObject(register PyObject *args, int nargs, int i, PyObject **p_arg)
int
PyArg_GetLong(register PyObject *args, int nargs, int i, long *p_arg)
int
PyArg_GetShort(register PyObject *args, int nargs, int i, short *p_arg)
static int
extractdouble(register PyObject *v, double *p_arg)
static int
extractfloat(register PyObject *v, float *p_arg)
int
PyArg_GetFloat(register PyObject *args, int nargs, int i, float *p_arg)
int
PyArg_GetString(PyObject *args, int nargs, int i, string *p_arg)
int
PyArg_GetChar(PyObject *args, int nargs, int i, char *p_arg)
int
PyArg_GetLongArraySize(PyObject *args, int nargs, int i, long *p_arg)
int
PyArg_GetShortArraySize(PyObject *args, int nargs, int i, short *p_arg)
int
PyArg_GetLongArray(PyObject *args, int nargs, int i, int n, long *p_arg)
int
PyArg_GetShortArray(PyObject *args, int nargs, int i, int n, short *p_arg)
int
PyArg_GetDoubleArray(PyObject *args, int nargs, int i, int n, double *p_arg)
int
PyArg_GetFloatArray(PyObject *args, int nargs, int i, int n, float *p_arg)
