#if !defined ZMQ_HAVE_WINDOWS && !defined ZMQ_HAVE_OPENVMS
#if defined ZMQ_HAVE_SO_PEERCRED || defined ZMQ_HAVE_LOCAL_PEERCRED
#   include <sys/types.h>
#   include <pwd.h>
#   include <grp.h>
#   if defined ZMQ_HAVE_OPENBSD
#       define ucred sockpeercred
#   endif
zmq::ipc_listener_t::ipc_listener_t (io_thread_t *io_thread_,
socket_base_t *socket_, const options_t &options_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
has_file (false),
s (retired_fd),
socket (socket_)
zmq::ipc_listener_t::~ipc_listener_t ()
void zmq::ipc_listener_t::process_plug ()
void zmq::ipc_listener_t::process_term (int linger_)
void zmq::ipc_listener_t::in_event ()
int zmq::ipc_listener_t::get_address (std::string &addr_)
int zmq::ipc_listener_t::set_address (const char *addr_)
int zmq::ipc_listener_t::close ()
#if defined ZMQ_HAVE_SO_PEERCRED
bool zmq::ipc_listener_t::filter (fd_t sock)
#elif defined ZMQ_HAVE_LOCAL_PEERCRED
bool zmq::ipc_listener_t::filter (fd_t sock)
zmq::fd_t zmq::ipc_listener_t::accept ()
