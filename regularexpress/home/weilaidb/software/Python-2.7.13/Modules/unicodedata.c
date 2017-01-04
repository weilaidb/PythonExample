typedef struct  _PyUnicode_DatabaseRecord;
typedef struct change_record  change_record;
static const _PyUnicode_DatabaseRecord*
_getrecord_ex(Py_UCS4 code)
typedef struct previous_version  PreviousDBVersion;
#define get_old_record(self, v)    ((((PreviousDBVersion*)self)->getrecord)(v))
static PyMemberDef DB_members[] = ;
static PyTypeObject UCD_Type;
static PyObject*
new_previous_version(const char*name, const change_record* (*getrecord)(Py_UCS4),
Py_UCS4 (*normalization)(Py_UCS4))
static Py_UCS4 getuchar(PyUnicodeObject *obj)
PyDoc_STRVAR(unicodedata_decimal__doc__,
"decimal(unichr[, default])\n\
\n\
Returns the decimal value assigned to the Unicode character unichr\n\
as integer. If no such value is defined, default is returned, or, if\n\
not given, ValueError is raised.");
static PyObject *
unicodedata_decimal(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_digit__doc__,
"digit(unichr[, default])\n\
\n\
Returns the digit value assigned to the Unicode character unichr as\n\
integer. If no such value is defined, default is returned, or, if\n\
not given, ValueError is raised.");
static PyObject *
unicodedata_digit(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_numeric__doc__,
"numeric(unichr[, default])\n\
\n\
Returns the numeric value assigned to the Unicode character unichr\n\
as float. If no such value is defined, default is returned, or, if\n\
not given, ValueError is raised.");
static PyObject *
unicodedata_numeric(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_category__doc__,
"category(unichr)\n\
\n\
Returns the general category assigned to the Unicode character\n\
unichr as string.");
static PyObject *
unicodedata_category(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_bidirectional__doc__,
"bidirectional(unichr)\n\
\n\
Returns the bidirectional class assigned to the Unicode character\n\
unichr as string. If no such value is defined, an empty string is\n\
returned.");
static PyObject *
unicodedata_bidirectional(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_combining__doc__,
"combining(unichr)\n\
\n\
Returns the canonical combining class assigned to the Unicode\n\
character unichr as integer. Returns 0 if no combining class is\n\
defined.");
static PyObject *
unicodedata_combining(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_mirrored__doc__,
"mirrored(unichr)\n\
\n\
Returns the mirrored property assigned to the Unicode character\n\
unichr as integer. Returns 1 if the character has been identified as\n\
a \"mirrored\" character in bidirectional text, 0 otherwise.");
static PyObject *
unicodedata_mirrored(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_east_asian_width__doc__,
"east_asian_width(unichr)\n\
\n\
Returns the east asian width assigned to the Unicode character\n\
unichr as string.");
static PyObject *
unicodedata_east_asian_width(PyObject *self, PyObject *args)
PyDoc_STRVAR(unicodedata_decomposition__doc__,
"decomposition(unichr)\n\
\n\
Returns the character decomposition mapping assigned to the Unicode\n\
character unichr as string. An empty string is returned in case no\n\
such mapping is defined.");
static PyObject *
unicodedata_decomposition(PyObject *self, PyObject *args)
static void
get_decomp_record(PyObject *self, Py_UCS4 code, int *index, int *prefix, int *count)
#define SBase   0xAC00
#define LBase   0x1100
#define VBase   0x1161
#define TBase   0x11A7
#define LCount  19
#define VCount  21
#define TCount  28
#define NCount  (VCount*TCount)
#define SCount  (LCount*NCount)
static PyObject*
nfd_nfkd(PyObject *self, PyObject *input, int k)
static int
find_nfc_index(PyObject *self, struct reindex* nfc, Py_UNICODE code)
static PyObject*
nfc_nfkc(PyObject *self, PyObject *input, int k)
static int
is_normalized(PyObject *self, PyObject *input, int nfc, int k)
return 1;
}
PyDoc_STRVAR(unicodedata_normalize__doc__,
"normalize(form, unistr)\n\
\n\
Return the normal form 'form' for the Unicode string unistr.  Valid\n\
values for form are 'NFC', 'NFKC', 'NFD', and 'NFKD'.");
static PyObject*
unicodedata_normalize(PyObject *self, PyObject *args)
static unsigned long
_gethash(const char *s, int len, int scale)
static char *hangul_syllables[][3] = ;
static int
is_unified_ideograph(Py_UCS4 code)
static int
_getucname(PyObject *self, Py_UCS4 code, char* buffer, int buflen)
static int
_cmpname(PyObject *self, int code, const char* name, int namelen)
static void
find_syllable(const char *str, int *len, int *pos, int count, int column)
static int
_getcode(PyObject* self, const char* name, int namelen, Py_UCS4* code)
static const _PyUnicode_Name_CAPI hashAPI =
;
PyDoc_STRVAR(unicodedata_name__doc__,
"name(unichr[, default])\n\
Returns the name assigned to the Unicode character unichr as a\n\
string. If no name is defined, default is returned, or, if not\n\
given, ValueError is raised.");
static PyObject *
unicodedata_name(PyObject* self, PyObject* args)
PyDoc_STRVAR(unicodedata_lookup__doc__,
"lookup(name)\n\
\n\
Look up character by name.  If a character with the\n\
given name is found, return the corresponding Unicode\n\
character.  If not found, KeyError is raised.");
static PyObject *
unicodedata_lookup(PyObject* self, PyObject* args)
static PyMethodDef unicodedata_functions[] = ;
static PyTypeObject UCD_Type = ;
PyDoc_STRVAR(unicodedata_docstring,
"This module provides access to the Unicode Character Database which\n\
defines character properties for all Unicode characters. The data in\n\
this database is based on the UnicodeData.txt file version\n\
5.2.0 which is publically available from ftp:
\n\
The module uses the same names and symbols as defined by the\n\
UnicodeData File Format 5.2.0 (see\n\
http:
PyMODINIT_FUNC
initunicodedata(void)
