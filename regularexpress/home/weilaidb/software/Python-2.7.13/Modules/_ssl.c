#define PY_SSIZE_T_CLEAN
#define PySSL_BEGIN_ALLOW_THREADS_S(save) \
do  while (0)
#define PySSL_END_ALLOW_THREADS_S(save) \
do  while (0)
#define PySSL_BEGIN_ALLOW_THREADS
#define PySSL_BEGIN_ALLOW_THREADS_S(save)
#define PySSL_END_ALLOW_THREADS_S(save)
#define PySSL_BEGIN_ALLOW_THREADS
#define PySSL_BLOCK_THREADS
#define PySSL_UNBLOCK_THREADS
#define PySSL_END_ALLOW_THREADS
#if defined(HAVE_POLL_H)
#elif defined(HAVE_SYS_POLL_H)
static PyObject *PySSLErrorObject;
static PyObject *PySSLZeroReturnErrorObject;
static PyObject *PySSLWantReadErrorObject;
static PyObject *PySSLWantWriteErrorObject;
static PyObject *PySSLSyscallErrorObject;
static PyObject *PySSLEOFErrorObject;
static PyObject *err_codes_to_names;
static PyObject *err_names_to_codes;
static PyObject *lib_codes_to_names;
struct py_ssl_error_code ;
struct py_ssl_library_code ;
#if (OPENSSL_VERSION_NUMBER >= 0x10100000L) && !defined(LIBRESSL_VERSION_NUMBER)
#  define OPENSSL_VERSION_1_1 1
#if OPENSSL_VERSION_NUMBER >= 0x10001000L
# define HAVE_TLSv1_2 1
# define HAVE_TLSv1_2 0
# define HAVE_SNI 1
# define HAVE_SNI 0
#if !defined(LIBRESSL_VERSION_NUMBER) && OPENSSL_VERSION_NUMBER >= 0x1000200fL && !defined(OPENSSL_NO_TLSEXT)
# define HAVE_ALPN
#define INVALID_SOCKET (-1)
#define OPENSSL_NO_SSL2
#if defined(WITH_THREAD)
#define HAVE_OPENSSL_CRYPTO_LOCK
#define TLS_method SSLv23_method
static int X509_NAME_ENTRY_set(const X509_NAME_ENTRY *ne)
static int COMP_get_type(const COMP_METHOD *meth)
static pem_password_cb *SSL_CTX_get_default_passwd_cb(SSL_CTX *ctx)
static void *SSL_CTX_get_default_passwd_cb_userdata(SSL_CTX *ctx)
static int X509_OBJECT_get_type(X509_OBJECT *x)
static X509 *X509_OBJECT_get0_X509(X509_OBJECT *x)
static STACK_OF(X509_OBJECT) *X509_STORE_get0_objects(X509_STORE *store)
static X509_VERIFY_PARAM *X509_STORE_get0_param(X509_STORE *store)
enum py_ssl_error ;
enum py_ssl_server_or_client ;
enum py_ssl_cert_requirements ;
enum py_ssl_version ;
static unsigned int _ssl_locks_count = 0;
#define X509_NAME_MAXLEN 256
#if OPENSSL_VERSION_NUMBER >= 0x0090500fL
# define HAVE_OPENSSL_RAND 1
# undef HAVE_OPENSSL_RAND
#if OPENSSL_VERSION_NUMBER >= 0x009080dfL && OPENSSL_VERSION_NUMBER != 0x00909000L
# define HAVE_SSL_CTX_CLEAR_OPTIONS
# undef HAVE_SSL_CTX_CLEAR_OPTIONS
#define PySSL_CB_MAXLEN 128
#if OPENSSL_VERSION_NUMBER >= 0x0090500fL
# define HAVE_OPENSSL_FINISHED 1
# define HAVE_OPENSSL_FINISHED 0
#if OPENSSL_VERSION_NUMBER < 0x0090800fL && !defined(OPENSSL_NO_ECDH)
# define OPENSSL_NO_ECDH
#if OPENSSL_VERSION_NUMBER < 0x0090800fL && !defined(OPENSSL_NO_COMP)
# define OPENSSL_NO_COMP
#if OPENSSL_VERSION_NUMBER >= 0x0090800fL
# define HAVE_OPENSSL_VERIFY_PARAM
typedef struct  PySSLContext;
typedef struct  PySSLSocket;
static PyTypeObject PySSLContext_Type;
static PyTypeObject PySSLSocket_Type;
static PyObject *PySSL_SSLwrite(PySSLSocket *self, PyObject *args);
static PyObject *PySSL_SSLread(PySSLSocket *self, PyObject *args);
static int check_socket_and_wait_for_timeout(PySocketSockObject *s,
int writing);
static PyObject *PySSL_peercert(PySSLSocket *self, PyObject *args);
static PyObject *PySSL_cipher(PySSLSocket *self);
#define PySSLContext_Check(v)   (Py_TYPE(v) == &PySSLContext_Type)
#define PySSLSocket_Check(v)    (Py_TYPE(v) == &PySSLSocket_Type)
typedef enum  timeout_state;
#define STRINGIFY1(x) #x
#define STRINGIFY2(x) STRINGIFY1(x)
#define ERRSTR1(x,y,z) (x  z)
#define ERRSTR(x) ERRSTR1(, STRINGIFY2(__LINE__), x)
PyDoc_STRVAR(SSLError_doc,
);
PyDoc_STRVAR(SSLZeroReturnError_doc,
);
PyDoc_STRVAR(SSLWantReadError_doc,
);
PyDoc_STRVAR(SSLWantWriteError_doc,
);
PyDoc_STRVAR(SSLSyscallError_doc,
);
PyDoc_STRVAR(SSLEOFError_doc,
);
static PyObject *
SSLError_str(PyEnvironmentErrorObject *self)
static void
fill_and_set_sslerror(PyObject *type, int ssl_errno, const char *errstr,
int lineno, unsigned long errcode)
static PyObject *
PySSL_SetError(PySSLSocket *obj, int ret, char *filename, int lineno)
static PyObject *
_setSSLError (char *errstr, int errcode, char *filename, int lineno)
static PySSLSocket *
newPySSLSocket(PySSLContext *sslctx, PySocketSockObject *sock,
enum py_ssl_server_or_client socket_type,
char *server_hostname, PyObject *ssl_sock)
static PyObject *PySSL_SSLdo_handshake(PySSLSocket *self)
static PyObject *
_create_tuple_for_attribute (ASN1_OBJECT *name, ASN1_STRING *value)
static PyObject *
_create_tuple_for_X509_NAME (X509_NAME *xname)
static PyObject *
_get_peer_alt_names (X509 *certificate)
static PyObject *
_get_aia_uri(X509 *certificate, int nid)
static PyObject *
_get_crl_dp(X509 *certificate)
static PyObject *
_decode_certificate(X509 *certificate)
static PyObject *
_certificate_to_der(X509 *certificate)
static PyObject *
PySSL_test_decode_certificate (PyObject *mod, PyObject *args)
static PyObject *
PySSL_peercert(PySSLSocket *self, PyObject *args)
PyDoc_STRVAR(PySSL_peercert_doc,
"peer_certificate([der=False]) -> certificate\n\
\n\
Returns the certificate for the peer.  If no certificate was provided,\n\
returns None.  If a certificate was provided, but not validated, returns\n\
an empty dictionary.  Otherwise returns a dict containing information\n\
about the peer certificate.\n\
\n\
If the optional argument is True, returns a DER-encoded copy of the\n\
peer certificate, or None if no certificate was provided.  This will\n\
return the certificate even if it wasn't validated.");
static PyObject *PySSL_cipher (PySSLSocket *self)
static PyObject *PySSL_version(PySSLSocket *self)
static PyObject *PySSL_selected_npn_protocol(PySSLSocket *self)
static PyObject *PySSL_selected_alpn_protocol(PySSLSocket *self)
static PyObject *PySSL_compression(PySSLSocket *self)
static PySSLContext *PySSL_get_context(PySSLSocket *self, void *closure)
static int PySSL_set_context(PySSLSocket *self, PyObject *value,
void *closure)
PyDoc_STRVAR(PySSL_set_context_doc,
"_setter_context(ctx)\n\
\
This changes the context associated with the SSLSocket. This is typically\n\
used from within a callback function set by the set_servername_callback\n\
on the SSLContext to change the certificate information associated with the\n\
SSLSocket before the cryptographic exchange handshake messages\n");
static void PySSL_dealloc(PySSLSocket *self)
static int
check_socket_and_wait_for_timeout(PySocketSockObject *s, int writing)
static PyObject *PySSL_SSLwrite(PySSLSocket *self, PyObject *args)
PyDoc_STRVAR(PySSL_SSLwrite_doc,
"write(s) -> len\n\
\n\
Writes the string s into the SSL object.  Returns the number\n\
of bytes written.");
static PyObject *PySSL_SSLpending(PySSLSocket *self)
PyDoc_STRVAR(PySSL_SSLpending_doc,
"pending() -> count\n\
\n\
Returns the number of already decrypted bytes available for read,\n\
pending on the connection.\n");
static PyObject *PySSL_SSLread(PySSLSocket *self, PyObject *args)
PyDoc_STRVAR(PySSL_SSLread_doc,
"read([len]) -> string\n\
\n\
Read up to len bytes from the SSL socket.");
static PyObject *PySSL_SSLshutdown(PySSLSocket *self)
PyDoc_STRVAR(PySSL_SSLshutdown_doc,
"shutdown(s) -> socket\n\
\n\
Does the SSL shutdown handshake with the remote end, and returns\n\
the underlying socket object.");
#if HAVE_OPENSSL_FINISHED
static PyObject *
PySSL_tls_unique_cb(PySSLSocket *self)
PyDoc_STRVAR(PySSL_tls_unique_cb_doc,
"tls_unique_cb() -> bytes\n\
\n\
Returns the 'tls-unique' channel binding data, as defined by RFC 5929.\n\
\n\
If the TLS handshake is not yet complete, None is returned");
static PyGetSetDef ssl_getsetlist[] = ;
static PyMethodDef PySSLMethods[] = ;
static PyTypeObject PySSLSocket_Type = ;
static PyObject *
context_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
do_protocol_selection(int alpn, unsigned char **out, unsigned char *outlen,
const unsigned char *server_protocols, unsigned int server_protocols_len,
const unsigned char *client_protocols, unsigned int client_protocols_len)
static int
_advertiseNPN_cb(SSL *s,
const unsigned char **data, unsigned int *len,
void *args)
static int
_selectNPN_cb(SSL *s,
unsigned char **out, unsigned char *outlen,
const unsigned char *server, unsigned int server_len,
void *args)
static PyObject *
_set_npn_protocols(PySSLContext *self, PyObject *args)
static int
_selectALPN_cb(SSL *s,
const unsigned char **out, unsigned char *outlen,
const unsigned char *client_protocols, unsigned int client_protocols_len,
void *args)
static PyObject *
_set_alpn_protocols(PySSLContext *self, PyObject *args)
static PyObject *
get_verify_mode(PySSLContext *self, void *c)
static int
set_verify_mode(PySSLContext *self, PyObject *arg, void *c)
static PyObject *
get_verify_flags(PySSLContext *self, void *c)
static int
set_verify_flags(PySSLContext *self, PyObject *arg, void *c)
static PyObject *
get_options(PySSLContext *self, void *c)
static int
set_options(PySSLContext *self, PyObject *arg, void *c)
static PyObject *
get_check_hostname(PySSLContext *self, void *c)
static int
set_check_hostname(PySSLContext *self, PyObject *arg, void *c)
typedef struct  _PySSLPasswordInfo;
static int
_pwinfo_set(_PySSLPasswordInfo *pw_info, PyObject* password,
const char *bad_type_error)
static int
_password_callback(char *buf, int size, int rwflag, void *userdata)
static PyObject *
load_cert_chain(PySSLContext *self, PyObject *args, PyObject *kwds)
static int
_add_ca_certs(PySSLContext *self, void *data, Py_ssize_t len,
int filetype)
static PyObject *
load_verify_locations(PySSLContext *self, PyObject *args, PyObject *kwds)
static PyObject *
load_dh_params(PySSLContext *self, PyObject *filepath)
static PyObject *
context_wrap_socket(PySSLContext *self, PyObject *args, PyObject *kwds)
static PyObject *
session_stats(PySSLContext *self, PyObject *unused)
static PyObject *
set_default_verify_paths(PySSLContext *self, PyObject *unused)
static PyObject *
set_ecdh_curve(PySSLContext *self, PyObject *name)
#if HAVE_SNI && !defined(OPENSSL_NO_TLSEXT)
static int
_servername_callback(SSL *s, int *al, void *args)
PyDoc_STRVAR(PySSL_set_servername_callback_doc,
"set_servername_callback(method)\n\
\n\
This sets a callback that will be called when a server name is provided by\n\
the SSL/TLS client in the SNI extension.\n\
\n\
If the argument is None then the callback is disabled. The method is called\n\
with the SSLSocket, the server name as a string, and the SSLContext object.\n\
See RFC 6066 for details of the SNI extension.");
static PyObject *
set_servername_callback(PySSLContext *self, PyObject *args)
PyDoc_STRVAR(PySSL_get_stats_doc,
"cert_store_stats() -> \n\
\n\
Returns quantities of loaded X.509 certificates. X.509 certificates with a\n\
CA extension and certificate revocation lists inside the context's cert\n\
store.\n\
NOTE: Certificates in a capath directory aren't loaded unless they have\n\
been used at least once.");
static PyObject *
cert_store_stats(PySSLContext *self)
PyDoc_STRVAR(PySSL_get_ca_certs_doc,
"get_ca_certs(binary_form=False) -> list of loaded certificate\n\
\n\
Returns a list of dicts with information of loaded CA certs. If the\n\
optional argument is True, returns a DER-encoded copy of the CA certificate.\n\
NOTE: Certificates in a capath directory aren't loaded unless they have\n\
been used at least once.");
static PyObject *
get_ca_certs(PySSLContext *self, PyObject *args, PyObject *kwds)
static PyGetSetDef context_getsetlist[] = ;
static struct PyMethodDef context_methods[] = ;
static PyTypeObject PySSLContext_Type = ;
static PyObject *
PySSL_RAND_add(PyObject *self, PyObject *args)
PyDoc_STRVAR(PySSL_RAND_add_doc,
"RAND_add(string, entropy)\n\
\n\
Mix string into the OpenSSL PRNG state.  entropy (a float) is a lower\n\
bound on the entropy contained in string.  See RFC 1750.");
static PyObject *
PySSL_RAND_status(PyObject *self)
PyDoc_STRVAR(PySSL_RAND_status_doc,
"RAND_status() -> 0 or 1\n\
\n\
Returns 1 if the OpenSSL PRNG has been seeded with enough data and 0 if not.\n\
It is necessary to seed the PRNG with RAND_add() on some platforms before\n\
using the ssl() function.");
static PyObject *
PySSL_RAND_egd(PyObject *self, PyObject *arg)
PyDoc_STRVAR(PySSL_RAND_egd_doc,
"RAND_egd(path) -> bytes\n\
\n\
Queries the entropy gather daemon (EGD) on the socket named by 'path'.\n\
Returns number of bytes read.  Raises SSLError if connection to EGD\n\
fails or if it does not provide enough data to seed PRNG.");
PyDoc_STRVAR(PySSL_get_default_verify_paths_doc,
"get_default_verify_paths() -> tuple\n\
\n\
Return search paths and environment vars that are used by SSLContext's\n\
set_default_verify_paths() to load default CAs. The values are\n\
'cert_file_env', 'cert_file', 'cert_dir_env', 'cert_dir'.");
static PyObject *
PySSL_get_default_verify_paths(PyObject *self)
static PyObject*
asn1obj2py(ASN1_OBJECT *obj)
PyDoc_STRVAR(PySSL_txt2obj_doc,
"txt2obj(txt, name=False) -> (nid, shortname, longname, oid)\n\
\n\
Lookup NID, short name, long name and OID of an ASN1_OBJECT. By default\n\
objects are looked up by OID. With name=True short and long name are also\n\
matched.");
static PyObject*
PySSL_txt2obj(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(PySSL_nid2obj_doc,
"nid2obj(nid) -> (nid, shortname, longname, oid)\n\
\n\
Lookup NID, short name, long name and OID of an ASN1_OBJECT by NID.");
static PyObject*
PySSL_nid2obj(PyObject *self, PyObject *args)
static PyObject*
certEncodingType(DWORD encodingType)
static PyObject*
parseKeyUsage(PCCERT_CONTEXT pCertCtx, DWORD flags)
PyDoc_STRVAR(PySSL_enum_certificates_doc,
"enum_certificates(store_name) -> []\n\
\n\
Retrieve certificates from Windows' cert store. store_name may be one of\n\
'CA', 'ROOT' or 'MY'. The system may provide more cert storages, too.\n\
The function returns a list of (bytes, encoding_type, trust) tuples. The\n\
encoding_type flag can be interpreted with X509_ASN_ENCODING or\n\
PKCS_7_ASN_ENCODING. The trust setting is either a set of OIDs or the\n\
boolean True.");
static PyObject *
PySSL_enum_certificates(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(PySSL_enum_crls_doc,
"enum_crls(store_name) -> []\n\
\n\
Retrieve CRLs from Windows' cert store. store_name may be one of\n\
'CA', 'ROOT' or 'MY'. The system may provide more cert storages, too.\n\
The function returns a list of (bytes, encoding_type) tuples. The\n\
encoding_type flag can be interpreted with X509_ASN_ENCODING or\n\
PKCS_7_ASN_ENCODING.");
static PyObject *
PySSL_enum_crls(PyObject *self, PyObject *args, PyObject *kwds)
static PyMethodDef PySSL_methods[] = ;
static PyThread_type_lock *_ssl_locks = NULL;
#if OPENSSL_VERSION_NUMBER >= 0x10000000
static void
_ssl_threadid_callback(CRYPTO_THREADID *id)
static unsigned long
_ssl_thread_id_function (void)
static void _ssl_thread_locking_function
(int mode, int n, const char *file, int line)
static int _setup_ssl_threads(void)
PyDoc_STRVAR(module_doc,
"Implementation module for SSL socket operations.  See the socket module\n\
for documentation.");
static void
parse_openssl_version(unsigned long libver,
unsigned int *major, unsigned int *minor,
unsigned int *fix, unsigned int *patch,
unsigned int *status)
PyMODINIT_FUNC
init_ssl(void)
