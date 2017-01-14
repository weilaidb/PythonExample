#if PY_VERSION_HEX < 0x03000000
#define PyLong_FromSsize_t _PyLong_FromSsize_t
#define INITIAL_SIZE_INCREMENT 100
#define SIZE_MULTIPLIER 2
#define MAX_SIZE_INCREMENT  3200
typedef struct  SubString;
typedef enum  AutoNumberState;
typedef struct  AutoNumber;
static PyObject *
build_string(SubString *input, PyObject *args, PyObject *kwargs,
int recursion_depth, AutoNumber *auto_number);
static void
AutoNumber_Init(AutoNumber *auto_number)
Py_LOCAL_INLINE(void)
SubString_init(SubString *str, STRINGLIB_CHAR *p, Py_ssize_t len)
Py_LOCAL_INLINE(PyObject *)
SubString_new_object(SubString *str)
Py_LOCAL_INLINE(PyObject *)
SubString_new_object_or_empty(SubString *str)
static int
autonumber_state_error(AutoNumberState state, int field_name_is_empty)
typedef struct  OutputString;
static int
output_initialize(OutputString *output, Py_ssize_t size)
static int
output_extend(OutputString *output, Py_ssize_t count)
static int
output_data(OutputString *output, const STRINGLIB_CHAR *s, Py_ssize_t count)
static Py_ssize_t
get_integer(const SubString *str)
static PyObject *
getattr(PyObject *obj, SubString *name)
static PyObject *
getitem_sequence(PyObject *obj, Py_ssize_t idx)
static PyObject *
getitem_idx(PyObject *obj, Py_ssize_t idx)
static PyObject *
getitem_str(PyObject *obj, SubString *name)
typedef struct  FieldNameIterator;
static int
FieldNameIterator_init(FieldNameIterator *self, STRINGLIB_CHAR *ptr,
Py_ssize_t len)
static int
_FieldNameIterator_attr(FieldNameIterator *self, SubString *name)
static int
_FieldNameIterator_item(FieldNameIterator *self, SubString *name)
static int
FieldNameIterator_next(FieldNameIterator *self, int *is_attribute,
Py_ssize_t *name_idx, SubString *name)
static int
field_name_split(STRINGLIB_CHAR *ptr, Py_ssize_t len, SubString *first,
Py_ssize_t *first_idx, FieldNameIterator *rest,
AutoNumber *auto_number)
static PyObject *
get_field_object(SubString *input, PyObject *args, PyObject *kwargs,
AutoNumber *auto_number)
static int
render_field(PyObject *fieldobj, SubString *format_spec, OutputString *output)
static int
parse_field(SubString *str, SubString *field_name, SubString *format_spec,
STRINGLIB_CHAR *conversion)
typedef struct  MarkupIterator;
static int
MarkupIterator_init(MarkupIterator *self, STRINGLIB_CHAR *ptr, Py_ssize_t len)
static int
MarkupIterator_next(MarkupIterator *self, SubString *literal,
int *field_present, SubString *field_name,
SubString *format_spec, STRINGLIB_CHAR *conversion,
int *format_spec_needs_expanding)
') && (at_end || (c != *self->str.ptr)))
if (at_end && c == '
static PyObject *
do_conversion(PyObject *obj, STRINGLIB_CHAR conversion)
static int
output_markup(SubString *field_name, SubString *format_spec,
int format_spec_needs_expanding, STRINGLIB_CHAR conversion,
OutputString *output, PyObject *args, PyObject *kwargs,
int recursion_depth, AutoNumber *auto_number)
static int
do_markup(SubString *input, PyObject *args, PyObject *kwargs,
OutputString *output, int recursion_depth, AutoNumber *auto_number)
static PyObject *
build_string(SubString *input, PyObject *args, PyObject *kwargs,
int recursion_depth, AutoNumber *auto_number)
static PyObject *
do_string_format(PyObject *self, PyObject *args, PyObject *kwargs)
typedef struct  formatteriterobject;
static void
formatteriter_dealloc(formatteriterobject *it)
static PyObject *
formatteriter_next(formatteriterobject *it)
static PyMethodDef formatteriter_methods[] = ;
static PyTypeObject PyFormatterIter_Type = ;
static PyObject *
formatter_parser(STRINGLIB_OBJECT *self)
typedef struct  fieldnameiterobject;
static void
fieldnameiter_dealloc(fieldnameiterobject *it)
static PyObject *
fieldnameiter_next(fieldnameiterobject *it)
static PyMethodDef fieldnameiter_methods[] = ;
static PyTypeObject PyFieldNameIter_Type = ;
static PyObject *
formatter_field_name_split(STRINGLIB_OBJECT *self)
