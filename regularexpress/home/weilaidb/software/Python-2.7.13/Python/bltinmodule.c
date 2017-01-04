#if defined(MS_WINDOWS) && defined(HAVE_USABLE_WCHAR_T)
const char *Py_FileSystemDefaultEncoding = "mbcs";
#elif defined(__APPLE__)
const char *Py_FileSystemDefaultEncoding = "utf-8";
const char *Py_FileSystemDefaultEncoding = NULL;
static PyObject *filterstring(PyObject *, PyObject *);
static PyObject *filterunicode(PyObject *, PyObject *);
static PyObject *filtertuple (PyObject *, PyObject *);
static PyObject *
builtin___import__(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(import_doc,
"__import__(name, globals=, locals=, fromlist=[], level=-1) -> module\n\
\n\
Import a module. Because this function is meant for use by the Python\n\
interpreter and not for general use it is better to use\n\
importlib.import_module() to programmatically import a module.\n\
\n\
The globals argument is only used to determine the context;\n\
they are not modified.  The locals argument is unused.  The fromlist\n\
should be a list of names to emulate ``from name import ...'', or an\n\
empty list to emulate ``import name''.\n\
When importing a module from a package, note that __import__('A.B', ...)\n\
returns package A when fromlist is empty, but its submodule B when\n\
fromlist is not empty.  Level is used to determine whether to perform \n\
absolute or relative imports.  -1 is the original strategy of attempting\n\
both absolute and relative imports, 0 is absolute, a positive number\n\
is the number of parent directories to search relative to the current module.");
static PyObject *
builtin_abs(PyObject *self, PyObject *v)
PyDoc_STRVAR(abs_doc,
"abs(number) -> number\n\
\n\
Return the absolute value of the argument.");
static PyObject *
builtin_all(PyObject *self, PyObject *v)
PyDoc_STRVAR(all_doc,
"all(iterable) -> bool\n\
\n\
Return True if bool(x) is True for all values x in the iterable.\n\
If the iterable is empty, return True.");
static PyObject *
builtin_any(PyObject *self, PyObject *v)
PyDoc_STRVAR(any_doc,
"any(iterable) -> bool\n\
\n\
Return True if bool(x) is True for any x in the iterable.\n\
If the iterable is empty, return False.");
static PyObject *
builtin_apply(PyObject *self, PyObject *args)
PyDoc_STRVAR(apply_doc,
"apply(object[, args[, kwargs]]) -> value\n\
\n\
Call a callable object with positional arguments taken from the tuple args,\n\
and keyword arguments taken from the optional dictionary kwargs.\n\
Note that classes are callable, as are instances with a __call__() method.\n\
\n\
Deprecated since release 2.3. Instead, use the extended call syntax:\n\
function(*args, **keywords).");
static PyObject *
builtin_bin(PyObject *self, PyObject *v)
PyDoc_STRVAR(bin_doc,
"bin(number) -> string\n\
\n\
Return the binary representation of an integer or long integer.");
static PyObject *
builtin_callable(PyObject *self, PyObject *v)
PyDoc_STRVAR(callable_doc,
"callable(object) -> bool\n\
\n\
Return whether the object is callable (i.e., some kind of function).\n\
Note that classes are callable, as are instances with a __call__() method.");
static PyObject *
builtin_filter(PyObject *self, PyObject *args)
PyDoc_STRVAR(filter_doc,
"filter(function or None, sequence) -> list, tuple, or string\n"
"\n"
"Return those items of sequence for which function(item) is true.  If\n"
"function is None, return the items that are true.  If sequence is a tuple\n"
"or string, return the same type, else return a list.");
static PyObject *
builtin_format(PyObject *self, PyObject *args)
PyDoc_STRVAR(format_doc,
"format(value[, format_spec]) -> string\n\
\n\
Returns value.__format__(format_spec)\n\
format_spec defaults to \"\"");
static PyObject *
builtin_chr(PyObject *self, PyObject *args)
PyDoc_STRVAR(chr_doc,
"chr(i) -> character\n\
\n\
Return a string of one character with ordinal i; 0 <= i < 256.");
static PyObject *
builtin_unichr(PyObject *self, PyObject *args)
PyDoc_STRVAR(unichr_doc,
"unichr(i) -> Unicode character\n\
\n\
Return a Unicode string of one character with ordinal i; 0 <= i <= 0x10ffff.");
static PyObject *
builtin_cmp(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmp_doc,
"cmp(x, y) -> integer\n\
\n\
Return negative if x<y, zero if x==y, positive if x>y.");
static PyObject *
builtin_coerce(PyObject *self, PyObject *args)
PyDoc_STRVAR(coerce_doc,
"coerce(x, y) -> (x1, y1)\n\
\n\
Return a tuple consisting of the two numeric arguments converted to\n\
a common type, using the same rules as used by arithmetic operations.\n\
If coercion is not possible, raise TypeError.");
static PyObject *
builtin_compile(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(compile_doc,
"compile(source, filename, mode[, flags[, dont_inherit]]) -> code object\n\
\n\
Compile the source string (a Python module, statement or expression)\n\
into a code object that can be executed by the exec statement or eval().\n\
The filename will be used for run-time error messages.\n\
The mode must be 'exec' to compile a module, 'single' to compile a\n\
single (interactive) statement, or 'eval' to compile an expression.\n\
The flags argument, if present, controls which future statements influence\n\
the compilation of the code.\n\
The dont_inherit argument, if non-zero, stops the compilation inheriting\n\
the effects of any future statements in effect in the code calling\n\
compile; if absent or zero these statements do influence the compilation,\n\
in addition to any features explicitly specified.");
static PyObject *
builtin_dir(PyObject *self, PyObject *args)
PyDoc_STRVAR(dir_doc,
"dir([object]) -> list of strings\n"
"\n"
"If called without an argument, return the names in the current scope.\n"
"Else, return an alphabetized list of names comprising (some of) the attributes\n"
"of the given object, and of attributes reachable from it.\n"
"If the object supplies a method named __dir__, it will be used; otherwise\n"
"the default dir() logic is used and returns:\n"
"  for a module object: the module's attributes.\n"
"  for a class object:  its attributes, and recursively the attributes\n"
"    of its bases.\n"
"  for any other object: its attributes, its class's attributes, and\n"
"    recursively the attributes of its class's base classes.");
static PyObject *
builtin_divmod(PyObject *self, PyObject *args)
PyDoc_STRVAR(divmod_doc,
"divmod(x, y) -> (quotient, remainder)\n\
\n\
Return the tuple (x
static PyObject *
builtin_eval(PyObject *self, PyObject *args)
PyDoc_STRVAR(eval_doc,
"eval(source[, globals[, locals]]) -> value\n\
\n\
Evaluate the source in the context of globals and locals.\n\
The source may be a string representing a Python expression\n\
or a code object as returned by compile().\n\
The globals must be a dictionary and locals can be any mapping,\n\
defaulting to the current globals and locals.\n\
If only globals is given, locals defaults to it.\n");
static PyObject *
builtin_execfile(PyObject *self, PyObject *args)
PyDoc_STRVAR(execfile_doc,
"execfile(filename[, globals[, locals]])\n\
\n\
Read and execute a Python script from a file.\n\
The globals and locals are dictionaries, defaulting to the current\n\
globals and locals.  If only globals is given, locals defaults to it.");
static PyObject *
builtin_getattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(getattr_doc,
"getattr(object, name[, default]) -> value\n\
\n\
Get a named attribute from an object; getattr(x, 'y') is equivalent to x.y.\n\
When a default argument is given, it is returned when the attribute doesn't\n\
exist; without it, an exception is raised in that case.");
static PyObject *
builtin_globals(PyObject *self)
PyDoc_STRVAR(globals_doc,
"globals() -> dictionary\n\
\n\
Return the dictionary containing the current scope's global variables.");
static PyObject *
builtin_hasattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(hasattr_doc,
"hasattr(object, name) -> bool\n\
\n\
Return whether the object has an attribute with the given name.\n\
(This is done by calling getattr(object, name) and catching exceptions.)");
static PyObject *
builtin_id(PyObject *self, PyObject *v)
PyDoc_STRVAR(id_doc,
"id(object) -> integer\n\
\n\
Return the identity of an object.  This is guaranteed to be unique among\n\
simultaneously existing objects.  (Hint: it's the object's memory address.)");
static PyObject *
builtin_map(PyObject *self, PyObject *args)
PyDoc_STRVAR(map_doc,
"map(function, sequence[, sequence, ...]) -> list\n\
\n\
Return a list of the results of applying the function to the items of\n\
the argument sequence(s).  If more than one sequence is given, the\n\
function is called with an argument list consisting of the corresponding\n\
item of each sequence, substituting None for missing values when not all\n\
sequences have the same length.  If the function is None, return a list of\n\
the items of the sequence (or a list of tuples if more than one sequence).");
static PyObject *
builtin_next(PyObject *self, PyObject *args)
PyDoc_STRVAR(next_doc,
"next(iterator[, default])\n\
\n\
Return the next item from the iterator. If default is given and the iterator\n\
is exhausted, it is returned instead of raising StopIteration.");
static PyObject *
builtin_setattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(setattr_doc,
"setattr(object, name, value)\n\
\n\
Set a named attribute on an object; setattr(x, 'y', v) is equivalent to\n\
``x.y = v''.");
static PyObject *
builtin_delattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(delattr_doc,
"delattr(object, name)\n\
\n\
Delete a named attribute on an object; delattr(x, 'y') is equivalent to\n\
``del x.y''.");
static PyObject *
builtin_hash(PyObject *self, PyObject *v)
PyDoc_STRVAR(hash_doc,
"hash(object) -> integer\n\
\n\
Return a hash value for the object.  Two objects with the same value have\n\
the same hash value.  The reverse is not necessarily true, but likely.");
static PyObject *
builtin_hex(PyObject *self, PyObject *v)
PyDoc_STRVAR(hex_doc,
"hex(number) -> string\n\
\n\
Return the hexadecimal representation of an integer or long integer.");
static PyObject *builtin_raw_input(PyObject *, PyObject *);
static PyObject *
builtin_input(PyObject *self, PyObject *args)
PyDoc_STRVAR(input_doc,
"input([prompt]) -> value\n\
\n\
Equivalent to eval(raw_input(prompt)).");
static PyObject *
builtin_intern(PyObject *self, PyObject *args)
PyDoc_STRVAR(intern_doc,
"intern(string) -> string\n\
\n\
``Intern'' the given string.  This enters the string in the (global)\n\
table of interned strings whose purpose is to speed up dictionary lookups.\n\
Return the string itself or the previously interned string object with the\n\
same value.");
static PyObject *
builtin_iter(PyObject *self, PyObject *args)
PyDoc_STRVAR(iter_doc,
"iter(collection) -> iterator\n\
iter(callable, sentinel) -> iterator\n\
\n\
Get an iterator from an object.  In the first form, the argument must\n\
supply its own iterator, or be a sequence.\n\
In the second form, the callable is called until it returns the sentinel.");
static PyObject *
builtin_len(PyObject *self, PyObject *v)
PyDoc_STRVAR(len_doc,
"len(object) -> integer\n\
\n\
Return the number of items of a sequence or collection.");
static PyObject *
builtin_locals(PyObject *self)
PyDoc_STRVAR(locals_doc,
"locals() -> dictionary\n\
\n\
Update and return a dictionary containing the current scope's local variables.");
static PyObject *
min_max(PyObject *args, PyObject *kwds, int op)
static PyObject *
builtin_min(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(min_doc,
"min(iterable[, key=func]) -> value\n\
min(a, b, c, ...[, key=func]) -> value\n\
\n\
With a single iterable argument, return its smallest item.\n\
With two or more arguments, return the smallest argument.");
static PyObject *
builtin_max(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(max_doc,
"max(iterable[, key=func]) -> value\n\
max(a, b, c, ...[, key=func]) -> value\n\
\n\
With a single iterable argument, return its largest item.\n\
With two or more arguments, return the largest argument.");
static PyObject *
builtin_oct(PyObject *self, PyObject *v)
PyDoc_STRVAR(oct_doc,
"oct(number) -> string\n\
\n\
Return the octal representation of an integer or long integer.");
static PyObject *
builtin_open(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(open_doc,
"open(name[, mode[, buffering]]) -> file object\n\
\n\
Open a file using the file() type, returns a file object.  This is the\n\
preferred way to open a file.  See file.__doc__ for further information.");
static PyObject *
builtin_ord(PyObject *self, PyObject* obj)
PyDoc_STRVAR(ord_doc,
"ord(c) -> integer\n\
\n\
Return the integer ordinal of a one-character string.");
static PyObject *
builtin_pow(PyObject *self, PyObject *args)
PyDoc_STRVAR(pow_doc,
"pow(x, y[, z]) -> number\n\
\n\
With two arguments, equivalent to x**y.  With three arguments,\n\
equivalent to (x**y) % z, but may be more efficient (e.g. for longs).");
static PyObject *
builtin_print(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(print_doc,
"print(value, ..., sep=' ', end='\\n', file=sys.stdout)\n\
\n\
Prints the values to a stream, or to sys.stdout by default.\n\
Optional keyword arguments:\n\
file: a file-like object (stream); defaults to the current sys.stdout.\n\
sep:  string inserted between values, default a space.\n\
end:  string appended after the last value, default a newline.");
static long
get_len_of_range_longs(PyObject *lo, PyObject *hi, PyObject *step)
static PyObject *
get_range_long_argument(PyObject *arg, const char *name)
static PyObject *
handle_range_longs(PyObject *self, PyObject *args)
static long
get_len_of_range(long lo, long hi, long step)
static PyObject *
builtin_range(PyObject *self, PyObject *args)
PyDoc_STRVAR(range_doc,
"range(stop) -> list of integers\n\
range(start, stop[, step]) -> list of integers\n\
\n\
Return a list containing an arithmetic progression of integers.\n\
range(i, j) returns [i, i+1, i+2, ..., j-1]; start (!) defaults to 0.\n\
When step is given, it specifies the increment (or decrement).\n\
For example, range(4) returns [0, 1, 2, 3].  The end point is omitted!\n\
These are exactly the valid indices for a list of 4 elements.");
static PyObject *
builtin_raw_input(PyObject *self, PyObject *args)
PyDoc_STRVAR(raw_input_doc,
"raw_input([prompt]) -> string\n\
\n\
Read a string from standard input.  The trailing newline is stripped.\n\
If the user hits EOF (Unix: Ctl-D, Windows: Ctl-Z+Return), raise EOFError.\n\
On Unix, GNU readline is used if enabled.  The prompt string, if given,\n\
is printed without a trailing newline before reading.");
static PyObject *
builtin_reduce(PyObject *self, PyObject *args)
PyDoc_STRVAR(reduce_doc,
"reduce(function, sequence[, initial]) -> value\n\
\n\
Apply a function of two arguments cumulatively to the items of a sequence,\n\
from left to right, so as to reduce the sequence to a single value.\n\
For example, reduce(lambda x, y: x+y, [1, 2, 3, 4, 5]) calculates\n\
((((1+2)+3)+4)+5).  If initial is present, it is placed before the items\n\
of the sequence in the calculation, and serves as a default when the\n\
sequence is empty.");
static PyObject *
builtin_reload(PyObject *self, PyObject *v)
PyDoc_STRVAR(reload_doc,
"reload(module) -> module\n\
\n\
Reload the module.  The module must have been successfully imported before.");
static PyObject *
builtin_repr(PyObject *self, PyObject *v)
PyDoc_STRVAR(repr_doc,
"repr(object) -> string\n\
\n\
Return the canonical string representation of the object.\n\
For most object types, eval(repr(object)) == object.");
static PyObject *
builtin_round(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(round_doc,
"round(number[, ndigits]) -> floating point number\n\
\n\
Round a number to a given precision in decimal digits (default 0 digits).\n\
This always returns a floating point number.  Precision may be negative.");
static PyObject *
builtin_sorted(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(sorted_doc,
"sorted(iterable, cmp=None, key=None, reverse=False) --> new sorted list");
static PyObject *
builtin_vars(PyObject *self, PyObject *args)
PyDoc_STRVAR(vars_doc,
"vars([object]) -> dictionary\n\
\n\
Without arguments, equivalent to locals().\n\
With an argument, equivalent to object.__dict__.");
static PyObject*
builtin_sum(PyObject *self, PyObject *args)
PyDoc_STRVAR(sum_doc,
"sum(sequence[, start]) -> value\n\
\n\
Return the sum of a sequence of numbers (NOT strings) plus the value\n\
of parameter 'start' (which defaults to 0).  When the sequence is\n\
empty, return start.");
static PyObject *
builtin_isinstance(PyObject *self, PyObject *args)
PyDoc_STRVAR(isinstance_doc,
"isinstance(object, class-or-type-or-tuple) -> bool\n\
\n\
Return whether an object is an instance of a class or of a subclass thereof.\n\
With a type as second argument, return whether that is the object's type.\n\
The form using a tuple, isinstance(x, (A, B, ...)), is a shortcut for\n\
isinstance(x, A) or isinstance(x, B) or ... (etc.).");
static PyObject *
builtin_issubclass(PyObject *self, PyObject *args)
PyDoc_STRVAR(issubclass_doc,
"issubclass(C, B) -> bool\n\
\n\
Return whether class C is a subclass (i.e., a derived class) of class B.\n\
When using a tuple as the second argument issubclass(X, (A, B, ...)),\n\
is a shortcut for issubclass(X, A) or issubclass(X, B) or ... (etc.).");
static PyObject*
builtin_zip(PyObject *self, PyObject *args)
PyDoc_STRVAR(zip_doc,
"zip(seq1 [, seq2 [...]]) -> [(seq1[0], seq2[0] ...), (...)]\n\
\n\
Return a list of tuples, where each tuple contains the i-th element\n\
from each of the argument sequences.  The returned list is truncated\n\
in length to the length of the shortest argument sequence.");
static PyMethodDef builtin_methods[] = ;
PyDoc_STRVAR(builtin_doc,
"Built-in functions, exceptions, and other objects.\n\
\n\
Noteworthy: None is the `nil' object; Ellipsis represents `...' in slices.");
PyObject *
_PyBuiltin_Init(void)
static PyObject *
filtertuple(PyObject *func, PyObject *tuple)
static PyObject *
filterstring(PyObject *func, PyObject *strobj)
static PyObject *
filterunicode(PyObject *func, PyObject *strobj)
