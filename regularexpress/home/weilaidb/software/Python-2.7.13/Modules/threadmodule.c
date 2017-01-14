#error
#error
#error
static PyObject *ThreadError;
static PyObject *str_dict;
static long nb_threads = 0;
typedef struct  lockobject;
static void
lock_dealloc(lockobject *self)
static PyObject *
lock_PyThread_acquire_lock(lockobject *self, PyObject *args)
PyDoc_STRVAR(acquire_doc,
"acquire([wait]) -> bool\n\
(acquire_lock() is an obsolete synonym)\n\
\n\
Lock the lock.  Without argument, this blocks if the lock is already\n\
locked (even by the same thread), waiting for another thread to release\n\
the lock, and return True once the lock is acquired.\n\
With an argument, this will only block if the argument is true,\n\
and the return value reflects whether the lock is acquired.\n\
The blocking operation is not interruptible.");
static PyObject *
lock_PyThread_release_lock(lockobject *self)
PyDoc_STRVAR(release_doc,
"release()\n\
(release_lock() is an obsolete synonym)\n\
\n\
Release the lock, allowing another thread that is blocked waiting for\n\
the lock to acquire the lock.  The lock must be in the locked state,\n\
but it needn't be locked by the same thread that unlocks it.");
static PyObject *
lock_locked_lock(lockobject *self)
PyDoc_STRVAR(locked_doc,
"locked() -> bool\n\
(locked_lock() is an obsolete synonym)\n\
\n\
Return whether the lock is in the locked state.");
static PyMethodDef lock_methods[] = ;
static PyTypeObject Locktype = ;
static lockobject *
newlockobject(void)
typedef struct  localdummyobject;
static void
localdummy_dealloc(localdummyobject *self)
static PyTypeObject localdummytype = ;
typedef struct  localobject;
static PyObject *_ldict(localobject *self);
static PyObject *_localdummy_destroyed(PyObject *meth_self, PyObject *dummyweakref);
static PyObject *
_local_create_dummy(localobject *self)
static PyObject *
local_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static int
local_traverse(localobject *self, visitproc visit, void *arg)
static int
local_clear(localobject *self)
static void
local_dealloc(localobject *self)
static PyObject *
_ldict(localobject *self)
static int
local_setattro(localobject *self, PyObject *name, PyObject *v)
static PyObject *local_getattro(localobject *, PyObject *);
static PyTypeObject localtype = ;
static PyObject *
local_getattro(localobject *self, PyObject *name)
static PyObject *
_localdummy_destroyed(PyObject *localweakref, PyObject *dummyweakref)
struct bootstate ;
static void
t_bootstrap(void *boot_raw)
static PyObject *
thread_PyThread_start_new_thread(PyObject *self, PyObject *fargs)
PyDoc_STRVAR(start_new_doc,
"start_new_thread(function, args[, kwargs])\n\
(start_new() is an obsolete synonym)\n\
\n\
Start a new thread and return its identifier.  The thread will call the\n\
function with positional arguments from the tuple args and keyword arguments\n\
taken from the optional dictionary kwargs.  The thread exits when the\n\
function returns; the return value is ignored.  The thread will also exit\n\
when the function raises an unhandled exception; a stack trace will be\n\
printed unless the exception is SystemExit.\n");
static PyObject *
thread_PyThread_exit_thread(PyObject *self)
PyDoc_STRVAR(exit_doc,
"exit()\n\
(exit_thread() is an obsolete synonym)\n\
\n\
This is synonymous to ``raise SystemExit''.  It will cause the current\n\
thread to exit silently unless the exception is caught.");
static PyObject *
thread_PyThread_interrupt_main(PyObject * self)
PyDoc_STRVAR(interrupt_doc,
"interrupt_main()\n\
\n\
Raise a KeyboardInterrupt in the main thread.\n\
A subthread can use this function to interrupt the main thread."
);
static lockobject *newlockobject(void);
static PyObject *
thread_PyThread_allocate_lock(PyObject *self)
PyDoc_STRVAR(allocate_doc,
"allocate_lock() -> lock object\n\
(allocate() is an obsolete synonym)\n\
\n\
Create a new lock object.  See help(LockType) for information about locks.");
static PyObject *
thread_get_ident(PyObject *self)
PyDoc_STRVAR(get_ident_doc,
"get_ident() -> integer\n\
\n\
Return a non-zero integer that uniquely identifies the current thread\n\
amongst other threads that exist simultaneously.\n\
This may be used to identify per-thread resources.\n\
Even though on some platforms threads identities may appear to be\n\
allocated consecutive numbers starting at 1, this behavior should not\n\
be relied upon, and the number should be seen purely as a magic cookie.\n\
A thread's identity may be reused for another thread after it exits.");
static PyObject *
thread__count(PyObject *self)
PyDoc_STRVAR(_count_doc,
"_count() -> integer\n\
\n\
\
Return the number of currently running Python threads, excluding \n\
the main thread. The returned number comprises all threads created\n\
through `start_new_thread()` as well as `threading.Thread`, and not\n\
yet finished.\n\
\n\
This function is meant for internal and specialized purposes only.\n\
In most applications `threading.enumerate()` should be used instead.");
static PyObject *
thread_stack_size(PyObject *self, PyObject *args)
PyDoc_STRVAR(stack_size_doc,
"stack_size([size]) -> size\n\
\n\
Return the thread stack size used when creating new threads.  The\n\
optional size argument specifies the stack size (in bytes) to be used\n\
for subsequently created threads, and must be 0 (use platform or\n\
configured default) or a positive integer value of at least 32,768 (32k).\n\
If changing the thread stack size is unsupported, a ThreadError\n\
exception is raised.  If the specified size is invalid, a ValueError\n\
exception is raised, and the stack size is unmodified.  32k bytes\n\
currently the minimum supported stack size value to guarantee\n\
sufficient stack space for the interpreter itself.\n\
\n\
Note that some platforms may have particular restrictions on values for\n\
the stack size, such as requiring a minimum stack size larger than 32kB or\n\
requiring allocation in multiples of the system memory page size\n\
- platform documentation should be referred to for more information\n\
(4kB pages are common; using multiples of 4096 for the stack size is\n\
the suggested approach in the absence of more specific information).");
static PyMethodDef thread_methods[] = ;
PyDoc_STRVAR(thread_doc,
"This module provides primitive operations to write multi-threaded programs.\n\
The 'threading' module provides a more convenient interface.");
PyDoc_STRVAR(lock_doc,
"A lock object is a synchronization primitive.  To create a lock,\n\
call the PyThread_allocate_lock() function.  Methods are:\n\
\n\
acquire() -- lock the lock, possibly blocking until it can be obtained\n\
release() -- unlock of the lock\n\
locked() -- test whether the lock is currently locked\n\
\n\
A lock is not owned by the thread that locked it; another thread may\n\
unlock it.  A thread attempting to lock a lock that it has already locked\n\
will block until another thread unlocks it.  Deadlocks may ensue.");
PyMODINIT_FUNC
initthread(void)
