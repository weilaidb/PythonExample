zmq::socks_connecter_t::socks_connecter_t (class io_thread_t *io_thread_,
class session_base_t *session_, const options_t &options_,
address_t *addr_, address_t *proxy_addr_, bool delayed_start_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
addr (addr_),
proxy_addr (proxy_addr_),
status (unplugged),
s (retired_fd),
delayed_start (delayed_start_),
session (session_),
current_reconnect_ivl (options.reconnect_ivl)
zmq::socks_connecter_t::~socks_connecter_t ()
void zmq::socks_connecter_t::process_plug ()
void zmq::socks_connecter_t::process_term (int linger_)
void zmq::socks_connecter_t::in_event ()
void zmq::socks_connecter_t::out_event ()
void zmq::socks_connecter_t::initiate_connect ()
int zmq::socks_connecter_t::process_server_response (
const socks_choice_t &response)
int zmq::socks_connecter_t::process_server_response (
const socks_response_t &response)
void zmq::socks_connecter_t::timer_event (int id_)
void zmq::socks_connecter_t::error ()
void zmq::socks_connecter_t::start_timer ()
int zmq::socks_connecter_t::get_new_reconnect_ivl ()
int zmq::socks_connecter_t::connect_to_proxy ()
zmq::fd_t zmq::socks_connecter_t::check_proxy_connection ()
void zmq::socks_connecter_t::close ()
int zmq::socks_connecter_t::parse_address (
const std::string &address_, std::string &hostname_, uint16_t &port_)
