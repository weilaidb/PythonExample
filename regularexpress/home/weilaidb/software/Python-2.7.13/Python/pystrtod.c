static int
case_insensitive_match(const char *s, const char *t)
double
_Py_parse_inf_or_nan(const char *p, char **endptr)
double
_PyOS_ascii_strtod(const char *nptr, char **endptr)
double
_PyOS_ascii_strtod(const char *nptr, char **endptr)
double
PyOS_ascii_strtod(const char *nptr, char **endptr)
double
PyOS_ascii_atof(const char *nptr)
double
PyOS_string_to_double(const char *s,
char **endptr,
PyObject *overflow_exception)
Py_LOCAL_INLINE(void)
change_decimal_from_locale_to_dot(char* buffer)
#define MIN_EXPONENT_DIGITS 2
Py_LOCAL_INLINE(void)
ensure_minimum_exponent_length(char* buffer, size_t buf_size)
Py_LOCAL_INLINE(void)
remove_trailing_zeros(char *buffer)
Py_LOCAL_INLINE(char *)
ensure_decimal_point(char* buffer, size_t buf_size, int precision)
#define FLOAT_FORMATBUFLEN 120
char *
_PyOS_ascii_formatd(char       *buffer,
size_t      buf_size,
const char *format,
double      d,
int         precision)
char *
PyOS_ascii_formatd(char       *buffer,
size_t      buf_size,
const char *format,
double      d)
PyAPI_FUNC(char *) PyOS_double_to_string(double val,
char format_code,
int precision,
int flags,
int *type)
#define OFS_INF 0
#define OFS_NAN 1
#define OFS_E 2
static char *lc_float_strings[] = ;
static char *uc_float_strings[] = ;
static char *
format_float_short(double d, char format_code,
int mode, Py_ssize_t precision,
int always_add_sign, int add_dot_0_if_integer,
int use_alt_formatting, char **float_strings, int *type)
PyAPI_FUNC(char *) PyOS_double_to_string(double val,
char format_code,
int precision,
int flags,
int *type)
