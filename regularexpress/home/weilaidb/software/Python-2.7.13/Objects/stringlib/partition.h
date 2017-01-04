#define STRINGLIB_PARTITION_H
#error must include "stringlib/fastsearch.h" before including this module
Py_LOCAL_INLINE(PyObject*)
stringlib_partition(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
PyObject* sep_obj,
const STRINGLIB_CHAR* sep, Py_ssize_t sep_len)
Py_LOCAL_INLINE(PyObject*)
stringlib_rpartition(PyObject* str_obj,
const STRINGLIB_CHAR* str, Py_ssize_t str_len,
PyObject* sep_obj,
const STRINGLIB_CHAR* sep, Py_ssize_t sep_len)
