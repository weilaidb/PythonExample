#if defined ZMQ_HAVE_TIPC
zmq::tipc_listener_t::tipc_listener_t (io_thread_t *io_thread_,
socket_base_t *socket_, const options_t &options_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
s (retired_fd),
socket (socket_)
zmq::tipc_listener_t::~tipc_listener_t ()
void zmq::tipc_listener_t::process_plug ()
void zmq::tipc_listener_t::process_term (int linger_)
void zmq::tipc_listener_t::in_event ()
int zmq::tipc_listener_t::get_address (std::string &addr_)
int zmq::tipc_listener_t::set_address (const char *addr_)
void zmq::tipc_listener_t::close ()
zmq::fd_t zmq::tipc_listener_t::accept ()
