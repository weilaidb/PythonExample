#define STRINGLIB_COUNT_H
#error must include "stringlib/fastsearch.h" before including this module
Py_LOCAL_INLINE(Py_ssize_t)
stringlib_count(const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sub, Py_ssize_t sub_len,
Py_ssize_t maxcount)
