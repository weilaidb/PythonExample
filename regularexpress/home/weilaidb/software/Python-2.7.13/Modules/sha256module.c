#define TestEndianness(variable)
#define PCT_LITTLE_ENDIAN 1
#define PCT_BIG_ENDIAN 0
typedef unsigned char SHA_BYTE;
#if SIZEOF_INT == 4
typedef unsigned int SHA_INT32;
#define SHA_BLOCKSIZE    64
#define SHA_DIGESTSIZE  32
typedef struct  SHAobject;
static void longReverse(SHA_INT32 *buffer, int byteCount, int Endianness)
static void SHAcopy(SHAobject *src, SHAobject *dest)
#define ROR(x, y)\
( ((((unsigned long)(x)&0xFFFFFFFFUL)>>(unsigned long)((y)&31)) | \
((unsigned long)(x)<<(unsigned long)(32-((y)&31)))) & 0xFFFFFFFFUL)
#define Ch(x,y,z)       (z ^ (x & (y ^ z)))
#define Maj(x,y,z)      (((x | y) & z) | (x & y))
#define S(x, n)         ROR((x),(n))
#define R(x, n)         (((x)&0xFFFFFFFFUL)>>(n))
#define Sigma0(x)       (S(x, 2) ^ S(x, 13) ^ S(x, 22))
#define Sigma1(x)       (S(x, 6) ^ S(x, 11) ^ S(x, 25))
#define Gamma0(x)       (S(x, 7) ^ S(x, 18) ^ R(x, 3))
#define Gamma1(x)       (S(x, 17) ^ S(x, 19) ^ R(x, 10))
static void
sha_transform(SHAobject *sha_info)
static void
sha_init(SHAobject *sha_info)
static void
sha224_init(SHAobject *sha_info)
static void
sha_update(SHAobject *sha_info, SHA_BYTE *buffer, int count)
static void
sha_final(unsigned char digest[SHA_DIGESTSIZE], SHAobject *sha_info)
static PyTypeObject SHA224type;
static PyTypeObject SHA256type;
static SHAobject *
newSHA224object(void)
static SHAobject *
newSHA256object(void)
static void
SHA_dealloc(PyObject *ptr)
PyDoc_STRVAR(SHA256_copy__doc__, "Return a copy of the hash object.");
static PyObject *
SHA256_copy(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA256_digest__doc__,
"Return the digest value as a string of binary data.");
static PyObject *
SHA256_digest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA256_hexdigest__doc__,
"Return the digest value as a string of hexadecimal digits.");
static PyObject *
SHA256_hexdigest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA256_update__doc__,
"Update this hash object's state with the provided string.");
static PyObject *
SHA256_update(SHAobject *self, PyObject *args)
static PyMethodDef SHA_methods[] = ;
static PyObject *
SHA256_get_block_size(PyObject *self, void *closure)
static PyObject *
SHA256_get_name(PyObject *self, void *closure)
static PyGetSetDef SHA_getseters[] = ;
static PyMemberDef SHA_members[] = ;
static PyTypeObject SHA224type = ;
static PyTypeObject SHA256type = ;
PyDoc_STRVAR(SHA256_new__doc__,
"Return a new SHA-256 hash object; optionally initialized with a string.");
static PyObject *
SHA256_new(PyObject *self, PyObject *args, PyObject *kwdict)
PyDoc_STRVAR(SHA224_new__doc__,
"Return a new SHA-224 hash object; optionally initialized with a string.");
static PyObject *
SHA224_new(PyObject *self, PyObject *args, PyObject *kwdict)
static struct PyMethodDef SHA_functions[] = ;
#define insint(n,v)
PyMODINIT_FUNC
init_sha256(void)
