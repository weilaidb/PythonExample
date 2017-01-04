static PyObject *TestError;
static PyObject *
raiseTestError(const char* test_name, const char* msg)
static PyObject*
sizeof_error(const char* fatname, const char* typname,
int expected, int got)
static PyObject*
test_config(PyObject *self)
static PyObject*
test_list_api(PyObject *self)
static int
test_dict_inner(int count)
static PyObject*
test_dict_iteration(PyObject* self)
static PyTypeObject _HashInheritanceTester_Type = ;
static PyObject*
test_lazy_hash_inheritance(PyObject* self)
static int
broken_buffer_getbuffer(PyObject *self, Py_buffer *view, int flags)
static PyBufferProcs memoryviewtester_as_buffer = ;
static PyTypeObject _MemoryViewTester_Type = ;
static PyObject*
test_broken_memoryview(PyObject* self)
static PyObject *
test_to_contiguous(PyObject* self, PyObject *noargs)
static PyObject *
test_from_contiguous(PyObject* self, PyObject *noargs)
#define UNBIND(X)  Py_DECREF(X); (X) = NULL
static PyObject *
raise_test_long_error(const char* msg)
#define TESTNAME        test_long_api_inner
#define TYPENAME        long
#define F_S_TO_PY       PyLong_FromLong
#define F_PY_TO_S       PyLong_AsLong
#define F_U_TO_PY       PyLong_FromUnsignedLong
#define F_PY_TO_U       PyLong_AsUnsignedLong
static PyObject *
test_long_api(PyObject* self)
#undef TESTNAME
#undef TYPENAME
#undef F_S_TO_PY
#undef F_PY_TO_S
#undef F_U_TO_PY
#undef F_PY_TO_U
static PyObject *
raise_test_longlong_error(const char* msg)
#define TESTNAME        test_longlong_api_inner
#define TYPENAME        PY_LONG_LONG
#define F_S_TO_PY       PyLong_FromLongLong
#define F_PY_TO_S       PyLong_AsLongLong
#define F_U_TO_PY       PyLong_FromUnsignedLongLong
#define F_PY_TO_U       PyLong_AsUnsignedLongLong
static PyObject *
test_longlong_api(PyObject* self, PyObject *args)
#undef TESTNAME
#undef TYPENAME
#undef F_S_TO_PY
#undef F_PY_TO_S
#undef F_U_TO_PY
#undef F_PY_TO_U
static PyObject *
test_long_and_overflow(PyObject *self)
static PyObject *
test_long_long_and_overflow(PyObject *self)
static PyObject *
test_L_code(PyObject *self)
static PyObject *
return_none(void *unused)
static PyObject *
raise_error(void *unused)
static int
test_buildvalue_N_error(const char *fmt)
static PyObject *
test_buildvalue_N(PyObject *self, PyObject *noargs)
static PyObject *
get_args(PyObject *self, PyObject *args)
static PyObject *
get_kwargs(PyObject *self, PyObject *args, PyObject *kwargs)
static PyObject *
getargs_tuple(PyObject *self, PyObject *args)
static PyObject *getargs_keywords(PyObject *self, PyObject *args, PyObject *kwargs)
static PyObject *
getargs_b(PyObject *self, PyObject *args)
static PyObject *
getargs_B(PyObject *self, PyObject *args)
static PyObject *
getargs_h(PyObject *self, PyObject *args)
static PyObject *
getargs_H(PyObject *self, PyObject *args)
static PyObject *
getargs_I(PyObject *self, PyObject *args)
static PyObject *
getargs_k(PyObject *self, PyObject *args)
static PyObject *
getargs_i(PyObject *self, PyObject *args)
static PyObject *
getargs_l(PyObject *self, PyObject *args)
static PyObject *
getargs_n(PyObject *self, PyObject *args)
static PyObject *
getargs_L(PyObject *self, PyObject *args)
static PyObject *
getargs_K(PyObject *self, PyObject *args)
static PyObject *
test_k_code(PyObject *self)
static PyObject *
getargs_f(PyObject *self, PyObject *args)
static PyObject *
getargs_d(PyObject *self, PyObject *args)
static PyObject *
getargs_D(PyObject *self, PyObject *args)
static PyObject *
getargs_S(PyObject *self, PyObject *args)
static PyObject *
getargs_Y(PyObject *self, PyObject *args)
static PyObject *
getargs_U(PyObject *self, PyObject *args)
static PyObject *
getargs_c(PyObject *self, PyObject *args)
static PyObject *
getargs_s(PyObject *self, PyObject *args)
static PyObject *
getargs_s_star(PyObject *self, PyObject *args)
static PyObject *
getargs_s_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_t_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_z(PyObject *self, PyObject *args)
static PyObject *
getargs_z_star(PyObject *self, PyObject *args)
static PyObject *
getargs_z_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_w(PyObject *self, PyObject *args)
static PyObject *
getargs_w_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_w_star(PyObject *self, PyObject *args)
static int
_ustrlen(const Py_UNICODE *u)
static PyObject *
getargs_u(PyObject *self, PyObject *args)
static PyObject *
getargs_u_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_es(PyObject *self, PyObject *args)
static PyObject *
getargs_et(PyObject *self, PyObject *args)
static PyObject *
getargs_es_hash(PyObject *self, PyObject *args)
static PyObject *
getargs_et_hash(PyObject *self, PyObject *args)
static volatile int x;
static PyObject *
test_u_code(PyObject *self)
static PyObject *
test_widechar(PyObject *self)
static PyObject *
unicode_encodedecimal(PyObject *self, PyObject *args)
static PyObject *
test_empty_argparse(PyObject *self)
static PyObject *
codec_incrementalencoder(PyObject *self, PyObject *args)
static PyObject *
codec_incrementaldecoder(PyObject *self, PyObject *args)
static PyObject *
test_long_numbits(PyObject *self)
static PyObject *
test_null_strings(PyObject *self)
static PyObject *
raise_exception(PyObject *self, PyObject *args)
static PyObject *
set_errno(PyObject *self, PyObject *args)
static int test_run_counter = 0;
static PyObject *
test_datetime_capi(PyObject *self, PyObject *args)
static PyThread_type_lock thread_done = NULL;
static int
_make_call(void *callable)
static void
_make_call_from_thread(void *callable)
static PyObject *
test_thread_state(PyObject *self, PyObject *args)
static int _pending_callback(void *arg)
PyObject *pending_threadfunc(PyObject *self, PyObject *arg)
static PyObject *
test_string_from_format(PyObject *self, PyObject *args)
static const char *capsule_name = "capsule name";
static       char *capsule_pointer = "capsule pointer";
static       char *capsule_context = "capsule context";
static const char *capsule_error = NULL;
static int
capsule_destructor_call_count = 0;
static void
capsule_destructor(PyObject *o)
typedef struct  known_capsule;
static PyObject *
test_capsule(PyObject *self, PyObject *args)
static PyObject *
test_with_docstring(PyObject *self)
static PyObject *
traceback_print(PyObject *self, PyObject *args)
static PyObject *
code_newempty(PyObject *self, PyObject *args)
static PyObject *
make_exception_with_doc(PyObject *self, PyObject *args, PyObject *kwargs)
static PyObject *
sequence_delitem(PyObject *self, PyObject *args)
typedef struct  test_c_thread_t;
static void
temporary_c_thread(void *data)
static PyObject *
call_in_temporary_c_thread(PyObject *self, PyObject *callback)
static PyObject*
pymarshal_write_long_to_file(PyObject* self, PyObject *args)
static PyObject*
pymarshal_write_object_to_file(PyObject* self, PyObject *args)
static PyObject*
pymarshal_read_short_from_file(PyObject* self, PyObject *args)
static PyObject*
pymarshal_read_long_from_file(PyObject* self, PyObject *args)
static PyObject*
pymarshal_read_last_object_from_file(PyObject* self, PyObject *args)
static PyObject*
pymarshal_read_object_from_file(PyObject* self, PyObject *args)
static PyMethodDef TestMethods[] = ;
#define AddSym(d, n, f, v)
typedef struct  all_structmembers;
typedef struct  test_structmembers;
static struct PyMemberDef test_members[] = ;
static PyObject *
test_structmembers_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
static void
test_structmembers_free(PyObject *ob)
static PyTypeObject test_structmembersType = ;
PyMODINIT_FUNC
init_testcapi(void)
