static PyObject *fpe_error;
PyMODINIT_FUNC initfpetest(void);
static PyObject *test(PyObject *self,PyObject *args);
static double db0(double);
static double overflow(double);
static double nest1(int, double);
static double nest2(int, double);
static double nest3(double);
static void printerr(double);
static PyMethodDef fpetest_methods[] = ;
static PyObject *test(PyObject *self,PyObject *args)
static void printerr(double r)
static double nest1(int i, double x)
static double nest2(int i, double x)
static double nest3(double x)
static double db0(double x)
static double overflow(double b)
PyMODINIT_FUNC initfpetest(void)
