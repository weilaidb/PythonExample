#define SIG_ERR ((PyOS_sighandler_t)(-1))
#if defined(PYOS_OS2) && !defined(PYCC_GCC)
#define NSIG 12
# if defined(_NSIG)
#  define NSIG _NSIG
# elif defined(_SIGMAX)
#  define NSIG (_SIGMAX + 1)
# elif defined(SIGMAX)
#  define NSIG (SIGMAX + 1)
# else
#  define NSIG 64
# endif
static long main_thread;
static pid_t main_pid;
static struct  Handlers[NSIG];
static sig_atomic_t wakeup_fd = -1;
static volatile sig_atomic_t is_tripped = 0;
static PyObject *DefaultHandler;
static PyObject *IgnoreHandler;
static PyObject *IntHandler;
static PyOS_sighandler_t old_siginthandler = SIG_DFL;
static PyObject *ItimerError;
static void
timeval_from_double(double d, struct timeval *tv)
Py_LOCAL_INLINE(double)
double_from_timeval(struct timeval *tv)
static PyObject *
itimer_retval(struct itimerval *iv)
static PyObject *
signal_default_int_handler(PyObject *self, PyObject *args)
PyDoc_STRVAR(default_int_handler_doc,
"default_int_handler(...)\n\
\n\
The default handler for SIGINT installed by Python.\n\
It raises KeyboardInterrupt.");
static int
checksignals_witharg(void * unused)
static void
trip_signal(int sig_num)
static void
signal_handler(int sig_num)
static PyObject *
signal_alarm(PyObject *self, PyObject *args)
PyDoc_STRVAR(alarm_doc,
"alarm(seconds)\n\
\n\
Arrange for SIGALRM to arrive after the given number of seconds.");
static PyObject *
signal_pause(PyObject *self)
PyDoc_STRVAR(pause_doc,
"pause()\n\
\n\
Wait until a signal arrives.");
static PyObject *
signal_signal(PyObject *self, PyObject *args)
PyDoc_STRVAR(signal_doc,
"signal(sig, action) -> action\n\
\n\
Set the action for the given signal.  The action can be SIG_DFL,\n\
SIG_IGN, or a callable Python object.  The previous action is\n\
returned.  See getsignal() for possible return values.\n\
\n\
*** IMPORTANT NOTICE ***\n\
A signal handler function is called with two arguments:\n\
the first is the signal number, the second is the interrupted stack frame.");
static PyObject *
signal_getsignal(PyObject *self, PyObject *args)
PyDoc_STRVAR(getsignal_doc,
"getsignal(sig) -> action\n\
\n\
Return the current action for the given signal.  The return value can be:\n\
SIG_IGN -- if the signal is being ignored\n\
SIG_DFL -- if the default action for the signal is in effect\n\
None -- if an unknown handler is in effect\n\
anything else -- the callable Python object used as a handler");
PyDoc_STRVAR(siginterrupt_doc,
"siginterrupt(sig, flag) -> None\n\
change system call restart behaviour: if flag is False, system calls\n\
will be restarted when interrupted by signal sig, else system calls\n\
will be interrupted.");
static PyObject *
signal_siginterrupt(PyObject *self, PyObject *args)
static PyObject *
signal_set_wakeup_fd(PyObject *self, PyObject *args)
PyDoc_STRVAR(set_wakeup_fd_doc,
"set_wakeup_fd(fd) -> fd\n\
\n\
Sets the fd to be written to (with '\\0') when a signal\n\
comes in.  A library can use this to wakeup select or poll.\n\
The previous fd is returned.\n\
\n\
The fd must be non-blocking.");
int
PySignal_SetWakeupFd(int fd)
static PyObject *
signal_setitimer(PyObject *self, PyObject *args)
PyDoc_STRVAR(setitimer_doc,
"setitimer(which, seconds[, interval])\n\
\n\
Sets given itimer (one of ITIMER_REAL, ITIMER_VIRTUAL\n\
or ITIMER_PROF) to fire after value seconds and after\n\
that every interval seconds.\n\
The itimer can be cleared by setting seconds to zero.\n\
\n\
Returns old values as a tuple: (delay, interval).");
static PyObject *
signal_getitimer(PyObject *self, PyObject *args)
PyDoc_STRVAR(getitimer_doc,
"getitimer(which)\n\
\n\
Returns current value of given itimer.");
static PyMethodDef signal_methods[] = ;
PyDoc_STRVAR(module_doc,
"This module provides mechanisms to use signal handlers in Python.\n\
\n\
Functions:\n\
\n\
alarm() -- cause SIGALRM after a specified time [Unix only]\n\
setitimer() -- cause a signal (described below) after a specified\n\
float time and the timer may restart then [Unix only]\n\
getitimer() -- get current value of timer [Unix only]\n\
signal() -- set the action for a given signal\n\
getsignal() -- get the signal action for a given signal\n\
pause() -- wait until a signal arrives [Unix only]\n\
default_int_handler() -- default SIGINT handler\n\
\n\
signal constants:\n\
SIG_DFL -- used to refer to the system default handler\n\
SIG_IGN -- used to ignore the signal\n\
NSIG -- number of defined signals\n\
SIGINT, SIGTERM, etc. -- signal numbers\n\
\n\
itimer constants:\n\
ITIMER_REAL -- decrements in real time, and delivers SIGALRM upon\n\
expiration\n\
ITIMER_VIRTUAL -- decrements only when the process is executing,\n\
and delivers SIGVTALRM upon expiration\n\
ITIMER_PROF -- decrements both when the process is executing and\n\
when the system is executing on behalf of the process.\n\
Coupled with ITIMER_VIRTUAL, this timer is usually\n\
used to profile the time spent by the application\n\
in user and kernel space. SIGPROF is delivered upon\n\
expiration.\n\
\n\n\
*** IMPORTANT NOTICE ***\n\
A signal handler function is called with two arguments:\n\
the first is the signal number, the second is the interrupted stack frame.");
PyMODINIT_FUNC
initsignal(void)
static void
finisignal(void)
int
PyErr_CheckSignals(void)
void
PyErr_SetInterrupt(void)
void
PyOS_InitInterrupts(void)
void
PyOS_FiniInterrupts(void)
int
PyOS_InterruptOccurred(void)
static void
_clear_pending_signals(void)
void
PyOS_AfterFork(void)
