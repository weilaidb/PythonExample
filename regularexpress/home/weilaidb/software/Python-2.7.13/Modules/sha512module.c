#define TestEndianness(variable)
#define PCT_LITTLE_ENDIAN 1
#define PCT_BIG_ENDIAN 0
typedef unsigned char SHA_BYTE;
#if SIZEOF_INT == 4
typedef unsigned int SHA_INT32;
typedef unsigned PY_LONG_LONG SHA_INT64;
#define SHA_BLOCKSIZE   128
#define SHA_DIGESTSIZE  64
typedef struct  SHAobject;
static void longReverse(SHA_INT64 *buffer, int byteCount, int Endianness)
static void SHAcopy(SHAobject *src, SHAobject *dest)
#define ROR64(x, y) \
( ((((x) & Py_ULL(0xFFFFFFFFFFFFFFFF))>>((unsigned PY_LONG_LONG)(y) & 63)) | \
((x)<<((unsigned PY_LONG_LONG)(64-((y) & 63))))) & Py_ULL(0xFFFFFFFFFFFFFFFF))
#define Ch(x,y,z)       (z ^ (x & (y ^ z)))
#define Maj(x,y,z)      (((x | y) & z) | (x & y))
#define S(x, n)         ROR64((x),(n))
#define R(x, n)         (((x) & Py_ULL(0xFFFFFFFFFFFFFFFF)) >> ((unsigned PY_LONG_LONG)n))
#define Sigma0(x)       (S(x, 28) ^ S(x, 34) ^ S(x, 39))
#define Sigma1(x)       (S(x, 14) ^ S(x, 18) ^ S(x, 41))
#define Gamma0(x)       (S(x, 1) ^ S(x, 8) ^ R(x, 7))
#define Gamma1(x)       (S(x, 19) ^ S(x, 61) ^ R(x, 6))
static void
sha512_transform(SHAobject *sha_info)
static void
sha512_init(SHAobject *sha_info)
static void
sha384_init(SHAobject *sha_info)
static void
sha512_update(SHAobject *sha_info, SHA_BYTE *buffer, int count)
static void
sha512_final(unsigned char digest[SHA_DIGESTSIZE], SHAobject *sha_info)
static PyTypeObject SHA384type;
static PyTypeObject SHA512type;
static SHAobject *
newSHA384object(void)
static SHAobject *
newSHA512object(void)
static void
SHA512_dealloc(PyObject *ptr)
PyDoc_STRVAR(SHA512_copy__doc__, );
static PyObject *
SHA512_copy(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA512_digest__doc__,
);
static PyObject *
SHA512_digest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA512_hexdigest__doc__,
);
static PyObject *
SHA512_hexdigest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA512_update__doc__,
);
static PyObject *
SHA512_update(SHAobject *self, PyObject *args)
static PyMethodDef SHA_methods[] = ;
static PyObject *
SHA512_get_block_size(PyObject *self, void *closure)
static PyObject *
SHA512_get_name(PyObject *self, void *closure)
static PyGetSetDef SHA_getseters[] = ;
static PyMemberDef SHA_members[] = ;
static PyTypeObject SHA384type = ;
static PyTypeObject SHA512type = ;
PyDoc_STRVAR(SHA512_new__doc__,
);
static PyObject *
SHA512_new(PyObject *self, PyObject *args, PyObject *kwdict)
PyDoc_STRVAR(SHA384_new__doc__,
);
static PyObject *
SHA384_new(PyObject *self, PyObject *args, PyObject *kwdict)
static struct PyMethodDef SHA_functions[] = ;
#define insint(n,v)
PyMODINIT_FUNC
init_sha512(void)
