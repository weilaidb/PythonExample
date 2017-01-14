static PyObject *crypt_crypt(PyObject *self, PyObject *args)
PyDoc_STRVAR(crypt_crypt__doc__,
"crypt(word, salt) -> string\n\
word will usually be a user's password. salt is a 2-character string\n\
which will be used to select one of 4096 variations of DES. The characters\n\
in salt must be either \, or an alphanumeric character. Returns\n\
the hashed password as a string, which will be composed of characters from\n\
the same alphabet as the salt.");
static PyMethodDef crypt_methods[] = ;
PyMODINIT_FUNC
initcrypt(void)
