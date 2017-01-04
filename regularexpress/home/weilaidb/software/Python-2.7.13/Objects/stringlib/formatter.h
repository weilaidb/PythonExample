static void
unknown_presentation_type(STRINGLIB_CHAR presentation_type,
const char* type_name)
static void
invalid_comma_type(STRINGLIB_CHAR presentation_type)
static int
get_integer(STRINGLIB_CHAR **ptr, STRINGLIB_CHAR *end,
Py_ssize_t *result)
Py_LOCAL_INLINE(int)
is_alignment_token(STRINGLIB_CHAR c)
Py_LOCAL_INLINE(int)
is_sign_element(STRINGLIB_CHAR c)
typedef struct  InternalFormatSpec;
static int
parse_internal_render_format_spec(STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len,
InternalFormatSpec *format,
char default_type,
char default_align)
static void
calc_padding(Py_ssize_t nchars, Py_ssize_t width, STRINGLIB_CHAR align,
Py_ssize_t *n_lpadding, Py_ssize_t *n_rpadding,
Py_ssize_t *n_total)
static STRINGLIB_CHAR *
fill_padding(STRINGLIB_CHAR *p, Py_ssize_t nchars, STRINGLIB_CHAR fill_char,
Py_ssize_t n_lpadding, Py_ssize_t n_rpadding)
#if defined FORMAT_FLOAT || defined FORMAT_LONG || defined FORMAT_COMPLEX
#define LT_CURRENT_LOCALE 0
#define LT_DEFAULT_LOCALE 1
#define LT_NO_LOCALE 2
typedef struct  LocaleInfo;
typedef struct  NumberFieldWidths;
static void
parse_number(STRINGLIB_CHAR *ptr, Py_ssize_t len,
Py_ssize_t *n_remainder, int *has_decimal)
static Py_ssize_t
calc_number_widths(NumberFieldWidths *spec, Py_ssize_t n_prefix,
STRINGLIB_CHAR sign_char, STRINGLIB_CHAR *number,
Py_ssize_t n_number, Py_ssize_t n_remainder,
int has_decimal, const LocaleInfo *locale,
const InternalFormatSpec *format)
static void
fill_number(STRINGLIB_CHAR *buf, const NumberFieldWidths *spec,
STRINGLIB_CHAR *digits, Py_ssize_t n_digits,
STRINGLIB_CHAR *prefix, STRINGLIB_CHAR fill_char,
LocaleInfo *locale, int toupper)
static char no_grouping[1] = ;
static void
get_locale_info(int type, LocaleInfo *locale_info)
static PyObject *
format_string_internal(PyObject *value, const InternalFormatSpec *format)
#if defined FORMAT_LONG || defined FORMAT_INT
typedef PyObject*
(*IntOrLongToString)(PyObject *value, int base);
static PyObject *
format_int_or_long_internal(PyObject *value, const InternalFormatSpec *format,
IntOrLongToString tostring)
#if STRINGLIB_IS_UNICODE
static void
strtounicode(Py_UNICODE *buffer, const char *charbuffer, Py_ssize_t len)
static PyObject *
format_float_internal(PyObject *value,
const InternalFormatSpec *format)
static PyObject *
format_complex_internal(PyObject *value,
const InternalFormatSpec *format)
PyObject *
FORMAT_STRING(PyObject *obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len)
#if defined FORMAT_LONG || defined FORMAT_INT
static PyObject*
format_int_or_long(PyObject* obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len,
IntOrLongToString tostring)
#if PY_VERSION_HEX >= 0x03000000
#define long_format _PyLong_Format
static PyObject*
long_format(PyObject* value, int base)
PyObject *
FORMAT_LONG(PyObject *obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len)
static PyObject*
int_format(PyObject* value, int base)
PyObject *
FORMAT_INT(PyObject *obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len)
PyObject *
FORMAT_FLOAT(PyObject *obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len)
PyObject *
FORMAT_COMPLEX(PyObject *obj,
STRINGLIB_CHAR *format_spec,
Py_ssize_t format_spec_len)
