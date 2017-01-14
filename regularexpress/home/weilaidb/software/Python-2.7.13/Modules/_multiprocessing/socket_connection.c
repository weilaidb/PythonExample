#if defined(HAVE_POLL) && !defined(HAVE_BROKEN_POLL)
#  include
#  define WRITE(h, buffer, length) send((SOCKET)h, buffer, length, 0)
#  define READ(h, buffer, length) recv((SOCKET)h, buffer, length, 0)
#  define CLOSE(h) closesocket((SOCKET)h)
#  define WRITE(h, buffer, length) write(h, buffer, length)
#  define READ(h, buffer, length) read(h, buffer, length)
#  define CLOSE(h) close(h)
static int
check_signals(void)
static Py_ssize_t
_conn_sendall(HANDLE h, char *string, size_t length)
static Py_ssize_t
_conn_recvall(HANDLE h, char *buffer, size_t length)
static Py_ssize_t
conn_send_string(ConnectionObject *conn, char *string, size_t length)
static Py_ssize_t
conn_recv_string(ConnectionObject *conn, char *buffer,
size_t buflength, char **newbuffer, size_t maxlength)
static int
conn_poll(ConnectionObject *conn, double timeout, PyThreadState *_save)
#define CONNECTION_NAME
#define CONNECTION_TYPE ConnectionType
