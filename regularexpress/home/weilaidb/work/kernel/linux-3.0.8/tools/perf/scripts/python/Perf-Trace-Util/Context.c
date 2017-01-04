PyMODINIT_FUNC initperf_trace_context(void);
static PyObject *perf_trace_context_common_pc(PyObject *self, PyObject *args)
static PyObject *perf_trace_context_common_flags(PyObject *self,
PyObject *args)
static PyObject *perf_trace_context_common_lock_depth(PyObject *self,
PyObject *args)
static PyMethodDef ContextMethods[] = ;
PyMODINIT_FUNC initperf_trace_context(void)
