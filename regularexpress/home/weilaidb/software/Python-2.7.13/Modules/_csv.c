#define MODULE_VERSION
#define PyDoc_VAR(name) static char name[]
#define PyDoc_STRVAR(name,str) PyDoc_VAR(name) = PyDoc_STR(str)
#define PyDoc_STR(str) str
#define PyDoc_STR(str)
#       if defined(__cplusplus)
#               define PyMODINIT_FUNC extern  void
#       else
#               define PyMODINIT_FUNC void
#       endif
#define Py_CLEAR(op)                                            \
do  while (0)
#define Py_VISIT(op)                                                    \
do  while (0)
#define IS_BASESTRING(o) \
PyObject_TypeCheck(o, &PyBaseString_Type)
static PyObject *error_obj;
static PyObject *dialects;
static long field_limit = 128 * 1024;
typedef enum  ParserState;
typedef enum  QuoteStyle;
typedef struct  StyleDesc;
static StyleDesc quote_styles[] = ;
typedef struct  DialectObj;
staticforward PyTypeObject Dialect_Type;
typedef struct  ReaderObj;
staticforward PyTypeObject Reader_Type;
#define ReaderObject_Check(v)   (Py_TYPE(v) == &Reader_Type)
typedef struct  WriterObj;
staticforward PyTypeObject Writer_Type;
static PyObject *
get_dialect_from_registry(PyObject * name_obj)
static PyObject *
get_string(PyObject *str)
static PyObject *
get_nullchar_as_None(char c)
static PyObject *
Dialect_get_lineterminator(DialectObj *self)
static PyObject *
Dialect_get_escapechar(DialectObj *self)
static PyObject *
Dialect_get_quotechar(DialectObj *self)
static PyObject *
Dialect_get_quoting(DialectObj *self)
static int
_set_bool(const char *name, int *target, PyObject *src, int dflt)
static int
_set_int(const char *name, int *target, PyObject *src, int dflt)
static int
_set_char(const char *name, char *target, PyObject *src, char dflt)
static int
_set_str(const char *name, PyObject **target, PyObject *src, const char *dflt)
static int
dialect_check_quoting(int quoting)
#define D_OFF(x) offsetof(DialectObj, x)
static struct PyMemberDef Dialect_memberlist[] = ;
static PyGetSetDef Dialect_getsetlist[] = ;
static void
Dialect_dealloc(DialectObj *self)
static char *dialect_kws[] = ;
static PyObject *
dialect_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(Dialect_Type_doc,
);
static PyTypeObject Dialect_Type = ;
static PyObject *
_call_dialect(PyObject *dialect_inst, PyObject *kwargs)
static int
parse_save_field(ReaderObj *self)
static int
parse_grow_buff(ReaderObj *self)
static int
parse_add_char(ReaderObj *self, char c)
static int
parse_process_char(ReaderObj *self, char c)
static int
parse_reset(ReaderObj *self)
static PyObject *
Reader_iternext(ReaderObj *self)
static void
Reader_dealloc(ReaderObj *self)
static int
Reader_traverse(ReaderObj *self, visitproc visit, void *arg)
static int
Reader_clear(ReaderObj *self)
PyDoc_STRVAR(Reader_Type_doc,
);
static struct PyMethodDef Reader_methods[] = ;
#define R_OFF(x) offsetof(ReaderObj, x)
static struct PyMemberDef Reader_memberlist[] = ;
static PyTypeObject Reader_Type = ;
static PyObject *
csv_reader(PyObject *module, PyObject *args, PyObject *keyword_args)
static void
join_reset(WriterObj *self)
#define MEM_INCR 32768
static int
join_append_data(WriterObj *self, char *field, int quote_empty,
int *quoted, int copy_phase)
static int
join_check_rec_size(WriterObj *self, int rec_len)
static int
join_append(WriterObj *self, char *field, int *quoted, int quote_empty)
static int
join_append_lineterminator(WriterObj *self)
PyDoc_STRVAR(csv_writerow_doc,
);
static PyObject *
csv_writerow(WriterObj *self, PyObject *seq)
PyDoc_STRVAR(csv_writerows_doc,
);
static PyObject *
csv_writerows(WriterObj *self, PyObject *seqseq)
static struct PyMethodDef Writer_methods[] = ;
#define W_OFF(x) offsetof(WriterObj, x)
static struct PyMemberDef Writer_memberlist[] = ;
static void
Writer_dealloc(WriterObj *self)
static int
Writer_traverse(WriterObj *self, visitproc visit, void *arg)
static int
Writer_clear(WriterObj *self)
PyDoc_STRVAR(Writer_Type_doc,
);
static PyTypeObject Writer_Type = ;
static PyObject *
csv_writer(PyObject *module, PyObject *args, PyObject *keyword_args)
static PyObject *
csv_list_dialects(PyObject *module, PyObject *args)
static PyObject *
csv_register_dialect(PyObject *module, PyObject *args, PyObject *kwargs)
static PyObject *
csv_unregister_dialect(PyObject *module, PyObject *name_obj)
static PyObject *
csv_get_dialect(PyObject *module, PyObject *name_obj)
static PyObject *
csv_field_size_limit(PyObject *module, PyObject *args)
PyDoc_STRVAR(csv_module_doc,
);
PyDoc_STRVAR(csv_reader_doc,
);
PyDoc_STRVAR(csv_writer_doc,
);
PyDoc_STRVAR(csv_list_dialects_doc,
);
PyDoc_STRVAR(csv_get_dialect_doc,
);
PyDoc_STRVAR(csv_register_dialect_doc,
);
PyDoc_STRVAR(csv_unregister_dialect_doc,
);
PyDoc_STRVAR(csv_field_size_limit_doc,
);
static struct PyMethodDef csv_methods[] = ;
PyMODINIT_FUNC
init_csv(void)
