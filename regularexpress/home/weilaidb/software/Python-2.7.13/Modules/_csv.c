#define MODULE_VERSION "1.0"
#define PyDoc_VAR(name) static char name[]
#define PyDoc_STRVAR(name,str) PyDoc_VAR(name) = PyDoc_STR(str)
#define PyDoc_STR(str) str
#define PyDoc_STR(str) ""
#       if defined(__cplusplus)
#               define PyMODINIT_FUNC extern "C" void
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
"CSV dialect\n"
"\n"
"The Dialect type records CSV parsing and generation options.\n");
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
"CSV reader\n"
"\n"
"Reader objects are responsible for reading and parsing tabular data\n"
"in CSV format.\n"
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
"writerow(sequence)\n"
"\n"
"Construct and write a CSV record from a sequence of fields.  Non-string\n"
"elements will be converted to string.");
static PyObject *
csv_writerow(WriterObj *self, PyObject *seq)
PyDoc_STRVAR(csv_writerows_doc,
"writerows(sequence of sequences)\n"
"\n"
"Construct and write a series of sequences to a csv file.  Non-string\n"
"elements will be converted to string.");
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
"CSV writer\n"
"\n"
"Writer objects are responsible for generating tabular data\n"
"in CSV format from sequence input.\n"
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
"CSV parsing and writing.\n"
"\n"
"This module provides classes that assist in the reading and writing\n"
"of Comma Separated Value (CSV) files, and implements the interface\n"
"described by PEP 305.  Although many CSV files are simple to parse,\n"
"the format is not formally defined by a stable specification and\n"
"is subtle enough that parsing lines of a CSV file with something\n"
"like line.split(\",\") is bound to fail.  The module supports three\n"
"basic APIs: reading, writing, and registration of dialects.\n"
"\n"
"\n"
"DIALECT REGISTRATION:\n"
"\n"
"Readers and writers support a dialect argument, which is a convenient\n"
"handle on a group of settings.  When the dialect argument is a string,\n"
"it identifies one of the dialects previously registered with the module.\n"
"If it is a class or instance, the attributes of the argument are used as\n"
"the settings for the reader or writer:\n"
"\n"
"    class excel:\n"
"        delimiter = ','\n"
"        quotechar = '\"'\n"
"        escapechar = None\n"
"        doublequote = True\n"
"        skipinitialspace = False\n"
"        lineterminator = '\\r\\n'\n"
"        quoting = QUOTE_MINIMAL\n"
"\n"
"SETTINGS:\n"
"\n"
"    * quotechar - specifies a one-character string to use as the \n"
"        quoting character.  It defaults to '\"'.\n"
"    * delimiter - specifies a one-character string to use as the \n"
"        field separator.  It defaults to ','.\n"
"    * skipinitialspace - specifies how to interpret whitespace which\n"
"        immediately follows a delimiter.  It defaults to False, which\n"
"        means that whitespace immediately following a delimiter is part\n"
"        of the following field.\n"
"    * lineterminator -  specifies the character sequence which should \n"
"        terminate rows.\n"
"    * quoting - controls when quotes should be generated by the writer.\n"
"        It can take on any of the following module constants:\n"
"\n"
"        csv.QUOTE_MINIMAL means only when required, for example, when a\n"
"            field contains either the quotechar or the delimiter\n"
"        csv.QUOTE_ALL means that quotes are always placed around fields.\n"
"        csv.QUOTE_NONNUMERIC means that quotes are always placed around\n"
"            fields which do not parse as integers or floating point\n"
"            numbers.\n"
"        csv.QUOTE_NONE means that quotes are never placed around fields.\n"
"    * escapechar - specifies a one-character string used to escape \n"
"        the delimiter when quoting is set to QUOTE_NONE.\n"
"    * doublequote - controls the handling of quotes inside fields.  When\n"
"        True, two consecutive quotes are interpreted as one during read,\n"
"        and when writing, each quote character embedded in the data is\n"
"        written as two quotes\n");
PyDoc_STRVAR(csv_reader_doc,
"    csv_reader = reader(iterable [, dialect='excel']\n"
"                        [optional keyword args])\n"
"    for row in csv_reader:\n"
"        process(row)\n"
"\n"
"The \"iterable\" argument can be any object that returns a line\n"
"of input for each iteration, such as a file object or a list.  The\n"
"optional \"dialect\" parameter is discussed below.  The function\n"
"also accepts optional keyword arguments which override settings\n"
"provided by the dialect.\n"
"\n"
"The returned object is an iterator.  Each iteration returns a row\n"
"of the CSV file (which can span multiple input lines).\n");
PyDoc_STRVAR(csv_writer_doc,
"    csv_writer = csv.writer(fileobj [, dialect='excel']\n"
"                            [optional keyword args])\n"
"    for row in sequence:\n"
"        csv_writer.writerow(row)\n"
"\n"
"    [or]\n"
"\n"
"    csv_writer = csv.writer(fileobj [, dialect='excel']\n"
"                            [optional keyword args])\n"
"    csv_writer.writerows(rows)\n"
"\n"
"The \"fileobj\" argument can be any object that supports the file API.\n");
PyDoc_STRVAR(csv_list_dialects_doc,
"Return a list of all know dialect names.\n"
"    names = csv.list_dialects()");
PyDoc_STRVAR(csv_get_dialect_doc,
"Return the dialect instance associated with name.\n"
"    dialect = csv.get_dialect(name)");
PyDoc_STRVAR(csv_register_dialect_doc,
"Create a mapping from a string name to a dialect class.\n"
"    dialect = csv.register_dialect(name, dialect)");
PyDoc_STRVAR(csv_unregister_dialect_doc,
"Delete the name/dialect mapping associated with a string name.\n"
"    csv.unregister_dialect(name)");
PyDoc_STRVAR(csv_field_size_limit_doc,
"Sets an upper limit on parsed fields.\n"
"    csv.field_size_limit([limit])\n"
"\n"
"Returns old limit. If limit is not given, no new limit is set and\n"
"the old limit is returned");
static struct PyMethodDef csv_methods[] = ;
PyMODINIT_FUNC
init_csv(void)
