#define STRINGLIB_FIND_H
#error must include "stringlib/fastsearch.h" before including this module
Py_LOCAL_INLINE(Py_ssize_t)
stringlib_find(const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sub, Py_ssize_t sub_len,
Py_ssize_t offset)
Py_LOCAL_INLINE(Py_ssize_t)
stringlib_rfind(const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sub, Py_ssize_t sub_len,
Py_ssize_t offset)
#define ADJUST_INDICES(start, end, len)         \
if (end > len)                              \
end = len;                              \
else if (end < 0)                                            \
if (start < 0)
Py_LOCAL_INLINE(Py_ssize_t)
stringlib_find_slice(const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sub, Py_ssize_t sub_len,
Py_ssize_t start, Py_ssize_t end)
Py_LOCAL_INLINE(Py_ssize_t)
stringlib_rfind_slice(const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sub, Py_ssize_t sub_len,
Py_ssize_t start, Py_ssize_t end)
Py_LOCAL_INLINE(int)
stringlib_contains_obj(PyObject* str, PyObject* sub)
#define FORMAT_BUFFER_SIZE 50
Py_LOCAL_INLINE(int)
stringlib_parse_args_finds(const char * function_name, PyObject *args,
PyObject **subobj,
Py_ssize_t *start, Py_ssize_t *end)
#undef FORMAT_BUFFER_SIZE
#if STRINGLIB_IS_UNICODE
Py_LOCAL_INLINE(int)
stringlib_parse_args_finds_unicode(const char * function_name, PyObject *args,
PyUnicodeObject **substring,
Py_ssize_t *start, Py_ssize_t *end)
