#define PY_SSIZE_T_CLEAN
#define PyUnicode_MAXFREELIST       1024
#define KEEPALIVE_SIZE_LIMIT       9
# define BYTEORDER_IS_BIG_ENDIAN
# define BYTEORDER_IS_LITTLE_ENDIAN
static PyUnicodeObject *free_list = NULL;
static int numfree = 0;
static PyUnicodeObject *unicode_empty = NULL;
#define _Py_RETURN_UNICODE_EMPTY()                      \
do  while (0)
static PyUnicodeObject *unicode_latin1[256] = ;
static char unicode_default_encoding[100 + 1] = ;
const unsigned char _Py_ascii_whitespace[] = ;
static unsigned char ascii_linebreak[] = ;
Py_UNICODE
PyUnicode_GetMax(void)
#if LONG_BIT >= 128
#define BLOOM_WIDTH 128
#elif LONG_BIT >= 64
#define BLOOM_WIDTH 64
#elif LONG_BIT >= 32
#define BLOOM_WIDTH 32
#error
#define BLOOM_MASK unsigned long
static BLOOM_MASK bloom_linebreak = ~(BLOOM_MASK)0;
#define BLOOM_ADD(mask, ch) ((mask |= (1UL << ((ch) & (BLOOM_WIDTH - 1)))))
#define BLOOM(mask, ch)     ((mask &  (1UL << ((ch) & (BLOOM_WIDTH - 1)))))
#define BLOOM_LINEBREAK(ch)                                             \
((ch) < 128U ? ascii_linebreak[(ch)] :                              \
(BLOOM(bloom_linebreak, (ch)) && Py_UNICODE_ISLINEBREAK(ch)))
Py_LOCAL_INLINE(BLOOM_MASK) make_bloom_mask(Py_UNICODE* ptr, Py_ssize_t len)
Py_LOCAL_INLINE(int) unicode_member(Py_UNICODE chr, Py_UNICODE* set, Py_ssize_t setlen)
#define BLOOM_MEMBER(mask, chr, set, setlen)                    \
BLOOM(mask, chr) && unicode_member(chr, set, setlen)
static
int unicode_resize(register PyUnicodeObject *unicode,
Py_ssize_t length)
static
PyUnicodeObject *_PyUnicode_New(Py_ssize_t length)
static
void unicode_dealloc(register PyUnicodeObject *unicode)
static
int _PyUnicode_Resize(PyUnicodeObject **unicode, Py_ssize_t length)
int PyUnicode_Resize(PyObject **unicode, Py_ssize_t length)
PyObject *PyUnicode_FromUnicode(const Py_UNICODE *u,
Py_ssize_t size)
PyObject *PyUnicode_FromStringAndSize(const char *u, Py_ssize_t size)
PyObject *PyUnicode_FromString(const char *u)
#define _Py_UNICODE_IS_HIGH_SURROGATE(ch) (0xD800 <= ch && ch <= 0xDBFF)
#define _Py_UNICODE_IS_LOW_SURROGATE(ch) (0xDC00 <= ch && ch <= 0xDFFF)
#define _Py_UNICODE_JOIN_SURROGATES(high, low)  \
(((((Py_UCS4)(high) & 0x03FF) << 10) |      \
((Py_UCS4)(low) & 0x03FF)) + 0x10000)
#define _Py_UNICODE_NEXT(ptr, end) *(ptr)++
#define _Py_UNICODE_NEXT(ptr, end)                                      \
(((_Py_UNICODE_IS_HIGH_SURROGATE(*(ptr)) && (ptr) < (end)) &&      \
_Py_UNICODE_IS_LOW_SURROGATE((ptr)[1])) ?                       \
((ptr) += 2,_Py_UNICODE_JOIN_SURROGATES((ptr)[-2], (ptr)[-1])) : \
(Py_UCS4)*(ptr)++)
#if (Py_UNICODE_SIZE == 2) && defined(SIZEOF_WCHAR_T) && (SIZEOF_WCHAR_T == 4)
# define CONVERT_WCHAR_TO_SURROGATES
PyObject *PyUnicode_FromWideChar(register const wchar_t *w,
Py_ssize_t size)
PyObject *PyUnicode_FromWideChar(register const wchar_t *w,
Py_ssize_t size)
#undef CONVERT_WCHAR_TO_SURROGATES
static void
makefmt(char *fmt, int longflag, int size_tflag, int zeropad, int width, int precision, char c)
#define appendstring(string) \
do  while (0)
PyObject *
PyUnicode_FromFormatV(const char *format, va_list vargs)
#undef appendstring
PyObject *
PyUnicode_FromFormat(const char *format, ...)
Py_ssize_t PyUnicode_AsWideChar(PyUnicodeObject *unicode,
wchar_t *w,
Py_ssize_t size)
PyObject *PyUnicode_FromOrdinal(int ordinal)
PyObject *PyUnicode_FromObject(register PyObject *obj)
PyObject *PyUnicode_FromEncodedObject(register PyObject *obj,
const char *encoding,
const char *errors)
PyObject *PyUnicode_Decode(const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors)
PyObject *PyUnicode_AsDecodedObject(PyObject *unicode,
const char *encoding,
const char *errors)
PyObject *PyUnicode_Encode(const Py_UNICODE *s,
Py_ssize_t size,
const char *encoding,
const char *errors)
PyObject *PyUnicode_AsEncodedObject(PyObject *unicode,
const char *encoding,
const char *errors)
PyObject *PyUnicode_AsEncodedString(PyObject *unicode,
const char *encoding,
const char *errors)
PyObject *_PyUnicode_AsDefaultEncodedString(PyObject *unicode,
const char *errors)
Py_UNICODE *PyUnicode_AsUnicode(PyObject *unicode)
Py_ssize_t PyUnicode_GetSize(PyObject *unicode)
const char *PyUnicode_GetDefaultEncoding(void)
int PyUnicode_SetDefaultEncoding(const char *encoding)
static
int unicode_decode_call_errorhandler(const char *errors, PyObject **errorHandler,
const char *encoding, const char *reason,
const char *input, Py_ssize_t insize, Py_ssize_t *startinpos,
Py_ssize_t *endinpos, PyObject **exceptionObject, const char **inptr,
PyUnicodeObject **output, Py_ssize_t *outpos, Py_UNICODE **outptr)
#define IS_BASE64(c) \
(((c) >= 'A' && (c) <= 'Z') ||     \
((c) >= 'a' && (c) <= 'z') ||     \
((c) >= '0' && (c) <= '9') ||     \
(c) == '+' || (c) == '/')
#define FROM_BASE64(c)                                                  \
(((c) >= 'A' && (c) <= 'Z') ? (c) - 'A' :                           \
((c) >= 'a' && (c) <= 'z') ? (c) - 'a' + 26 :                      \
((c) >= '0' && (c) <= '9') ? (c) - '0' + 52 :                      \
(c) == '+' ? 62 : 63)
#define TO_BASE64(n)  \
([(n) & 0x3f])
#define DECODE_DIRECT(c)                                \
((c) <= 127 && (c) != '+')
static
char utf7_category[128] = ;
#define ENCODE_DIRECT(c, directO, directWS)             \
((c) < 128 && (c) > 0 &&                            \
((utf7_category[(c)] == 0) ||                      \
(directWS && (utf7_category[(c)] == 2)) ||        \
(directO && (utf7_category[(c)] == 1))))
PyObject *PyUnicode_DecodeUTF7(const char *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_DecodeUTF7Stateful(const char *s,
Py_ssize_t size,
const char *errors,
Py_ssize_t *consumed)
PyObject *PyUnicode_EncodeUTF7(const Py_UNICODE *s,
Py_ssize_t size,
int base64SetO,
int base64WhiteSpace,
const char *errors)
#undef IS_BASE64
#undef FROM_BASE64
#undef TO_BASE64
#undef DECODE_DIRECT
#undef ENCODE_DIRECT
static
char utf8_code_length[256] = ;
PyObject *PyUnicode_DecodeUTF8(const char *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_DecodeUTF8Stateful(const char *s,
Py_ssize_t size,
const char *errors,
Py_ssize_t *consumed)
PyObject *
PyUnicode_EncodeUTF8(const Py_UNICODE *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_AsUTF8String(PyObject *unicode)
PyObject *
PyUnicode_DecodeUTF32(const char *s,
Py_ssize_t size,
const char *errors,
int *byteorder)
PyObject *
PyUnicode_DecodeUTF32Stateful(const char *s,
Py_ssize_t size,
const char *errors,
int *byteorder,
Py_ssize_t *consumed)
PyObject *
PyUnicode_EncodeUTF32(const Py_UNICODE *s,
Py_ssize_t size,
const char *errors,
int byteorder)
PyObject *PyUnicode_AsUTF32String(PyObject *unicode)
PyObject *
PyUnicode_DecodeUTF16(const char *s,
Py_ssize_t size,
const char *errors,
int *byteorder)
PyObject *
PyUnicode_DecodeUTF16Stateful(const char *s,
Py_ssize_t size,
const char *errors,
int *byteorder,
Py_ssize_t *consumed)
PyObject *
PyUnicode_EncodeUTF16(const Py_UNICODE *s,
Py_ssize_t size,
const char *errors,
int byteorder)
PyObject *PyUnicode_AsUTF16String(PyObject *unicode)
static _PyUnicode_Name_CAPI *ucnhash_CAPI = NULL;
PyObject *PyUnicode_DecodeUnicodeEscape(const char *s,
Py_ssize_t size,
const char *errors)
if (_PyUnicode_Resize(&v, p - PyUnicode_AS_UNICODE(v)) < 0)
goto onError;
Py_XDECREF(errorHandler);
Py_XDECREF(exc);
return (PyObject *)v;
ucnhashError:
PyErr_SetString(
PyExc_UnicodeError,
);
Py_XDECREF(v);
Py_XDECREF(errorHandler);
Py_XDECREF(exc);
return NULL;
onError:
Py_XDECREF(v);
Py_XDECREF(errorHandler);
Py_XDECREF(exc);
return NULL;
}
Py_LOCAL_INLINE(const Py_UNICODE *) findchar(const Py_UNICODE *s,
Py_ssize_t size,
Py_UNICODE ch)
static
PyObject *unicodeescape_string(const Py_UNICODE *s,
Py_ssize_t size,
int quotes)
PyObject *PyUnicode_EncodeUnicodeEscape(const Py_UNICODE *s,
Py_ssize_t size)
PyObject *PyUnicode_AsUnicodeEscapeString(PyObject *unicode)
PyObject *PyUnicode_DecodeRawUnicodeEscape(const char *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_EncodeRawUnicodeEscape(const Py_UNICODE *s,
Py_ssize_t size)
PyObject *PyUnicode_AsRawUnicodeEscapeString(PyObject *unicode)
PyObject *_PyUnicode_DecodeUnicodeInternal(const char *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_DecodeLatin1(const char *s,
Py_ssize_t size,
const char *errors)
static void make_encode_exception(PyObject **exceptionObject,
const char *encoding,
const Py_UNICODE *unicode, Py_ssize_t size,
Py_ssize_t startpos, Py_ssize_t endpos,
const char *reason)
static void raise_encode_exception(PyObject **exceptionObject,
const char *encoding,
const Py_UNICODE *unicode, Py_ssize_t size,
Py_ssize_t startpos, Py_ssize_t endpos,
const char *reason)
static PyObject *unicode_encode_call_errorhandler(const char *errors,
PyObject **errorHandler,
const char *encoding, const char *reason,
const Py_UNICODE *unicode, Py_ssize_t size, PyObject **exceptionObject,
Py_ssize_t startpos, Py_ssize_t endpos,
Py_ssize_t *newpos)
static PyObject *unicode_encode_ucs1(const Py_UNICODE *p,
Py_ssize_t size,
const char *errors,
int limit)
PyObject *PyUnicode_EncodeLatin1(const Py_UNICODE *p,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_AsLatin1String(PyObject *unicode)
PyObject *PyUnicode_DecodeASCII(const char *s,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_EncodeASCII(const Py_UNICODE *p,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_AsASCIIString(PyObject *unicode)
#if defined(MS_WINDOWS) && defined(HAVE_USABLE_WCHAR_T)
#if SIZEOF_INT < SIZEOF_SIZE_T
#define NEED_RETRY
static int is_dbcs_lead_byte(const char *s, int offset)
static int decode_mbcs(PyUnicodeObject **v,
const char *s,
int size,
int final)
PyObject *PyUnicode_DecodeMBCSStateful(const char *s,
Py_ssize_t size,
const char *errors,
Py_ssize_t *consumed)
PyObject *PyUnicode_DecodeMBCS(const char *s,
Py_ssize_t size,
const char *errors)
static int encode_mbcs(PyObject **repr,
const Py_UNICODE *p,
int size)
PyObject *PyUnicode_EncodeMBCS(const Py_UNICODE *p,
Py_ssize_t size,
const char *errors)
PyObject *PyUnicode_AsMBCSString(PyObject *unicode)
#undef NEED_RETRY
PyObject *PyUnicode_DecodeCharmap(const char *s,
Py_ssize_t size,
PyObject *mapping,
const char *errors)
struct encoding_map;
static PyObject*
encoding_map_size(PyObject *obj, PyObject* args)
static PyMethodDef encoding_map_methods[] = ;
static void
encoding_map_dealloc(PyObject* o)
static PyTypeObject EncodingMapType = ;
PyObject*
PyUnicode_BuildEncodingMap(PyObject* string)
static int
encoding_map_lookup(Py_UNICODE c, PyObject *mapping)
static PyObject *charmapencode_lookup(Py_UNICODE c, PyObject *mapping)
static int
charmapencode_resize(PyObject **outobj, Py_ssize_t *outpos, Py_ssize_t requiredsize)
typedef enum charmapencode_result charmapencode_result;
static
charmapencode_result charmapencode_output(Py_UNICODE c, PyObject *mapping,
PyObject **outobj, Py_ssize_t *outpos)
static
int charmap_encoding_error(
const Py_UNICODE *p, Py_ssize_t size, Py_ssize_t *inpos, PyObject *mapping,
PyObject **exceptionObject,
int *known_errorHandler, PyObject **errorHandler, const char *errors,
PyObject **res, Py_ssize_t *respos)
PyObject *PyUnicode_EncodeCharmap(const Py_UNICODE *p,
Py_ssize_t size,
PyObject *mapping,
const char *errors)
PyObject *PyUnicode_AsCharmapString(PyObject *unicode,
PyObject *mapping)
static void make_translate_exception(PyObject **exceptionObject,
const Py_UNICODE *unicode, Py_ssize_t size,
Py_ssize_t startpos, Py_ssize_t endpos,
const char *reason)
static void raise_translate_exception(PyObject **exceptionObject,
const Py_UNICODE *unicode, Py_ssize_t size,
Py_ssize_t startpos, Py_ssize_t endpos,
const char *reason)
static PyObject *unicode_translate_call_errorhandler(const char *errors,
PyObject **errorHandler,
const char *reason,
const Py_UNICODE *unicode, Py_ssize_t size, PyObject **exceptionObject,
Py_ssize_t startpos, Py_ssize_t endpos,
Py_ssize_t *newpos)
static
int charmaptranslate_lookup(Py_UNICODE c, PyObject *mapping, PyObject **result)
static
int charmaptranslate_makespace(PyObject **outobj, Py_UNICODE **outp,
Py_ssize_t requiredsize)
static
int charmaptranslate_output(const Py_UNICODE *startinp, const Py_UNICODE *curinp,
Py_ssize_t insize, PyObject *mapping, PyObject **outobj, Py_UNICODE **outp,
PyObject **res)
PyObject *PyUnicode_TranslateCharmap(const Py_UNICODE *p,
Py_ssize_t size,
PyObject *mapping,
const char *errors)
PyObject *PyUnicode_Translate(PyObject *str,
PyObject *mapping,
const char *errors)
int PyUnicode_EncodeDecimal(Py_UNICODE *s,
Py_ssize_t length,
char *output,
const char *errors)
#define ADJUST_INDICES(start, end, len)         \
if (end > len)                              \
end = len;                              \
else if (end < 0)                                            \
if (start < 0)
Py_ssize_t PyUnicode_Count(PyObject *str,
PyObject *substr,
Py_ssize_t start,
Py_ssize_t end)
Py_ssize_t PyUnicode_Find(PyObject *str,
PyObject *sub,
Py_ssize_t start,
Py_ssize_t end,
int direction)
static
int tailmatch(PyUnicodeObject *self,
PyUnicodeObject *substring,
Py_ssize_t start,
Py_ssize_t end,
int direction)
Py_ssize_t PyUnicode_Tailmatch(PyObject *str,
PyObject *substr,
Py_ssize_t start,
Py_ssize_t end,
int direction)
static
PyObject *fixup(PyUnicodeObject *self,
int (*fixfct)(PyUnicodeObject *s))
static
int fixupper(PyUnicodeObject *self)
static
int fixlower(PyUnicodeObject *self)
static
int fixswapcase(PyUnicodeObject *self)
static
int fixcapitalize(PyUnicodeObject *self)
static
int fixtitle(PyUnicodeObject *self)
PyObject *
PyUnicode_Join(PyObject *separator, PyObject *seq)
static
PyUnicodeObject *pad(PyUnicodeObject *self,
Py_ssize_t left,
Py_ssize_t right,
Py_UNICODE fill)
PyObject *PyUnicode_Splitlines(PyObject *string, int keepends)
static
PyObject *split(PyUnicodeObject *self,
PyUnicodeObject *substring,
Py_ssize_t maxcount)
static
PyObject *rsplit(PyUnicodeObject *self,
PyUnicodeObject *substring,
Py_ssize_t maxcount)
static
PyObject *replace(PyUnicodeObject *self,
PyUnicodeObject *str1,
PyUnicodeObject *str2,
Py_ssize_t maxcount)
PyDoc_STRVAR(title__doc__,
"S.title() -> unicode\n\
\n\
Return a titlecased version of S, i.e. words start with title case\n\
characters, all remaining cased characters have lower case.");
static PyObject*
unicode_title(PyUnicodeObject *self)
PyDoc_STRVAR(capitalize__doc__,
"S.capitalize() -> unicode\n\
\n\
Return a capitalized version of S, i.e. make the first character\n\
have upper case and the rest lower case.");
static PyObject*
unicode_capitalize(PyUnicodeObject *self)
static int
convert_uc(PyObject *obj, void *addr)
PyDoc_STRVAR(center__doc__,
"S.center(width[, fillchar]) -> unicode\n\
\n\
Return S centered in a Unicode string of length width. Padding is\n\
done using the specified fill character (default is a space)");
static PyObject *
unicode_center(PyUnicodeObject *self, PyObject *args)
int PyUnicode_Compare(PyObject *left,
PyObject *right)
PyObject *PyUnicode_RichCompare(PyObject *left,
PyObject *right,
int op)
int PyUnicode_Contains(PyObject *container,
PyObject *element)
PyObject *PyUnicode_Concat(PyObject *left,
PyObject *right)
PyDoc_STRVAR(count__doc__,
"S.count(sub[, start[, end]]) -> int\n\
\n\
Return the number of non-overlapping occurrences of substring sub in\n\
Unicode string S[start:end].  Optional arguments start and end are\n\
interpreted as in slice notation.");
static PyObject *
unicode_count(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(encode__doc__,
"S.encode([encoding[,errors]]) -> string or unicode\n\
\n\
Encodes S using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a UnicodeEncodeError. Other possible values are 'ignore', 'replace' and\n\
'xmlcharrefreplace' as well as any other name registered with\n\
codecs.register_error that can handle UnicodeEncodeErrors.");
static PyObject *
unicode_encode(PyUnicodeObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(decode__doc__,
"S.decode([encoding[,errors]]) -> string or unicode\n\
\n\
Decodes S using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a UnicodeDecodeError. Other possible values are 'ignore' and 'replace'\n\
as well as any other name registered with codecs.register_error that is\n\
able to handle UnicodeDecodeErrors.");
static PyObject *
unicode_decode(PyUnicodeObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(expandtabs__doc__,
"S.expandtabs([tabsize]) -> unicode\n\
\n\
Return a copy of S where all tab characters are expanded using spaces.\n\
If tabsize is not given, a tab size of 8 characters is assumed.");
static PyObject*
unicode_expandtabs(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(find__doc__,
"S.find(sub [,start [,end]]) -> int\n\
\n\
Return the lowest index in S where substring sub is found,\n\
such that sub is contained within S[start:end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
unicode_find(PyUnicodeObject *self, PyObject *args)
static PyObject *
unicode_getitem(PyUnicodeObject *self, Py_ssize_t index)
static long
unicode_hash(PyUnicodeObject *self)
PyDoc_STRVAR(index__doc__,
"S.index(sub [,start [,end]]) -> int\n\
\n\
Like S.find() but raise ValueError when the substring is not found.");
static PyObject *
unicode_index(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(islower__doc__,
"S.islower() -> bool\n\
\n\
Return True if all cased characters in S are lowercase and there is\n\
at least one cased character in S, False otherwise.");
static PyObject*
unicode_islower(PyUnicodeObject *self)
PyDoc_STRVAR(isupper__doc__,
"S.isupper() -> bool\n\
\n\
Return True if all cased characters in S are uppercase and there is\n\
at least one cased character in S, False otherwise.");
static PyObject*
unicode_isupper(PyUnicodeObject *self)
PyDoc_STRVAR(istitle__doc__,
"S.istitle() -> bool\n\
\n\
Return True if S is a titlecased string and there is at least one\n\
character in S, i.e. upper- and titlecase characters may only\n\
follow uncased characters and lowercase characters only cased ones.\n\
Return False otherwise.");
static PyObject*
unicode_istitle(PyUnicodeObject *self)
PyDoc_STRVAR(isspace__doc__,
"S.isspace() -> bool\n\
\n\
Return True if all characters in S are whitespace\n\
and there is at least one character in S, False otherwise.");
static PyObject*
unicode_isspace(PyUnicodeObject *self)
PyDoc_STRVAR(isalpha__doc__,
"S.isalpha() -> bool\n\
\n\
Return True if all characters in S are alphabetic\n\
and there is at least one character in S, False otherwise.");
static PyObject*
unicode_isalpha(PyUnicodeObject *self)
PyDoc_STRVAR(isalnum__doc__,
"S.isalnum() -> bool\n\
\n\
Return True if all characters in S are alphanumeric\n\
and there is at least one character in S, False otherwise.");
static PyObject*
unicode_isalnum(PyUnicodeObject *self)
PyDoc_STRVAR(isdecimal__doc__,
"S.isdecimal() -> bool\n\
\n\
Return True if there are only decimal characters in S,\n\
False otherwise.");
static PyObject*
unicode_isdecimal(PyUnicodeObject *self)
PyDoc_STRVAR(isdigit__doc__,
"S.isdigit() -> bool\n\
\n\
Return True if all characters in S are digits\n\
and there is at least one character in S, False otherwise.");
static PyObject*
unicode_isdigit(PyUnicodeObject *self)
PyDoc_STRVAR(isnumeric__doc__,
"S.isnumeric() -> bool\n\
\n\
Return True if there are only numeric characters in S,\n\
False otherwise.");
static PyObject*
unicode_isnumeric(PyUnicodeObject *self)
PyDoc_STRVAR(join__doc__,
"S.join(iterable) -> unicode\n\
\n\
Return a string which is the concatenation of the strings in the\n\
iterable.  The separator between elements is S.");
static PyObject*
unicode_join(PyObject *self, PyObject *data)
static Py_ssize_t
unicode_length(PyUnicodeObject *self)
PyDoc_STRVAR(ljust__doc__,
"S.ljust(width[, fillchar]) -> int\n\
\n\
Return S left-justified in a Unicode string of length width. Padding is\n\
done using the specified fill character (default is a space).");
static PyObject *
unicode_ljust(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(lower__doc__,
"S.lower() -> unicode\n\
\n\
Return a copy of the string S converted to lowercase.");
static PyObject*
unicode_lower(PyUnicodeObject *self)
#define LEFTSTRIP 0
#define RIGHTSTRIP 1
#define BOTHSTRIP 2
static const char *stripformat[] = ;
#define STRIPNAME(i) (stripformat[i]+3)
PyObject *
_PyUnicode_XStrip(PyUnicodeObject *self, int striptype, PyObject *sepobj)
static PyObject *
do_strip(PyUnicodeObject *self, int striptype)
static PyObject *
do_argstrip(PyUnicodeObject *self, int striptype, PyObject *args)
PyDoc_STRVAR(strip__doc__,
"S.strip([chars]) -> unicode\n\
\n\
Return a copy of the string S with leading and trailing\n\
whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is a str, it will be converted to unicode before stripping");
static PyObject *
unicode_strip(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(lstrip__doc__,
"S.lstrip([chars]) -> unicode\n\
\n\
Return a copy of the string S with leading whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is a str, it will be converted to unicode before stripping");
static PyObject *
unicode_lstrip(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(rstrip__doc__,
"S.rstrip([chars]) -> unicode\n\
\n\
Return a copy of the string S with trailing whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is a str, it will be converted to unicode before stripping");
static PyObject *
unicode_rstrip(PyUnicodeObject *self, PyObject *args)
static PyObject*
unicode_repeat(PyUnicodeObject *str, Py_ssize_t len)
PyObject *PyUnicode_Replace(PyObject *obj,
PyObject *subobj,
PyObject *replobj,
Py_ssize_t maxcount)
PyDoc_STRVAR(replace__doc__,
"S.replace(old, new[, count]) -> unicode\n\
\n\
Return a copy of S with all occurrences of substring\n\
old replaced by new.  If the optional argument count is\n\
given, only the first count occurrences are replaced.");
static PyObject*
unicode_replace(PyUnicodeObject *self, PyObject *args)
static
PyObject *unicode_repr(PyObject *unicode)
PyDoc_STRVAR(rfind__doc__,
"S.rfind(sub [,start [,end]]) -> int\n\
\n\
Return the highest index in S where substring sub is found,\n\
such that sub is contained within S[start:end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
unicode_rfind(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(rindex__doc__,
"S.rindex(sub [,start [,end]]) -> int\n\
\n\
Like S.rfind() but raise ValueError when the substring is not found.");
static PyObject *
unicode_rindex(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(rjust__doc__,
"S.rjust(width[, fillchar]) -> unicode\n\
\n\
Return S right-justified in a Unicode string of length width. Padding is\n\
done using the specified fill character (default is a space).");
static PyObject *
unicode_rjust(PyUnicodeObject *self, PyObject *args)
static PyObject*
unicode_slice(PyUnicodeObject *self, Py_ssize_t start, Py_ssize_t end)
PyObject *PyUnicode_Split(PyObject *s,
PyObject *sep,
Py_ssize_t maxsplit)
PyDoc_STRVAR(split__doc__,
"S.split([sep [,maxsplit]]) -> list of strings\n\
\n\
Return a list of the words in S, using sep as the\n\
delimiter string.  If maxsplit is given, at most maxsplit\n\
splits are done. If sep is not specified or is None, any\n\
whitespace string is a separator and empty strings are\n\
removed from the result.");
static PyObject*
unicode_split(PyUnicodeObject *self, PyObject *args)
PyObject *
PyUnicode_Partition(PyObject *str_in, PyObject *sep_in)
PyObject *
PyUnicode_RPartition(PyObject *str_in, PyObject *sep_in)
PyDoc_STRVAR(partition__doc__,
"S.partition(sep) -> (head, sep, tail)\n\
\n\
Search for the separator sep in S, and return the part before it,\n\
the separator itself, and the part after it.  If the separator is not\n\
found, return S and two empty strings.");
static PyObject*
unicode_partition(PyUnicodeObject *self, PyObject *separator)
PyDoc_STRVAR(rpartition__doc__,
"S.rpartition(sep) -> (head, sep, tail)\n\
\n\
Search for the separator sep in S, starting at the end of S, and return\n\
the part before it, the separator itself, and the part after it.  If the\n\
separator is not found, return two empty strings and S.");
static PyObject*
unicode_rpartition(PyUnicodeObject *self, PyObject *separator)
PyObject *PyUnicode_RSplit(PyObject *s,
PyObject *sep,
Py_ssize_t maxsplit)
PyDoc_STRVAR(rsplit__doc__,
"S.rsplit([sep [,maxsplit]]) -> list of strings\n\
\n\
Return a list of the words in S, using sep as the\n\
delimiter string, starting at the end of the string and\n\
working to the front.  If maxsplit is given, at most maxsplit\n\
splits are done. If sep is not specified, any whitespace string\n\
is a separator.");
static PyObject*
unicode_rsplit(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(splitlines__doc__,
"S.splitlines(keepends=False) -> list of strings\n\
\n\
Return a list of the lines in S, breaking at line boundaries.\n\
Line breaks are not included in the resulting list unless keepends\n\
is given and true.");
static PyObject*
unicode_splitlines(PyUnicodeObject *self, PyObject *args)
static
PyObject *unicode_str(PyUnicodeObject *self)
PyDoc_STRVAR(swapcase__doc__,
"S.swapcase() -> unicode\n\
\n\
Return a copy of S with uppercase characters converted to lowercase\n\
and vice versa.");
static PyObject*
unicode_swapcase(PyUnicodeObject *self)
PyDoc_STRVAR(translate__doc__,
"S.translate(table) -> unicode\n\
\n\
Return a copy of the string S, where all characters have been mapped\n\
through the given translation table, which must be a mapping of\n\
Unicode ordinals to Unicode ordinals, Unicode strings or None.\n\
Unmapped characters are left untouched. Characters mapped to None\n\
are deleted.");
static PyObject*
unicode_translate(PyUnicodeObject *self, PyObject *table)
PyDoc_STRVAR(upper__doc__,
"S.upper() -> unicode\n\
\n\
Return a copy of S converted to uppercase.");
static PyObject*
unicode_upper(PyUnicodeObject *self)
PyDoc_STRVAR(zfill__doc__,
"S.zfill(width) -> unicode\n\
\n\
Pad a numeric string S with zeros on the left, to fill a field\n\
of the specified width. The string S is never truncated.");
static PyObject *
unicode_zfill(PyUnicodeObject *self, PyObject *args)
PyDoc_STRVAR(startswith__doc__,
"S.startswith(prefix[, start[, end]]) -> bool\n\
\n\
Return True if S starts with the specified prefix, False otherwise.\n\
With optional start, test S beginning at that position.\n\
With optional end, stop comparing S at that position.\n\
prefix can also be a tuple of strings to try.");
static PyObject *
unicode_startswith(PyUnicodeObject *self,
PyObject *args)
PyDoc_STRVAR(endswith__doc__,
"S.endswith(suffix[, start[, end]]) -> bool\n\
\n\
Return True if S ends with the specified suffix, False otherwise.\n\
With optional start, test S beginning at that position.\n\
With optional end, stop comparing S at that position.\n\
suffix can also be a tuple of strings to try.");
static PyObject *
unicode_endswith(PyUnicodeObject *self,
PyObject *args)
PyDoc_STRVAR(format__doc__,
"S.format(*args, **kwargs) -> unicode\n\
\n\
Return a formatted version of S, using substitutions from args and kwargs.\n\
The substitutions are identified by braces ('').");
static PyObject *
unicode__format__(PyObject *self, PyObject *args)
PyDoc_STRVAR(p_format__doc__,
"S.__format__(format_spec) -> unicode\n\
\n\
Return a formatted version of S as described by format_spec.");
static PyObject *
unicode__sizeof__(PyUnicodeObject *v)
PyDoc_STRVAR(sizeof__doc__,
"S.__sizeof__() -> size of S in memory, in bytes\n\
\n\
");
static PyObject *
unicode_getnewargs(PyUnicodeObject *v)
static PyMethodDef unicode_methods[] = ;
static PyObject *
unicode_mod(PyObject *v, PyObject *w)
static PyNumberMethods unicode_as_number = ;
static PySequenceMethods unicode_as_sequence = ;
static PyObject*
unicode_subscript(PyUnicodeObject* self, PyObject* item)
static PyMappingMethods unicode_as_mapping = ;
static Py_ssize_t
unicode_buffer_getreadbuf(PyUnicodeObject *self,
Py_ssize_t index,
const void **ptr)
static Py_ssize_t
unicode_buffer_getwritebuf(PyUnicodeObject *self, Py_ssize_t index,
const void **ptr)
static int
unicode_buffer_getsegcount(PyUnicodeObject *self,
Py_ssize_t *lenp)
static Py_ssize_t
unicode_buffer_getcharbuf(PyUnicodeObject *self,
Py_ssize_t index,
const void **ptr)
static PyObject *
getnextarg(PyObject *args, Py_ssize_t arglen, Py_ssize_t *p_argidx)
#define F_LJUST (1<<0)
#define F_SIGN  (1<<1)
#define F_BLANK (1<<2)
#define F_ALT   (1<<3)
#define F_ZERO  (1<<4)
static Py_ssize_t
strtounicode(Py_UNICODE *buffer, const char *charbuffer)
static int
longtounicode(Py_UNICODE *buffer, size_t len, const char *format, long x)
static PyObject *
formatfloat(PyObject *v, int flags, int prec, int type)
static PyObject*
formatlong(PyObject *val, int flags, int prec, int type)
static int
formatint(Py_UNICODE *buf,
size_t buflen,
int flags,
int prec,
int type,
PyObject *v)
static int
formatchar(Py_UNICODE *buf,
size_t buflen,
PyObject *v)
#define FORMATBUFLEN (size_t)120
PyObject *PyUnicode_Format(PyObject *format,
PyObject *args)
static PyBufferProcs unicode_as_buffer = ;
static PyObject *
unicode_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
unicode_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
unicode_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(unicode_doc,
"unicode(object='') -> unicode object\n\
unicode(string[, encoding[, errors]]) -> unicode object\n\
\n\
Create a new Unicode object from the given encoded string.\n\
encoding defaults to the current default string encoding.\n\
errors can be 'strict', 'replace' or 'ignore' and defaults to 'strict'.");
PyTypeObject PyUnicode_Type = ;
void _PyUnicode_Init(void)
int
PyUnicode_ClearFreeList(void)
void
_PyUnicode_Fini(void)
