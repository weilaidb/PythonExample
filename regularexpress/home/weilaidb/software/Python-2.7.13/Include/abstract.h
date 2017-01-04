#define Py_ABSTRACTOBJECT_H
#define PyObject_CallFunction _PyObject_CallFunction_SizeT
#define PyObject_CallMethod _PyObject_CallMethod_SizeT
#define  PyObject_DelAttrString(O,A) PyObject_SetAttrString((O),(A),NULL)
#define  PyObject_DelAttr(O,A) PyObject_SetAttr((O),(A),NULL)
PyAPI_FUNC(int) PyObject_Cmp(PyObject *o1, PyObject *o2, int *result);
PyAPI_FUNC(PyObject *) PyObject_Call(PyObject *callable_object,
PyObject *args, PyObject *kw);
PyAPI_FUNC(PyObject *) PyObject_CallObject(PyObject *callable_object,
PyObject *args);
PyAPI_FUNC(PyObject *) PyObject_CallFunction(PyObject *callable_object,
char *format, ...);
PyAPI_FUNC(PyObject *) PyObject_CallMethod(PyObject *o, char *m,
char *format, ...);
PyAPI_FUNC(PyObject *) _PyObject_CallFunction_SizeT(PyObject *callable,
char *format, ...);
PyAPI_FUNC(PyObject *) _PyObject_CallMethod_SizeT(PyObject *o,
char *name,
char *format, ...);
PyAPI_FUNC(PyObject *) PyObject_CallFunctionObjArgs(PyObject *callable,
...);
PyAPI_FUNC(PyObject *) PyObject_CallMethodObjArgs(PyObject *o,
PyObject *m, ...);
PyAPI_FUNC(PyObject *) PyObject_Type(PyObject *o);
PyAPI_FUNC(Py_ssize_t) PyObject_Size(PyObject *o);
#undef PyObject_Length
PyAPI_FUNC(Py_ssize_t) PyObject_Length(PyObject *o);
#define PyObject_Length PyObject_Size
PyAPI_FUNC(Py_ssize_t) _PyObject_LengthHint(PyObject *o, Py_ssize_t);
PyAPI_FUNC(PyObject *) PyObject_GetItem(PyObject *o, PyObject *key);
PyAPI_FUNC(int) PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);
PyAPI_FUNC(int) PyObject_DelItemString(PyObject *o, char *key);
PyAPI_FUNC(int) PyObject_DelItem(PyObject *o, PyObject *key);
PyAPI_FUNC(int) PyObject_AsCharBuffer(PyObject *obj,
const char **buffer,
Py_ssize_t *buffer_len);
PyAPI_FUNC(int) PyObject_CheckReadBuffer(PyObject *obj);
PyAPI_FUNC(int) PyObject_AsReadBuffer(PyObject *obj,
const void **buffer,
Py_ssize_t *buffer_len);
PyAPI_FUNC(int) PyObject_AsWriteBuffer(PyObject *obj,
void **buffer,
Py_ssize_t *buffer_len);
#define PyObject_CheckBuffer(obj) \
(((obj)->ob_type->tp_as_buffer != NULL) &&                          \
(PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_NEWBUFFER)) && \
((obj)->ob_type->tp_as_buffer->bf_getbuffer != NULL))
PyAPI_FUNC(int) PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
int flags);
PyAPI_FUNC(void *) PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices);
PyAPI_FUNC(int) PyBuffer_SizeFromFormat(const char *);
PyAPI_FUNC(int) PyBuffer_ToContiguous(void *buf, Py_buffer *view,
Py_ssize_t len, char fort);
PyAPI_FUNC(int) PyBuffer_FromContiguous(Py_buffer *view, void *buf,
Py_ssize_t len, char fort);
PyAPI_FUNC(int) PyObject_CopyData(PyObject *dest, PyObject *src);
PyAPI_FUNC(int) PyBuffer_IsContiguous(Py_buffer *view, char fort);
PyAPI_FUNC(void) PyBuffer_FillContiguousStrides(int ndims,
Py_ssize_t *shape,
Py_ssize_t *strides,
int itemsize,
char fort);
PyAPI_FUNC(int) PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
Py_ssize_t len, int readonly,
int flags);
PyAPI_FUNC(void) PyBuffer_Release(Py_buffer *view);
PyAPI_FUNC(PyObject *) PyObject_Format(PyObject* obj,
PyObject *format_spec);
PyAPI_FUNC(PyObject *) PyObject_GetIter(PyObject *);
#define PyIter_Check(obj) \
(PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_ITER) && \
(obj)->ob_type->tp_iternext != NULL && \
(obj)->ob_type->tp_iternext != &_PyObject_NextNotImplemented)
PyAPI_FUNC(PyObject *) PyIter_Next(PyObject *);
PyAPI_FUNC(int) PyNumber_Check(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Add(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Subtract(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Multiply(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Divide(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_FloorDivide(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_TrueDivide(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Remainder(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Divmod(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Power(PyObject *o1, PyObject *o2,
PyObject *o3);
PyAPI_FUNC(PyObject *) PyNumber_Negative(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Positive(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Absolute(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Invert(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Lshift(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Rshift(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_And(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Xor(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_Or(PyObject *o1, PyObject *o2);
#define PyIndex_Check(obj) \
((obj)->ob_type->tp_as_number != NULL && \
PyType_HasFeature((obj)->ob_type, Py_TPFLAGS_HAVE_INDEX) && \
(obj)->ob_type->tp_as_number->nb_index != NULL)
PyAPI_FUNC(PyObject *) PyNumber_Index(PyObject *o);
PyAPI_FUNC(Py_ssize_t) PyNumber_AsSsize_t(PyObject *o, PyObject *exc);
PyAPI_FUNC(PyObject *) _PyNumber_ConvertIntegralToInt(
PyObject *integral,
const char* error_format);
PyAPI_FUNC(PyObject *) PyNumber_Int(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Long(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_Float(PyObject *o);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceDivide(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceFloorDivide(PyObject *o1,
PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceTrueDivide(PyObject *o1,
PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
PyObject *o3);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PyNumber_ToBase(PyObject *n, int base);
PyAPI_FUNC(int) PySequence_Check(PyObject *o);
PyAPI_FUNC(Py_ssize_t) PySequence_Size(PyObject *o);
#undef PySequence_Length
PyAPI_FUNC(Py_ssize_t) PySequence_Length(PyObject *o);
#define PySequence_Length PySequence_Size
PyAPI_FUNC(PyObject *) PySequence_Concat(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PySequence_Repeat(PyObject *o, Py_ssize_t count);
PyAPI_FUNC(PyObject *) PySequence_GetItem(PyObject *o, Py_ssize_t i);
PyAPI_FUNC(PyObject *) PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);
PyAPI_FUNC(int) PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);
PyAPI_FUNC(int) PySequence_DelItem(PyObject *o, Py_ssize_t i);
PyAPI_FUNC(int) PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
PyObject *v);
PyAPI_FUNC(int) PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);
PyAPI_FUNC(PyObject *) PySequence_Tuple(PyObject *o);
PyAPI_FUNC(PyObject *) PySequence_List(PyObject *o);
PyAPI_FUNC(PyObject *) PySequence_Fast(PyObject *o, const char* m);
#define PySequence_Fast_GET_SIZE(o) \
(PyList_Check(o) ? PyList_GET_SIZE(o) : PyTuple_GET_SIZE(o))
#define PySequence_Fast_GET_ITEM(o, i)\
(PyList_Check(o) ? PyList_GET_ITEM(o, i) : PyTuple_GET_ITEM(o, i))
#define PySequence_ITEM(o, i)\
( Py_TYPE(o)->tp_as_sequence->sq_item(o, i) )
#define PySequence_Fast_ITEMS(sf) \
(PyList_Check(sf) ? ((PyListObject *)(sf))->ob_item \
: ((PyTupleObject *)(sf))->ob_item)
PyAPI_FUNC(Py_ssize_t) PySequence_Count(PyObject *o, PyObject *value);
PyAPI_FUNC(int) PySequence_Contains(PyObject *seq, PyObject *ob);
#define PY_ITERSEARCH_COUNT    1
#define PY_ITERSEARCH_INDEX    2
#define PY_ITERSEARCH_CONTAINS 3
PyAPI_FUNC(Py_ssize_t) _PySequence_IterSearch(PyObject *seq,
PyObject *obj, int operation);
#undef PySequence_In
PyAPI_FUNC(int) PySequence_In(PyObject *o, PyObject *value);
#define PySequence_In PySequence_Contains
PyAPI_FUNC(Py_ssize_t) PySequence_Index(PyObject *o, PyObject *value);
PyAPI_FUNC(PyObject *) PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);
PyAPI_FUNC(PyObject *) PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);
PyAPI_FUNC(int) PyMapping_Check(PyObject *o);
PyAPI_FUNC(Py_ssize_t) PyMapping_Size(PyObject *o);
#undef PyMapping_Length
PyAPI_FUNC(Py_ssize_t) PyMapping_Length(PyObject *o);
#define PyMapping_Length PyMapping_Size
#define PyMapping_DelItemString(O,K) PyObject_DelItemString((O),(K))
#define PyMapping_DelItem(O,K) PyObject_DelItem((O),(K))
PyAPI_FUNC(int) PyMapping_HasKeyString(PyObject *o, char *key);
PyAPI_FUNC(int) PyMapping_HasKey(PyObject *o, PyObject *key);
#define PyMapping_Keys(O) PyObject_CallMethod(O,"keys",NULL)
#define PyMapping_Values(O) PyObject_CallMethod(O,"values",NULL)
#define PyMapping_Items(O) PyObject_CallMethod(O,"items",NULL)
PyAPI_FUNC(PyObject *) PyMapping_GetItemString(PyObject *o, char *key);
PyAPI_FUNC(int) PyMapping_SetItemString(PyObject *o, char *key,
PyObject *value);
PyAPI_FUNC(int) PyObject_IsInstance(PyObject *object, PyObject *typeorclass);
PyAPI_FUNC(int) PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);
PyAPI_FUNC(int) _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);
PyAPI_FUNC(int) _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);
PyAPI_FUNC(void) _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
const Py_ssize_t *shape);
PyAPI_FUNC(void) _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
const Py_ssize_t *shape);
