#define PY_SSIZE_T_CLEAN
Py_ssize_t null_strings, one_strings;
static PyStringObject *characters[UCHAR_MAX + 1];
static PyStringObject *nullstring;
static PyObject *interned;
#define PyStringObject_SIZE (offsetof(PyStringObject, ob_sval) + 1)
PyObject *
PyString_FromStringAndSize(const char *str, Py_ssize_t size)
PyObject *
PyString_FromString(const char *str)
PyObject *
PyString_FromFormatV(const char *format, va_list vargs)
PyObject *
PyString_FromFormat(const char *format, ...)
PyObject *PyString_Decode(const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors)
PyObject *PyString_AsDecodedObject(PyObject *str,
const char *encoding,
const char *errors)
PyObject *PyString_AsDecodedString(PyObject *str,
const char *encoding,
const char *errors)
PyObject *PyString_Encode(const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors)
PyObject *PyString_AsEncodedObject(PyObject *str,
const char *encoding,
const char *errors)
PyObject *PyString_AsEncodedString(PyObject *str,
const char *encoding,
const char *errors)
static void
string_dealloc(PyObject *op)
PyObject *PyString_DecodeEscape(const char *s,
Py_ssize_t len,
const char *errors,
Py_ssize_t unicode,
const char *recode_encoding)
static Py_ssize_t
string_getsize(register PyObject *op)
static char *
string_getbuffer(register PyObject *op)
Py_ssize_t
PyString_Size(register PyObject *op)
char *
PyString_AsString(register PyObject *op)
int
PyString_AsStringAndSize(register PyObject *obj,
register char **s,
register Py_ssize_t *len)
#define _Py_InsertThousandsGrouping _PyString_InsertThousandsGrouping
static int
string_print(PyStringObject *op, FILE *fp, int flags)
PyObject *
PyString_Repr(PyObject *obj, int smartquotes)
static PyObject *
string_repr(PyObject *op)
static PyObject *
string_str(PyObject *s)
static Py_ssize_t
string_length(PyStringObject *a)
static PyObject *
string_concat(register PyStringObject *a, register PyObject *bb)
static PyObject *
string_repeat(register PyStringObject *a, register Py_ssize_t n)
static PyObject *
string_slice(register PyStringObject *a, register Py_ssize_t i,
register Py_ssize_t j)
static int
string_contains(PyObject *str_obj, PyObject *sub_obj)
static PyObject *
string_item(PyStringObject *a, register Py_ssize_t i)
static PyObject*
string_richcompare(PyStringObject *a, PyStringObject *b, int op)
int
_PyString_Eq(PyObject *o1, PyObject *o2)
static long
string_hash(PyStringObject *a)
static PyObject*
string_subscript(PyStringObject* self, PyObject* item)
static Py_ssize_t
string_buffer_getreadbuf(PyStringObject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
string_buffer_getwritebuf(PyStringObject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
string_buffer_getsegcount(PyStringObject *self, Py_ssize_t *lenp)
static Py_ssize_t
string_buffer_getcharbuf(PyStringObject *self, Py_ssize_t index, const char **ptr)
static int
string_buffer_getbuffer(PyStringObject *self, Py_buffer *view, int flags)
static PySequenceMethods string_as_sequence = ;
static PyMappingMethods string_as_mapping = ;
static PyBufferProcs string_as_buffer = ;
#define LEFTSTRIP 0
#define RIGHTSTRIP 1
#define BOTHSTRIP 2
static const char *stripformat[] = ;
#define STRIPNAME(i) (stripformat[i]+3)
PyDoc_STRVAR(split__doc__,
"S.split([sep [,maxsplit]]) -> list of strings\n\
\n\
Return a list of the words in the string S, using sep as the\n\
delimiter string.  If maxsplit is given, at most maxsplit\n\
splits are done. If sep is not specified or is None, any\n\
whitespace string is a separator and empty strings are removed\n\
from the result.");
static PyObject *
string_split(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(partition__doc__,
"S.partition(sep) -> (head, sep, tail)\n\
\n\
Search for the separator sep in S, and return the part before it,\n\
the separator itself, and the part after it.  If the separator is not\n\
found, return S and two empty strings.");
static PyObject *
string_partition(PyStringObject *self, PyObject *sep_obj)
PyDoc_STRVAR(rpartition__doc__,
"S.rpartition(sep) -> (head, sep, tail)\n\
\n\
Search for the separator sep in S, starting at the end of S, and return\n\
the part before it, the separator itself, and the part after it.  If the\n\
separator is not found, return two empty strings and S.");
static PyObject *
string_rpartition(PyStringObject *self, PyObject *sep_obj)
PyDoc_STRVAR(rsplit__doc__,
"S.rsplit([sep [,maxsplit]]) -> list of strings\n\
\n\
Return a list of the words in the string S, using sep as the\n\
delimiter string, starting at the end of the string and working\n\
to the front.  If maxsplit is given, at most maxsplit splits are\n\
done. If sep is not specified or is None, any whitespace string\n\
is a separator.");
static PyObject *
string_rsplit(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(join__doc__,
"S.join(iterable) -> string\n\
\n\
Return a string which is the concatenation of the strings in the\n\
iterable.  The separator between elements is S.");
static PyObject *
string_join(PyStringObject *self, PyObject *orig)
PyObject *
_PyString_Join(PyObject *sep, PyObject *x)
#define ADJUST_INDICES(start, end, len)         \
if (end > len)                          \
end = len;                          \
else if (end < 0)                                        \
if (start < 0)
Py_LOCAL_INLINE(Py_ssize_t)
string_find_internal(PyStringObject *self, PyObject *args, int dir)
PyDoc_STRVAR(find__doc__,
"S.find(sub [,start [,end]]) -> int\n\
\n\
Return the lowest index in S where substring sub is found,\n\
such that sub is contained within S[start:end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
string_find(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(index__doc__,
"S.index(sub [,start [,end]]) -> int\n\
\n\
Like S.find() but raise ValueError when the substring is not found.");
static PyObject *
string_index(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(rfind__doc__,
"S.rfind(sub [,start [,end]]) -> int\n\
\n\
Return the highest index in S where substring sub is found,\n\
such that sub is contained within S[start:end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
string_rfind(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(rindex__doc__,
"S.rindex(sub [,start [,end]]) -> int\n\
\n\
Like S.rfind() but raise ValueError when the substring is not found.");
static PyObject *
string_rindex(PyStringObject *self, PyObject *args)
Py_LOCAL_INLINE(PyObject *)
do_xstrip(PyStringObject *self, int striptype, PyObject *sepobj)
Py_LOCAL_INLINE(PyObject *)
do_strip(PyStringObject *self, int striptype)
Py_LOCAL_INLINE(PyObject *)
do_argstrip(PyStringObject *self, int striptype, PyObject *args)
PyDoc_STRVAR(strip__doc__,
"S.strip([chars]) -> string or unicode\n\
\n\
Return a copy of the string S with leading and trailing\n\
whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is unicode, S will be converted to unicode before stripping");
static PyObject *
string_strip(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(lstrip__doc__,
"S.lstrip([chars]) -> string or unicode\n\
\n\
Return a copy of the string S with leading whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is unicode, S will be converted to unicode before stripping");
static PyObject *
string_lstrip(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(rstrip__doc__,
"S.rstrip([chars]) -> string or unicode\n\
\n\
Return a copy of the string S with trailing whitespace removed.\n\
If chars is given and not None, remove characters in chars instead.\n\
If chars is unicode, S will be converted to unicode before stripping");
static PyObject *
string_rstrip(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(lower__doc__,
"S.lower() -> string\n\
\n\
Return a copy of the string S converted to lowercase.");
#define _tolower tolower
static PyObject *
string_lower(PyStringObject *self)
PyDoc_STRVAR(upper__doc__,
"S.upper() -> string\n\
\n\
Return a copy of the string S converted to uppercase.");
#define _toupper toupper
static PyObject *
string_upper(PyStringObject *self)
PyDoc_STRVAR(title__doc__,
"S.title() -> string\n\
\n\
Return a titlecased version of S, i.e. words start with uppercase\n\
characters, all remaining cased characters have lowercase.");
static PyObject*
string_title(PyStringObject *self)
PyDoc_STRVAR(capitalize__doc__,
"S.capitalize() -> string\n\
\n\
Return a copy of the string S with only its first character\n\
capitalized.");
static PyObject *
string_capitalize(PyStringObject *self)
PyDoc_STRVAR(count__doc__,
"S.count(sub[, start[, end]]) -> int\n\
\n\
Return the number of non-overlapping occurrences of substring sub in\n\
string S[start:end].  Optional arguments start and end are interpreted\n\
as in slice notation.");
static PyObject *
string_count(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(swapcase__doc__,
"S.swapcase() -> string\n\
\n\
Return a copy of the string S with uppercase characters\n\
converted to lowercase and vice versa.");
static PyObject *
string_swapcase(PyStringObject *self)
PyDoc_STRVAR(translate__doc__,
"S.translate(table [,deletechars]) -> string\n\
\n\
Return a copy of the string S, where all characters occurring\n\
in the optional argument deletechars are removed, and the\n\
remaining characters have been mapped through the given\n\
translation table, which must be a string of length 256 or None.\n\
If the table argument is None, no translation is applied and\n\
the operation simply removes the characters in deletechars.");
static PyObject *
string_translate(PyStringObject *self, PyObject *args)
#define findchar(target, target_len, c)                         \
((char *)memchr((const void *)(target), c, target_len))
Py_LOCAL(PyStringObject *)
return_self(PyStringObject *self)
Py_LOCAL_INLINE(Py_ssize_t)
countchar(const char *target, Py_ssize_t target_len, char c, Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_interleave(PyStringObject *self,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_delete_single_character(PyStringObject *self,
char from_c, Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_delete_substring(PyStringObject *self,
const char *from_s, Py_ssize_t from_len,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_single_character_in_place(PyStringObject *self,
char from_c, char to_c,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_substring_in_place(PyStringObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_single_character(PyStringObject *self,
char from_c,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace_substring(PyStringObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyStringObject *)
replace(PyStringObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
PyDoc_STRVAR(replace__doc__,
"S.replace(old, new[, count]) -> string\n\
\n\
Return a copy of string S with all occurrences of substring\n\
old replaced by new.  If the optional argument count is\n\
given, only the first count occurrences are replaced.");
static PyObject *
string_replace(PyStringObject *self, PyObject *args)
Py_LOCAL(int)
_string_tailmatch(PyStringObject *self, PyObject *substr, Py_ssize_t start,
Py_ssize_t end, int direction)
PyDoc_STRVAR(startswith__doc__,
"S.startswith(prefix[, start[, end]]) -> bool\n\
\n\
Return True if S starts with the specified prefix, False otherwise.\n\
With optional start, test S beginning at that position.\n\
With optional end, stop comparing S at that position.\n\
prefix can also be a tuple of strings to try.");
static PyObject *
string_startswith(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(endswith__doc__,
"S.endswith(suffix[, start[, end]]) -> bool\n\
\n\
Return True if S ends with the specified suffix, False otherwise.\n\
With optional start, test S beginning at that position.\n\
With optional end, stop comparing S at that position.\n\
suffix can also be a tuple of strings to try.");
static PyObject *
string_endswith(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(encode__doc__,
"S.encode([encoding[,errors]]) -> object\n\
\n\
Encodes S using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a UnicodeEncodeError. Other possible values are 'ignore', 'replace' and\n\
'xmlcharrefreplace' as well as any other name registered with\n\
codecs.register_error that is able to handle UnicodeEncodeErrors.");
static PyObject *
string_encode(PyStringObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(decode__doc__,
"S.decode([encoding[,errors]]) -> object\n\
\n\
Decodes S using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme. Default is 'strict' meaning that encoding errors raise\n\
a UnicodeDecodeError. Other possible values are 'ignore' and 'replace'\n\
as well as any other name registered with codecs.register_error that is\n\
able to handle UnicodeDecodeErrors.");
static PyObject *
string_decode(PyStringObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(expandtabs__doc__,
"S.expandtabs([tabsize]) -> string\n\
\n\
Return a copy of S where all tab characters are expanded using spaces.\n\
If tabsize is not given, a tab size of 8 characters is assumed.");
static PyObject*
string_expandtabs(PyStringObject *self, PyObject *args)
Py_LOCAL_INLINE(PyObject *)
pad(PyStringObject *self, Py_ssize_t left, Py_ssize_t right, char fill)
PyDoc_STRVAR(ljust__doc__,
"S.ljust(width[, fillchar]) -> string\n"
"\n"
"Return S left-justified in a string of length width. Padding is\n"
"done using the specified fill character (default is a space).");
static PyObject *
string_ljust(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(rjust__doc__,
"S.rjust(width[, fillchar]) -> string\n"
"\n"
"Return S right-justified in a string of length width. Padding is\n"
"done using the specified fill character (default is a space)");
static PyObject *
string_rjust(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(center__doc__,
"S.center(width[, fillchar]) -> string\n"
"\n"
"Return S centered in a string of length width. Padding is\n"
"done using the specified fill character (default is a space)");
static PyObject *
string_center(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(zfill__doc__,
"S.zfill(width) -> string\n"
"\n"
"Pad a numeric string S with zeros on the left, to fill a field\n"
"of the specified width.  The string S is never truncated.");
static PyObject *
string_zfill(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(isspace__doc__,
"S.isspace() -> bool\n\
\n\
Return True if all characters in S are whitespace\n\
and there is at least one character in S, False otherwise.");
static PyObject*
string_isspace(PyStringObject *self)
PyDoc_STRVAR(isalpha__doc__,
"S.isalpha() -> bool\n\
\n\
Return True if all characters in S are alphabetic\n\
and there is at least one character in S, False otherwise.");
static PyObject*
string_isalpha(PyStringObject *self)
PyDoc_STRVAR(isalnum__doc__,
"S.isalnum() -> bool\n\
\n\
Return True if all characters in S are alphanumeric\n\
and there is at least one character in S, False otherwise.");
static PyObject*
string_isalnum(PyStringObject *self)
PyDoc_STRVAR(isdigit__doc__,
"S.isdigit() -> bool\n\
\n\
Return True if all characters in S are digits\n\
and there is at least one character in S, False otherwise.");
static PyObject*
string_isdigit(PyStringObject *self)
PyDoc_STRVAR(islower__doc__,
"S.islower() -> bool\n\
\n\
Return True if all cased characters in S are lowercase and there is\n\
at least one cased character in S, False otherwise.");
static PyObject*
string_islower(PyStringObject *self)
PyDoc_STRVAR(isupper__doc__,
"S.isupper() -> bool\n\
\n\
Return True if all cased characters in S are uppercase and there is\n\
at least one cased character in S, False otherwise.");
static PyObject*
string_isupper(PyStringObject *self)
PyDoc_STRVAR(istitle__doc__,
"S.istitle() -> bool\n\
\n\
Return True if S is a titlecased string and there is at least one\n\
character in S, i.e. uppercase characters may only follow uncased\n\
characters and lowercase characters only cased ones. Return False\n\
otherwise.");
static PyObject*
string_istitle(PyStringObject *self, PyObject *uncased)
PyDoc_STRVAR(splitlines__doc__,
"S.splitlines(keepends=False) -> list of strings\n\
\n\
Return a list of the lines in S, breaking at line boundaries.\n\
Line breaks are not included in the resulting list unless keepends\n\
is given and true.");
static PyObject*
string_splitlines(PyStringObject *self, PyObject *args)
PyDoc_STRVAR(sizeof__doc__,
"S.__sizeof__() -> size of S in memory, in bytes");
static PyObject *
string_sizeof(PyStringObject *v)
static PyObject *
string_getnewargs(PyStringObject *v)
PyDoc_STRVAR(format__doc__,
"S.format(*args, **kwargs) -> string\n\
\n\
Return a formatted version of S, using substitutions from args and kwargs.\n\
The substitutions are identified by braces ('').");
static PyObject *
string__format__(PyObject* self, PyObject* args)
PyDoc_STRVAR(p_format__doc__,
"S.__format__(format_spec) -> string\n\
\n\
Return a formatted version of S as described by format_spec.");
static PyMethodDef
string_methods[] = ;
static PyObject *
str_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
string_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
str_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
basestring_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
string_mod(PyObject *v, PyObject *w)
PyDoc_STRVAR(basestring_doc,
"Type basestring cannot be instantiated; it is the base for str and unicode.");
static PyNumberMethods string_as_number = ;
PyTypeObject PyBaseString_Type = ;
PyDoc_STRVAR(string_doc,
"str(object='') -> string\n\
\n\
Return a nice string representation of the object.\n\
If the argument is a string, the return value is the same object.");
PyTypeObject PyString_Type = ;
void
PyString_Concat(register PyObject **pv, register PyObject *w)
void
PyString_ConcatAndDel(register PyObject **pv, register PyObject *w)
int
_PyString_Resize(PyObject **pv, Py_ssize_t newsize)
Py_LOCAL_INLINE(PyObject *)
getnextarg(PyObject *args, Py_ssize_t arglen, Py_ssize_t *p_argidx)
#define F_LJUST (1<<0)
#define F_SIGN  (1<<1)
#define F_BLANK (1<<2)
#define F_ALT   (1<<3)
#define F_ZERO  (1<<4)
static PyObject *
formatfloat(PyObject *v, int flags, int prec, int type)
PyObject*
_PyString_FormatLong(PyObject *val, int flags, int prec, int type,
char **pbuf, int *plen)
Py_LOCAL_INLINE(int)
formatint(char *buf, size_t buflen, int flags,
int prec, int type, PyObject *v)
Py_LOCAL_INLINE(int)
formatchar(char *buf, size_t buflen, PyObject *v)
#define FORMATBUFLEN (size_t)120
PyObject *
PyString_Format(PyObject *format, PyObject *args)
void
PyString_InternInPlace(PyObject **p)
void
PyString_InternImmortal(PyObject **p)
PyObject *
PyString_InternFromString(const char *cp)
void
PyString_Fini(void)
void _Py_ReleaseInternedStrings(void)
