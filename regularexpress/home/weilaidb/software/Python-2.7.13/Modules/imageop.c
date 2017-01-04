#define signed
#if SIZEOF_INT == 4
typedef int Py_Int32;
typedef unsigned int Py_UInt32;
#if SIZEOF_LONG == 4
typedef long Py_Int32;
typedef unsigned long Py_UInt32;
#error "No 4-byte integral type"
#define CHARP(cp, xmax, x, y) ((char *)(cp+y*xmax+x))
#define SHORTP(cp, xmax, x, y) ((short *)(cp+2*(y*xmax+x)))
#define LONGP(cp, xmax, x, y) ((Py_Int32 *)(cp+4*(y*xmax+x)))
static PyObject *ImageopError;
static PyObject *ImageopDict;
static int
check_coordonnate(int value, const char* name)
static int
check_multiply_size(int product, int x, const char* xname, int y, const char* yname, int size)
static int
check_multiply(int product, int x, int y)
static int
imageop_backward_compatible(void)
static PyObject *
imageop_crop(PyObject *self, PyObject *args)
static PyObject *
imageop_scale(PyObject *self, PyObject *args)
static PyObject *
imageop_tovideo(PyObject *self, PyObject *args)
static PyObject *
imageop_grey2mono(PyObject *self, PyObject *args)
static PyObject *
imageop_grey2grey4(PyObject *self, PyObject *args)
static PyObject *
imageop_grey2grey2(PyObject *self, PyObject *args)
static PyObject *
imageop_dither2mono(PyObject *self, PyObject *args)
static PyObject *
imageop_dither2grey2(PyObject *self, PyObject *args)
static PyObject *
imageop_mono2grey(PyObject *self, PyObject *args)
static PyObject *
imageop_grey22grey(PyObject *self, PyObject *args)
static PyObject *
imageop_grey42grey(PyObject *self, PyObject *args)
static PyObject *
imageop_rgb2rgb8(PyObject *self, PyObject *args)
static PyObject *
imageop_rgb82rgb(PyObject *self, PyObject *args)
static PyObject *
imageop_rgb2grey(PyObject *self, PyObject *args)
static PyObject *
imageop_grey2rgb(PyObject *self, PyObject *args)
static PyMethodDef imageop_methods[] = ;
PyMODINIT_FUNC
initimageop(void)
