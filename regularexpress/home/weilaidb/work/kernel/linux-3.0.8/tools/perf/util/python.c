# define PyVarObject_HEAD_INIT(type, size) PyObject_HEAD_INIT(type) size,
struct throttle_event ;
PyMODINIT_FUNC initperf(void);
#define member_def(type, member, ptype, help) \
#define sample_member_def(name, member, ptype, help) \
struct pyrf_event ;
#define sample_members \
sample_member_def(sample_ip, ip, T_ULONGLONG, "event type"),			 \
sample_member_def(sample_pid, pid, T_INT, "event pid"),			 \
sample_member_def(sample_tid, tid, T_INT, "event tid"),			 \
sample_member_def(sample_time, time, T_ULONGLONG, "event timestamp"),		 \
sample_member_def(sample_addr, addr, T_ULONGLONG, "event addr"),		 \
sample_member_def(sample_id, id, T_ULONGLONG, "event id"),			 \
sample_member_def(sample_stream_id, stream_id, T_ULONGLONG, "event stream id"), \
sample_member_def(sample_period, period, T_ULONGLONG, "event period"),		 \
sample_member_def(sample_cpu, cpu, T_UINT, "event cpu"),
static char pyrf_mmap_event__doc[] = PyDoc_STR("perf mmap event object.");
static PyMemberDef pyrf_mmap_event__members[] = ;
static PyObject *pyrf_mmap_event__repr(struct pyrf_event *pevent)
static PyTypeObject pyrf_mmap_event__type = ;
static char pyrf_task_event__doc[] = PyDoc_STR("perf task (fork/exit) event object.");
static PyMemberDef pyrf_task_event__members[] = ;
static PyObject *pyrf_task_event__repr(struct pyrf_event *pevent)
static PyTypeObject pyrf_task_event__type = ;
static char pyrf_comm_event__doc[] = PyDoc_STR("perf comm event object.");
static PyMemberDef pyrf_comm_event__members[] = ;
static PyObject *pyrf_comm_event__repr(struct pyrf_event *pevent)
static PyTypeObject pyrf_comm_event__type = ;
static char pyrf_throttle_event__doc[] = PyDoc_STR("perf throttle event object.");
static PyMemberDef pyrf_throttle_event__members[] = ;
static PyObject *pyrf_throttle_event__repr(struct pyrf_event *pevent)
static PyTypeObject pyrf_throttle_event__type = ;
static int pyrf_event__setup_types(void)
static PyTypeObject *pyrf_event__type[] = ;
static PyObject *pyrf_event__new(union perf_event *event)
struct pyrf_cpu_map ;
static int pyrf_cpu_map__init(struct pyrf_cpu_map *pcpus,
PyObject *args, PyObject *kwargs)
static void pyrf_cpu_map__delete(struct pyrf_cpu_map *pcpus)
static Py_ssize_t pyrf_cpu_map__length(PyObject *obj)
static PyObject *pyrf_cpu_map__item(PyObject *obj, Py_ssize_t i)
static PySequenceMethods pyrf_cpu_map__sequence_methods = ;
static char pyrf_cpu_map__doc[] = PyDoc_STR("cpu map object.");
static PyTypeObject pyrf_cpu_map__type = ;
static int pyrf_cpu_map__setup_types(void)
struct pyrf_thread_map ;
static int pyrf_thread_map__init(struct pyrf_thread_map *pthreads,
PyObject *args, PyObject *kwargs)
static void pyrf_thread_map__delete(struct pyrf_thread_map *pthreads)
static Py_ssize_t pyrf_thread_map__length(PyObject *obj)
static PyObject *pyrf_thread_map__item(PyObject *obj, Py_ssize_t i)
static PySequenceMethods pyrf_thread_map__sequence_methods = ;
static char pyrf_thread_map__doc[] = PyDoc_STR("thread map object.");
static PyTypeObject pyrf_thread_map__type = ;
static int pyrf_thread_map__setup_types(void)
struct pyrf_evsel ;
static int pyrf_evsel__init(struct pyrf_evsel *pevsel,
PyObject *args, PyObject *kwargs)
static void pyrf_evsel__delete(struct pyrf_evsel *pevsel)
static PyObject *pyrf_evsel__open(struct pyrf_evsel *pevsel,
PyObject *args, PyObject *kwargs)
static PyMethodDef pyrf_evsel__methods[] = ;
static char pyrf_evsel__doc[] = PyDoc_STR("perf event selector list object.");
static PyTypeObject pyrf_evsel__type = ;
static int pyrf_evsel__setup_types(void)
struct pyrf_evlist ;
static int pyrf_evlist__init(struct pyrf_evlist *pevlist,
PyObject *args, PyObject *kwargs __used)
static void pyrf_evlist__delete(struct pyrf_evlist *pevlist)
static PyObject *pyrf_evlist__mmap(struct pyrf_evlist *pevlist,
PyObject *args, PyObject *kwargs)
static PyObject *pyrf_evlist__poll(struct pyrf_evlist *pevlist,
PyObject *args, PyObject *kwargs)
static PyObject *pyrf_evlist__get_pollfd(struct pyrf_evlist *pevlist,
PyObject *args __used, PyObject *kwargs __used)
static PyObject *pyrf_evlist__add(struct pyrf_evlist *pevlist,
PyObject *args, PyObject *kwargs __used)
static PyObject *pyrf_evlist__read_on_cpu(struct pyrf_evlist *pevlist,
PyObject *args, PyObject *kwargs)
static PyMethodDef pyrf_evlist__methods[] = ;
static Py_ssize_t pyrf_evlist__length(PyObject *obj)
static PyObject *pyrf_evlist__item(PyObject *obj, Py_ssize_t i)
static PySequenceMethods pyrf_evlist__sequence_methods = ;
static char pyrf_evlist__doc[] = PyDoc_STR("perf event selector list object.");
static PyTypeObject pyrf_evlist__type = ;
static int pyrf_evlist__setup_types(void)
static struct  perf__constants[] = ;
static PyMethodDef perf__methods[] = ;
PyMODINIT_FUNC initperf(void)
