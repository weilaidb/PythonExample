#define PREC_REPR       17
#define PREC_STR        12
static Py_complex c_1 = ;
Py_complex
c_sum(Py_complex a, Py_complex b)
Py_complex
c_diff(Py_complex a, Py_complex b)
Py_complex
c_neg(Py_complex a)
Py_complex
c_prod(Py_complex a, Py_complex b)
Py_complex
c_quot(Py_complex a, Py_complex b)
Py_complex
c_pow(Py_complex a, Py_complex b)
static Py_complex
c_powu(Py_complex x, long n)
static Py_complex
c_powi(Py_complex x, long n)
double
c_abs(Py_complex z)
static PyObject *
complex_subtype_from_c_complex(PyTypeObject *type, Py_complex cval)
PyObject *
PyComplex_FromCComplex(Py_complex cval)
static PyObject *
complex_subtype_from_doubles(PyTypeObject *type, double real, double imag)
PyObject *
PyComplex_FromDoubles(double real, double imag)
double
PyComplex_RealAsDouble(PyObject *op)
double
PyComplex_ImagAsDouble(PyObject *op)
static PyObject *
try_complex_special_method(PyObject *op)
Py_complex
PyComplex_AsCComplex(PyObject *op)
static void
complex_dealloc(PyObject *op)
static PyObject *
complex_format(PyComplexObject *v, int precision, char format_code)
static int
complex_print(PyComplexObject *v, FILE *fp, int flags)
static PyObject *
complex_repr(PyComplexObject *v)
static PyObject *
complex_str(PyComplexObject *v)
static long
complex_hash(PyComplexObject *v)
#define TO_COMPLEX(obj, c) \
if (PyComplex_Check(obj)) \
c = ((PyComplexObject *)(obj))->cval; \
else if (to_complex(&(obj), &(c)) < 0) \
return (obj)
static int
to_complex(PyObject **pobj, Py_complex *pc)
static PyObject *
complex_add(PyObject *v, PyObject *w)
static PyObject *
complex_sub(PyObject *v, PyObject *w)
static PyObject *
complex_mul(PyObject *v, PyObject *w)
static PyObject *
complex_div(PyObject *v, PyObject *w)
static PyObject *
complex_classic_div(PyObject *v, PyObject *w)
static PyObject *
complex_remainder(PyObject *v, PyObject *w)
static PyObject *
complex_divmod(PyObject *v, PyObject *w)
static PyObject *
complex_pow(PyObject *v, PyObject *w, PyObject *z)
static PyObject *
complex_int_div(PyObject *v, PyObject *w)
static PyObject *
complex_neg(PyComplexObject *v)
static PyObject *
complex_pos(PyComplexObject *v)
static PyObject *
complex_abs(PyComplexObject *v)
static int
complex_nonzero(PyComplexObject *v)
static int
complex_coerce(PyObject **pv, PyObject **pw)
static PyObject *
complex_richcompare(PyObject *v, PyObject *w, int op)
static PyObject *
complex_int(PyObject *v)
static PyObject *
complex_long(PyObject *v)
static PyObject *
complex_float(PyObject *v)
static PyObject *
complex_conjugate(PyObject *self)
PyDoc_STRVAR(complex_conjugate_doc,
"complex.conjugate() -> complex\n"
"\n"
"Return the complex conjugate of its argument. (3-4j).conjugate() == 3+4j.");
static PyObject *
complex_getnewargs(PyComplexObject *v)
PyDoc_STRVAR(complex__format__doc,
"complex.__format__() -> str\n"
"\n"
"Convert to a string according to format_spec.");
static PyObject *
complex__format__(PyObject* self, PyObject* args)
static PyMethodDef complex_methods[] = ;
static PyMemberDef complex_members[] = ;
static PyObject *
complex_subtype_from_string(PyTypeObject *type, PyObject *v)
static PyObject *
complex_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(complex_doc,
"complex(real[, imag]) -> complex number\n"
"\n"
"Create a complex number from a real part and an optional imaginary part.\n"
"This is equivalent to (real + imag*1j) where imag defaults to 0.");
static PyNumberMethods complex_as_number = ;
PyTypeObject PyComplex_Type = ;
