#define PY_SSIZE_T_CLEAN
static PyObject *Error;
static PyObject *Incomplete;
#define RUNCHAR 0x90
#define DONE 0x7F
#define SKIP 0x7E
#define FAIL 0x7D
static unsigned char table_a2b_hqx[256] = ;
static unsigned char table_b2a_hqx[] =
"!\"#$%&'()*+,-012345689@ABCDEFGHIJKLMNPQRSTUVXYZ[`abcdefhijklmpqr";
static char table_a2b_base64[] = ;
#define BASE64_PAD '='
#define BASE64_MAXBIN (PY_SSIZE_T_MAX/2 - sizeof(PyStringObject) - 3)
static unsigned char table_b2a_base64[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static unsigned short crctab_hqx[256] = ;
PyDoc_STRVAR(doc_a2b_uu, "(ascii) -> bin. Decode a line of uuencoded data");
static PyObject *
binascii_a2b_uu(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_uu, "(bin) -> ascii. Uuencode line of data");
static PyObject *
binascii_b2a_uu(PyObject *self, PyObject *args)
static int
binascii_find_valid(unsigned char *s, Py_ssize_t slen, int num)
PyDoc_STRVAR(doc_a2b_base64, "(ascii) -> bin. Decode a line of base64 data");
static PyObject *
binascii_a2b_base64(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_base64, "(bin) -> ascii. Base64-code line of data");
static PyObject *
binascii_b2a_base64(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_a2b_hqx, "ascii -> bin, done. Decode .hqx coding");
static PyObject *
binascii_a2b_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_rlecode_hqx, "Binhex RLE-code binary data");
static PyObject *
binascii_rlecode_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_b2a_hqx, "Encode .hqx data");
static PyObject *
binascii_b2a_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_rledecode_hqx, "Decode hexbin RLE-coded string");
static PyObject *
binascii_rledecode_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_crc_hqx,
"(data, oldcrc) -> newcrc. Compute hqx CRC incrementally");
static PyObject *
binascii_crc_hqx(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_crc32,
"(data, oldcrc = 0) -> newcrc. Compute CRC-32 incrementally");
static PyObject *
binascii_crc32(PyObject *self, PyObject *args)
{
unsigned int crc32val = 0;
Py_buffer pbuf;
Byte *buf;
Py_ssize_t len;
int signed_val;
if (!PyArg_ParseTuple(args, "s*|I:crc32", &pbuf, &crc32val))
return NULL;
static unsigned int crc_32_tab[256] = ;
static PyObject *
binascii_crc32(PyObject *self, PyObject *args)
static PyObject *
binascii_hexlify(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_hexlify,
"b2a_hex(data) -> s; Hexadecimal representation of binary data.\n\
\n\
This function is also available as \"hexlify()\".");
static int
to_int(int c)
static PyObject *
binascii_unhexlify(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_unhexlify,
"a2b_hex(hexstr) -> s; Binary data of hexadecimal representation.\n\
\n\
hexstr must contain an even number of hex digits (upper or lower case).\n\
This function is also available as \"unhexlify()\"");
static int table_hex[128] = ;
#define hexval(c) table_hex[(unsigned int)(c)]
#define MAXLINESIZE 76
PyDoc_STRVAR(doc_a2b_qp, "Decode a string of qp-encoded data");
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
PyDoc_STRVAR(doc_binascii, "Conversion between binary data and ASCII");
PyMODINIT_FUNC
initbinascii(void)
