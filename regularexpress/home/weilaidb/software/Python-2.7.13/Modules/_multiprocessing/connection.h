#define CONNECTION_H
#define READABLE 1
#define WRITABLE 2
#define CHECK_READABLE(self) \
if (!(self->flags & READABLE))
#define CHECK_WRITABLE(self) \
if (!(self->flags & WRITABLE))
static PyObject *
connection_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
connection_dealloc(ConnectionObject* self)
static PyObject *
connection_sendbytes(ConnectionObject *self, PyObject *args)
static PyObject *
connection_recvbytes(ConnectionObject *self, PyObject *args)
static PyObject *
connection_recvbytes_into(ConnectionObject *self, PyObject *args)
static PyObject *
connection_send_obj(ConnectionObject *self, PyObject *obj)
static PyObject *
connection_recv_obj(ConnectionObject *self)
static PyObject *
connection_poll(ConnectionObject *self, PyObject *args)
static PyObject *
connection_fileno(ConnectionObject* self)
static PyObject *
connection_close(ConnectionObject *self)
static PyObject *
connection_repr(ConnectionObject *self)
static PyObject *
connection_closed(ConnectionObject *self, void *closure)
static PyObject *
connection_readable(ConnectionObject *self, void *closure)
static PyObject *
connection_writable(ConnectionObject *self, void *closure)
static PyMethodDef connection_methods[] = ;
static PyGetSetDef connection_getset[] = ;
PyDoc_STRVAR(connection_doc,
);
PyTypeObject CONNECTION_TYPE = ;
