#define STRINGLIB_SPLIT_H
#error must include "stringlib/fastsearch.h" before including this module
#define MAX_PREALLOC 12
#define PREALLOC_SIZE(maxsplit) \
(maxsplit >= MAX_PREALLOC ? MAX_PREALLOC : maxsplit+1)
#define SPLIT_APPEND(data, left, right)         \
sub = STRINGLIB_NEW((data) + (left),        \
(right) - (left));      \
if (sub == NULL)                            \
goto onError;                           \
if (PyList_Append(list, sub))                                            \
else                                        \
Py_DECREF(sub);
#define SPLIT_ADD(data, left, right)
#define FIX_PREALLOC_SIZE(list) Py_SIZE(list) = count
Py_LOCAL_INLINE(PyObject *)
stringlib_split_whitespace(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_split_char(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR ch,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_split(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sep, Py_ssize_t sep_len,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_rsplit_whitespace(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_rsplit_char(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR ch,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_rsplit(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
const STRINGLIB_CHAR* sep, Py_ssize_t sep_len,
Py_ssize_t maxcount)
Py_LOCAL_INLINE(PyObject *)
stringlib_splitlines(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
int keepends)
