#define Py_UNICODEOBJECT_H
#define PyUnicode_Check(op)                 0
#define PyUnicode_CheckExact(op)            0
#error Must define Py_UNICODE_SIZE
#if Py_UNICODE_SIZE >= 4
#define Py_UNICODE_WIDE
# if defined(MS_WIN32) && Py_UNICODE_SIZE == 2
#  define HAVE_USABLE_WCHAR_T
#  define PY_UNICODE_TYPE wchar_t
# endif
# if defined(Py_UNICODE_WIDE)
#  define PY_UNICODE_TYPE Py_UCS4
# endif
# ifndef HAVE_WCHAR_H
#  define HAVE_WCHAR_H
# endif
# ifdef _HAVE_BSDI
#  include <time.h>
# endif
#  include <wchar.h>
#if SIZEOF_INT >= 4
typedef unsigned int Py_UCS4;
#elif SIZEOF_LONG >= 4
typedef unsigned long Py_UCS4;
typedef PY_UNICODE_TYPE Py_UNICODE;
# define PyUnicode_AsASCIIString PyUnicodeUCS2_AsASCIIString
# define PyUnicode_AsCharmapString PyUnicodeUCS2_AsCharmapString
# define PyUnicode_AsEncodedObject PyUnicodeUCS2_AsEncodedObject
# define PyUnicode_AsEncodedString PyUnicodeUCS2_AsEncodedString
# define PyUnicode_AsLatin1String PyUnicodeUCS2_AsLatin1String
# define PyUnicode_AsRawUnicodeEscapeString PyUnicodeUCS2_AsRawUnicodeEscapeString
# define PyUnicode_AsUTF32String PyUnicodeUCS2_AsUTF32String
# define PyUnicode_AsUTF16String PyUnicodeUCS2_AsUTF16String
# define PyUnicode_AsUTF8String PyUnicodeUCS2_AsUTF8String
# define PyUnicode_AsUnicode PyUnicodeUCS2_AsUnicode
# define PyUnicode_AsUnicodeEscapeString PyUnicodeUCS2_AsUnicodeEscapeString
# define PyUnicode_AsWideChar PyUnicodeUCS2_AsWideChar
# define PyUnicode_ClearFreeList PyUnicodeUCS2_ClearFreelist
# define PyUnicode_Compare PyUnicodeUCS2_Compare
# define PyUnicode_Concat PyUnicodeUCS2_Concat
# define PyUnicode_Contains PyUnicodeUCS2_Contains
# define PyUnicode_Count PyUnicodeUCS2_Count
# define PyUnicode_Decode PyUnicodeUCS2_Decode
# define PyUnicode_DecodeASCII PyUnicodeUCS2_DecodeASCII
# define PyUnicode_DecodeCharmap PyUnicodeUCS2_DecodeCharmap
# define PyUnicode_DecodeLatin1 PyUnicodeUCS2_DecodeLatin1
# define PyUnicode_DecodeRawUnicodeEscape PyUnicodeUCS2_DecodeRawUnicodeEscape
# define PyUnicode_DecodeUTF32 PyUnicodeUCS2_DecodeUTF32
# define PyUnicode_DecodeUTF32Stateful PyUnicodeUCS2_DecodeUTF32Stateful
# define PyUnicode_DecodeUTF16 PyUnicodeUCS2_DecodeUTF16
# define PyUnicode_DecodeUTF16Stateful PyUnicodeUCS2_DecodeUTF16Stateful
# define PyUnicode_DecodeUTF8 PyUnicodeUCS2_DecodeUTF8
# define PyUnicode_DecodeUTF8Stateful PyUnicodeUCS2_DecodeUTF8Stateful
# define PyUnicode_DecodeUnicodeEscape PyUnicodeUCS2_DecodeUnicodeEscape
# define PyUnicode_Encode PyUnicodeUCS2_Encode
# define PyUnicode_EncodeASCII PyUnicodeUCS2_EncodeASCII
# define PyUnicode_EncodeCharmap PyUnicodeUCS2_EncodeCharmap
# define PyUnicode_EncodeDecimal PyUnicodeUCS2_EncodeDecimal
# define PyUnicode_EncodeLatin1 PyUnicodeUCS2_EncodeLatin1
# define PyUnicode_EncodeRawUnicodeEscape PyUnicodeUCS2_EncodeRawUnicodeEscape
# define PyUnicode_EncodeUTF32 PyUnicodeUCS2_EncodeUTF32
# define PyUnicode_EncodeUTF16 PyUnicodeUCS2_EncodeUTF16
# define PyUnicode_EncodeUTF8 PyUnicodeUCS2_EncodeUTF8
# define PyUnicode_EncodeUnicodeEscape PyUnicodeUCS2_EncodeUnicodeEscape
# define PyUnicode_Find PyUnicodeUCS2_Find
# define PyUnicode_Format PyUnicodeUCS2_Format
# define PyUnicode_FromEncodedObject PyUnicodeUCS2_FromEncodedObject
# define PyUnicode_FromFormat PyUnicodeUCS2_FromFormat
# define PyUnicode_FromFormatV PyUnicodeUCS2_FromFormatV
# define PyUnicode_FromObject PyUnicodeUCS2_FromObject
# define PyUnicode_FromOrdinal PyUnicodeUCS2_FromOrdinal
# define PyUnicode_FromString PyUnicodeUCS2_FromString
# define PyUnicode_FromStringAndSize PyUnicodeUCS2_FromStringAndSize
# define PyUnicode_FromUnicode PyUnicodeUCS2_FromUnicode
# define PyUnicode_FromWideChar PyUnicodeUCS2_FromWideChar
# define PyUnicode_GetDefaultEncoding PyUnicodeUCS2_GetDefaultEncoding
# define PyUnicode_GetMax PyUnicodeUCS2_GetMax
# define PyUnicode_GetSize PyUnicodeUCS2_GetSize
# define PyUnicode_Join PyUnicodeUCS2_Join
# define PyUnicode_Partition PyUnicodeUCS2_Partition
# define PyUnicode_RPartition PyUnicodeUCS2_RPartition
# define PyUnicode_RSplit PyUnicodeUCS2_RSplit
# define PyUnicode_Replace PyUnicodeUCS2_Replace
# define PyUnicode_Resize PyUnicodeUCS2_Resize
# define PyUnicode_RichCompare PyUnicodeUCS2_RichCompare
# define PyUnicode_SetDefaultEncoding PyUnicodeUCS2_SetDefaultEncoding
# define PyUnicode_Split PyUnicodeUCS2_Split
# define PyUnicode_Splitlines PyUnicodeUCS2_Splitlines
# define PyUnicode_Tailmatch PyUnicodeUCS2_Tailmatch
# define PyUnicode_Translate PyUnicodeUCS2_Translate
# define PyUnicode_TranslateCharmap PyUnicodeUCS2_TranslateCharmap
# define _PyUnicode_AsDefaultEncodedString _PyUnicodeUCS2_AsDefaultEncodedString
# define _PyUnicode_Fini _PyUnicodeUCS2_Fini
# define _PyUnicode_Init _PyUnicodeUCS2_Init
# define _PyUnicode_IsAlpha _PyUnicodeUCS2_IsAlpha
# define _PyUnicode_IsDecimalDigit _PyUnicodeUCS2_IsDecimalDigit
# define _PyUnicode_IsDigit _PyUnicodeUCS2_IsDigit
# define _PyUnicode_IsLinebreak _PyUnicodeUCS2_IsLinebreak
# define _PyUnicode_IsLowercase _PyUnicodeUCS2_IsLowercase
# define _PyUnicode_IsNumeric _PyUnicodeUCS2_IsNumeric
# define _PyUnicode_IsTitlecase _PyUnicodeUCS2_IsTitlecase
# define _PyUnicode_IsUppercase _PyUnicodeUCS2_IsUppercase
# define _PyUnicode_IsWhitespace _PyUnicodeUCS2_IsWhitespace
# define _PyUnicode_ToDecimalDigit _PyUnicodeUCS2_ToDecimalDigit
# define _PyUnicode_ToDigit _PyUnicodeUCS2_ToDigit
# define _PyUnicode_ToLowercase _PyUnicodeUCS2_ToLowercase
# define _PyUnicode_ToNumeric _PyUnicodeUCS2_ToNumeric
# define _PyUnicode_ToTitlecase _PyUnicodeUCS2_ToTitlecase
# define _PyUnicode_ToUppercase _PyUnicodeUCS2_ToUppercase
# define PyUnicode_AsASCIIString PyUnicodeUCS4_AsASCIIString
# define PyUnicode_AsCharmapString PyUnicodeUCS4_AsCharmapString
# define PyUnicode_AsEncodedObject PyUnicodeUCS4_AsEncodedObject
# define PyUnicode_AsEncodedString PyUnicodeUCS4_AsEncodedString
# define PyUnicode_AsLatin1String PyUnicodeUCS4_AsLatin1String
# define PyUnicode_AsRawUnicodeEscapeString PyUnicodeUCS4_AsRawUnicodeEscapeString
# define PyUnicode_AsUTF32String PyUnicodeUCS4_AsUTF32String
# define PyUnicode_AsUTF16String PyUnicodeUCS4_AsUTF16String
# define PyUnicode_AsUTF8String PyUnicodeUCS4_AsUTF8String
# define PyUnicode_AsUnicode PyUnicodeUCS4_AsUnicode
# define PyUnicode_AsUnicodeEscapeString PyUnicodeUCS4_AsUnicodeEscapeString
# define PyUnicode_AsWideChar PyUnicodeUCS4_AsWideChar
# define PyUnicode_ClearFreeList PyUnicodeUCS4_ClearFreelist
# define PyUnicode_Compare PyUnicodeUCS4_Compare
# define PyUnicode_Concat PyUnicodeUCS4_Concat
# define PyUnicode_Contains PyUnicodeUCS4_Contains
# define PyUnicode_Count PyUnicodeUCS4_Count
# define PyUnicode_Decode PyUnicodeUCS4_Decode
# define PyUnicode_DecodeASCII PyUnicodeUCS4_DecodeASCII
# define PyUnicode_DecodeCharmap PyUnicodeUCS4_DecodeCharmap
# define PyUnicode_DecodeLatin1 PyUnicodeUCS4_DecodeLatin1
# define PyUnicode_DecodeRawUnicodeEscape PyUnicodeUCS4_DecodeRawUnicodeEscape
# define PyUnicode_DecodeUTF32 PyUnicodeUCS4_DecodeUTF32
# define PyUnicode_DecodeUTF32Stateful PyUnicodeUCS4_DecodeUTF32Stateful
# define PyUnicode_DecodeUTF16 PyUnicodeUCS4_DecodeUTF16
# define PyUnicode_DecodeUTF16Stateful PyUnicodeUCS4_DecodeUTF16Stateful
# define PyUnicode_DecodeUTF8 PyUnicodeUCS4_DecodeUTF8
# define PyUnicode_DecodeUTF8Stateful PyUnicodeUCS4_DecodeUTF8Stateful
# define PyUnicode_DecodeUnicodeEscape PyUnicodeUCS4_DecodeUnicodeEscape
# define PyUnicode_Encode PyUnicodeUCS4_Encode
# define PyUnicode_EncodeASCII PyUnicodeUCS4_EncodeASCII
# define PyUnicode_EncodeCharmap PyUnicodeUCS4_EncodeCharmap
# define PyUnicode_EncodeDecimal PyUnicodeUCS4_EncodeDecimal
# define PyUnicode_EncodeLatin1 PyUnicodeUCS4_EncodeLatin1
# define PyUnicode_EncodeRawUnicodeEscape PyUnicodeUCS4_EncodeRawUnicodeEscape
# define PyUnicode_EncodeUTF32 PyUnicodeUCS4_EncodeUTF32
# define PyUnicode_EncodeUTF16 PyUnicodeUCS4_EncodeUTF16
# define PyUnicode_EncodeUTF8 PyUnicodeUCS4_EncodeUTF8
# define PyUnicode_EncodeUnicodeEscape PyUnicodeUCS4_EncodeUnicodeEscape
# define PyUnicode_Find PyUnicodeUCS4_Find
# define PyUnicode_Format PyUnicodeUCS4_Format
# define PyUnicode_FromEncodedObject PyUnicodeUCS4_FromEncodedObject
# define PyUnicode_FromFormat PyUnicodeUCS4_FromFormat
# define PyUnicode_FromFormatV PyUnicodeUCS4_FromFormatV
# define PyUnicode_FromObject PyUnicodeUCS4_FromObject
# define PyUnicode_FromOrdinal PyUnicodeUCS4_FromOrdinal
# define PyUnicode_FromString PyUnicodeUCS4_FromString
# define PyUnicode_FromStringAndSize PyUnicodeUCS4_FromStringAndSize
# define PyUnicode_FromUnicode PyUnicodeUCS4_FromUnicode
# define PyUnicode_FromWideChar PyUnicodeUCS4_FromWideChar
# define PyUnicode_GetDefaultEncoding PyUnicodeUCS4_GetDefaultEncoding
# define PyUnicode_GetMax PyUnicodeUCS4_GetMax
# define PyUnicode_GetSize PyUnicodeUCS4_GetSize
# define PyUnicode_Join PyUnicodeUCS4_Join
# define PyUnicode_Partition PyUnicodeUCS4_Partition
# define PyUnicode_RPartition PyUnicodeUCS4_RPartition
# define PyUnicode_RSplit PyUnicodeUCS4_RSplit
# define PyUnicode_Replace PyUnicodeUCS4_Replace
# define PyUnicode_Resize PyUnicodeUCS4_Resize
# define PyUnicode_RichCompare PyUnicodeUCS4_RichCompare
# define PyUnicode_SetDefaultEncoding PyUnicodeUCS4_SetDefaultEncoding
# define PyUnicode_Split PyUnicodeUCS4_Split
# define PyUnicode_Splitlines PyUnicodeUCS4_Splitlines
# define PyUnicode_Tailmatch PyUnicodeUCS4_Tailmatch
# define PyUnicode_Translate PyUnicodeUCS4_Translate
# define PyUnicode_TranslateCharmap PyUnicodeUCS4_TranslateCharmap
# define _PyUnicode_AsDefaultEncodedString _PyUnicodeUCS4_AsDefaultEncodedString
# define _PyUnicode_Fini _PyUnicodeUCS4_Fini
# define _PyUnicode_Init _PyUnicodeUCS4_Init
# define _PyUnicode_IsAlpha _PyUnicodeUCS4_IsAlpha
# define _PyUnicode_IsDecimalDigit _PyUnicodeUCS4_IsDecimalDigit
# define _PyUnicode_IsDigit _PyUnicodeUCS4_IsDigit
# define _PyUnicode_IsLinebreak _PyUnicodeUCS4_IsLinebreak
# define _PyUnicode_IsLowercase _PyUnicodeUCS4_IsLowercase
# define _PyUnicode_IsNumeric _PyUnicodeUCS4_IsNumeric
# define _PyUnicode_IsTitlecase _PyUnicodeUCS4_IsTitlecase
# define _PyUnicode_IsUppercase _PyUnicodeUCS4_IsUppercase
# define _PyUnicode_IsWhitespace _PyUnicodeUCS4_IsWhitespace
# define _PyUnicode_ToDecimalDigit _PyUnicodeUCS4_ToDecimalDigit
# define _PyUnicode_ToDigit _PyUnicodeUCS4_ToDigit
# define _PyUnicode_ToLowercase _PyUnicodeUCS4_ToLowercase
# define _PyUnicode_ToNumeric _PyUnicodeUCS4_ToNumeric
# define _PyUnicode_ToTitlecase _PyUnicodeUCS4_ToTitlecase
# define _PyUnicode_ToUppercase _PyUnicodeUCS4_ToUppercase
#if defined(HAVE_USABLE_WCHAR_T) && defined(WANT_WCTYPE_FUNCTIONS)
#define Py_UNICODE_ISSPACE(ch) iswspace(ch)
#define Py_UNICODE_ISLOWER(ch) iswlower(ch)
#define Py_UNICODE_ISUPPER(ch) iswupper(ch)
#define Py_UNICODE_ISTITLE(ch) _PyUnicode_IsTitlecase(ch)
#define Py_UNICODE_ISLINEBREAK(ch) _PyUnicode_IsLinebreak(ch)
#define Py_UNICODE_TOLOWER(ch) towlower(ch)
#define Py_UNICODE_TOUPPER(ch) towupper(ch)
#define Py_UNICODE_TOTITLE(ch) _PyUnicode_ToTitlecase(ch)
#define Py_UNICODE_ISDECIMAL(ch) _PyUnicode_IsDecimalDigit(ch)
#define Py_UNICODE_ISDIGIT(ch) _PyUnicode_IsDigit(ch)
#define Py_UNICODE_ISNUMERIC(ch) _PyUnicode_IsNumeric(ch)
#define Py_UNICODE_TODECIMAL(ch) _PyUnicode_ToDecimalDigit(ch)
#define Py_UNICODE_TODIGIT(ch) _PyUnicode_ToDigit(ch)
#define Py_UNICODE_TONUMERIC(ch) _PyUnicode_ToNumeric(ch)
#define Py_UNICODE_ISALPHA(ch) iswalpha(ch)
#define Py_UNICODE_ISSPACE(ch) \
((ch) < 128U ? _Py_ascii_whitespace[(ch)] : _PyUnicode_IsWhitespace(ch))
#define Py_UNICODE_ISLOWER(ch) _PyUnicode_IsLowercase(ch)
#define Py_UNICODE_ISUPPER(ch) _PyUnicode_IsUppercase(ch)
#define Py_UNICODE_ISTITLE(ch) _PyUnicode_IsTitlecase(ch)
#define Py_UNICODE_ISLINEBREAK(ch) _PyUnicode_IsLinebreak(ch)
#define Py_UNICODE_TOLOWER(ch) _PyUnicode_ToLowercase(ch)
#define Py_UNICODE_TOUPPER(ch) _PyUnicode_ToUppercase(ch)
#define Py_UNICODE_TOTITLE(ch) _PyUnicode_ToTitlecase(ch)
#define Py_UNICODE_ISDECIMAL(ch) _PyUnicode_IsDecimalDigit(ch)
#define Py_UNICODE_ISDIGIT(ch) _PyUnicode_IsDigit(ch)
#define Py_UNICODE_ISNUMERIC(ch) _PyUnicode_IsNumeric(ch)
#define Py_UNICODE_TODECIMAL(ch) _PyUnicode_ToDecimalDigit(ch)
#define Py_UNICODE_TODIGIT(ch) _PyUnicode_ToDigit(ch)
#define Py_UNICODE_TONUMERIC(ch) _PyUnicode_ToNumeric(ch)
#define Py_UNICODE_ISALPHA(ch) _PyUnicode_IsAlpha(ch)
#define Py_UNICODE_ISALNUM(ch) \
(Py_UNICODE_ISALPHA(ch) || \
Py_UNICODE_ISDECIMAL(ch) || \
Py_UNICODE_ISDIGIT(ch) || \
Py_UNICODE_ISNUMERIC(ch))
#define Py_UNICODE_COPY(target, source, length)                         \
Py_MEMCPY((target), (source), (length)*sizeof(Py_UNICODE))
#define Py_UNICODE_FILL(target, value, length) \
do  while (0)
#define Py_UNICODE_MATCH(string, offset, substring) \
((*((string)->str + (offset)) == *((substring)->str)) && \
((*((string)->str + (offset) + (substring)->length-1) == *((substring)->str + (substring)->length-1))) && \
!memcmp((string)->str + (offset), (substring)->str, (substring)->length*sizeof(Py_UNICODE)))
typedef struct  PyUnicodeObject;
PyAPI_DATA(PyTypeObject) PyUnicode_Type;
#define PyUnicode_Check(op) \
PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_UNICODE_SUBCLASS)
#define PyUnicode_CheckExact(op) (Py_TYPE(op) == &PyUnicode_Type)
#define PyUnicode_GET_SIZE(op) \
(((PyUnicodeObject *)(op))->length)
#define PyUnicode_GET_DATA_SIZE(op) \
(((PyUnicodeObject *)(op))->length * sizeof(Py_UNICODE))
#define PyUnicode_AS_UNICODE(op) \
(((PyUnicodeObject *)(op))->str)
#define PyUnicode_AS_DATA(op) \
((const char *)((PyUnicodeObject *)(op))->str)
#define Py_UNICODE_REPLACEMENT_CHARACTER ((Py_UNICODE) 0xFFFD)
PyAPI_FUNC(PyObject*) PyUnicode_FromUnicode(
const Py_UNICODE *u,
Py_ssize_t size
);
PyAPI_FUNC(PyObject*) PyUnicode_FromStringAndSize(
const char *u,
Py_ssize_t size
);
PyAPI_FUNC(PyObject*) PyUnicode_FromString(
const char *u
);
PyAPI_FUNC(Py_UNICODE *) PyUnicode_AsUnicode(
PyObject *unicode
);
PyAPI_FUNC(Py_ssize_t) PyUnicode_GetSize(
PyObject *unicode
);
PyAPI_FUNC(Py_UNICODE) PyUnicode_GetMax(void);
PyAPI_FUNC(int) PyUnicode_Resize(
PyObject **unicode,
Py_ssize_t length
);
PyAPI_FUNC(PyObject*) PyUnicode_FromEncodedObject(
register PyObject *obj,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_FromObject(
register PyObject *obj
);
PyAPI_FUNC(PyObject *) PyUnicode_FromFormatV(const char*, va_list);
PyAPI_FUNC(PyObject *) PyUnicode_FromFormat(const char*, ...);
PyAPI_FUNC(PyObject *) _PyUnicode_FormatAdvanced(PyObject *obj,
Py_UNICODE *format_spec,
Py_ssize_t format_spec_len);
PyAPI_FUNC(PyObject*) PyUnicode_FromWideChar(
register const wchar_t *w,
Py_ssize_t size
);
PyAPI_FUNC(Py_ssize_t) PyUnicode_AsWideChar(
PyUnicodeObject *unicode,
register wchar_t *w,
Py_ssize_t size
);
PyAPI_FUNC(PyObject*) PyUnicode_FromOrdinal(int ordinal);
PyAPI_FUNC(int) PyUnicode_ClearFreeList(void);
PyAPI_FUNC(PyObject *) _PyUnicode_AsDefaultEncodedString(
PyObject *, const char *);
PyAPI_FUNC(const char*) PyUnicode_GetDefaultEncoding(void);
PyAPI_FUNC(int) PyUnicode_SetDefaultEncoding(
const char *encoding
);
PyAPI_FUNC(PyObject*) PyUnicode_Decode(
const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_Encode(
const Py_UNICODE *s,
Py_ssize_t size,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsEncodedObject(
PyObject *unicode,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsEncodedString(
PyObject *unicode,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_BuildEncodingMap(
PyObject* string
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF7(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF7Stateful(
const char *string,
Py_ssize_t length,
const char *errors,
Py_ssize_t *consumed
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeUTF7(
const Py_UNICODE *data,
Py_ssize_t length,
int base64SetO,
int base64WhiteSpace,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF8(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF8Stateful(
const char *string,
Py_ssize_t length,
const char *errors,
Py_ssize_t *consumed
);
PyAPI_FUNC(PyObject*) PyUnicode_AsUTF8String(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeUTF8(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF32(
const char *string,
Py_ssize_t length,
const char *errors,
int *byteorder
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF32Stateful(
const char *string,
Py_ssize_t length,
const char *errors,
int *byteorder,
Py_ssize_t *consumed
);
PyAPI_FUNC(PyObject*) PyUnicode_AsUTF32String(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeUTF32(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors,
int byteorder
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF16(
const char *string,
Py_ssize_t length,
const char *errors,
int *byteorder
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUTF16Stateful(
const char *string,
Py_ssize_t length,
const char *errors,
int *byteorder,
Py_ssize_t *consumed
);
PyAPI_FUNC(PyObject*) PyUnicode_AsUTF16String(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeUTF16(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors,
int byteorder
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeUnicodeEscape(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsUnicodeEscapeString(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeUnicodeEscape(
const Py_UNICODE *data,
Py_ssize_t length
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeRawUnicodeEscape(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsRawUnicodeEscapeString(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeRawUnicodeEscape(
const Py_UNICODE *data,
Py_ssize_t length
);
PyObject *_PyUnicode_DecodeUnicodeInternal(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeLatin1(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsLatin1String(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeLatin1(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeASCII(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsASCIIString(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeASCII(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeCharmap(
const char *string,
Py_ssize_t length,
PyObject *mapping,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_AsCharmapString(
PyObject *unicode,
PyObject *mapping
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeCharmap(
const Py_UNICODE *data,
Py_ssize_t length,
PyObject *mapping,
const char *errors
);
PyAPI_FUNC(PyObject *) PyUnicode_TranslateCharmap(
const Py_UNICODE *data,
Py_ssize_t length,
PyObject *table,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeMBCS(
const char *string,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_DecodeMBCSStateful(
const char *string,
Py_ssize_t length,
const char *errors,
Py_ssize_t *consumed
);
PyAPI_FUNC(PyObject*) PyUnicode_AsMBCSString(
PyObject *unicode
);
PyAPI_FUNC(PyObject*) PyUnicode_EncodeMBCS(
const Py_UNICODE *data,
Py_ssize_t length,
const char *errors
);
PyAPI_FUNC(int) PyUnicode_EncodeDecimal(
Py_UNICODE *s,
Py_ssize_t length,
char *output,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_Concat(
PyObject *left,
PyObject *right
);
PyAPI_FUNC(PyObject*) PyUnicode_Split(
PyObject *s,
PyObject *sep,
Py_ssize_t maxsplit
);
PyAPI_FUNC(PyObject*) PyUnicode_Splitlines(
PyObject *s,
int keepends
);
PyAPI_FUNC(PyObject*) PyUnicode_Partition(
PyObject *s,
PyObject *sep
);
PyAPI_FUNC(PyObject*) PyUnicode_RPartition(
PyObject *s,
PyObject *sep
);
PyAPI_FUNC(PyObject*) PyUnicode_RSplit(
PyObject *s,
PyObject *sep,
Py_ssize_t maxsplit
);
PyAPI_FUNC(PyObject *) PyUnicode_Translate(
PyObject *str,
PyObject *table,
const char *errors
);
PyAPI_FUNC(PyObject*) PyUnicode_Join(
PyObject *separator,
PyObject *seq
);
PyAPI_FUNC(Py_ssize_t) PyUnicode_Tailmatch(
PyObject *str,
PyObject *substr,
Py_ssize_t start,
Py_ssize_t end,
int direction
);
PyAPI_FUNC(Py_ssize_t) PyUnicode_Find(
PyObject *str,
PyObject *substr,
Py_ssize_t start,
Py_ssize_t end,
int direction
);
PyAPI_FUNC(Py_ssize_t) PyUnicode_Count(
PyObject *str,
PyObject *substr,
Py_ssize_t start,
Py_ssize_t end
);
PyAPI_FUNC(PyObject *) PyUnicode_Replace(
PyObject *str,
PyObject *substr,
PyObject *replstr,
Py_ssize_t maxcount
);
PyAPI_FUNC(int) PyUnicode_Compare(
PyObject *left,
PyObject *right
);
PyAPI_FUNC(PyObject *) PyUnicode_RichCompare(
PyObject *left,
PyObject *right,
int op
);
PyAPI_FUNC(PyObject *) PyUnicode_Format(
PyObject *format,
PyObject *args
);
PyAPI_FUNC(int) PyUnicode_Contains(
PyObject *container,
PyObject *element
);
PyAPI_FUNC(PyObject *) _PyUnicode_XStrip(
PyUnicodeObject *self,
int striptype,
PyObject *sepobj
);
PyAPI_DATA(const unsigned char) _Py_ascii_whitespace[];
PyAPI_FUNC(int) _PyUnicode_IsLowercase(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsUppercase(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsTitlecase(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsWhitespace(
const Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsLinebreak(
const Py_UNICODE ch
);
PyAPI_FUNC(Py_UNICODE) _PyUnicode_ToLowercase(
Py_UNICODE ch
);
PyAPI_FUNC(Py_UNICODE) _PyUnicode_ToUppercase(
Py_UNICODE ch
);
PyAPI_FUNC(Py_UNICODE) _PyUnicode_ToTitlecase(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_ToDecimalDigit(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_ToDigit(
Py_UNICODE ch
);
PyAPI_FUNC(double) _PyUnicode_ToNumeric(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsDecimalDigit(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsDigit(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsNumeric(
Py_UNICODE ch
);
PyAPI_FUNC(int) _PyUnicode_IsAlpha(
Py_UNICODE ch
);
