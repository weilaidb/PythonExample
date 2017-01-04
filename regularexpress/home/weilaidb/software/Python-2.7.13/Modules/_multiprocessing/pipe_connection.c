#define CLOSE(h) CloseHandle(h)
static Py_ssize_t
conn_send_string(ConnectionObject *conn, char *string, size_t length)
static Py_ssize_t
conn_recv_string(ConnectionObject *conn, char *buffer,
size_t buflength, char **newbuffer, size_t maxlength)
static int
conn_poll(ConnectionObject *conn, double timeout, PyThreadState *_save)
#define CONNECTION_NAME "PipeConnection"
#define CONNECTION_TYPE PipeConnectionType
