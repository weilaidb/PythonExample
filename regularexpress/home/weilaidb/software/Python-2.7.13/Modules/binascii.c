#define PY_SSIZE_T_CLEAN
static PyObject *Error;
static PyObject *Incomplete;
#define RUNCHAR 0x90
#define DONE 0x7F
#define SKIP 0x7E
#define FAIL 0x7D
static unsigned char table_a2b_hqx[256] = ;
static unsigned char table_b2a_hqx[] =
;
static char table_a2b_base64[] = ;
#define BASE64_PAD '='
#define BASE64_MAXBIN (PY_SSIZE_T_MAX/2 - sizeof(PyStringObject) - 3)
static unsigned char table_b2a_base64[] =
;
static unsigned short crctab_hqx[256] = ;
PyDoc_STRVAR(doc_a2b_uu, );
static PyObject *
binascii_a2b_uu(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_uu, );
static PyObject *
binascii_b2a_uu(PyObject *self, PyObject *args)
static int
binascii_find_valid(unsigned char *s, Py_ssize_t slen, int num)
PyDoc_STRVAR(doc_a2b_base64, );
static PyObject *
binascii_a2b_base64(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_base64, );
static PyObject *
binascii_b2a_base64(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_a2b_hqx, );
static PyObject *
binascii_a2b_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_rlecode_hqx, );
static PyObject *
binascii_rlecode_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_hqx, );
static PyObject *
binascii_b2a_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_rledecode_hqx, );
static PyObject *
binascii_rledecode_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_crc_hqx,
);
static PyObject *
binascii_crc_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_crc32,
);
static PyObject *
binascii_crc32(PyObject *self, PyObject *args)
{
unsigned int crc32val = 0;
Py_buffer pbuf;
Byte *buf;
Py_ssize_t len;
int signed_val;
if (!PyArg_ParseTuple(args, , &pbuf, &crc32val))
return NULL;
static unsigned int crc_32_tab[256] = ;
static PyObject *
binascii_crc32(PyObject *self, PyObject *args)
static PyObject *
binascii_hexlify(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_hexlify,
"b2a_hex(data) -> s; Hexadecimal representation of binary data.\n\
\n\
This function is also available as \);
static int
to_int(int c)
static PyObject *
binascii_unhexlify(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_unhexlify,
"a2b_hex(hexstr) -> s; Binary data of hexadecimal representation.\n\
\n\
hexstr must contain an even number of hex digits (upper or lower case).\n\
This function is also available as \);
static int table_hex[128] = ;
#define hexval(c) table_hex[(unsigned int)(c)]
#define MAXLINESIZE 76
PyDoc_STRVAR(doc_a2b_qp, );
static PyObject*
binascii_a2b_qp(PyObject *self, PyObject *args, PyObject *kwargs)
static int
to_hex (unsigned char ch, unsigned char *s)
PyDoc_STRVAR(doc_b2a_qp,
"b2a_qp(data, quotetabs=0, istext=1, header=0) -> s; \n\
Encode a string using quoted-printable encoding. \n\
\n\
On encoding, when istext is set, newlines are not encoded, and white \n\
space at end of lines is.  When istext is not set, \\r and \\n (CR/LF) are \n\
both encoded.  When quotetabs is set, space and tabs are encoded.");
static PyObject*
binascii_b2a_qp (PyObject *self, PyObject *args, PyObject *kwargs)
static struct PyMethodDef binascii_module_methods[] = ;
PyDoc_STRVAR(doc_binascii, );
PyMODINIT_FUNC
initbinascii(void)
