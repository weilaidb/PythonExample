typedef struct  md5object;
static PyTypeObject MD5type;
#define is_md5object(v)         ((v)->ob_type == &MD5type)
static md5object *
newmd5object(void)
static void
md5_dealloc(md5object *md5p)
static PyObject *
md5_update(md5object *self, PyObject *args)
PyDoc_STRVAR(update_doc,
"update (arg)\n\
\n\
Update the md5 object with the string arg. Repeated calls are\n\
equivalent to a single call with the concatenation of all the\n\
arguments.");
static PyObject *
md5_digest(md5object *self)
PyDoc_STRVAR(digest_doc,
"digest() -> string\n\
\n\
Return the digest of the strings passed to the update() method so\n\
far. This is a 16-byte string which may contain non-ASCII characters,\n\
including null bytes.");
static PyObject *
md5_hexdigest(md5object *self)
PyDoc_STRVAR(hexdigest_doc,
"hexdigest() -> string\n\
\n\
Like digest(), but returns the digest as a string of hexadecimal digits.");
static PyObject *
md5_copy(md5object *self)
PyDoc_STRVAR(copy_doc,
"copy() -> md5 object\n\
\n\
Return a copy (``clone'') of the md5 object.");
static PyMethodDef md5_methods[] = ;
static PyObject *
md5_get_block_size(PyObject *self, void *closure)
static PyObject *
md5_get_digest_size(PyObject *self, void *closure)
static PyObject *
md5_get_name(PyObject *self, void *closure)
static PyGetSetDef md5_getseters[] = ;
PyDoc_STRVAR(module_doc,
"This module implements the interface to RSA's MD5 message digest\n\
algorithm (see also Internet RFC 1321). Its use is quite\n\
straightforward: use the new() to create an md5 object. You can now\n\
feed this object with arbitrary strings using the update() method, and\n\
at any point you can ask it for the digest (a strong kind of 128-bit\n\
checksum, a.k.a. ``fingerprint'') of the concatenation of the strings\n\
fed to it so far using the digest() method.\n\
\n\
Functions:\n\
\n\
new([arg]) -- return a new md5 object, initialized with arg if provided\n\
md5([arg]) -- DEPRECATED, same as new, but for compatibility\n\
\n\
Special Objects:\n\
\n\
MD5Type -- type object for md5 objects");
PyDoc_STRVAR(md5type_doc,
"An md5 represents the object used to calculate the MD5 checksum of a\n\
string of information.\n\
\n\
Methods:\n\
\n\
update() -- updates the current digest with an additional string\n\
digest() -- return the current digest value\n\
hexdigest() -- return the current digest as a string of hexadecimal digits\n\
copy() -- return a copy of the current md5 object");
static PyTypeObject MD5type = ;
static PyObject *
MD5_new(PyObject *self, PyObject *args)
PyDoc_STRVAR(new_doc,
"new([arg]) -> md5 object\n\
\n\
Return a new md5 object. If arg is present, the method call update(arg)\n\
is made.");
static PyMethodDef md5_functions[] = ;
PyMODINIT_FUNC
init_md5(void)
