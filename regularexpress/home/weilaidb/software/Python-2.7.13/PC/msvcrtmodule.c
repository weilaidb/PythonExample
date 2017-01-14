#if _MSC_VER >= 1500 && _MSC_VER < 1600
static PyObject *
msvcrt_heapmin(PyObject *self, PyObject *args)
PyDoc_STRVAR(heapmin_doc,
"heapmin() -> None\n\
\n\
Force the malloc() heap to clean itself up and return unused blocks\n\
to the operating system. On failure, this raises IOError.");
static PyObject *
msvcrt_locking(PyObject *self, PyObject *args)
PyDoc_STRVAR(locking_doc,
"locking(fd, mode, nbytes) -> None\n\
\n\
Lock part of a file based on file descriptor fd from the C runtime.\n\
Raises IOError on failure. The locked region of the file extends from\n\
the current file position for nbytes bytes, and may continue beyond\n\
the end of the file. mode must be one of the LK_* constants listed\n\
below. Multiple regions in a file may be locked at the same time, but\n\
may not overlap. Adjacent regions are not merged; they must be unlocked\n\
individually.");
static PyObject *
msvcrt_setmode(PyObject *self, PyObject *args)
PyDoc_STRVAR(setmode_doc,
"setmode(fd, mode) -> Previous mode\n\
\n\
Set the line-end translation mode for the file descriptor fd. To set\n\
it to text mode, flags should be os.O_TEXT; for binary, it should be\n\
os.O_BINARY.");
static PyObject *
msvcrt_open_osfhandle(PyObject *self, PyObject *args)
PyDoc_STRVAR(open_osfhandle_doc,
"open_osfhandle(handle, flags) -> file descriptor\n\
\n\
Create a C runtime file descriptor from the file handle handle. The\n\
flags parameter should be a bitwise OR of os.O_APPEND, os.O_RDONLY,\n\
and os.O_TEXT. The returned file descriptor may be used as a parameter\n\
to os.fdopen() to create a file object.");
static PyObject *
msvcrt_get_osfhandle(PyObject *self, PyObject *args)
PyDoc_STRVAR(get_osfhandle_doc,
"get_osfhandle(fd) -> file handle\n\
\n\
Return the file handle for the file descriptor fd. Raises IOError\n\
if fd is not recognized.");
static PyObject *
msvcrt_kbhit(PyObject *self, PyObject *args)
PyDoc_STRVAR(kbhit_doc,
"kbhit() -> bool\n\
\n\
Return true if a keypress is waiting to be read.");
static PyObject *
msvcrt_getch(PyObject *self, PyObject *args)
PyDoc_STRVAR(getch_doc,
"getch() -> key character\n\
\n\
Read a keypress and return the resulting character. Nothing is echoed to\n\
the console. This call will block if a keypress is not already\n\
available, but will not wait for Enter to be pressed. If the pressed key\n\
was a special function key, this will return '\\000' or '\\xe0'; the next\n\
call will return the keycode. The Control-C keypress cannot be read with\n\
this function.");
static PyObject *
msvcrt_getwch(PyObject *self, PyObject *args)
PyDoc_STRVAR(getwch_doc,
"getwch() -> Unicode key character\n\
\n\
Wide char variant of getch(), returning a Unicode value.");
static PyObject *
msvcrt_getche(PyObject *self, PyObject *args)
PyDoc_STRVAR(getche_doc,
"getche() -> key character\n\
\n\
Similar to getch(), but the keypress will be echoed if it represents\n\
a printable character.");
static PyObject *
msvcrt_getwche(PyObject *self, PyObject *args)
PyDoc_STRVAR(getwche_doc,
"getwche() -> Unicode key character\n\
\n\
Wide char variant of getche(), returning a Unicode value.");
static PyObject *
msvcrt_putch(PyObject *self, PyObject *args)
PyDoc_STRVAR(putch_doc,
"putch(char) -> None\n\
\n\
Print the character char to the console without buffering.");
static PyObject *
msvcrt_putwch(PyObject *self, PyObject *args)
PyDoc_STRVAR(putwch_doc,
"putwch(unicode_char) -> None\n\
\n\
Wide char variant of putch(), accepting a Unicode value.");
static PyObject *
msvcrt_ungetch(PyObject *self, PyObject *args)
PyDoc_STRVAR(ungetch_doc,
"ungetch(char) -> None\n\
\n\
Cause the character char to be \ into the console buffer;\n\
it will be the next character read by getch() or getche().");
static PyObject *
msvcrt_ungetwch(PyObject *self, PyObject *args)
PyDoc_STRVAR(ungetwch_doc,
"ungetwch(unicode_char) -> None\n\
\n\
Wide char variant of ungetch(), accepting a Unicode value.");
static void
insertint(PyObject *d, char *name, int value)
static struct PyMethodDef msvcrt_functions[] = ;
PyMODINIT_FUNC
initmsvcrt(void)
