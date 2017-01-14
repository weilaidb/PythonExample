#undef HAVE_BROKEN_POLL
#if defined(MS_WINDOWS) && !defined(FD_SETSIZE)
#define FD_SETSIZE 512
#if defined(HAVE_POLL_H)
#elif defined(HAVE_SYS_POLL_H)
extern void bzero(void *, int);
#if defined(PYOS_OS2) && !defined(PYCC_GCC)
#  include <winsock2.h>
#  define SOCKET int
#  ifdef __BEOS__
#    include <net/socket.h>
#  elif defined(__VMS)
#    include <socket.h>
#  endif
static PyObject *SelectError;
typedef struct  pylist;
static void
reap_obj(pylist fd2obj[FD_SETSIZE + 1])
static int
seq2set(PyObject *seq, fd_set *set, pylist fd2obj[FD_SETSIZE + 1])
static PyObject *
set2list(fd_set *set, pylist fd2obj[FD_SETSIZE + 1])
#undef SELECT_USES_HEAP
#if FD_SETSIZE > 1024
#define SELECT_USES_HEAP
static PyObject *
select_select(PyObject *self, PyObject *args)
#if defined(HAVE_POLL) && !defined(HAVE_BROKEN_POLL)
typedef struct  pollObject;
static PyTypeObject poll_Type;
static int
update_ufd_array(pollObject *self)
static int
ushort_converter(PyObject *obj, void *ptr)
PyDoc_STRVAR(poll_register_doc,
"register(fd [, eventmask] ) -> None\n\n\
Register a file descriptor with the polling object.\n\
fd -- either an integer, or an object with a fileno() method returning an\n\
int.\n\
events -- an optional bitmask describing the type of events to check for");
static PyObject *
poll_register(pollObject *self, PyObject *args)
PyDoc_STRVAR(poll_modify_doc,
"modify(fd, eventmask) -> None\n\n\
Modify an already registered file descriptor.\n\
fd -- either an integer, or an object with a fileno() method returning an\n\
int.\n\
events -- an optional bitmask describing the type of events to check for");
static PyObject *
poll_modify(pollObject *self, PyObject *args)
PyDoc_STRVAR(poll_unregister_doc,
"unregister(fd) -> None\n\n\
Remove a file descriptor being tracked by the polling object.");
static PyObject *
poll_unregister(pollObject *self, PyObject *o)
PyDoc_STRVAR(poll_poll_doc,
"poll( [timeout] ) -> list of (fd, event) 2-tuples\n\n\
Polls the set of registered file descriptors, returning a list containing \n\
any descriptors that have events or errors to report.");
static PyObject *
poll_poll(pollObject *self, PyObject *args)
static PyMethodDef poll_methods[] = ;
static pollObject *
newPollObject(void)
static void
poll_dealloc(pollObject *self)
static PyObject *
poll_getattr(pollObject *self, char *name)
static PyTypeObject poll_Type = ;
PyDoc_STRVAR(poll_doc,
"Returns a polling object, which supports registering and\n\
unregistering file descriptors, and then polling them for I/O events.");
static PyObject *
select_poll(PyObject *self, PyObject *unused)
static int select_have_broken_poll(void)
typedef struct  pyEpoll_Object;
static PyTypeObject pyEpoll_Type;
#define pyepoll_CHECK(op) (PyObject_TypeCheck((op), &pyEpoll_Type))
static PyObject *
pyepoll_err_closed(void)
static int
pyepoll_internal_close(pyEpoll_Object *self)
static PyObject *
newPyEpoll_Object(PyTypeObject *type, int sizehint, SOCKET fd)
static PyObject *
pyepoll_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
pyepoll_dealloc(pyEpoll_Object *self)
static PyObject*
pyepoll_close(pyEpoll_Object *self)
PyDoc_STRVAR(pyepoll_close_doc,
"close() -> None\n\
\n\
Close the epoll control file descriptor. Further operations on the epoll\n\
object will raise an exception.");
static PyObject*
pyepoll_get_closed(pyEpoll_Object *self)
static PyObject*
pyepoll_fileno(pyEpoll_Object *self)
PyDoc_STRVAR(pyepoll_fileno_doc,
"fileno() -> int\n\
\n\
Return the epoll control file descriptor.");
static PyObject*
pyepoll_fromfd(PyObject *cls, PyObject *args)
PyDoc_STRVAR(pyepoll_fromfd_doc,
"fromfd(fd) -> epoll\n\
\n\
Create an epoll object from a given control fd.");
static PyObject *
pyepoll_internal_ctl(int epfd, int op, PyObject *pfd, unsigned int events)
static PyObject *
pyepoll_register(pyEpoll_Object *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(pyepoll_register_doc,
"register(fd[, eventmask]) -> None\n\
\n\
Registers a new fd or raises an IOError if the fd is already registered.\n\
fd is the target file descriptor of the operation.\n\
events is a bit set composed of the various EPOLL constants; the default\n\
is EPOLL_IN | EPOLL_OUT | EPOLL_PRI.\n\
\n\
The epoll interface supports all file descriptors that support poll.");
static PyObject *
pyepoll_modify(pyEpoll_Object *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(pyepoll_modify_doc,
"modify(fd, eventmask) -> None\n\
\n\
fd is the target file descriptor of the operation\n\
events is a bit set composed of the various EPOLL constants");
static PyObject *
pyepoll_unregister(pyEpoll_Object *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(pyepoll_unregister_doc,
"unregister(fd) -> None\n\
\n\
fd is the target file descriptor of the operation.");
static PyObject *
pyepoll_poll(pyEpoll_Object *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(pyepoll_poll_doc,
"poll([timeout=-1[, maxevents=-1]]) -> [(fd, events), (...)]\n\
\n\
Wait for events on the epoll file descriptor for a maximum time of timeout\n\
in seconds (as float). -1 makes poll wait indefinitely.\n\
Up to maxevents are returned to the caller.");
static PyMethodDef pyepoll_methods[] = ;
static PyGetSetDef pyepoll_getsetlist[] = ;
PyDoc_STRVAR(pyepoll_doc,
"select.epoll([sizehint=-1])\n\
\n\
Returns an epolling object\n\
\n\
sizehint must be a positive integer or -1 for the default size. The\n\
sizehint is used to optimize internal data structures. It doesn't limit\n\
the maximum number of monitored events.");
static PyTypeObject pyEpoll_Type = ;
PyDoc_STRVAR(kqueue_event_doc,
"kevent(ident, filter=KQ_FILTER_READ, flags=KQ_EV_ADD, fflags=0, data=0, udata=0)\n\
\n\
This object is the equivalent of the struct kevent for the C API.\n\
\n\
See the kqueue manpage for more detailed information about the meaning\n\
of the arguments.\n\
\n\
One minor note: while you might hope that udata could store a\n\
reference to a python object, it cannot, because it is impossible to\n\
keep a proper reference count of the object once it's passed into the\n\
kernel. Therefore, I have restricted it to only storing an integer.  I\n\
recommend ignoring it and simply using the 'ident' field to key off\n\
of. You could also set up a dictionary on the python side to store a\n\
udata->object mapping.");
typedef struct  kqueue_event_Object;
static PyTypeObject kqueue_event_Type;
#define kqueue_event_Check(op) (PyObject_TypeCheck((op), &kqueue_event_Type))
typedef struct  kqueue_queue_Object;
static PyTypeObject kqueue_queue_Type;
#define kqueue_queue_Check(op) (PyObject_TypeCheck((op), &kqueue_queue_Type))
#if (SIZEOF_UINTPTR_T != SIZEOF_VOID_P)
#   error uintptr_t does not match void *!
#elif (SIZEOF_UINTPTR_T == SIZEOF_LONG_LONG)
#   define T_UINTPTRT         T_ULONGLONG
#   define T_INTPTRT          T_LONGLONG
#   define PyLong_AsUintptr_t PyLong_AsUnsignedLongLong
#   define UINTPTRT_FMT_UNIT
#   define INTPTRT_FMT_UNIT
#elif (SIZEOF_UINTPTR_T == SIZEOF_LONG)
#   define T_UINTPTRT         T_ULONG
#   define T_INTPTRT          T_LONG
#   define PyLong_AsUintptr_t PyLong_AsUnsignedLong
#   define UINTPTRT_FMT_UNIT
#   define INTPTRT_FMT_UNIT
#elif (SIZEOF_UINTPTR_T == SIZEOF_INT)
#   define T_UINTPTRT         T_UINT
#   define T_INTPTRT          T_INT
#   define PyLong_AsUintptr_t PyLong_AsUnsignedLong
#   define UINTPTRT_FMT_UNIT
#   define INTPTRT_FMT_UNIT
#   error uintptr_t does not match int, long, or long long!
#if !defined(__OpenBSD__)
#   define IDENT_TYPE	T_UINTPTRT
#   define IDENT_CAST	Py_intptr_t
#   define DATA_TYPE	T_INTPTRT
#   define DATA_FMT_UNIT INTPTRT_FMT_UNIT
#   define IDENT_AsType	PyLong_AsUintptr_t
#   define IDENT_TYPE	T_UINT
#   define IDENT_CAST	int
#   define DATA_TYPE	T_INT
#   define DATA_FMT_UNIT
#   define IDENT_AsType	PyLong_AsUnsignedLong
#define KQ_OFF(x) offsetof(kqueue_event_Object, x)
static struct PyMemberDef kqueue_event_members[] = ;
#undef KQ_OFF
static PyObject *
kqueue_event_repr(kqueue_event_Object *s)
static int
kqueue_event_init(kqueue_event_Object *self, PyObject *args, PyObject *kwds)
static PyObject *
kqueue_event_richcompare(kqueue_event_Object *s, kqueue_event_Object *o,
int op)
static PyTypeObject kqueue_event_Type = ;
static PyObject *
kqueue_queue_err_closed(void)
static int
kqueue_queue_internal_close(kqueue_queue_Object *self)
static PyObject *
newKqueue_Object(PyTypeObject *type, SOCKET fd)
static PyObject *
kqueue_queue_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
kqueue_queue_dealloc(kqueue_queue_Object *self)
static PyObject*
kqueue_queue_close(kqueue_queue_Object *self)
PyDoc_STRVAR(kqueue_queue_close_doc,
"close() -> None\n\
\n\
Close the kqueue control file descriptor. Further operations on the kqueue\n\
object will raise an exception.");
static PyObject*
kqueue_queue_get_closed(kqueue_queue_Object *self)
static PyObject*
kqueue_queue_fileno(kqueue_queue_Object *self)
PyDoc_STRVAR(kqueue_queue_fileno_doc,
"fileno() -> int\n\
\n\
Return the kqueue control file descriptor.");
static PyObject*
kqueue_queue_fromfd(PyObject *cls, PyObject *args)
PyDoc_STRVAR(kqueue_queue_fromfd_doc,
"fromfd(fd) -> kqueue\n\
\n\
Create a kqueue object from a given control fd.");
static PyObject *
kqueue_queue_control(kqueue_queue_Object *self, PyObject *args)
PyDoc_STRVAR(kqueue_queue_control_doc,
"control(changelist, max_events[, timeout=None]) -> eventlist\n\
\n\
Calls the kernel kevent function.\n\
- changelist must be a list of kevent objects describing the changes\n\
to be made to the kernel's watch list or None.\n\
- max_events lets you specify the maximum number of events that the\n\
kernel will return.\n\
- timeout is the maximum time to wait in seconds, or else None,\n\
to wait forever. timeout accepts floats for smaller timeouts, too.");
static PyMethodDef kqueue_queue_methods[] = ;
static PyGetSetDef kqueue_queue_getsetlist[] = ;
PyDoc_STRVAR(kqueue_queue_doc,
"Kqueue syscall wrapper.\n\
\n\
For example, to start watching a socket for input:\n\
>>> kq = kqueue()\n\
>>> sock = socket()\n\
>>> sock.connect((host, port))\n\
>>> kq.control([kevent(sock, KQ_FILTER_WRITE, KQ_EV_ADD)], 0)\n\
\n\
To wait one second for it to become writeable:\n\
>>> kq.control(None, 1, 1000)\n\
\n\
To stop listening:\n\
>>> kq.control([kevent(sock, KQ_FILTER_WRITE, KQ_EV_DELETE)], 0)");
static PyTypeObject kqueue_queue_Type = ;
PyDoc_STRVAR(select_doc,
"select(rlist, wlist, xlist[, timeout]) -> (rlist, wlist, xlist)\n\
\n\
Wait until one or more file descriptors are ready for some kind of I/O.\n\
The first three arguments are sequences of file descriptors to be waited for:\n\
rlist -- wait until ready for reading\n\
wlist -- wait until ready for writing\n\
xlist -- wait for an ``exceptional condition''\n\
If only one kind of condition is required, pass [] for the other lists.\n\
A file descriptor is either a socket or file object, or a small integer\n\
gotten from a fileno() method call on one of those.\n\
\n\
The optional 4th argument specifies a timeout in seconds; it may be\n\
a floating point number to specify fractions of seconds.  If it is absent\n\
or None, the call will never time out.\n\
\n\
The return value is a tuple of three lists corresponding to the first three\n\
arguments; each contains the subset of the corresponding file descriptors\n\
that are ready.\n\
\n\
*** IMPORTANT NOTICE ***\n\
On Windows and OpenVMS, only sockets are supported; on Unix, all file\n\
descriptors can be used.");
static PyMethodDef select_methods[] = ;
PyDoc_STRVAR(module_doc,
"This module supports asynchronous I/O on multiple file descriptors.\n\
\n\
*** IMPORTANT NOTICE ***\n\
On Windows and OpenVMS, only sockets are supported; on Unix, all file descriptors.");
PyMODINIT_FUNC
initselect(void)
{
PyObject *m;
m = Py_InitModule3(, select_methods, module_doc);
if (m == NULL)
return;
SelectError = PyErr_NewException(, NULL, NULL);
Py_INCREF(SelectError);
PyModule_AddObject(m, , SelectError);
#undef PIPE_BUF
#define PIPE_BUF 512
PyModule_AddIntConstant(m, , PIPE_BUF);
#if defined(HAVE_POLL) && !defined(HAVE_BROKEN_POLL)
if (select_have_broken_poll())  else
