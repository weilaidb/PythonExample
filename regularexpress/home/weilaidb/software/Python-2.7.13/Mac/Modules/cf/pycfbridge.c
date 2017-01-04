PyObject *
PyCF_CF2Python(CFTypeRef src)
PyObject *
PyCF_CF2Python_sequence(CFArrayRef src)
PyObject *
PyCF_CF2Python_mapping(CFTypeRef src)
PyObject *
PyCF_CF2Python_simple(CFTypeRef src)
PyObject *
PyCF_CF2Python_string(CFStringRef src)
int
PyCF_Python2CF(PyObject *src, CFTypeRef *dst)
int
PyCF_Python2CF_sequence(PyObject *src, CFArrayRef *dst)
int
PyCF_Python2CF_mapping(PyObject *src, CFDictionaryRef *dst)
int
PyCF_Python2CF_simple(PyObject *src, CFTypeRef *dst)
int
PyCF_Python2CF_string(PyObject *src, CFStringRef *dst)
