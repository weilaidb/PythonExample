#define PY_SSIZE_T_CLEAN
static int
conv_descriptor(PyObject *object, int *target)
static PyObject *
fcntl_fcntl(PyObject *self, PyObject *args)
PyDoc_STRVAR(fcntl_doc,
"fcntl(fd, op, [arg])\n\
\n\
Perform the operation op on file descriptor fd.  The values used\n\
for op are operating system dependent, and are available\n\
as constants in the fcntl module, using the same names as used in\n\
the relevant C header files.  The argument arg is optional, and\n\
defaults to 0; it may be an int or a string.  If arg is given as a string,\n\
the return value of fcntl is a string of that length, containing the\n\
resulting value put in the arg buffer by the operating system.  The length\n\
of the arg string is not allowed to exceed 1024 bytes.  If the arg given\n\
is an integer or if none is specified, the result value is an integer\n\
corresponding to the return value of the fcntl call in the C code.");
static PyObject *
fcntl_ioctl(PyObject *self, PyObject *args)
PyDoc_STRVAR(ioctl_doc,
"ioctl(fd, op[, arg[, mutate_flag]])\n\
\n\
Perform the operation op on file descriptor fd.  The values used for op\n\
are operating system dependent, and are available as constants in the\n\
fcntl or termios library modules, using the same names as used in the\n\
relevant C header files.\n\
\n\
The argument arg is optional, and defaults to 0; it may be an int or a\n\
buffer containing character data (most likely a string or an array). \n\
\n\
If the argument is a mutable buffer (such as an array) and if the\n\
mutate_flag argument (which is only allowed in this case) is true then the\n\
buffer is (in effect) passed to the operating system and changes made by\n\
the OS will be reflected in the contents of the buffer after the call has\n\
returned.  The return value is the integer returned by the ioctl system\n\
call.\n\
\n\
If the argument is a mutable buffer and the mutable_flag argument is not\n\
passed or is false, the behavior is as if a string had been passed.  This\n\
behavior will change in future releases of Python.\n\
\n\
If the argument is an immutable buffer (most likely a string) then a copy\n\
of the buffer is passed to the operating system and the return value is a\n\
string of the same length containing whatever the operating system put in\n\
the buffer.  The length of the arg buffer in this case is not allowed to\n\
exceed 1024 bytes.\n\
\n\
If the arg given is an integer or if none is specified, the result value is\n\
an integer corresponding to the return value of the ioctl call in the C\n\
code.");
static PyObject *
fcntl_flock(PyObject *self, PyObject *args)
PyDoc_STRVAR(flock_doc,
"flock(fd, operation)\n\
\n\
Perform the lock operation op on file descriptor fd.  See the Unix \n\
manual page for flock(2) for details.  (On some systems, this function is\n\
emulated using fcntl().)");
static PyObject *
fcntl_lockf(PyObject *self, PyObject *args)
PyDoc_STRVAR(lockf_doc,
"lockf (fd, operation, length=0, start=0, whence=0)\n\
\n\
This is essentially a wrapper around the fcntl() locking calls.  fd is the\n\
file descriptor of the file to lock or unlock, and operation is one of the\n\
following values:\n\
\n\
LOCK_UN - unlock\n\
LOCK_SH - acquire a shared lock\n\
LOCK_EX - acquire an exclusive lock\n\
\n\
When operation is LOCK_SH or LOCK_EX, it can also be bitwise ORed with\n\
LOCK_NB to avoid blocking on lock acquisition.  If LOCK_NB is used and the\n\
lock cannot be acquired, an IOError will be raised and the exception will\n\
have an errno attribute set to EACCES or EAGAIN (depending on the operating\n\
system -- for portability, check for either value).\n\
\n\
length is the number of bytes to lock, with the default meaning to lock to\n\
EOF.  start is the byte offset, relative to whence, to that the lock\n\
starts.  whence is as with fileobj.seek(), specifically:\n\
\n\
0 - relative to the start of the file (SEEK_SET)\n\
1 - relative to the current buffer position (SEEK_CUR)\n\
2 - relative to the end of the file (SEEK_END)");
static PyMethodDef fcntl_methods[] = ;
PyDoc_STRVAR(module_doc,
"This module performs file control and I/O control on file \n\
descriptors.  It is an interface to the fcntl() and ioctl() Unix\n\
routines.  File descriptors can be obtained with the fileno() method of\n\
a file or socket object.");
static int
ins(PyObject* d, char* symbol, long value)
#define INS(x) if (ins(d, #x, (long)x)) return -1
static int
all_ins(PyObject* d)
PyMODINIT_FUNC
initfcntl(void)
