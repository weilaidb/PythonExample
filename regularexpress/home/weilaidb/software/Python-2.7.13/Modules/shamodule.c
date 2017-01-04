#define TestEndianness(variable)
#define PCT_LITTLE_ENDIAN 1
#define PCT_BIG_ENDIAN 0
typedef unsigned char SHA_BYTE;
#if SIZEOF_INT == 4
typedef unsigned int SHA_INT32;
#define SHA_BLOCKSIZE    64
#define SHA_DIGESTSIZE  20
typedef struct  SHAobject;
static void longReverse(SHA_INT32 *buffer, int byteCount, int Endianness)
static void SHAcopy(SHAobject *src, SHAobject *dest)
#define UNRAVEL
#define f2(x,y,z)       (x ^ y ^ z)
#define f4(x,y,z)       (x ^ y ^ z)
#define CONST1          0x5a827999L
#define CONST2          0x6ed9eba1L
#define CONST3          0x8f1bbcdcL
#define CONST4          0xca62c1d6L
#define R32(x,n)        ((x << n) | (x >> (32 - n)))
#define FG(n)   \
T = R32(A,5) + f##n(B,C,D) + E + *WP++ + CONST##n;  \
E = D; D = C; C = R32(B,30); B = A; A = T
#define FA(n)   \
T = R32(A,5) + f##n(B,C,D) + E + *WP++ + CONST##n; B = R32(B,30)
#define FB(n)   \
E = R32(T,5) + f##n(A,B,C) + D + *WP++ + CONST##n; A = R32(A,30)
#define FC(n)   \
D = R32(E,5) + f##n(T,A,B) + C + *WP++ + CONST##n; T = R32(T,30)
#define FD(n)   \
C = R32(D,5) + f##n(E,T,A) + B + *WP++ + CONST##n; E = R32(E,30)
#define FE(n)   \
B = R32(C,5) + f##n(D,E,T) + A + *WP++ + CONST##n; D = R32(D,30)
#define FT(n)   \
A = R32(B,5) + f##n(C,D,E) + T + *WP++ + CONST##n; C = R32(C,30)
static void
sha_transform(SHAobject *sha_info)
static void
sha_init(SHAobject *sha_info)
static void
sha_update(SHAobject *sha_info, SHA_BYTE *buffer, unsigned int count)
static void
sha_final(unsigned char digest[20], SHAobject *sha_info)
static PyTypeObject SHAtype;
static SHAobject *
newSHAobject(void)
static void
SHA_dealloc(PyObject *ptr)
PyDoc_STRVAR(SHA_copy__doc__, "Return a copy of the hashing object.");
static PyObject *
SHA_copy(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA_digest__doc__,
"Return the digest value as a string of binary data.");
static PyObject *
SHA_digest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA_hexdigest__doc__,
"Return the digest value as a string of hexadecimal digits.");
static PyObject *
SHA_hexdigest(SHAobject *self, PyObject *unused)
PyDoc_STRVAR(SHA_update__doc__,
"Update this hashing object's state with the provided string.");
static PyObject *
SHA_update(SHAobject *self, PyObject *args)
static PyMethodDef SHA_methods[] = ;
static PyObject *
SHA_get_block_size(PyObject *self, void *closure)
static PyObject *
SHA_get_digest_size(PyObject *self, void *closure)
static PyObject *
SHA_get_name(PyObject *self, void *closure)
static PyGetSetDef SHA_getseters[] = ;
static PyTypeObject SHAtype = ;
PyDoc_STRVAR(SHA_new__doc__,
"Return a new SHA hashing object.  An optional string argument\n\
may be provided; if present, this string will be automatically\n\
hashed.");
static PyObject *
SHA_new(PyObject *self, PyObject *args, PyObject *kwdict)
static struct PyMethodDef SHA_functions[] = ;
#define insint(n,v)
PyMODINIT_FUNC
init_sha(void)
