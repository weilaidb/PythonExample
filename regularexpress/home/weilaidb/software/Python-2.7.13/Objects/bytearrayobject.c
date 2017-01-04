#define PY_SSIZE_T_CLEAN
char _PyByteArray_empty_string[] = "";
void
PyByteArray_Fini(void)
int
PyByteArray_Init(void)
static int
_getbytevalue(PyObject* arg, int *value)
static Py_ssize_t
bytearray_buffer_getreadbuf(PyByteArrayObject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
bytearray_buffer_getwritebuf(PyByteArrayObject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
bytearray_buffer_getsegcount(PyByteArrayObject *self, Py_ssize_t *lenp)
static Py_ssize_t
bytearray_buffer_getcharbuf(PyByteArrayObject *self, Py_ssize_t index, const char **ptr)
static int
bytearray_getbuffer(PyByteArrayObject *obj, Py_buffer *view, int flags)
static void
bytearray_releasebuffer(PyByteArrayObject *obj, Py_buffer *view)
static Py_ssize_t
_getbuffer(PyObject *obj, Py_buffer *view)
static int
_canresize(PyByteArrayObject *self)
PyObject *
PyByteArray_FromObject(PyObject *input)
PyObject *
PyByteArray_FromStringAndSize(const char *bytes, Py_ssize_t size)
Py_ssize_t
PyByteArray_Size(PyObject *self)
char  *
PyByteArray_AsString(PyObject *self)
int
PyByteArray_Resize(PyObject *self, Py_ssize_t size)
PyObject *
PyByteArray_Concat(PyObject *a, PyObject *b)
static Py_ssize_t
bytearray_length(PyByteArrayObject *self)
static PyObject *
bytearray_iconcat(PyByteArrayObject *self, PyObject *other)
static PyObject *
bytearray_repeat(PyByteArrayObject *self, Py_ssize_t count)
static PyObject *
bytearray_irepeat(PyByteArrayObject *self, Py_ssize_t count)
static PyObject *
bytearray_getitem(PyByteArrayObject *self, Py_ssize_t i)
static PyObject *
bytearray_subscript(PyByteArrayObject *self, PyObject *index)
static int
bytearray_setslice(PyByteArrayObject *self, Py_ssize_t lo, Py_ssize_t hi,
PyObject *values)
static int
bytearray_setitem(PyByteArrayObject *self, Py_ssize_t i, PyObject *value)
static int
bytearray_ass_subscript(PyByteArrayObject *self, PyObject *index, PyObject *values)
static int
bytearray_init(PyByteArrayObject *self, PyObject *args, PyObject *kwds)
static PyObject *
bytearray_repr(PyByteArrayObject *self)
static PyObject *
bytearray_str(PyObject *op)
static PyObject *
bytearray_richcompare(PyObject *self, PyObject *other, int op)
static void
bytearray_dealloc(PyByteArrayObject *self)
#define STRINGLIB_CHAR char
#define STRINGLIB_LEN PyByteArray_GET_SIZE
#define STRINGLIB_STR PyByteArray_AS_STRING
#define STRINGLIB_NEW PyByteArray_FromStringAndSize
#define STRINGLIB_ISSPACE Py_ISSPACE
#define STRINGLIB_ISLINEBREAK(x) ((x == '\n') || (x == '\r'))
#define STRINGLIB_CHECK_EXACT PyByteArray_CheckExact
#define STRINGLIB_MUTABLE 1
#define ADJUST_INDICES(start, end, len)         \
if (end > len)                              \
end = len;                              \
else if (end < 0)                                            \
if (start < 0)
Py_LOCAL_INLINE(Py_ssize_t)
bytearray_find_internal(PyByteArrayObject *self, PyObject *args, int dir)
PyDoc_STRVAR(find__doc__,
"B.find(sub [,start [,end]]) -> int\n\
\n\
Return the lowest index in B where subsection sub is found,\n\
such that sub is contained within B[start,end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
bytearray_find(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(count__doc__,
"B.count(sub [,start [,end]]) -> int\n\
\n\
Return the number of non-overlapping occurrences of subsection sub in\n\
bytes B[start:end].  Optional arguments start and end are interpreted\n\
as in slice notation.");
static PyObject *
bytearray_count(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(index__doc__,
"B.index(sub [,start [,end]]) -> int\n\
\n\
Like B.find() but raise ValueError when the subsection is not found.");
static PyObject *
bytearray_index(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(rfind__doc__,
"B.rfind(sub [,start [,end]]) -> int\n\
\n\
Return the highest index in B where subsection sub is found,\n\
such that sub is contained within B[start,end].  Optional\n\
arguments start and end are interpreted as in slice notation.\n\
\n\
Return -1 on failure.");
static PyObject *
bytearray_rfind(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(rindex__doc__,
"B.rindex(sub [,start [,end]]) -> int\n\
\n\
Like B.rfind() but raise ValueError when the subsection is not found.");
static PyObject *
bytearray_rindex(PyByteArrayObject *self, PyObject *args)
static int
bytearray_contains(PyObject *self, PyObject *arg)
Py_LOCAL(int)
_bytearray_tailmatch(PyByteArrayObject *self, PyObject *substr, Py_ssize_t start,
Py_ssize_t end, int direction)
PyDoc_STRVAR(startswith__doc__,
"B.startswith(prefix [,start [,end]]) -> bool\n\
\n\
Return True if B starts with the specified prefix, False otherwise.\n\
With optional start, test B beginning at that position.\n\
With optional end, stop comparing B at that position.\n\
prefix can also be a tuple of strings to try.");
static PyObject *
bytearray_startswith(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(endswith__doc__,
"B.endswith(suffix [,start [,end]]) -> bool\n\
\n\
Return True if B ends with the specified suffix, False otherwise.\n\
With optional start, test B beginning at that position.\n\
With optional end, stop comparing B at that position.\n\
suffix can also be a tuple of strings to try.");
static PyObject *
bytearray_endswith(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(translate__doc__,
"B.translate(table[, deletechars]) -> bytearray\n\
\n\
Return a copy of B, where all characters occurring in the\n\
optional argument deletechars are removed, and the remaining\n\
characters have been mapped through the given translation\n\
table, which must be a bytes object of length 256.");
static PyObject *
bytearray_translate(PyByteArrayObject *self, PyObject *args)
#define findchar(target, target_len, c)                         \
((char *)memchr((const void *)(target), c, target_len))
Py_LOCAL(PyByteArrayObject *)
return_self(PyByteArrayObject *self)
Py_LOCAL_INLINE(Py_ssize_t)
countchar(const char *target, Py_ssize_t target_len, char c, Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_interleave(PyByteArrayObject *self,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_delete_single_character(PyByteArrayObject *self,
char from_c, Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_delete_substring(PyByteArrayObject *self,
const char *from_s, Py_ssize_t from_len,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_single_character_in_place(PyByteArrayObject *self,
char from_c, char to_c,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_substring_in_place(PyByteArrayObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_single_character(PyByteArrayObject *self,
char from_c,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace_substring(PyByteArrayObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
Py_LOCAL(PyByteArrayObject *)
replace(PyByteArrayObject *self,
const char *from_s, Py_ssize_t from_len,
const char *to_s, Py_ssize_t to_len,
Py_ssize_t maxcount)
PyDoc_STRVAR(replace__doc__,
"B.replace(old, new[, count]) -> bytes\n\
\n\
Return a copy of B with all occurrences of subsection\n\
old replaced by new.  If the optional argument count is\n\
given, only the first count occurrences are replaced.");
static PyObject *
bytearray_replace(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(split__doc__,
"B.split([sep[, maxsplit]]) -> list of bytearray\n\
\n\
Return a list of the sections in B, using sep as the delimiter.\n\
If sep is not given, B is split on ASCII whitespace characters\n\
(space, tab, return, newline, formfeed, vertical tab).\n\
If maxsplit is given, at most maxsplit splits are done.");
static PyObject *
bytearray_split(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(partition__doc__,
"B.partition(sep) -> (head, sep, tail)\n\
\n\
Searches for the separator sep in B, and returns the part before it,\n\
the separator itself, and the part after it.  If the separator is not\n\
found, returns B and two empty bytearray objects.");
static PyObject *
bytearray_partition(PyByteArrayObject *self, PyObject *sep_obj)
PyDoc_STRVAR(rpartition__doc__,
"B.rpartition(sep) -> (head, sep, tail)\n\
\n\
Searches for the separator sep in B, starting at the end of B,\n\
and returns the part before it, the separator itself, and the\n\
part after it.  If the separator is not found, returns two empty\n\
bytearray objects and B.");
static PyObject *
bytearray_rpartition(PyByteArrayObject *self, PyObject *sep_obj)
PyDoc_STRVAR(rsplit__doc__,
"B.rsplit(sep[, maxsplit]) -> list of bytearray\n\
\n\
Return a list of the sections in B, using sep as the delimiter,\n\
starting at the end of B and working to the front.\n\
If sep is not given, B is split on ASCII whitespace characters\n\
(space, tab, return, newline, formfeed, vertical tab).\n\
If maxsplit is given, at most maxsplit splits are done.");
static PyObject *
bytearray_rsplit(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(reverse__doc__,
"B.reverse() -> None\n\
\n\
Reverse the order of the values in B in place.");
static PyObject *
bytearray_reverse(PyByteArrayObject *self, PyObject *unused)
PyDoc_STRVAR(insert__doc__,
"B.insert(index, int) -> None\n\
\n\
Insert a single item into the bytearray before the given index.");
static PyObject *
bytearray_insert(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(append__doc__,
"B.append(int) -> None\n\
\n\
Append a single item to the end of B.");
static PyObject *
bytearray_append(PyByteArrayObject *self, PyObject *arg)
PyDoc_STRVAR(extend__doc__,
"B.extend(iterable int) -> None\n\
\n\
Append all the elements from the iterator or sequence to the\n\
end of B.");
static PyObject *
bytearray_extend(PyByteArrayObject *self, PyObject *arg)
PyDoc_STRVAR(pop__doc__,
"B.pop([index]) -> int\n\
\n\
Remove and return a single item from B. If no index\n\
argument is given, will pop the last value.");
static PyObject *
bytearray_pop(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(remove__doc__,
"B.remove(int) -> None\n\
\n\
Remove the first occurrence of a value in B.");
static PyObject *
bytearray_remove(PyByteArrayObject *self, PyObject *arg)
static Py_ssize_t
lstrip_helper(unsigned char *myptr, Py_ssize_t mysize,
void *argptr, Py_ssize_t argsize)
static Py_ssize_t
rstrip_helper(unsigned char *myptr, Py_ssize_t mysize,
void *argptr, Py_ssize_t argsize)
PyDoc_STRVAR(strip__doc__,
"B.strip([bytes]) -> bytearray\n\
\n\
Strip leading and trailing bytes contained in the argument.\n\
If the argument is omitted, strip ASCII whitespace.");
static PyObject *
bytearray_strip(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(lstrip__doc__,
"B.lstrip([bytes]) -> bytearray\n\
\n\
Strip leading bytes contained in the argument.\n\
If the argument is omitted, strip leading ASCII whitespace.");
static PyObject *
bytearray_lstrip(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(rstrip__doc__,
"B.rstrip([bytes]) -> bytearray\n\
\n\
Strip trailing bytes contained in the argument.\n\
If the argument is omitted, strip trailing ASCII whitespace.");
static PyObject *
bytearray_rstrip(PyByteArrayObject *self, PyObject *args)
PyDoc_STRVAR(decode_doc,
"B.decode([encoding[, errors]]) -> unicode object.\n\
\n\
Decodes B using the codec registered for encoding. encoding defaults\n\
to the default encoding. errors may be given to set a different error\n\
handling scheme.  Default is 'strict' meaning that encoding errors raise\n\
a UnicodeDecodeError.  Other possible values are 'ignore' and 'replace'\n\
as well as any other name registered with codecs.register_error that is\n\
able to handle UnicodeDecodeErrors.");
static PyObject *
bytearray_decode(PyObject *self, PyObject *args, PyObject *kwargs)
PyDoc_STRVAR(alloc_doc,
"B.__alloc__() -> int\n\
\n\
Returns the number of bytes actually allocated.");
static PyObject *
bytearray_alloc(PyByteArrayObject *self)
PyDoc_STRVAR(join_doc,
"B.join(iterable_of_bytes) -> bytes\n\
\n\
Concatenates any number of bytearray objects, with B in between each pair.");
static PyObject *
bytearray_join(PyByteArrayObject *self, PyObject *it)
PyDoc_STRVAR(splitlines__doc__,
"B.splitlines(keepends=False) -> list of lines\n\
\n\
Return a list of the lines in B, breaking at line boundaries.\n\
Line breaks are not included in the resulting list unless keepends\n\
is given and true.");
static PyObject*
bytearray_splitlines(PyObject *self, PyObject *args)
PyDoc_STRVAR(fromhex_doc,
"bytearray.fromhex(string) -> bytearray\n\
\n\
Create a bytearray object from a string of hexadecimal numbers.\n\
Spaces between two numbers are accepted.\n\
Example: bytearray.fromhex('B9 01EF') -> bytearray(b'\\xb9\\x01\\xef').");
static int
hex_digit_to_int(char c)
static PyObject *
bytearray_fromhex(PyObject *cls, PyObject *args)
PyDoc_STRVAR(reduce_doc, "Return state information for pickling.");
static PyObject *
bytearray_reduce(PyByteArrayObject *self)
PyDoc_STRVAR(sizeof_doc,
"B.__sizeof__() -> int\n\
\n\
Returns the size of B in memory, in bytes");
static PyObject *
bytearray_sizeof(PyByteArrayObject *self)
static PySequenceMethods bytearray_as_sequence = ;
static PyMappingMethods bytearray_as_mapping = ;
static PyBufferProcs bytearray_as_buffer = ;
static PyMethodDef
bytearray_methods[] = ;
PyDoc_STRVAR(bytearray_doc,
"bytearray(iterable_of_ints) -> bytearray.\n\
bytearray(string, encoding[, errors]) -> bytearray.\n\
bytearray(bytes_or_bytearray) -> mutable copy of bytes_or_bytearray.\n\
bytearray(memory_view) -> bytearray.\n\
\n\
Construct a mutable bytearray object from:\n\
- an iterable yielding integers in range(256)\n\
- a text string encoded using the specified encoding\n\
- a bytes or a bytearray object\n\
- any object implementing the buffer API.\n\
\n\
bytearray(int) -> bytearray.\n\
\n\
Construct a zero-initialized bytearray of the given length.");
static PyObject *bytearray_iter(PyObject *seq);
PyTypeObject PyByteArray_Type = ;
typedef struct  bytesiterobject;
static void
bytearrayiter_dealloc(bytesiterobject *it)
static int
bytearrayiter_traverse(bytesiterobject *it, visitproc visit, void *arg)
static PyObject *
bytearrayiter_next(bytesiterobject *it)
static PyObject *
bytesarrayiter_length_hint(bytesiterobject *it)
PyDoc_STRVAR(length_hint_doc,
"Private method returning an estimate of len(list(it)).");
static PyMethodDef bytearrayiter_methods[] = ;
PyTypeObject PyByteArrayIter_Type = ;
static PyObject *
bytearray_iter(PyObject *seq)
