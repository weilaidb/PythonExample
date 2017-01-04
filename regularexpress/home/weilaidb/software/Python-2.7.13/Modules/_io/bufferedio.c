#define PY_SSIZE_T_CLEAN
PyDoc_STRVAR(bufferediobase_doc,
"Base class for buffered IO objects.\n"
"\n"
"The main difference with RawIOBase is that the read() method\n"
"supports omitting the size argument, and does not have a default\n"
"implementation that defers to readinto().\n"
"\n"
"In addition, read(), readinto() and write() may raise\n"
"BlockingIOError if the underlying raw stream is in non-blocking\n"
"mode and not ready; unlike their raw counterparts, they will never\n"
"return None.\n"
"\n"
"A typical implementation should not inherit from a RawIOBase\n"
"implementation, but wrap one.\n"
);
static PyObject *
bufferediobase_readinto(PyObject *self, PyObject *args)
static PyObject *
bufferediobase_unsupported(const char *message)
PyDoc_STRVAR(bufferediobase_detach_doc,
"Disconnect this buffer from its underlying raw stream and return it.\n"
"\n"
"After the raw stream has been detached, the buffer is in an unusable\n"
"state.\n");
static PyObject *
bufferediobase_detach(PyObject *self)
PyDoc_STRVAR(bufferediobase_read_doc,
"Read and return up to n bytes.\n"
"\n"
"If the argument is omitted, None, or negative, reads and\n"
"returns all data until EOF.\n"
"\n"
"If the argument is positive, and the underlying raw stream is\n"
"not 'interactive', multiple raw reads may be issued to satisfy\n"
"the byte count (unless EOF is reached first).  But for\n"
"interactive raw streams (as well as sockets and pipes), at most\n"
"one raw read will be issued, and a short result does not imply\n"
"that EOF is imminent.\n"
"\n"
"Returns an empty bytes object on EOF.\n"
"\n"
"Returns None if the underlying raw stream was open in non-blocking\n"
"mode and no data is available at the moment.\n");
static PyObject *
bufferediobase_read(PyObject *self, PyObject *args)
PyDoc_STRVAR(bufferediobase_read1_doc,
"Read and return up to n bytes, with at most one read() call\n"
"to the underlying raw stream. A short result does not imply\n"
"that EOF is imminent.\n"
"\n"
"Returns an empty bytes object on EOF.\n");
static PyObject *
bufferediobase_read1(PyObject *self, PyObject *args)
PyDoc_STRVAR(bufferediobase_write_doc,
"Write the given buffer to the IO stream.\n"
"\n"
"Returns the number of bytes written, which is always len(b).\n"
"\n"
"Raises BlockingIOError if the buffer is full and the\n"
"underlying raw stream cannot accept more data at the moment.\n");
static PyObject *
bufferediobase_write(PyObject *self, PyObject *args)
static PyMethodDef bufferediobase_methods[] = ;
PyTypeObject PyBufferedIOBase_Type = ;
typedef struct  buffered;
static int
_enter_buffered_busy(buffered *self)
#define ENTER_BUFFERED(self) \
( (PyThread_acquire_lock(self->lock, 0) ? \
1 : _enter_buffered_busy(self)) \
&& (self->owner = PyThread_get_thread_ident(), 1) )
#define LEAVE_BUFFERED(self) \
do  while(0);
#define ENTER_BUFFERED(self) 1
#define LEAVE_BUFFERED(self)
#define CHECK_INITIALIZED(self) \
if (self->ok <= 0)
#define CHECK_INITIALIZED_INT(self) \
if (self->ok <= 0)
#define IS_CLOSED(self) \
(self->fast_closed_checks \
? _PyFileIO_closed(self->raw) \
: buffered_closed(self))
#define CHECK_CLOSED(self, error_msg) \
if (IS_CLOSED(self))
#define VALID_READ_BUFFER(self) \
(self->readable && self->read_end != -1)
#define VALID_WRITE_BUFFER(self) \
(self->writable && self->write_end != -1)
#define ADJUST_POSITION(self, _new_pos) \
do  while(0)
#define READAHEAD(self) \
((self->readable && VALID_READ_BUFFER(self)) \
? (self->read_end - self->pos) : 0)
#define RAW_OFFSET(self) \
(((VALID_READ_BUFFER(self) || VALID_WRITE_BUFFER(self)) \
&& self->raw_pos >= 0) ? self->raw_pos - self->pos : 0)
#define RAW_TELL(self) \
(self->abs_pos != -1 ? self->abs_pos : _buffered_raw_tell(self))
#define MINUS_LAST_BLOCK(self, size) \
(self->buffer_mask ? \
(size & ~self->buffer_mask) : \
(self->buffer_size * (size / self->buffer_size)))
static void
buffered_dealloc(buffered *self)
static PyObject *
buffered_sizeof(buffered *self, void *unused)
static int
buffered_traverse(buffered *self, visitproc visit, void *arg)
static int
buffered_clear(buffered *self)
static PyObject *
buffered_simple_flush(buffered *self, PyObject *args)
static int
buffered_closed(buffered *self)
static PyObject *
buffered_closed_get(buffered *self, void *context)
static PyObject *
buffered_close(buffered *self, PyObject *args)
static PyObject *
buffered_detach(buffered *self, PyObject *args)
static PyObject *
buffered_seekable(buffered *self, PyObject *args)
static PyObject *
buffered_readable(buffered *self, PyObject *args)
static PyObject *
buffered_writable(buffered *self, PyObject *args)
static PyObject *
buffered_name_get(buffered *self, void *context)
static PyObject *
buffered_mode_get(buffered *self, void *context)
static PyObject *
buffered_fileno(buffered *self, PyObject *args)
static PyObject *
buffered_isatty(buffered *self, PyObject *args)
static PyObject *
_bufferedwriter_flush_unlocked(buffered *);
static Py_ssize_t
_bufferedreader_fill_buffer(buffered *self);
static void
_bufferedreader_reset_buf(buffered *self);
static void
_bufferedwriter_reset_buf(buffered *self);
static PyObject *
_bufferedreader_peek_unlocked(buffered *self, Py_ssize_t);
static PyObject *
_bufferedreader_read_all(buffered *self);
static PyObject *
_bufferedreader_read_fast(buffered *self, Py_ssize_t);
static PyObject *
_bufferedreader_read_generic(buffered *self, Py_ssize_t);
static void
_set_BlockingIOError(char *msg, Py_ssize_t written)
static Py_ssize_t *
_buffered_check_blocking_error(void)
static Py_off_t
_buffered_raw_tell(buffered *self)
static Py_off_t
_buffered_raw_seek(buffered *self, Py_off_t target, int whence)
static int
_buffered_init(buffered *self)
int
_PyIO_trap_eintr(void)
static PyObject *
buffered_flush_and_rewind_unlocked(buffered *self)
static PyObject *
buffered_flush(buffered *self, PyObject *args)
static PyObject *
buffered_peek(buffered *self, PyObject *args)
static PyObject *
buffered_read(buffered *self, PyObject *args)
static PyObject *
buffered_read1(buffered *self, PyObject *args)
static PyObject *
buffered_readinto(buffered *self, PyObject *args)
static PyObject *
_buffered_readline(buffered *self, Py_ssize_t limit)
static PyObject *
buffered_readline(buffered *self, PyObject *args)
static PyObject *
buffered_tell(buffered *self, PyObject *args)
static PyObject *
buffered_seek(buffered *self, PyObject *args)
static PyObject *
buffered_truncate(buffered *self, PyObject *args)
static PyObject *
buffered_iternext(buffered *self)
static PyObject *
buffered_repr(buffered *self)
PyDoc_STRVAR(bufferedreader_doc,
"Create a new buffered reader using the given readable raw IO object.");
static void _bufferedreader_reset_buf(buffered *self)
static int
bufferedreader_init(buffered *self, PyObject *args, PyObject *kwds)
static Py_ssize_t
_bufferedreader_raw_read(buffered *self, char *start, Py_ssize_t len)
static Py_ssize_t
_bufferedreader_fill_buffer(buffered *self)
static PyObject *
_bufferedreader_read_all(buffered *self)
static PyObject *
_bufferedreader_read_fast(buffered *self, Py_ssize_t n)
static PyObject *
_bufferedreader_read_generic(buffered *self, Py_ssize_t n)
static PyObject *
_bufferedreader_peek_unlocked(buffered *self, Py_ssize_t n)
static PyMethodDef bufferedreader_methods[] = ;
static PyMemberDef bufferedreader_members[] = ;
static PyGetSetDef bufferedreader_getset[] = ;
PyTypeObject PyBufferedReader_Type = ;
static int
complain_about_max_buffer_size(void)
PyDoc_STRVAR(bufferedwriter_doc,
"A buffer for a writeable sequential RawIO object.\n"
"\n"
"The constructor creates a BufferedWriter for the given writeable raw\n"
"stream. If the buffer_size is not given, it defaults to\n"
"DEFAULT_BUFFER_SIZE. max_buffer_size isn't used anymore.\n"
);
static void
_bufferedwriter_reset_buf(buffered *self)
static int
bufferedwriter_init(buffered *self, PyObject *args, PyObject *kwds)
static Py_ssize_t
_bufferedwriter_raw_write(buffered *self, char *start, Py_ssize_t len)
static PyObject *
_bufferedwriter_flush_unlocked(buffered *self)
static PyObject *
bufferedwriter_write(buffered *self, PyObject *args)
static PyMethodDef bufferedwriter_methods[] = ;
static PyMemberDef bufferedwriter_members[] = ;
static PyGetSetDef bufferedwriter_getset[] = ;
PyTypeObject PyBufferedWriter_Type = ;
PyDoc_STRVAR(bufferedrwpair_doc,
"A buffered reader and writer object together.\n"
"\n"
"A buffered reader object and buffered writer object put together to\n"
"form a sequential IO object that can read and write. This is typically\n"
"used with a socket or two-way pipe.\n"
"\n"
"reader and writer are RawIOBase objects that are readable and\n"
"writeable respectively. If the buffer_size is omitted it defaults to\n"
"DEFAULT_BUFFER_SIZE.\n"
);
typedef struct  rwpair;
static int
bufferedrwpair_init(rwpair *self, PyObject *args, PyObject *kwds)
static int
bufferedrwpair_traverse(rwpair *self, visitproc visit, void *arg)
static int
bufferedrwpair_clear(rwpair *self)
static void
bufferedrwpair_dealloc(rwpair *self)
static PyObject *
_forward_call(buffered *self, const char *name, PyObject *args)
static PyObject *
bufferedrwpair_read(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_peek(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_read1(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_readinto(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_write(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_flush(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_readable(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_writable(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_close(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_isatty(rwpair *self, PyObject *args)
static PyObject *
bufferedrwpair_closed_get(rwpair *self, void *context)
static PyMethodDef bufferedrwpair_methods[] = ;
static PyGetSetDef bufferedrwpair_getset[] = ;
PyTypeObject PyBufferedRWPair_Type = ;
PyDoc_STRVAR(bufferedrandom_doc,
"A buffered interface to random access streams.\n"
"\n"
"The constructor creates a reader and writer for a seekable stream,\n"
"raw, given in the first argument. If the buffer_size is omitted it\n"
"defaults to DEFAULT_BUFFER_SIZE. max_buffer_size isn't used anymore.\n"
);
static int
bufferedrandom_init(buffered *self, PyObject *args, PyObject *kwds)
static PyMethodDef bufferedrandom_methods[] = ;
static PyMemberDef bufferedrandom_members[] = ;
static PyGetSetDef bufferedrandom_getset[] = ;
PyTypeObject PyBufferedRandom_Type = ;
