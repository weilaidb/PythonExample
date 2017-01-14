#define N 624
#define M 397
#define MATRIX_A 0x9908b0dfUL
#define UPPER_MASK 0x80000000UL
#define LOWER_MASK 0x7fffffffUL
typedef struct  RandomObject;
static PyTypeObject Random_Type;
#define RandomObject_Check(v)      (Py_TYPE(v) == &Random_Type)
static unsigned long
genrand_int32(RandomObject *self)
static PyObject *
random_random(RandomObject *self)
static void
init_genrand(RandomObject *self, unsigned long s)
static PyObject *
init_by_array(RandomObject *self, unsigned long init_key[], unsigned long key_length)
static PyObject *
random_seed(RandomObject *self, PyObject *args)
static PyObject *
random_getstate(RandomObject *self)
static PyObject *
random_setstate(RandomObject *self, PyObject *state)
static PyObject *
random_jumpahead(RandomObject *self, PyObject *n)
static PyObject *
random_getrandbits(RandomObject *self, PyObject *args)
static PyObject *
random_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyMethodDef random_methods[] = ;
PyDoc_STRVAR(random_doc,
);
static PyTypeObject Random_Type = ;
PyDoc_STRVAR(module_doc,
);
PyMODINIT_FUNC
init_random(void)
