zmq::tcp_listener_t::tcp_listener_t (io_thread_t *io_thread_,
socket_base_t *socket_, const options_t &options_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
s (retired_fd),
socket (socket_)
zmq::tcp_listener_t::~tcp_listener_t ()
void zmq::tcp_listener_t::process_plug ()
void zmq::tcp_listener_t::process_term (int linger_)
void zmq::tcp_listener_t::in_event ()
void zmq::tcp_listener_t::close ()
int zmq::tcp_listener_t::get_address (std::string &addr_)
int zmq::tcp_listener_t::set_address (const char *addr_)
zmq::fd_t zmq::tcp_listener_t::accept ()
