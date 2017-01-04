PyDoc_STRVAR(cPickle_module_documentation,
"C implementation and optimization of the Python pickle module.");
#define Py_eval_input eval_input
#define DEL_LIST_SLICE(list, from, to) (PyList_SetSlice(list, from, to, NULL))
#define WRITE_BUF_SIZE 256
#define HIGHEST_PROTOCOL 2
#  undef UNICODE
#define MARK        '('
#define STOP        '.'
#define POP         '0'
#define POP_MARK    '1'
#define DUP         '2'
#define FLOAT       'F'
#define BINFLOAT    'G'
#define INT         'I'
#define BININT      'J'
#define BININT1     'K'
#define LONG        'L'
#define BININT2     'M'
#define NONE        'N'
#define PERSID      'P'
#define BINPERSID   'Q'
#define REDUCE      'R'
#define STRING      'S'
#define BINSTRING   'T'
#define SHORT_BINSTRING 'U'
#define UNICODE     'V'
#define BINUNICODE  'X'
#define APPEND      'a'
#define BUILD       'b'
#define GLOBAL      'c'
#define DICT        'd'
#define EMPTY_DICT  '}'
#define APPENDS     'e'
#define GET         'g'
#define BINGET      'h'
#define INST        'i'
#define LONG_BINGET 'j'
#define LIST        'l'
#define EMPTY_LIST  ']'
#define OBJ         'o'
#define PUT         'p'
#define BINPUT      'q'
#define LONG_BINPUT 'r'
#define SETITEM     's'
#define TUPLE       't'
#define EMPTY_TUPLE ')'
#define SETITEMS    'u'
#define PROTO    '\x80'
#define NEWOBJ   '\x81'
#define EXT1     '\x82'
#define EXT2     '\x83'
#define EXT4     '\x84'
#define TUPLE1   '\x85'
#define TUPLE2   '\x86'
#define TUPLE3   '\x87'
#define NEWTRUE  '\x88'
#define NEWFALSE '\x89'
#define LONG1    '\x8a'
#define LONG4    '\x8b'
#undef TRUE
#define TRUE        "I01\n"
#undef FALSE
#define FALSE       "I00\n"
#define BATCHSIZE 1000
static char MARKv = MARK;
static PyObject *PickleError;
static PyObject *PicklingError;
static PyObject *UnpickleableError;
static PyObject *UnpicklingError;
static PyObject *BadPickleGet;
static PyObject *empty_tuple;
static PyObject *dispatch_table;
static PyObject *extension_registry;
static PyObject *inverted_registry;
static PyObject *extension_cache;
static PyObject *two_tuple;
static PyObject *__class___str, *__getinitargs___str, *__dict___str,
*__getstate___str, *__setstate___str, *__name___str, *__reduce___str,
*__reduce_ex___str,
*write_str, *append_str,
*read_str, *readline_str, *__main___str,
*dispatch_table_str;
typedef struct  Pdata;
static void
Pdata_dealloc(Pdata *self)
static PyTypeObject PdataType = ;
#define Pdata_Check(O) (Py_TYPE(O) == &PdataType)
static PyObject *
Pdata_New(void)
static int
stackUnderflow(void)
static int
Pdata_clear(Pdata *self, Py_ssize_t clearto)
static int
Pdata_grow(Pdata *self)
#define PDATA_POP(D, V)
#define PDATA_PUSH(D, O, ER)
#define PDATA_APPEND(D, O, ER)
static PyObject *
Pdata_popTuple(Pdata *self, Py_ssize_t start)
static PyObject *
Pdata_popList(Pdata *self, Py_ssize_t start)
#define ARG_TUP(self, o)
#define FREE_ARG_TUP(self)
typedef struct Picklerobject  Picklerobject;
#define PY_CPICKLE_FAST_LIMIT 50
static PyTypeObject Picklertype;
typedef struct Unpicklerobject  Unpicklerobject;
static PyTypeObject Unpicklertype;
static int save(Picklerobject *, PyObject *, int);
static int put2(Picklerobject *, PyObject *);
static
PyObject *
cPickle_ErrFormat(PyObject *ErrType, char *stringformat, char *format, ...)
static Py_ssize_t
write_file(Picklerobject *self, const char *s, Py_ssize_t  n)
static Py_ssize_t
write_cStringIO(Picklerobject *self, const char *s, Py_ssize_t  n)
static Py_ssize_t
write_none(Picklerobject *self, const char *s, Py_ssize_t  n)
static Py_ssize_t
write_other(Picklerobject *self, const char *s, Py_ssize_t  n)
static Py_ssize_t
read_file(Unpicklerobject *self, char **s, Py_ssize_t n)
static Py_ssize_t
readline_file(Unpicklerobject *self, char **s)
static Py_ssize_t
read_cStringIO(Unpicklerobject *self, char **s, Py_ssize_t  n)
static Py_ssize_t
readline_cStringIO(Unpicklerobject *self, char **s)
static Py_ssize_t
read_other(Unpicklerobject *self, char **s, Py_ssize_t  n)
static Py_ssize_t
readline_other(Unpicklerobject *self, char **s)
static char *
pystrndup(const char *s, Py_ssize_t n)
static int
get(Picklerobject *self, PyObject *id)
static int
put(Picklerobject *self, PyObject *ob)
static int
put2(Picklerobject *self, PyObject *ob)
static PyObject *
whichmodule(PyObject *global, PyObject *global_name)
static int
fast_save_enter(Picklerobject *self, PyObject *obj)
int
fast_save_leave(Picklerobject *self, PyObject *obj)
static int
save_none(Picklerobject *self, PyObject *args)
static int
save_bool(Picklerobject *self, PyObject *args)
static int
save_int(Picklerobject *self, PyObject *args)
static int
save_long(Picklerobject *self, PyObject *args)
static int
save_float(Picklerobject *self, PyObject *args)
static int
save_string(Picklerobject *self, PyObject *args, int doput)
static PyObject *
modified_EncodeRawUnicodeEscape(const Py_UNICODE *s, Py_ssize_t size)
static int
save_unicode(Picklerobject *self, PyObject *args, int doput)
static int
store_tuple_elements(Picklerobject *self, PyObject *t, int len)
static int
save_tuple(Picklerobject *self, PyObject *args)
static int
batch_list(Picklerobject *self, PyObject *iter)
static int
save_list(Picklerobject *self, PyObject *args)
static int
batch_dict(Picklerobject *self, PyObject *iter)
static int
batch_dict_exact(Picklerobject *self, PyObject *obj)
static int
save_dict(Picklerobject *self, PyObject *args)
static int
save_inst(Picklerobject *self, PyObject *args)
static int
save_global(Picklerobject *self, PyObject *args, PyObject *name)
static int
save_pers(Picklerobject *self, PyObject *args, PyObject *f)
static int
save_reduce(Picklerobject *self, PyObject *args, PyObject *fn, PyObject *ob)
static int
save(Picklerobject *self, PyObject *args, int pers_save)
static int
dump(Picklerobject *self, PyObject *args)
static PyObject *
Pickle_clear_memo(Picklerobject *self, PyObject *args)
static PyObject *
Pickle_getvalue(Picklerobject *self, PyObject *args)
static PyObject *
Pickler_dump(Picklerobject *self, PyObject *args)
static struct PyMethodDef Pickler_methods[] =
;
static Picklerobject *
newPicklerobject(PyObject *file, int proto)
static PyObject *
get_Pickler(PyObject *self, PyObject *args, PyObject *kwds)
static void
Pickler_dealloc(Picklerobject *self)
static int
Pickler_traverse(Picklerobject *self, visitproc visit, void *arg)
static int
Pickler_clear(Picklerobject *self)
static PyObject *
Pickler_get_pers_func(Picklerobject *p)
static int
Pickler_set_pers_func(Picklerobject *p, PyObject *v)
static int
Pickler_set_inst_pers_func(Picklerobject *p, PyObject *v)
static PyObject *
Pickler_get_memo(Picklerobject *p)
static int
Pickler_set_memo(Picklerobject *p, PyObject *v)
static PyObject *
Pickler_get_error(Picklerobject *p)
static PyMemberDef Pickler_members[] = ;
static PyGetSetDef Pickler_getsets[] = ;
PyDoc_STRVAR(Picklertype__doc__,
"Objects that know how to pickle objects\n");
static PyTypeObject Picklertype = ;
static PyObject *
find_class(PyObject *py_module_name, PyObject *py_global_name, PyObject *fc)
static Py_ssize_t
marker(Unpicklerobject *self)
static int
load_none(Unpicklerobject *self)
static int
bad_readline(void)
static int
load_int(Unpicklerobject *self)
static int
load_bool(Unpicklerobject *self, PyObject *boolean)
static long
calc_binint(char *s, int x)
static int
load_binintx(Unpicklerobject *self, char *s, int  x)
static int
load_binint(Unpicklerobject *self)
static int
load_binint1(Unpicklerobject *self)
static int
load_binint2(Unpicklerobject *self)
static int
load_long(Unpicklerobject *self)
static int
load_counted_long(Unpicklerobject *self, int size)
static int
load_float(Unpicklerobject *self)
static int
load_binfloat(Unpicklerobject *self)
static int
load_string(Unpicklerobject *self)
static int
load_binstring(Unpicklerobject *self)
static int
load_short_binstring(Unpicklerobject *self)
static int
load_unicode(Unpicklerobject *self)
static int
load_binunicode(Unpicklerobject *self)
static int
load_counted_tuple(Unpicklerobject *self, int len)
static int
load_tuple(Unpicklerobject *self)
static int
load_empty_list(Unpicklerobject *self)
static int
load_empty_dict(Unpicklerobject *self)
static int
load_list(Unpicklerobject *self)
static int
load_dict(Unpicklerobject *self)
static PyObject *
Instance_New(PyObject *cls, PyObject *args)
static int
load_obj(Unpicklerobject *self)
static int
load_inst(Unpicklerobject *self)
static int
load_newobj(Unpicklerobject *self)
static int
load_global(Unpicklerobject *self)
static int
load_persid(Unpicklerobject *self)
static int
load_binpersid(Unpicklerobject *self)
static int
load_pop(Unpicklerobject *self)
static int
load_pop_mark(Unpicklerobject *self)
static int
load_dup(Unpicklerobject *self)
static int
load_get(Unpicklerobject *self)
static int
load_binget(Unpicklerobject *self)
static int
load_long_binget(Unpicklerobject *self)
static int
load_extension(Unpicklerobject *self, int nbytes)
static int
load_put(Unpicklerobject *self)
static int
load_binput(Unpicklerobject *self)
static int
load_long_binput(Unpicklerobject *self)
static int
do_append(Unpicklerobject *self, Py_ssize_t  x)
static int
load_append(Unpicklerobject *self)
static int
load_appends(Unpicklerobject *self)
static Py_ssize_t
do_setitems(Unpicklerobject *self, Py_ssize_t x)
static int
load_setitem(Unpicklerobject *self)
static int
load_setitems(Unpicklerobject *self)
static int
load_build(Unpicklerobject *self)
static int
load_mark(Unpicklerobject *self)
static int
load_reduce(Unpicklerobject *self)
static int
load_proto(Unpicklerobject *self)
static PyObject *
load(Unpicklerobject *self)
static int
noload_obj(Unpicklerobject *self)
static int
noload_inst(Unpicklerobject *self)
static int
noload_newobj(Unpicklerobject *self)
static int
noload_global(Unpicklerobject *self)
static int
noload_reduce(Unpicklerobject *self)
static int
noload_build(Unpicklerobject *self)
static int
noload_extension(Unpicklerobject *self, int nbytes)
static int
noload_append(Unpicklerobject *self)
static int
noload_appends(Unpicklerobject *self)
static int
noload_setitem(Unpicklerobject *self)
static int
noload_setitems(Unpicklerobject *self)
static PyObject *
noload(Unpicklerobject *self)
static PyObject *
Unpickler_load(Unpicklerobject *self, PyObject *unused)
static PyObject *
Unpickler_noload(Unpicklerobject *self, PyObject *unused)
static struct PyMethodDef Unpickler_methods[] = ;
static Unpicklerobject *
newUnpicklerobject(PyObject *f)
static PyObject *
get_Unpickler(PyObject *self, PyObject *file)
static void
Unpickler_dealloc(Unpicklerobject *self)
static int
Unpickler_traverse(Unpicklerobject *self, visitproc visit, void *arg)
static int
Unpickler_clear(Unpicklerobject *self)
static PyObject *
Unpickler_getattr(Unpicklerobject *self, char *name)
static int
Unpickler_setattr(Unpicklerobject *self, char *name, PyObject *value)
static PyObject *
cpm_dump(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
cpm_dumps(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
cpm_load(PyObject *self, PyObject *ob)
static PyObject *
cpm_loads(PyObject *self, PyObject *args)
PyDoc_STRVAR(Unpicklertype__doc__,
"Objects that know how to unpickle");
static PyTypeObject Unpicklertype = ;
static struct PyMethodDef cPickle_methods[] = ;
static int
init_stuff(PyObject *module_dict)
#define PyMODINIT_FUNC void
PyMODINIT_FUNC
initcPickle(void)
