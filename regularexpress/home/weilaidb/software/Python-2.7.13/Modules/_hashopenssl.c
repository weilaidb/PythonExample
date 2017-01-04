#define PY_SSIZE_T_CLEAN
#define ENTER_HASHLIB(obj) \
if ((obj)->lock)
#define LEAVE_HASHLIB(obj) \
if ((obj)->lock)
#define ENTER_HASHLIB(obj)
#define LEAVE_HASHLIB(obj)
#define MUNCH_SIZE INT_MAX
#define HASHLIB_GIL_MINSIZE 2048
#define HASH_OBJ_CONSTRUCTOR 0
#if defined(OPENSSL_VERSION_NUMBER) && (OPENSSL_VERSION_NUMBER >= 0x00908000)
#define _OPENSSL_SUPPORTS_SHA2
#if (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
#define EVP_MD_CTX_new EVP_MD_CTX_create
#define EVP_MD_CTX_free EVP_MD_CTX_destroy
#define HAS_FAST_PKCS5_PBKDF2_HMAC 0
#define HAS_FAST_PKCS5_PBKDF2_HMAC 1
typedef struct  EVPobject;
static PyTypeObject EVPtype;
#define DEFINE_CONSTS_FOR_NEW(Name)  \
static PyObject *CONST_ ## Name ## _name_obj = NULL; \
static EVP_MD_CTX *CONST_new_ ## Name ## _ctx_p = NULL;
DEFINE_CONSTS_FOR_NEW(md5)
DEFINE_CONSTS_FOR_NEW(sha1)
DEFINE_CONSTS_FOR_NEW(sha224)
DEFINE_CONSTS_FOR_NEW(sha256)
DEFINE_CONSTS_FOR_NEW(sha384)
DEFINE_CONSTS_FOR_NEW(sha512)
static PyObject *
_setException(PyObject *exc)
static EVPobject *
newEVPobject(PyObject *name)
static void
EVP_hash(EVPobject *self, const void *vp, Py_ssize_t len)
static void
EVP_dealloc(EVPobject *self)
static int
locked_EVP_MD_CTX_copy(EVP_MD_CTX *new_ctx_p, EVPobject *self)
PyDoc_STRVAR(EVP_copy__doc__, "Return a copy of the hash object.");
static PyObject *
EVP_copy(EVPobject *self, PyObject *unused)
PyDoc_STRVAR(EVP_digest__doc__,
"Return the digest value as a string of binary data.");
static PyObject *
EVP_digest(EVPobject *self, PyObject *unused)
PyDoc_STRVAR(EVP_hexdigest__doc__,
"Return the digest value as a string of hexadecimal digits.");
static PyObject *
EVP_hexdigest(EVPobject *self, PyObject *unused)
PyDoc_STRVAR(EVP_update__doc__,
"Update this hash object's state with the provided string.");
static PyObject *
EVP_update(EVPobject *self, PyObject *args)
static PyMethodDef EVP_methods[] = ;
static PyObject *
EVP_get_block_size(EVPobject *self, void *closure)
static PyObject *
EVP_get_digest_size(EVPobject *self, void *closure)
static PyMemberDef EVP_members[] = ;
static PyGetSetDef EVP_getseters[] = ;
static PyObject *
EVP_repr(PyObject *self)
#if HASH_OBJ_CONSTRUCTOR
static int
EVP_tp_init(EVPobject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(hashtype_doc,
"A hash represents the object used to calculate a checksum of a\n\
string of information.\n\
\n\
Methods:\n\
\n\
update() -- updates the current digest with an additional string\n\
digest() -- return the current digest value\n\
hexdigest() -- return the current digest as a string of hexadecimal digits\n\
copy() -- return a copy of the current hash object\n\
\n\
Attributes:\n\
\n\
name -- the hash algorithm being used by this object\n\
digest_size -- number of bytes in this hashes output\n");
static PyTypeObject EVPtype = ;
static PyObject *
EVPnew(PyObject *name_obj,
const EVP_MD *digest, const EVP_MD_CTX *initial_ctx,
const unsigned char *cp, Py_ssize_t len)
PyDoc_STRVAR(EVP_new__doc__,
"Return a new hash object using the named algorithm.\n\
An optional string argument may be provided and will be\n\
automatically hashed.\n\
\n\
The MD5 and SHA1 algorithms are always supported.\n");
static PyObject *
EVP_new(PyObject *self, PyObject *args, PyObject *kwdict)
#if (OPENSSL_VERSION_NUMBER >= 0x10000000 && !defined(OPENSSL_NO_HMAC) \
&& !defined(OPENSSL_NO_SHA))
#define PY_PBKDF2_HMAC 1
#if !HAS_FAST_PKCS5_PBKDF2_HMAC
static int
PKCS5_PBKDF2_HMAC_fast(const char *pass, int passlen,
const unsigned char *salt, int saltlen,
int iter, const EVP_MD *digest,
int keylen, unsigned char *out)
PyDoc_STRVAR(pbkdf2_hmac__doc__,
"pbkdf2_hmac(hash_name, password, salt, iterations, dklen=None) -> key\n\
\n\
Password based key derivation function 2 (PKCS #5 v2.0) with HMAC as\n\
pseudorandom function.");
static PyObject *
pbkdf2_hmac(PyObject *self, PyObject *args, PyObject *kwdict)
typedef struct _internal_name_mapper_state  _InternalNameMapperState;
static void
_openssl_hash_name_mapper(const OBJ_NAME *openssl_obj_name, void *arg)
static PyObject*
generate_hash_name_list(void)
#define GEN_CONSTRUCTOR(NAME)  \
static PyObject * \
EVP_new_ ## NAME (PyObject *self, PyObject *args) \
#define CONSTRUCTOR_METH_DEF(NAME)  \
#define INIT_CONSTRUCTOR_CONSTANTS(NAME)  do  while (0);
GEN_CONSTRUCTOR(md5)
GEN_CONSTRUCTOR(sha1)
GEN_CONSTRUCTOR(sha224)
GEN_CONSTRUCTOR(sha256)
GEN_CONSTRUCTOR(sha384)
GEN_CONSTRUCTOR(sha512)
static struct PyMethodDef EVP_functions[] = ;
PyMODINIT_FUNC
init_hashlib(void)
