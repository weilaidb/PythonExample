#define PY_SSIZE_T_CLEAN
static PyThread_type_lock zlib_lock = NULL;
#define ENTER_ZLIB \
Py_BEGIN_ALLOW_THREADS \
PyThread_acquire_lock(zlib_lock, 1); \
Py_END_ALLOW_THREADS
#define LEAVE_ZLIB \
PyThread_release_lock(zlib_lock);
#define ENTER_ZLIB
#define LEAVE_ZLIB
#define DEFLATED   8
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#define DEF_WBITS MAX_WBITS
#define DEFAULTALLOC (16*1024)
#define PyInit_zlib initzlib
static PyTypeObject Comptype;
static PyTypeObject Decomptype;
static PyObject *ZlibError;
typedef struct
compobject;
static void
zlib_error(z_stream zst, int err, char *msg)
PyDoc_STRVAR(compressobj__doc__,
);
PyDoc_STRVAR(decompressobj__doc__,
);
static compobject *
newcompobject(PyTypeObject *type)
static void
arrange_input_buffer(z_stream *zst, Py_ssize_t *remains)
static Py_ssize_t
arrange_output_buffer_with_maximum(z_stream *zst, PyObject **buffer,
Py_ssize_t length,
Py_ssize_t max_length)
static Py_ssize_t
arrange_output_buffer(z_stream *zst, PyObject **buffer, Py_ssize_t length)
PyDoc_STRVAR(compress__doc__,
);
static PyObject *
PyZlib_compress(PyObject *self, PyObject *args)
PyDoc_STRVAR(decompress__doc__,
);
static PyObject *
PyZlib_decompress(PyObject *self, PyObject *args)
static PyObject *
PyZlib_compressobj(PyObject *selfptr, PyObject *args)
static PyObject *
PyZlib_decompressobj(PyObject *selfptr, PyObject *args)
static void
Comp_dealloc(compobject *self)
static void
Decomp_dealloc(compobject *self)
PyDoc_STRVAR(comp_compress__doc__,
);
static PyObject *
PyZlib_objcompress(compobject *self, PyObject *args)
static int
save_unconsumed_input(compobject *self, Byte *input, Py_ssize_t inplen,
int err)
PyDoc_STRVAR(decomp_decompress__doc__,
);
static PyObject *
PyZlib_objdecompress(compobject *self, PyObject *args)
PyDoc_STRVAR(comp_flush__doc__,
);
static PyObject *
PyZlib_flush(compobject *self, PyObject *args)
PyDoc_STRVAR(comp_copy__doc__,
);
static PyObject *
PyZlib_copy(compobject *self)
PyDoc_STRVAR(decomp_copy__doc__,
);
static PyObject *
PyZlib_uncopy(compobject *self)
PyDoc_STRVAR(decomp_flush__doc__,
);
static PyObject *
PyZlib_unflush(compobject *self, PyObject *args)
static PyMethodDef comp_methods[] =
;
static PyMethodDef Decomp_methods[] =
;
static PyObject *
Comp_getattr(compobject *self, char *name)
static PyObject *
Decomp_getattr(compobject *self, char *name)
PyDoc_STRVAR(adler32__doc__,
);
static PyObject *
PyZlib_adler32(PyObject *self, PyObject *args)
;
static PyTypeObject Decomptype = ;
PyDoc_STRVAR(zlib_module_documentation,
);
PyMODINIT_FUNC
PyInit_zlib(void)
