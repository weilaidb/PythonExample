#define PY_SSIZE_T_CLEAN
#define UNIX
# ifdef HAVE_FCNTL_H
#  include <fcntl.h>
# endif
static int
my_getpagesize(void)
static int
my_getallocationgranularity (void)
#if defined(HAVE_SYSCONF) && defined(_SC_PAGESIZE)
static int
my_getpagesize(void)
#define my_getallocationgranularity my_getpagesize
#define my_getpagesize getpagesize
#if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
#  define MAP_ANONYMOUS MAP_ANON
static PyObject *mmap_module_error;
typedef enum
access_mode;
typedef struct  mmap_object;
static void
mmap_object_dealloc(mmap_object *m_obj)
static PyObject *
mmap_close_method(mmap_object *self, PyObject *unused)
#define CHECK_VALID(err)                                                \
do  while (0)
#define CHECK_VALID(err)                                                \
do  while (0)
static PyObject *
mmap_read_byte_method(mmap_object *self,
PyObject *unused)
static PyObject *
mmap_read_line_method(mmap_object *self,
PyObject *unused)
static PyObject *
mmap_read_method(mmap_object *self,
PyObject *args)
static PyObject *
mmap_gfind(mmap_object *self,
PyObject *args,
int reverse)
static PyObject *
mmap_find_method(mmap_object *self,
PyObject *args)
static PyObject *
mmap_rfind_method(mmap_object *self,
PyObject *args)
static int
is_writeable(mmap_object *self)
static int
is_resizeable(mmap_object *self)
static PyObject *
mmap_write_method(mmap_object *self,
PyObject *args)
static PyObject *
mmap_write_byte_method(mmap_object *self,
PyObject *args)
static PyObject *
mmap_size_method(mmap_object *self,
PyObject *unused)
static PyObject *
mmap_resize_method(mmap_object *self,
PyObject *args)
static PyObject *
mmap_tell_method(mmap_object *self, PyObject *unused)
static PyObject *
mmap_flush_method(mmap_object *self, PyObject *args)
static PyObject *
mmap_seek_method(mmap_object *self, PyObject *args)
static PyObject *
mmap_move_method(mmap_object *self, PyObject *args)
static PyObject *
mmap__sizeof__method(mmap_object *self, void *unused)
static struct PyMethodDef mmap_object_methods[] = ;
static Py_ssize_t
mmap_buffer_getreadbuf(mmap_object *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
mmap_buffer_getwritebuf(mmap_object *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
mmap_buffer_getsegcount(mmap_object *self, Py_ssize_t *lenp)
static Py_ssize_t
mmap_buffer_getcharbuffer(mmap_object *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
mmap_length(mmap_object *self)
static PyObject *
mmap_item(mmap_object *self, Py_ssize_t i)
static PyObject *
mmap_slice(mmap_object *self, Py_ssize_t ilow, Py_ssize_t ihigh)
static PyObject *
mmap_subscript(mmap_object *self, PyObject *item)
static PyObject *
mmap_concat(mmap_object *self, PyObject *bb)
static PyObject *
mmap_repeat(mmap_object *self, Py_ssize_t n)
static int
mmap_ass_slice(mmap_object *self, Py_ssize_t ilow, Py_ssize_t ihigh, PyObject *v)
static int
mmap_ass_item(mmap_object *self, Py_ssize_t i, PyObject *v)
static int
mmap_ass_subscript(mmap_object *self, PyObject *item, PyObject *value)
static PySequenceMethods mmap_as_sequence = ;
static PyMappingMethods mmap_as_mapping = ;
static PyBufferProcs mmap_as_buffer = ;
static PyObject *
new_mmap_object(PyTypeObject *type, PyObject *args, PyObject *kwdict);
PyDoc_STRVAR(mmap_doc,
"Windows: mmap(fileno, length[, tagname[, access[, offset]]])\n\
\n\
Maps length bytes from the file specified by the file handle fileno,\n\
and returns a mmap object.  If length is larger than the current size\n\
of the file, the file is extended to contain length bytes.  If length\n\
is 0, the maximum length of the map is the current size of the file,\n\
except that if the file is empty Windows raises an exception (you cannot\n\
create an empty mapping on Windows).\n\
\n\
Unix: mmap(fileno, length[, flags[, prot[, access[, offset]]]])\n\
\n\
Maps length bytes from the file specified by the file descriptor fileno,\n\
and returns a mmap object.  If length is 0, the maximum length of the map\n\
will be the current size of the file when mmap is called.\n\
flags specifies the nature of the mapping. MAP_PRIVATE creates a\n\
private copy-on-write mapping, so changes to the contents of the mmap\n\
object will be private to this process, and MAP_SHARED creates a mapping\n\
that's shared with all other processes mapping the same areas of the file.\n\
The default value is MAP_SHARED.\n\
\n\
To map anonymous memory, pass -1 as the fileno (both versions).");
static PyTypeObject mmap_object_type = ;
#define _Py_PARSE_OFF_T
#define _Py_PARSE_OFF_T
static PyObject *
new_mmap_object(PyTypeObject *type, PyObject *args, PyObject *kwdict)
static PyObject *
new_mmap_object(PyTypeObject *type, PyObject *args, PyObject *kwdict)
static void
setint(PyObject *d, const char *name, long value)
PyMODINIT_FUNC
initmmap(void)
