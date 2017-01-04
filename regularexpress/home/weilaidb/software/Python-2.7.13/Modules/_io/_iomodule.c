#define PY_SSIZE_T_CLEAN
PyObject *_PyIO_str_close;
PyObject *_PyIO_str_closed;
PyObject *_PyIO_str_decode;
PyObject *_PyIO_str_encode;
PyObject *_PyIO_str_fileno;
PyObject *_PyIO_str_flush;
PyObject *_PyIO_str_getstate;
PyObject *_PyIO_str_isatty;
PyObject *_PyIO_str_newlines;
PyObject *_PyIO_str_nl;
PyObject *_PyIO_str_read;
PyObject *_PyIO_str_read1;
PyObject *_PyIO_str_readable;
PyObject *_PyIO_str_readinto;
PyObject *_PyIO_str_readline;
PyObject *_PyIO_str_reset;
PyObject *_PyIO_str_seek;
PyObject *_PyIO_str_seekable;
PyObject *_PyIO_str_setstate;
PyObject *_PyIO_str_tell;
PyObject *_PyIO_str_truncate;
PyObject *_PyIO_str_writable;
PyObject *_PyIO_str_write;
PyObject *_PyIO_empty_str;
PyObject *_PyIO_empty_bytes;
PyObject *_PyIO_zero;
PyDoc_STRVAR(module_doc,
"The io module provides the Python interfaces to stream handling. The\n"
"builtin open function is defined in this module.\n"
"\n"
"At the top of the I/O hierarchy is the abstract base class IOBase. It\n"
"defines the basic interface to a stream. Note, however, that there is no\n"
"separation between reading and writing to streams; implementations are\n"
"allowed to raise an IOError if they do not support a given operation.\n"
"\n"
"Extending IOBase is RawIOBase which deals simply with the reading and\n"
"writing of raw bytes to a stream. FileIO subclasses RawIOBase to provide\n"
"an interface to OS files.\n"
"\n"
"BufferedIOBase deals with buffering on a raw byte stream (RawIOBase). Its\n"
"subclasses, BufferedWriter, BufferedReader, and BufferedRWPair buffer\n"
"streams that are readable, writable, and both respectively.\n"
"BufferedRandom provides a buffered interface to random access\n"
"streams. BytesIO is a simple stream of in-memory bytes.\n"
"\n"
"Another IOBase subclass, TextIOBase, deals with the encoding and decoding\n"
"of streams into text. TextIOWrapper, which extends it, is a buffered text\n"
"interface to a buffered raw stream (`BufferedIOBase`). Finally, StringIO\n"
"is an in-memory stream for text.\n"
"\n"
"Argument names are not part of the specification, and only the arguments\n"
"of open() are intended to be used as keyword arguments.\n"
"\n"
"data:\n"
"\n"
"DEFAULT_BUFFER_SIZE\n"
"\n"
"   An int containing the default buffer size used by the module's buffered\n"
"   I/O classes. open() uses the file's blksize (as obtained by os.stat) if\n"
"   possible.\n"
);
static int
blockingioerror_init(PyBlockingIOErrorObject *self, PyObject *args,
PyObject *kwds)
static PyMemberDef blockingioerror_members[] = ;
static PyTypeObject _PyExc_BlockingIOError = ;
PyObject *PyExc_BlockingIOError = (PyObject *)&_PyExc_BlockingIOError;
PyDoc_STRVAR(open_doc,
"Open file and return a stream.  Raise IOError upon failure.\n"
"\n"
"file is either a text or byte string giving the name (and the path\n"
"if the file isn't in the current working directory) of the file to\n"
"be opened or an integer file descriptor of the file to be\n"
"wrapped. (If a file descriptor is given, it is closed when the\n"
"returned I/O object is closed, unless closefd is set to False.)\n"
"\n"
"mode is an optional string that specifies the mode in which the file\n"
"is opened. It defaults to 'r' which means open for reading in text\n"
"mode.  Other common values are 'w' for writing (truncating the file if\n"
"it already exists), and 'a' for appending (which on some Unix systems,\n"
"means that all writes append to the end of the file regardless of the\n"
"current seek position). In text mode, if encoding is not specified the\n"
"encoding used is platform dependent. (For reading and writing raw\n"
"bytes use binary mode and leave encoding unspecified.) The available\n"
"modes are:\n"
"\n"
"========= ===============================================================\n"
"Character Meaning\n"
"--------- ---------------------------------------------------------------\n"
"'r'       open for reading (default)\n"
"'w'       open for writing, truncating the file first\n"
"'a'       open for writing, appending to the end of the file if it exists\n"
"'b'       binary mode\n"
"'t'       text mode (default)\n"
"'+'       open a disk file for updating (reading and writing)\n"
"'U'       universal newline mode (for backwards compatibility; unneeded\n"
"          for new code)\n"
"========= ===============================================================\n"
"\n"
"The default mode is 'rt' (open for reading text). For binary random\n"
"access, the mode 'w+b' opens and truncates the file to 0 bytes, while\n"
"'r+b' opens the file without truncation.\n"
"\n"
"Python distinguishes between files opened in binary and text modes,\n"
"even when the underlying operating system doesn't. Files opened in\n"
"binary mode (appending 'b' to the mode argument) return contents as\n"
"bytes objects without any decoding. In text mode (the default, or when\n"
"'t' is appended to the mode argument), the contents of the file are\n"
"returned as strings, the bytes having been first decoded using a\n"
"platform-dependent encoding or using the specified encoding if given.\n"
"\n"
"buffering is an optional integer used to set the buffering policy.\n"
"Pass 0 to switch buffering off (only allowed in binary mode), 1 to select\n"
"line buffering (only usable in text mode), and an integer > 1 to indicate\n"
"the size of a fixed-size chunk buffer.  When no buffering argument is\n"
"given, the default buffering policy works as follows:\n"
"\n"
"* Binary files are buffered in fixed-size chunks; the size of the buffer\n"
"  is chosen using a heuristic trying to determine the underlying device's\n"
"  \"block size\" and falling back on `io.DEFAULT_BUFFER_SIZE`.\n"
"  On many systems, the buffer will typically be 4096 or 8192 bytes long.\n"
"\n"
"* \"Interactive\" text files (files for which isatty() returns True)\n"
"  use line buffering.  Other text files use the policy described above\n"
"  for binary files.\n"
"\n"
"encoding is the name of the encoding used to decode or encode the\n"
"file. This should only be used in text mode. The default encoding is\n"
"platform dependent, but any encoding supported by Python can be\n"
"passed.  See the codecs module for the list of supported encodings.\n"
"\n"
"errors is an optional string that specifies how encoding errors are to\n"
"be handled---this argument should not be used in binary mode. Pass\n"
"'strict' to raise a ValueError exception if there is an encoding error\n"
"(the default of None has the same effect), or pass 'ignore' to ignore\n"
"errors. (Note that ignoring encoding errors can lead to data loss.)\n"
"See the documentation for codecs.register for a list of the permitted\n"
"encoding error strings.\n"
"\n"
"newline controls how universal newlines works (it only applies to text\n"
"mode). It can be None, '', '\\n', '\\r', and '\\r\\n'.  It works as\n"
"follows:\n"
"\n"
"* On input, if newline is None, universal newlines mode is\n"
"  enabled. Lines in the input can end in '\\n', '\\r', or '\\r\\n', and\n"
"  these are translated into '\\n' before being returned to the\n"
"  caller. If it is '', universal newline mode is enabled, but line\n"
"  endings are returned to the caller untranslated. If it has any of\n"
"  the other legal values, input lines are only terminated by the given\n"
"  string, and the line ending is returned to the caller untranslated.\n"
"\n"
"* On output, if newline is None, any '\\n' characters written are\n"
"  translated to the system default line separator, os.linesep. If\n"
"  newline is '', no translation takes place. If newline is any of the\n"
"  other legal values, any '\\n' characters written are translated to\n"
"  the given string.\n"
"\n"
"If closefd is False, the underlying file descriptor will be kept open\n"
"when the file is closed. This does not work when a file name is given\n"
"and must be True in that case.\n"
"\n"
"open() returns a file object whose type depends on the mode, and\n"
"through which the standard file operations such as reading and writing\n"
"are performed. When open() is used to open a file in a text mode ('w',\n"
"'r', 'wt', 'rt', etc.), it returns a TextIOWrapper. When used to open\n"
"a file in a binary mode, the returned class varies: in read binary\n"
"mode, it returns a BufferedReader; in write binary and append binary\n"
"modes, it returns a BufferedWriter, and in read/write mode, it returns\n"
"a BufferedRandom.\n"
"\n"
"It is also possible to use a string or bytearray as a file for both\n"
"reading and writing. For strings StringIO can be used like a file\n"
"opened in a text mode, and for bytes a BytesIO can be used like a file\n"
"opened in a binary mode.\n"
);
static PyObject *
io_open(PyObject *self, PyObject *args, PyObject *kwds)
Py_off_t
PyNumber_AsOff_t(PyObject *item, PyObject *err)
int
_PyIO_ConvertSsize_t(PyObject *obj, void *result)
PyObject *_PyIO_os_module = NULL;
PyObject *_PyIO_locale_module = NULL;
PyObject *_PyIO_unsupported_operation = NULL;
static PyMethodDef module_methods[] = ;
PyMODINIT_FUNC
init_io(void)
