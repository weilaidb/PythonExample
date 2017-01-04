PyDoc_STRVAR(operator_doc,
"Operator interface.\n\
\n\
This module exports a set of functions implemented in C corresponding\n\
to the intrinsic operators of Python.  For example, operator.add(x, y)\n\
is equivalent to the expression x+y.  The function names are those\n\
used for special methods; variants without leading and trailing\n\
'__' are also provided for convenience.");
#define spam1(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a1)
#define spam2(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spamoi(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spam2n(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spam3n(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spami(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a1)
#define spami2(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spamn2(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spami2b(OP,AOP) static PyObject *OP(PyObject *s, PyObject *a)
#define spamrc(OP,A) static PyObject *OP(PyObject *s, PyObject *a)
static int
op_isCallable(PyObject *x)
static int
op_sequenceIncludes(PyObject *seq, PyObject* ob)
spami(isCallable       , op_isCallable)
spami(isNumberType     , PyNumber_Check)
spami(truth            , PyObject_IsTrue)
spam2(op_add           , PyNumber_Add)
spam2(op_sub           , PyNumber_Subtract)
spam2(op_mul           , PyNumber_Multiply)
spam2(op_div           , PyNumber_Divide)
spam2(op_floordiv      , PyNumber_FloorDivide)
spam2(op_truediv       , PyNumber_TrueDivide)
spam2(op_mod           , PyNumber_Remainder)
spam1(op_neg           , PyNumber_Negative)
spam1(op_pos           , PyNumber_Positive)
spam1(op_abs           , PyNumber_Absolute)
spam1(op_inv           , PyNumber_Invert)
spam1(op_invert        , PyNumber_Invert)
spam2(op_lshift        , PyNumber_Lshift)
spam2(op_rshift        , PyNumber_Rshift)
spami(op_not_          , PyObject_Not)
spam2(op_and_          , PyNumber_And)
spam2(op_xor           , PyNumber_Xor)
spam2(op_or_           , PyNumber_Or)
spam2(op_iadd          , PyNumber_InPlaceAdd)
spam2(op_isub          , PyNumber_InPlaceSubtract)
spam2(op_imul          , PyNumber_InPlaceMultiply)
spam2(op_idiv          , PyNumber_InPlaceDivide)
spam2(op_ifloordiv     , PyNumber_InPlaceFloorDivide)
spam2(op_itruediv      , PyNumber_InPlaceTrueDivide)
spam2(op_imod          , PyNumber_InPlaceRemainder)
spam2(op_ilshift       , PyNumber_InPlaceLshift)
spam2(op_irshift       , PyNumber_InPlaceRshift)
spam2(op_iand          , PyNumber_InPlaceAnd)
spam2(op_ixor          , PyNumber_InPlaceXor)
spam2(op_ior           , PyNumber_InPlaceOr)
spami(isSequenceType   , PySequence_Check)
spam2(op_concat        , PySequence_Concat)
spamoi(op_repeat       , PySequence_Repeat)
spam2(op_iconcat       , PySequence_InPlaceConcat)
spamoi(op_irepeat      , PySequence_InPlaceRepeat)
spami2b(op_contains     , PySequence_Contains)
spami2b(sequenceIncludes, op_sequenceIncludes)
spamn2(indexOf         , PySequence_Index)
spamn2(countOf         , PySequence_Count)
spami(isMappingType    , PyMapping_Check)
spam2(op_getitem       , PyObject_GetItem)
spam2n(op_delitem       , PyObject_DelItem)
spam3n(op_setitem      , PyObject_SetItem)
spamrc(op_lt           , Py_LT)
spamrc(op_le           , Py_LE)
spamrc(op_eq           , Py_EQ)
spamrc(op_ne           , Py_NE)
spamrc(op_gt           , Py_GT)
spamrc(op_ge           , Py_GE)
static PyObject*
op_pow(PyObject *s, PyObject *a)
static PyObject*
op_ipow(PyObject *s, PyObject *a)
static PyObject *
op_index(PyObject *s, PyObject *a)
static PyObject*
is_(PyObject *s, PyObject *a)
static PyObject*
is_not(PyObject *s, PyObject *a)
static PyObject*
op_getslice(PyObject *s, PyObject *a)
static PyObject*
op_setslice(PyObject *s, PyObject *a)
static PyObject*
op_delslice(PyObject *s, PyObject *a)
#undef spam1
#undef spam2
#undef spam1o
#undef spam1o
#define spam1(OP,DOC) ,
#define spam2(OP,ALTOP,DOC) , \
,
#define spam1o(OP,DOC) ,
#define spam2o(OP,ALTOP,DOC) , \
,
static int
_tscmp(const unsigned char *a, const unsigned char *b,
Py_ssize_t len_a, Py_ssize_t len_b)
PyDoc_STRVAR(compare_digest__doc__,
"compare_digest(a, b) -> bool\n"
"\n"
"Return 'a == b'.  This function uses an approach designed to prevent\n"
"timing analysis, making it appropriate for cryptography.\n"
"a and b must both be of the same type: either str (ASCII only),\n"
"or any type that supports the buffer protocol (e.g. bytes).\n"
"\n"
"Note: If a and b are of different lengths, or if an error occurs,\n"
"a timing attack could theoretically reveal information about the\n"
"types and lengths of a and b--but not their values.\n");
static PyObject*
compare_digest(PyObject *self, PyObject *args)
static struct PyMethodDef operator_methods[] = ;
typedef struct  itemgetterobject;
static PyTypeObject itemgetter_type;
static PyObject *
itemgetter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
itemgetter_dealloc(itemgetterobject *ig)
static int
itemgetter_traverse(itemgetterobject *ig, visitproc visit, void *arg)
static PyObject *
itemgetter_call(itemgetterobject *ig, PyObject *args, PyObject *kw)
PyDoc_STRVAR(itemgetter_doc,
"itemgetter(item, ...) --> itemgetter object\n\
\n\
Return a callable object that fetches the given item(s) from its operand.\n\
After f = itemgetter(2), the call f(r) returns r[2].\n\
After g = itemgetter(2, 5, 3), the call g(r) returns (r[2], r[5], r[3])");
static PyTypeObject itemgetter_type = ;
typedef struct  attrgetterobject;
static PyTypeObject attrgetter_type;
static PyObject *
attrgetter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
attrgetter_dealloc(attrgetterobject *ag)
static int
attrgetter_traverse(attrgetterobject *ag, visitproc visit, void *arg)
static PyObject *
dotted_getattr(PyObject *obj, PyObject *attr)
static PyObject *
attrgetter_call(attrgetterobject *ag, PyObject *args, PyObject *kw)
PyDoc_STRVAR(attrgetter_doc,
"attrgetter(attr, ...) --> attrgetter object\n\
\n\
Return a callable object that fetches the given attribute(s) from its operand.\n\
After f = attrgetter('name'), the call f(r) returns r.name.\n\
After g = attrgetter('name', 'date'), the call g(r) returns (r.name, r.date).\n\
After h = attrgetter('name.first', 'name.last'), the call h(r) returns\n\
(r.name.first, r.name.last).");
static PyTypeObject attrgetter_type = ;
typedef struct  methodcallerobject;
static PyTypeObject methodcaller_type;
static PyObject *
methodcaller_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
methodcaller_dealloc(methodcallerobject *mc)
static int
methodcaller_traverse(methodcallerobject *mc, visitproc visit, void *arg)
static PyObject *
methodcaller_call(methodcallerobject *mc, PyObject *args, PyObject *kw)
PyDoc_STRVAR(methodcaller_doc,
"methodcaller(name, ...) --> methodcaller object\n\
\n\
Return a callable object that calls the given method on its operand.\n\
After f = methodcaller('name'), the call f(r) returns r.name().\n\
After g = methodcaller('name', 'date', foo=1), the call g(r) returns\n\
r.name('date', foo=1).");
static PyTypeObject methodcaller_type = ;
PyMODINIT_FUNC
initoperator(void)
