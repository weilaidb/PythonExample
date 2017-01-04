#define PyInit_termios inittermios
#if defined(__sgi)
#define CTRL(c) ((c)&037)
PyDoc_STRVAR(termios__doc__,
"This module provides an interface to the Posix calls for tty I/O control.\n\
For a complete description of these calls, see the Posix or Unix manual\n\
pages. It is only available for those Unix versions that support Posix\n\
termios style tty I/O control.\n\
\n\
All functions in this module take a file descriptor fd as their first\n\
argument. This can be an integer file descriptor, such as returned by\n\
sys.stdin.fileno(), or a file object, such as sys.stdin itself.");
static PyObject *TermiosError;
static int fdconv(PyObject* obj, void* p)
PyDoc_STRVAR(termios_tcgetattr__doc__,
"tcgetattr(fd) -> list_of_attrs\n\
\n\
Get the tty attributes for file descriptor fd, as follows:\n\
[iflag, oflag, cflag, lflag, ispeed, ospeed, cc] where cc is a list\n\
of the tty special characters (each a string of length 1, except the items\n\
with indices VMIN and VTIME, which are integers when these fields are\n\
defined).  The interpretation of the flags and the speeds as well as the\n\
indexing in the cc array must be done using the symbolic constants defined\n\
in this module.");
static PyObject *
termios_tcgetattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(termios_tcsetattr__doc__,
"tcsetattr(fd, when, attributes) -> None\n\
\n\
Set the tty attributes for file descriptor fd.\n\
The attributes to be set are taken from the attributes argument, which\n\
is a list like the one returned by tcgetattr(). The when argument\n\
determines when the attributes are changed: termios.TCSANOW to\n\
change immediately, termios.TCSADRAIN to change after transmitting all\n\
queued output, or termios.TCSAFLUSH to change after transmitting all\n\
queued output and discarding all queued input. ");
static PyObject *
termios_tcsetattr(PyObject *self, PyObject *args)
PyDoc_STRVAR(termios_tcsendbreak__doc__,
"tcsendbreak(fd, duration) -> None\n\
\n\
Send a break on file descriptor fd.\n\
A zero duration sends a break for 0.25-0.5 seconds; a nonzero duration\n\
has a system dependent meaning.");
static PyObject *
termios_tcsendbreak(PyObject *self, PyObject *args)
PyDoc_STRVAR(termios_tcdrain__doc__,
"tcdrain(fd) -> None\n\
\n\
Wait until all output written to file descriptor fd has been transmitted.");
static PyObject *
termios_tcdrain(PyObject *self, PyObject *args)
PyDoc_STRVAR(termios_tcflush__doc__,
"tcflush(fd, queue) -> None\n\
\n\
Discard queued data on file descriptor fd.\n\
The queue selector specifies which queue: termios.TCIFLUSH for the input\n\
queue, termios.TCOFLUSH for the output queue, or termios.TCIOFLUSH for\n\
both queues. ");
static PyObject *
termios_tcflush(PyObject *self, PyObject *args)
PyDoc_STRVAR(termios_tcflow__doc__,
"tcflow(fd, action) -> None\n\
\n\
Suspend or resume input or output on file descriptor fd.\n\
The action argument can be termios.TCOOFF to suspend output,\n\
termios.TCOON to restart output, termios.TCIOFF to suspend input,\n\
or termios.TCION to restart input.");
static PyObject *
termios_tcflow(PyObject *self, PyObject *args)
static PyMethodDef termios_methods[] =
;
#if defined(VSWTCH) && !defined(VSWTC)
#define VSWTC VSWTCH
#if defined(VSWTC) && !defined(VSWTCH)
#define VSWTCH VSWTC
static struct constant  termios_constants[] = ;
PyMODINIT_FUNC
PyInit_termios(void)
