#define PY_SSIZE_T_CLEAN
struct arrayobject;
struct arraydescr ;
typedef struct arrayobject  arrayobject;
static PyTypeObject Arraytype;
#define array_Check(op) PyObject_TypeCheck(op, &Arraytype)
#define array_CheckExact(op) (Py_TYPE(op) == &Arraytype)
static int
array_resize(arrayobject *self, Py_ssize_t newsize)
static PyObject *
c_getitem(arrayobject *ap, Py_ssize_t i)
static int
c_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
b_getitem(arrayobject *ap, Py_ssize_t i)
static int
b_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
BB_getitem(arrayobject *ap, Py_ssize_t i)
static int
BB_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
u_getitem(arrayobject *ap, Py_ssize_t i)
static int
u_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
h_getitem(arrayobject *ap, Py_ssize_t i)
static int
h_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
HH_getitem(arrayobject *ap, Py_ssize_t i)
static int
HH_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
i_getitem(arrayobject *ap, Py_ssize_t i)
static int
i_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
II_getitem(arrayobject *ap, Py_ssize_t i)
static int
II_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
l_getitem(arrayobject *ap, Py_ssize_t i)
static int
l_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
LL_getitem(arrayobject *ap, Py_ssize_t i)
static int
LL_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
f_getitem(arrayobject *ap, Py_ssize_t i)
static int
f_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static PyObject *
d_getitem(arrayobject *ap, Py_ssize_t i)
static int
d_setitem(arrayobject *ap, Py_ssize_t i, PyObject *v)
static struct arraydescr descriptors[] = ;
static PyObject *
newarrayobject(PyTypeObject *type, Py_ssize_t size, struct arraydescr *descr)
static PyObject *
getarrayitem(PyObject *op, Py_ssize_t i)
static int
ins1(arrayobject *self, Py_ssize_t where, PyObject *v)
static void
array_dealloc(arrayobject *op)
static PyObject *
array_richcompare(PyObject *v, PyObject *w, int op)
static Py_ssize_t
array_length(arrayobject *a)
static PyObject *
array_item(arrayobject *a, Py_ssize_t i)
static PyObject *
array_slice(arrayobject *a, Py_ssize_t ilow, Py_ssize_t ihigh)
static PyObject *
array_copy(arrayobject *a, PyObject *unused)
PyDoc_STRVAR(copy_doc,
"copy(array)\n\
\n\
Return a copy of the array.");
static PyObject *
array_concat(arrayobject *a, PyObject *bb)
static PyObject *
array_repeat(arrayobject *a, Py_ssize_t n)
static int
array_ass_slice(arrayobject *a, Py_ssize_t ilow, Py_ssize_t ihigh, PyObject *v)
static int
array_ass_item(arrayobject *a, Py_ssize_t i, PyObject *v)
static int
setarrayitem(PyObject *a, Py_ssize_t i, PyObject *v)
static int
array_iter_extend(arrayobject *self, PyObject *bb)
static int
array_do_extend(arrayobject *self, PyObject *bb)
static PyObject *
array_inplace_concat(arrayobject *self, PyObject *bb)
static PyObject *
array_inplace_repeat(arrayobject *self, Py_ssize_t n)
static PyObject *
ins(arrayobject *self, Py_ssize_t where, PyObject *v)
static PyObject *
array_count(arrayobject *self, PyObject *v)
PyDoc_STRVAR(count_doc,
"count(x)\n\
\n\
Return number of occurrences of x in the array.");
static PyObject *
array_index(arrayobject *self, PyObject *v)
PyDoc_STRVAR(index_doc,
"index(x)\n\
\n\
Return index of first occurrence of x in the array.");
static int
array_contains(arrayobject *self, PyObject *v)
static PyObject *
array_remove(arrayobject *self, PyObject *v)
PyDoc_STRVAR(remove_doc,
"remove(x)\n\
\n\
Remove the first occurrence of x in the array.");
static PyObject *
array_pop(arrayobject *self, PyObject *args)
PyDoc_STRVAR(pop_doc,
"pop([i])\n\
\n\
Return the i-th element and delete it from the array. i defaults to -1.");
static PyObject *
array_extend(arrayobject *self, PyObject *bb)
PyDoc_STRVAR(extend_doc,
"extend(array or iterable)\n\
\n\
Append items to the end of the array.");
static PyObject *
array_insert(arrayobject *self, PyObject *args)
PyDoc_STRVAR(insert_doc,
"insert(i,x)\n\
\n\
Insert a new item x into the array before position i.");
static PyObject *
array_buffer_info(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(buffer_info_doc,
"buffer_info() -> (address, length)\n\
\n\
Return a tuple (address, length) giving the current memory address and\n\
the length in items of the buffer used to hold array's contents\n\
The length should be multiplied by the itemsize attribute to calculate\n\
the buffer length in bytes.");
static PyObject *
array_append(arrayobject *self, PyObject *v)
PyDoc_STRVAR(append_doc,
"append(x)\n\
\n\
Append new value x to the end of the array.");
static PyObject *
array_byteswap(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(byteswap_doc,
"byteswap()\n\
\n\
Byteswap all items of the array.  If the items in the array are not 1, 2,\n\
4, or 8 bytes in size, RuntimeError is raised.");
static PyObject *
array_reverse(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(reverse_doc,
"reverse()\n\
\n\
Reverse the order of the items in the array.");
static PyObject *
array_fromfile(arrayobject *self, PyObject *args)
PyDoc_STRVAR(fromfile_doc,
"fromfile(f, n)\n\
\n\
Read n objects from the file object f and append them to the end of the\n\
array.  Also called as read.");
static PyObject *
array_fromfile_as_read(arrayobject *self, PyObject *args)
static PyObject *
array_tofile(arrayobject *self, PyObject *f)
PyDoc_STRVAR(tofile_doc,
"tofile(f)\n\
\n\
Write all items (as machine values) to the file object f.  Also called as\n\
write.");
static PyObject *
array_tofile_as_write(arrayobject *self, PyObject *f)
static PyObject *
array_fromlist(arrayobject *self, PyObject *list)
PyDoc_STRVAR(fromlist_doc,
"fromlist(list)\n\
\n\
Append items to array from list.");
static PyObject *
array_tolist(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(tolist_doc,
"tolist() -> list\n\
\n\
Convert array to an ordinary list with the same items.");
static PyObject *
array_fromstring(arrayobject *self, PyObject *args)
PyDoc_STRVAR(fromstring_doc,
"fromstring(string)\n\
\n\
Appends items from the string, interpreting it as an array of machine\n\
values,as if it had been read from a file using the fromfile() method).");
static PyObject *
array_tostring(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(tostring_doc,
"tostring() -> string\n\
\n\
Convert the array to an array of machine values and return the string\n\
representation.");
static PyObject *
array_fromunicode(arrayobject *self, PyObject *args)
PyDoc_STRVAR(fromunicode_doc,
"fromunicode(ustr)\n\
\n\
Extends this array with data from the unicode string ustr.\n\
The array must be a type 'u' array; otherwise a ValueError\n\
is raised.  Use array.fromstring(ustr.decode(...)) to\n\
append Unicode data to an array of some other type.");
static PyObject *
array_tounicode(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(tounicode_doc,
"tounicode() -> unicode\n\
\n\
Convert the array to a unicode string.  The array must be\n\
a type 'u' array; otherwise a ValueError is raised.  Use\n\
array.tostring().decode() to obtain a unicode string from\n\
an array of some other type.");
static PyObject *
array_reduce(arrayobject *array)
PyDoc_STRVAR(reduce_doc, );
static PyObject *
array_sizeof(arrayobject *self, PyObject *unused)
PyDoc_STRVAR(sizeof_doc,
"__sizeof__() -> int\n\
\n\
Size of the array in memory, in bytes.");
static PyObject *
array_get_typecode(arrayobject *a, void *closure)
static PyObject *
array_get_itemsize(arrayobject *a, void *closure)
static PyGetSetDef array_getsets [] = ;
static PyMethodDef array_methods[] = ;
static PyObject *
array_repr(arrayobject *a)
static PyObject*
array_subscr(arrayobject* self, PyObject* item)
static int
array_ass_subscr(arrayobject* self, PyObject* item, PyObject* value)
static PyMappingMethods array_as_mapping = ;
static const void *emptybuf = ;
static Py_ssize_t
array_buffer_getreadbuf(arrayobject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
array_buffer_getwritebuf(arrayobject *self, Py_ssize_t index, const void **ptr)
static Py_ssize_t
array_buffer_getsegcount(arrayobject *self, Py_ssize_t *lenp)
static PySequenceMethods array_as_sequence = ;
static PyBufferProcs array_as_buffer = ;
static PyObject *
array_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(module_doc,
"This module defines an object type which can efficiently represent\n\
an array of basic values: characters, integers, floating point\n\
numbers.  Arrays are sequence types and behave very much like lists,\n\
except that the type of objects stored in them is constrained.  The\n\
type is specified at object creation time by using a type code, which\n\
is a single character.  The following type codes are defined:\n\
\n\
Type code   C Type             Minimum size in bytes \n\
'c'         character          1 \n\
'b'         signed integer     1 \n\
'B'         unsigned integer   1 \n\
'u'         Unicode character  2 \n\
'h'         signed integer     2 \n\
'H'         unsigned integer   2 \n\
'i'         signed integer     2 \n\
'I'         unsigned integer   2 \n\
'l'         signed integer     4 \n\
'L'         unsigned integer   4 \n\
'f'         floating point     4 \n\
'd'         floating point     8 \n\
\n\
The constructor is:\n\
\n\
array(typecode [, initializer]) -- create a new array\n\
");
PyDoc_STRVAR(arraytype_doc,
"array(typecode [, initializer]) -> array\n\
\n\
Return a new array whose items are restricted by typecode, and\n\
initialized from the optional initializer value, which must be a list,\n\
string or iterable over elements of the appropriate type.\n\
\n\
Arrays represent basic values and behave very much like lists, except\n\
the type of objects stored in them is constrained.\n\
\n\
Methods:\n\
\n\
append() -- append a new item to the end of the array\n\
buffer_info() -- return information giving the current memory info\n\
byteswap() -- byteswap all the items of the array\n\
count() -- return number of occurrences of an object\n\
extend() -- extend array by appending multiple elements from an iterable\n\
fromfile() -- read items from a file object\n\
fromlist() -- append items from the list\n\
fromstring() -- append items from the string\n\
index() -- return index of first occurrence of an object\n\
insert() -- insert a new item into the array at a provided position\n\
pop() -- remove and return item (default last)\n\
read() -- DEPRECATED, use fromfile()\n\
remove() -- remove first occurrence of an object\n\
reverse() -- reverse the order of the items in the array\n\
tofile() -- write all items to a file object\n\
tolist() -- return the array converted to an ordinary list\n\
tostring() -- return the array converted to a string\n\
write() -- DEPRECATED, use tofile()\n\
\n\
Attributes:\n\
\n\
typecode -- the typecode character used to create the array\n\
itemsize -- the length in bytes of one array item\n\
");
static PyObject *array_iter(arrayobject *ao);
static PyTypeObject Arraytype = ;
typedef struct  arrayiterobject;
static PyTypeObject PyArrayIter_Type;
#define PyArrayIter_Check(op) PyObject_TypeCheck(op, &PyArrayIter_Type)
static PyObject *
array_iter(arrayobject *ao)
static PyObject *
arrayiter_next(arrayiterobject *it)
static void
arrayiter_dealloc(arrayiterobject *it)
static int
arrayiter_traverse(arrayiterobject *it, visitproc visit, void *arg)
static PyTypeObject PyArrayIter_Type = ;
static PyMethodDef a_methods[] = ;
PyMODINIT_FUNC
initarray(void)
