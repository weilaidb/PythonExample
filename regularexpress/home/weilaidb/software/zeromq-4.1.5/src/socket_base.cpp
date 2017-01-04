#if defined ZMQ_HAVE_WINDOWS
#if defined _MSC_VER
#if defined _WIN32_WCE
bool zmq::socket_base_t::check_tag ()
zmq::socket_base_t *zmq::socket_base_t::create (int type_, class ctx_t *parent_,
uint32_t tid_, int sid_)
zmq::socket_base_t::socket_base_t (ctx_t *parent_, uint32_t tid_, int sid_) :
own_t (parent_, tid_),
tag (0xbaddecaf),
ctx_terminated (false),
destroyed (false),
last_tsc (0),
ticks (0),
rcvmore (false),
file_desc(-1),
monitor_socket (NULL),
monitor_events (0)
zmq::socket_base_t::~socket_base_t ()
zmq::mailbox_t *zmq::socket_base_t::get_mailbox ()
void zmq::socket_base_t::stop ()
int zmq::socket_base_t::parse_uri (const char *uri_,
std::string &protocol_, std::string &address_)
int zmq::socket_base_t::check_protocol (const std::string &protocol_)
void zmq::socket_base_t::attach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
int zmq::socket_base_t::setsockopt (int option_, const void *optval_,
size_t optvallen_)
int zmq::socket_base_t::getsockopt (int option_, void *optval_,
size_t *optvallen_)
int zmq::socket_base_t::bind (const char *addr_)
int zmq::socket_base_t::connect (const char *addr_)
void zmq::socket_base_t::add_endpoint (const char *addr_, own_t *endpoint_, pipe_t *pipe)
int zmq::socket_base_t::term_endpoint (const char *addr_)
int zmq::socket_base_t::send (msg_t *msg_, int flags_)
int zmq::socket_base_t::recv (msg_t *msg_, int flags_)
int zmq::socket_base_t::close ()
bool zmq::socket_base_t::has_in ()
bool zmq::socket_base_t::has_out ()
void zmq::socket_base_t::start_reaping (poller_t *poller_)
int zmq::socket_base_t::process_commands (int timeout_, bool throttle_)
void zmq::socket_base_t::process_stop ()
void zmq::socket_base_t::process_bind (pipe_t *pipe_)
void zmq::socket_base_t::process_term (int linger_)
void zmq::socket_base_t::process_destroy ()
int zmq::socket_base_t::xsetsockopt (int, const void *, size_t)
bool zmq::socket_base_t::xhas_out ()
int zmq::socket_base_t::xsend (msg_t *)
bool zmq::socket_base_t::xhas_in ()
int zmq::socket_base_t::xrecv (msg_t *)
zmq::blob_t zmq::socket_base_t::get_credential () const
void zmq::socket_base_t::xread_activated (pipe_t *)
void zmq::socket_base_t::xwrite_activated (pipe_t *)
void zmq::socket_base_t::xhiccuped (pipe_t *)
void zmq::socket_base_t::in_event ()
void zmq::socket_base_t::out_event ()
void zmq::socket_base_t::timer_event (int)
void zmq::socket_base_t::check_destroy ()
void zmq::socket_base_t::read_activated (pipe_t *pipe_)
void zmq::socket_base_t::write_activated (pipe_t *pipe_)
void zmq::socket_base_t::hiccuped (pipe_t *pipe_)
void zmq::socket_base_t::pipe_terminated (pipe_t *pipe_)
void zmq::socket_base_t::extract_flags (msg_t *msg_)
int zmq::socket_base_t::monitor (const char *addr_, int events_)
void zmq::socket_base_t::set_fd(zmq::fd_t fd_)
zmq::fd_t zmq::socket_base_t::fd()
void zmq::socket_base_t::event_connected (const std::string &addr_, int fd_)
void zmq::socket_base_t::event_connect_delayed (const std::string &addr_, int err_)
void zmq::socket_base_t::event_connect_retried (const std::string &addr_, int interval_)
void zmq::socket_base_t::event_listening (const std::string &addr_, int fd_)
void zmq::socket_base_t::event_bind_failed (const std::string &addr_, int err_)
void zmq::socket_base_t::event_accepted (const std::string &addr_, int fd_)
void zmq::socket_base_t::event_accept_failed (const std::string &addr_, int err_)
void zmq::socket_base_t::event_closed (const std::string &addr_, int fd_)
void zmq::socket_base_t::event_close_failed (const std::string &addr_, int err_)
void zmq::socket_base_t::event_disconnected (const std::string &addr_, int fd_)
void zmq::socket_base_t::monitor_event (int event_, int value_, const std::string &addr_)
void zmq::socket_base_t::stop_monitor (bool send_monitor_stopped_event_)
