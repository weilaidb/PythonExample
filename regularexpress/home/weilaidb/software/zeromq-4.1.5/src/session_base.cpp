zmq::session_base_t *zmq::session_base_t::create (class io_thread_t *io_thread_,
bool active_, class socket_base_t *socket_, const options_t &options_,
address_t *addr_)
zmq::session_base_t::session_base_t (class io_thread_t *io_thread_,
bool active_, class socket_base_t *socket_, const options_t &options_,
address_t *addr_) :
own_t (io_thread_, options_),
io_object_t (io_thread_),
active (active_),
pipe (NULL),
zap_pipe (NULL),
incomplete_in (false),
pending (false),
engine (NULL),
socket (socket_),
io_thread (io_thread_),
has_linger_timer (false),
addr (addr_)
zmq::session_base_t::~session_base_t ()
void zmq::session_base_t::attach_pipe (pipe_t *pipe_)
int zmq::session_base_t::pull_msg (msg_t *msg_)
int zmq::session_base_t::push_msg (msg_t *msg_)
int zmq::session_base_t::read_zap_msg (msg_t *msg_)
int zmq::session_base_t::write_zap_msg (msg_t *msg_)
void zmq::session_base_t::reset ()
void zmq::session_base_t::flush ()
void zmq::session_base_t::clean_pipes ()
void zmq::session_base_t::pipe_terminated (pipe_t *pipe_)
void zmq::session_base_t::read_activated (pipe_t *pipe_)
void zmq::session_base_t::write_activated (pipe_t *pipe_)
void zmq::session_base_t::hiccuped (pipe_t *)
zmq::socket_base_t *zmq::session_base_t::get_socket ()
void zmq::session_base_t::process_plug ()
int zmq::session_base_t::zap_connect ()
bool zmq::session_base_t::zap_enabled ()
void zmq::session_base_t::process_attach (i_engine *engine_)
void zmq::session_base_t::engine_error (
zmq::stream_engine_t::error_reason_t reason)
void zmq::session_base_t::process_term (int linger_)
void zmq::session_base_t::timer_event (int id_)
void zmq::session_base_t::reconnect ()
void zmq::session_base_t::start_connecting (bool wait_)
