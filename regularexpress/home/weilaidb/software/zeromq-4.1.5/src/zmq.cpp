#define ZMQ_TYPE_UNSAFE
#if defined ZMQ_POLL_BASED_ON_POLL
#if defined ZMQ_HAVE_WINDOWS
#if defined ZMQ_HAVE_UIO
struct iovec ;
#if !defined ZMQ_HAVE_WINDOWS
#if defined ZMQ_HAVE_OPENPGM
#define __PGM_WININT_H__
typedef char check_msg_t_size
[sizeof (zmq::msg_t) ==  sizeof (zmq_msg_t) ? 1 : -1];
void zmq_version (int *major_, int *minor_, int *patch_)
const char *zmq_strerror (int errnum_)
int zmq_errno (void)
void *zmq_ctx_new (void)
int zmq_ctx_term (void *ctx_)
int zmq_ctx_shutdown (void *ctx_)
int zmq_ctx_set (void *ctx_, int option_, int optval_)
int zmq_ctx_get (void *ctx_, int option_)
void *zmq_init (int io_threads_)
int zmq_term (void *ctx_)
int zmq_ctx_destroy (void *ctx_)
void *zmq_socket (void *ctx_, int type_)
int zmq_close (void *s_)
int zmq_setsockopt (void *s_, int option_, const void *optval_,
size_t optvallen_)
int zmq_getsockopt (void *s_, int option_, void *optval_, size_t *optvallen_)
int zmq_socket_monitor (void *s_, const char *addr_, int events_)
int zmq_bind (void *s_, const char *addr_)
int zmq_connect (void *s_, const char *addr_)
int zmq_unbind (void *s_, const char *addr_)
int zmq_disconnect (void *s_, const char *addr_)
static int
s_sendmsg (zmq::socket_base_t *s_, zmq_msg_t *msg_, int flags_)
int zmq_sendmsg (void *s_, zmq_msg_t *msg_, int flags_)
int zmq_send (void *s_, const void *buf_, size_t len_, int flags_)
int zmq_send_const (void *s_, const void *buf_, size_t len_, int flags_)
int zmq_sendiov (void *s_, iovec *a_, size_t count_, int flags_)
static int
s_recvmsg (zmq::socket_base_t *s_, zmq_msg_t *msg_, int flags_)
int zmq_recvmsg (void *s_, zmq_msg_t *msg_, int flags_)
int zmq_recv (void *s_, void *buf_, size_t len_, int flags_)
int zmq_recviov (void *s_, iovec *a_, size_t *count_, int flags_)
int zmq_msg_init (zmq_msg_t *msg_)
int zmq_msg_init_size (zmq_msg_t *msg_, size_t size_)
int zmq_msg_init_data (zmq_msg_t *msg_, void *data_, size_t size_,
zmq_free_fn *ffn_, void *hint_)
int zmq_msg_send (zmq_msg_t *msg_, void *s_, int flags_)
int zmq_msg_recv (zmq_msg_t *msg_, void *s_, int flags_)
int zmq_msg_close (zmq_msg_t *msg_)
int zmq_msg_move (zmq_msg_t *dest_, zmq_msg_t *src_)
int zmq_msg_copy (zmq_msg_t *dest_, zmq_msg_t *src_)
void *zmq_msg_data (zmq_msg_t *msg_)
size_t zmq_msg_size (zmq_msg_t *msg_)
int zmq_msg_more (zmq_msg_t *msg_)
int zmq_msg_get (zmq_msg_t *msg_, int property_)
int zmq_msg_set (zmq_msg_t *, int, int)
const char *zmq_msg_gets (zmq_msg_t *msg_, const char *property_)
int zmq_poll (zmq_pollitem_t *items_, int nitems_, long timeout_)
int zmq_proxy (void *frontend_, void *backend_, void *capture_)
int zmq_proxy_steerable (void *frontend_, void *backend_, void *capture_, void *control_)
int zmq_device (int, void *frontend_, void *backend_)
int zmq_has (const char *capability)
