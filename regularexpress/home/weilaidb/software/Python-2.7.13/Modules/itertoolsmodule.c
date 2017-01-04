typedef struct  groupbyobject;
static PyTypeObject groupby_type;
static PyObject *_grouper_create(groupbyobject *, PyObject *);
static PyObject *
groupby_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
groupby_dealloc(groupbyobject *gbo)
static int
groupby_traverse(groupbyobject *gbo, visitproc visit, void *arg)
static PyObject *
groupby_next(groupbyobject *gbo)
PyDoc_STRVAR(groupby_doc,
"groupby(iterable[, keyfunc]) -> create an iterator which returns\n\
(key, sub-iterator) grouped by each value of key(value).\n");
static PyTypeObject groupby_type = ;
typedef struct  _grouperobject;
static PyTypeObject _grouper_type;
static PyObject *
_grouper_create(groupbyobject *parent, PyObject *tgtkey)
static void
_grouper_dealloc(_grouperobject *igo)
static int
_grouper_traverse(_grouperobject *igo, visitproc visit, void *arg)
static PyObject *
_grouper_next(_grouperobject *igo)
static PyTypeObject _grouper_type = ;
#define LINKCELLS 57
typedef struct  teedataobject;
typedef struct  teeobject;
static PyTypeObject teedataobject_type;
static PyObject *
teedataobject_new(PyObject *it)
static PyObject *
teedataobject_jumplink(teedataobject *tdo)
static PyObject *
teedataobject_getitem(teedataobject *tdo, int i)
static int
teedataobject_traverse(teedataobject *tdo, visitproc visit, void * arg)
static void
teedataobject_safe_decref(PyObject *obj)
static int
teedataobject_clear(teedataobject *tdo)
static void
teedataobject_dealloc(teedataobject *tdo)
PyDoc_STRVAR(teedataobject_doc, "Data container common to multiple tee objects.");
static PyTypeObject teedataobject_type = ;
static PyTypeObject tee_type;
static PyObject *
tee_next(teeobject *to)
static int
tee_traverse(teeobject *to, visitproc visit, void *arg)
static PyObject *
tee_copy(teeobject *to)
PyDoc_STRVAR(teecopy_doc, "Returns an independent iterator.");
static PyObject *
tee_fromiterable(PyObject *iterable)
static PyObject *
tee_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static int
tee_clear(teeobject *to)
static void
tee_dealloc(teeobject *to)
PyDoc_STRVAR(teeobject_doc,
"Iterator wrapped to make it copyable");
static PyMethodDef tee_methods[] = ;
static PyTypeObject tee_type = ;
static PyObject *
tee(PyObject *self, PyObject *args)
PyDoc_STRVAR(tee_doc,
"tee(iterable, n=2) --> tuple of n independent iterators.");
typedef struct  cycleobject;
static PyTypeObject cycle_type;
static PyObject *
cycle_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
cycle_dealloc(cycleobject *lz)
static int
cycle_traverse(cycleobject *lz, visitproc visit, void *arg)
static PyObject *
cycle_next(cycleobject *lz)
PyDoc_STRVAR(cycle_doc,
"cycle(iterable) --> cycle object\n\
\n\
Return elements from the iterable until it is exhausted.\n\
Then repeat the sequence indefinitely.");
static PyTypeObject cycle_type = ;
typedef struct  dropwhileobject;
static PyTypeObject dropwhile_type;
static PyObject *
dropwhile_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
dropwhile_dealloc(dropwhileobject *lz)
static int
dropwhile_traverse(dropwhileobject *lz, visitproc visit, void *arg)
static PyObject *
dropwhile_next(dropwhileobject *lz)
PyDoc_STRVAR(dropwhile_doc,
"dropwhile(predicate, iterable) --> dropwhile object\n\
\n\
Drop items from the iterable while predicate(item) is true.\n\
Afterwards, return every element until the iterable is exhausted.");
static PyTypeObject dropwhile_type = ;
typedef struct  takewhileobject;
static PyTypeObject takewhile_type;
static PyObject *
takewhile_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
takewhile_dealloc(takewhileobject *lz)
static int
takewhile_traverse(takewhileobject *lz, visitproc visit, void *arg)
static PyObject *
takewhile_next(takewhileobject *lz)
PyDoc_STRVAR(takewhile_doc,
"takewhile(predicate, iterable) --> takewhile object\n\
\n\
Return successive entries from an iterable as long as the \n\
predicate evaluates to true for each entry.");
static PyTypeObject takewhile_type = ;
typedef struct  isliceobject;
static PyTypeObject islice_type;
static PyObject *
islice_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
islice_dealloc(isliceobject *lz)
static int
islice_traverse(isliceobject *lz, visitproc visit, void *arg)
static PyObject *
islice_next(isliceobject *lz)
PyDoc_STRVAR(islice_doc,
"islice(iterable, [start,] stop [, step]) --> islice object\n\
\n\
Return an iterator whose next() method returns selected values from an\n\
iterable.  If start is specified, will skip all preceding elements;\n\
otherwise, start defaults to zero.  Step defaults to one.  If\n\
specified as another value, step determines how many values are \n\
skipped between successive calls.  Works like a slice() on a list\n\
but returns an iterator.");
static PyTypeObject islice_type = ;
typedef struct  starmapobject;
static PyTypeObject starmap_type;
static PyObject *
starmap_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
starmap_dealloc(starmapobject *lz)
static int
starmap_traverse(starmapobject *lz, visitproc visit, void *arg)
static PyObject *
starmap_next(starmapobject *lz)
PyDoc_STRVAR(starmap_doc,
"starmap(function, sequence) --> starmap object\n\
\n\
Return an iterator whose values are returned from the function evaluated\n\
with an argument tuple taken from the given sequence.");
static PyTypeObject starmap_type = ;
typedef struct  imapobject;
static PyTypeObject imap_type;
static PyObject *
imap_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
imap_dealloc(imapobject *lz)
static int
imap_traverse(imapobject *lz, visitproc visit, void *arg)
static PyObject *
imap_next(imapobject *lz)
PyDoc_STRVAR(imap_doc,
"imap(func, *iterables) --> imap object\n\
\n\
Make an iterator that computes the function using arguments from\n\
each of the iterables.  Like map() except that it returns\n\
an iterator instead of a list and that it stops when the shortest\n\
iterable is exhausted instead of filling in None for shorter\n\
iterables.");
static PyTypeObject imap_type = ;
typedef struct  chainobject;
static PyTypeObject chain_type;
static PyObject *
chain_new_internal(PyTypeObject *type, PyObject *source)
static PyObject *
chain_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
chain_new_from_iterable(PyTypeObject *type, PyObject *arg)
static void
chain_dealloc(chainobject *lz)
static int
chain_traverse(chainobject *lz, visitproc visit, void *arg)
static PyObject *
chain_next(chainobject *lz)
PyDoc_STRVAR(chain_doc,
"chain(*iterables) --> chain object\n\
\n\
Return a chain object whose .next() method returns elements from the\n\
first iterable until it is exhausted, then elements from the next\n\
iterable, until all of the iterables are exhausted.");
PyDoc_STRVAR(chain_from_iterable_doc,
"chain.from_iterable(iterable) --> chain object\n\
\n\
Alternate chain() constructor taking a single iterable argument\n\
that evaluates lazily.");
static PyMethodDef chain_methods[] = ;
static PyTypeObject chain_type = ;
typedef struct  productobject;
static PyTypeObject product_type;
static PyObject *
product_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
product_dealloc(productobject *lz)
static int
product_traverse(productobject *lz, visitproc visit, void *arg)
static PyObject *
product_next(productobject *lz)
PyDoc_STRVAR(product_doc,
"product(*iterables) --> product object\n\
\n\
Cartesian product of input iterables.  Equivalent to nested for-loops.\n\n\
For example, product(A, B) returns the same as:  ((x,y) for x in A for y in B).\n\
The leftmost iterators are in the outermost for-loop, so the output tuples\n\
cycle in a manner similar to an odometer (with the rightmost element changing\n\
on every iteration).\n\n\
To compute the product of an iterable with itself, specify the number\n\
of repetitions with the optional repeat keyword argument. For example,\n\
product(A, repeat=4) means the same as product(A, A, A, A).\n\n\
product('ab', range(3)) --> ('a',0) ('a',1) ('a',2) ('b',0) ('b',1) ('b',2)\n\
product((0,1), (0,1), (0,1)) --> (0,0,0) (0,0,1) (0,1,0) (0,1,1) (1,0,0) ...");
static PyTypeObject product_type = ;
typedef struct  combinationsobject;
static PyTypeObject combinations_type;
static PyObject *
combinations_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
combinations_dealloc(combinationsobject *co)
static int
combinations_traverse(combinationsobject *co, visitproc visit, void *arg)
static PyObject *
combinations_next(combinationsobject *co)
PyDoc_STRVAR(combinations_doc,
"combinations(iterable, r) --> combinations object\n\
\n\
Return successive r-length combinations of elements in the iterable.\n\n\
combinations(range(4), 3) --> (0,1,2), (0,1,3), (0,2,3), (1,2,3)");
static PyTypeObject combinations_type = ;
typedef struct  cwrobject;
static PyTypeObject cwr_type;
static PyObject *
cwr_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
cwr_dealloc(cwrobject *co)
static int
cwr_traverse(cwrobject *co, visitproc visit, void *arg)
static PyObject *
cwr_next(cwrobject *co)
PyDoc_STRVAR(cwr_doc,
"combinations_with_replacement(iterable, r) --> combinations_with_replacement object\n\
\n\
Return successive r-length combinations of elements in the iterable\n\
allowing individual elements to have successive repeats.\n\
combinations_with_replacement('ABC', 2) --> AA AB AC BB BC CC");
static PyTypeObject cwr_type = ;
typedef struct  permutationsobject;
static PyTypeObject permutations_type;
static PyObject *
permutations_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
permutations_dealloc(permutationsobject *po)
static int
permutations_traverse(permutationsobject *po, visitproc visit, void *arg)
static PyObject *
permutations_next(permutationsobject *po)
PyDoc_STRVAR(permutations_doc,
"permutations(iterable[, r]) --> permutations object\n\
\n\
Return successive r-length permutations of elements in the iterable.\n\n\
permutations(range(3), 2) --> (0,1), (0,2), (1,0), (1,2), (2,0), (2,1)");
static PyTypeObject permutations_type = ;
typedef struct  compressobject;
static PyTypeObject compress_type;
static PyObject *
compress_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
compress_dealloc(compressobject *lz)
static int
compress_traverse(compressobject *lz, visitproc visit, void *arg)
static PyObject *
compress_next(compressobject *lz)
PyDoc_STRVAR(compress_doc,
"compress(data, selectors) --> iterator over selected data\n\
\n\
Return data elements corresponding to true selector elements.\n\
Forms a shorter iterator from selected data elements using the\n\
selectors to choose the data elements.");
static PyTypeObject compress_type = ;
typedef struct  ifilterobject;
static PyTypeObject ifilter_type;
static PyObject *
ifilter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
ifilter_dealloc(ifilterobject *lz)
static int
ifilter_traverse(ifilterobject *lz, visitproc visit, void *arg)
static PyObject *
ifilter_next(ifilterobject *lz)
PyDoc_STRVAR(ifilter_doc,
"ifilter(function or None, sequence) --> ifilter object\n\
\n\
Return those items of sequence for which function(item) is true.\n\
If function is None, return the items that are true.");
static PyTypeObject ifilter_type = ;
typedef struct  ifilterfalseobject;
static PyTypeObject ifilterfalse_type;
static PyObject *
ifilterfalse_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
ifilterfalse_dealloc(ifilterfalseobject *lz)
static int
ifilterfalse_traverse(ifilterfalseobject *lz, visitproc visit, void *arg)
static PyObject *
ifilterfalse_next(ifilterfalseobject *lz)
PyDoc_STRVAR(ifilterfalse_doc,
"ifilterfalse(function or None, sequence) --> ifilterfalse object\n\
\n\
Return those items of sequence for which function(item) is false.\n\
If function is None, return the items that are false.");
static PyTypeObject ifilterfalse_type = ;
typedef struct  countobject;
static PyTypeObject count_type;
static PyObject *
count_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
count_dealloc(countobject *lz)
static int
count_traverse(countobject *lz, visitproc visit, void *arg)
static PyObject *
count_nextlong(countobject *lz)
static PyObject *
count_next(countobject *lz)
static PyObject *
count_repr(countobject *lz)
static PyObject *
count_reduce(countobject *lz)
PyDoc_STRVAR(count_reduce_doc, "Return state information for pickling.");
static PyMethodDef count_methods[] = ;
PyDoc_STRVAR(count_doc,
"count(start=0, step=1) --> count object\n\
\n\
Return a count object whose .next() method returns consecutive values.\n\
Equivalent to:\n\n\
def count(firstval=0, step=1):\n\
x = firstval\n\
while 1:\n\
yield x\n\
x += step\n");
static PyTypeObject count_type = ;
typedef struct  izipobject;
static PyTypeObject izip_type;
static PyObject *
izip_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
izip_dealloc(izipobject *lz)
static int
izip_traverse(izipobject *lz, visitproc visit, void *arg)
static PyObject *
izip_next(izipobject *lz)
PyDoc_STRVAR(izip_doc,
"izip(iter1 [,iter2 [...]]) --> izip object\n\
\n\
Return a izip object whose .next() method returns a tuple where\n\
the i-th element comes from the i-th iterable argument.  The .next()\n\
method continues until the shortest iterable in the argument sequence\n\
is exhausted and then it raises StopIteration.  Works like the zip()\n\
function but consumes less memory by returning an iterator instead of\n\
a list.");
static PyTypeObject izip_type = ;
typedef struct  repeatobject;
static PyTypeObject repeat_type;
static PyObject *
repeat_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
repeat_dealloc(repeatobject *ro)
static int
repeat_traverse(repeatobject *ro, visitproc visit, void *arg)
static PyObject *
repeat_next(repeatobject *ro)
static PyObject *
repeat_repr(repeatobject *ro)
static PyObject *
repeat_len(repeatobject *ro)
PyDoc_STRVAR(length_hint_doc, "Private method returning an estimate of len(list(it)).");
static PyMethodDef repeat_methods[] = ;
PyDoc_STRVAR(repeat_doc,
"repeat(object [,times]) -> create an iterator which returns the object\n\
for the specified number of times.  If not specified, returns the object\n\
endlessly.");
static PyTypeObject repeat_type = ;
typedef struct  iziplongestobject;
static PyTypeObject iziplongest_type;
static PyObject *
izip_longest_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
izip_longest_dealloc(iziplongestobject *lz)
static int
izip_longest_traverse(iziplongestobject *lz, visitproc visit, void *arg)
static PyObject *
izip_longest_next(iziplongestobject *lz)
PyDoc_STRVAR(izip_longest_doc,
"izip_longest(iter1 [,iter2 [...]], [fillvalue=None]) --> izip_longest object\n\
\n\
Return an izip_longest object whose .next() method returns a tuple where\n\
the i-th element comes from the i-th iterable argument.  The .next()\n\
method continues until the longest iterable in the argument sequence\n\
is exhausted and then it raises StopIteration.  When the shorter iterables\n\
are exhausted, the fillvalue is substituted in their place.  The fillvalue\n\
defaults to None or can be specified by a keyword argument.\n\
");
static PyTypeObject iziplongest_type = ;
PyDoc_STRVAR(module_doc,
"Functional tools for creating and using iterators.\n\
\n\
Infinite iterators:\n\
count([n]) --> n, n+1, n+2, ...\n\
cycle(p) --> p0, p1, ... plast, p0, p1, ...\n\
repeat(elem [,n]) --> elem, elem, elem, ... endlessly or up to n times\n\
\n\
Iterators terminating on the shortest input sequence:\n\
chain(p, q, ...) --> p0, p1, ... plast, q0, q1, ... \n\
compress(data, selectors) --> (d[0] if s[0]), (d[1] if s[1]), ...\n\
dropwhile(pred, seq) --> seq[n], seq[n+1], starting when pred fails\n\
groupby(iterable[, keyfunc]) --> sub-iterators grouped by value of keyfunc(v)\n\
ifilter(pred, seq) --> elements of seq where pred(elem) is True\n\
ifilterfalse(pred, seq) --> elements of seq where pred(elem) is False\n\
islice(seq, [start,] stop [, step]) --> elements from\n\
seq[start:stop:step]\n\
imap(fun, p, q, ...) --> fun(p0, q0), fun(p1, q1), ...\n\
starmap(fun, seq) --> fun(*seq[0]), fun(*seq[1]), ...\n\
tee(it, n=2) --> (it1, it2 , ... itn) splits one iterator into n\n\
takewhile(pred, seq) --> seq[0], seq[1], until pred fails\n\
izip(p, q, ...) --> (p[0], q[0]), (p[1], q[1]), ... \n\
izip_longest(p, q, ...) --> (p[0], q[0]), (p[1], q[1]), ... \n\
\n\
Combinatoric generators:\n\
product(p, q, ... [repeat=1]) --> cartesian product\n\
permutations(p[, r])\n\
combinations(p, r)\n\
combinations_with_replacement(p, r)\n\
");
static PyMethodDef module_methods[] = ;
PyMODINIT_FUNC
inititertools(void)
