#define PY_SSIZE_T_CLEAN
PyDoc_STRVAR(strop_module__doc__,
"Common string manipulations, optimized for speed.\n"
"\n"
"Always use \"import string\" rather than referencing\n"
"this module directly.");
#define WARN if (PyErr_Warn(PyExc_DeprecationWarning, \
"strop functions are obsolete; use string methods")) \
return NULL
#define LEFTSTRIP 0
#define RIGHTSTRIP 1
#define BOTHSTRIP 2
static PyObject *
split_whitespace(char *s, Py_ssize_t len, Py_ssize_t maxsplit)
PyDoc_STRVAR(splitfields__doc__,
"split(s [,sep [,maxsplit]]) -> list of strings\n"
"splitfields(s [,sep [,maxsplit]]) -> list of strings\n"
"\n"
"Return a list of the words in the string s, using sep as the\n"
"delimiter string.  If maxsplit is nonzero, splits into at most\n"
"maxsplit words.  If sep is not specified, any whitespace string\n"
"is a separator.  Maxsplit defaults to 0.\n"
"\n"
"(split and splitfields are synonymous)");
static PyObject *
strop_splitfields(PyObject *self, PyObject *args)
PyDoc_STRVAR(joinfields__doc__,
"join(list [,sep]) -> string\n"
"joinfields(list [,sep]) -> string\n"
"\n"
"Return a string composed of the words in list, with\n"
"intervening occurrences of sep.  Sep defaults to a single\n"
"space.\n"
"\n"
"(join and joinfields are synonymous)");
static PyObject *
strop_joinfields(PyObject *self, PyObject *args)
PyDoc_STRVAR(find__doc__,
"find(s, sub [,start [,end]]) -> in\n"
"\n"
"Return the lowest index in s where substring sub is found,\n"
"such that sub is contained within s[start,end].  Optional\n"
"arguments start and end are interpreted as in slice notation.\n"
"\n"
"Return -1 on failure.");
static PyObject *
strop_find(PyObject *self, PyObject *args)
PyDoc_STRVAR(rfind__doc__,
"rfind(s, sub [,start [,end]]) -> int\n"
"\n"
"Return the highest index in s where substring sub is found,\n"
"such that sub is contained within s[start,end].  Optional\n"
"arguments start and end are interpreted as in slice notation.\n"
"\n"
"Return -1 on failure.");
static PyObject *
strop_rfind(PyObject *self, PyObject *args)
static PyObject *
do_strip(PyObject *args, int striptype)
PyDoc_STRVAR(strip__doc__,
"strip(s) -> string\n"
"\n"
"Return a copy of the string s with leading and trailing\n"
"whitespace removed.");
static PyObject *
strop_strip(PyObject *self, PyObject *args)
PyDoc_STRVAR(lstrip__doc__,
"lstrip(s) -> string\n"
"\n"
"Return a copy of the string s with leading whitespace removed.");
static PyObject *
strop_lstrip(PyObject *self, PyObject *args)
PyDoc_STRVAR(rstrip__doc__,
"rstrip(s) -> string\n"
"\n"
"Return a copy of the string s with trailing whitespace removed.");
static PyObject *
strop_rstrip(PyObject *self, PyObject *args)
PyDoc_STRVAR(lower__doc__,
"lower(s) -> string\n"
"\n"
"Return a copy of the string s converted to lowercase.");
static PyObject *
strop_lower(PyObject *self, PyObject *args)
PyDoc_STRVAR(upper__doc__,
"upper(s) -> string\n"
"\n"
"Return a copy of the string s converted to uppercase.");
static PyObject *
strop_upper(PyObject *self, PyObject *args)
PyDoc_STRVAR(capitalize__doc__,
"capitalize(s) -> string\n"
"\n"
"Return a copy of the string s with only its first character\n"
"capitalized.");
static PyObject *
strop_capitalize(PyObject *self, PyObject *args)
PyDoc_STRVAR(expandtabs__doc__,
"expandtabs(string, [tabsize]) -> string\n"
"\n"
"Expand tabs in a string, i.e. replace them by one or more spaces,\n"
"depending on the current column and the given tab size (default 8).\n"
"The column number is reset to zero after each newline occurring in the\n"
"string.  This doesn't understand other non-printing characters.");
static PyObject *
strop_expandtabs(PyObject *self, PyObject *args)
PyDoc_STRVAR(count__doc__,
"count(s, sub[, start[, end]]) -> int\n"
"\n"
"Return the number of occurrences of substring sub in string\n"
"s[start:end].  Optional arguments start and end are\n"
"interpreted as in slice notation.");
static PyObject *
strop_count(PyObject *self, PyObject *args)
PyDoc_STRVAR(swapcase__doc__,
"swapcase(s) -> string\n"
"\n"
"Return a copy of the string s with upper case characters\n"
"converted to lowercase and vice versa.");
static PyObject *
strop_swapcase(PyObject *self, PyObject *args)
PyDoc_STRVAR(atoi__doc__,
"atoi(s [,base]) -> int\n"
"\n"
"Return the integer represented by the string s in the given\n"
"base, which defaults to 10.  The string s must consist of one\n"
"or more digits, possibly preceded by a sign.  If base is 0, it\n"
"is chosen from the leading characters of s, 0 for octal, 0x or\n"
"0X for hexadecimal.  If base is 16, a preceding 0x or 0X is\n"
"accepted.");
static PyObject *
strop_atoi(PyObject *self, PyObject *args)
PyDoc_STRVAR(atol__doc__,
"atol(s [,base]) -> long\n"
"\n"
"Return the long integer represented by the string s in the\n"
"given base, which defaults to 10.  The string s must consist\n"
"of one or more digits, possibly preceded by a sign.  If base\n"
"is 0, it is chosen from the leading characters of s, 0 for\n"
"octal, 0x or 0X for hexadecimal.  If base is 16, a preceding\n"
"0x or 0X is accepted.  A trailing L or l is not accepted,\n"
"unless base is 0.");
static PyObject *
strop_atol(PyObject *self, PyObject *args)
PyDoc_STRVAR(atof__doc__,
"atof(s) -> float\n"
"\n"
"Return the floating point number represented by the string s.");
static PyObject *
strop_atof(PyObject *self, PyObject *args)
PyDoc_STRVAR(maketrans__doc__,
"maketrans(frm, to) -> string\n"
"\n"
"Return a translation table (a string of 256 bytes long)\n"
"suitable for use in string.translate.  The strings frm and to\n"
"must be of the same length.");
static PyObject *
strop_maketrans(PyObject *self, PyObject *args)
PyDoc_STRVAR(translate__doc__,
"translate(s,table [,deletechars]) -> string\n"
"\n"
"Return a copy of the string s, where all characters occurring\n"
"in the optional argument deletechars are removed, and the\n"
"remaining characters have been mapped through the given\n"
"translation table, which must be a string of length 256.");
static PyObject *
strop_translate(PyObject *self, PyObject *args)
static Py_ssize_t
mymemfind(const char *mem, Py_ssize_t len, const char *pat, Py_ssize_t pat_len)
static Py_ssize_t
mymemcnt(const char *mem, Py_ssize_t len, const char *pat, Py_ssize_t pat_len)
static char *
mymemreplace(const char *str, Py_ssize_t len,
const char *pat, Py_ssize_t pat_len,
const char *sub, Py_ssize_t sub_len,
Py_ssize_t count,
Py_ssize_t *out_len)
PyDoc_STRVAR(replace__doc__,
"replace (str, old, new[, maxsplit]) -> string\n"
"\n"
"Return a copy of string str with all occurrences of substring\n"
"old replaced by new. If the optional argument maxsplit is\n"
"given, only the first maxsplit occurrences are replaced.");
static PyObject *
strop_replace(PyObject *self, PyObject *args)
static PyMethodDef
strop_methods[] = ;
PyMODINIT_FUNC
initstrop(void)
