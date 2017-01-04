#define STRINGLIB_LOCALEUTIL_H
#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
typedef struct  GroupGenerator;
static void
_GroupGenerator_init(GroupGenerator *self, const char *grouping)
static Py_ssize_t
_GroupGenerator_next(GroupGenerator *self)
static void
fill(STRINGLIB_CHAR **digits_end, STRINGLIB_CHAR **buffer_end,
Py_ssize_t n_chars, Py_ssize_t n_zeros, const char* thousands_sep,
Py_ssize_t thousands_sep_len)
Py_ssize_t
_Py_InsertThousandsGrouping(STRINGLIB_CHAR *buffer,
Py_ssize_t n_buffer,
STRINGLIB_CHAR *digits,
Py_ssize_t n_digits,
Py_ssize_t min_width,
const char *grouping,
const char *thousands_sep)
Py_ssize_t
_Py_InsertThousandsGroupingLocale(STRINGLIB_CHAR *buffer,
Py_ssize_t n_buffer,
STRINGLIB_CHAR *digits,
Py_ssize_t n_digits,
Py_ssize_t min_width)
