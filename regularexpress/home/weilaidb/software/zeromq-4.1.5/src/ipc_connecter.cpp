#if !defined ZMQ_HAVE_WINDOWS && !defined ZMQ_HAVE_OPENVMS
zmq::ipc_connecter_t::ipc_connecter_t (class io_thread_t *io_thread_,
class session_base_t *session_, const options_t &options_,
const address_t *addr_, bool delayed_start_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
addr (addr_),
s (retired_fd),
handle_valid (false),
delayed_start (delayed_start_),
timer_started (false),
session (session_),
current_reconnect_ivl(options.reconnect_ivl)
zmq::ipc_connecter_t::~ipc_connecter_t ()
void zmq::ipc_connecter_t::process_plug ()
void zmq::ipc_connecter_t::process_term (int linger_)
void zmq::ipc_connecter_t::in_event ()
void zmq::ipc_connecter_t::out_event ()
void zmq::ipc_connecter_t::timer_event (int id_)
void zmq::ipc_connecter_t::start_connecting ()
void zmq::ipc_connecter_t::add_reconnect_timer()
int zmq::ipc_connecter_t::get_new_reconnect_ivl ()
int zmq::ipc_connecter_t::open ()
int zmq::ipc_connecter_t::close ()
zmq::fd_t zmq::ipc_connecter_t::connect ()
