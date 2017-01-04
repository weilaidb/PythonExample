#if defined ZMQ_HAVE_WINDOWS
#if defined ZMQ_HAVE_OPENBSD
#define ucred sockpeercred
zmq::stream_engine_t::stream_engine_t (fd_t fd_, const options_t &options_,
const std::string &endpoint_) :
s (fd_),
inpos (NULL),
insize (0),
decoder (NULL),
outpos (NULL),
outsize (0),
encoder (NULL),
metadata (NULL),
handshaking (true),
greeting_size (v2_greeting_size),
greeting_bytes_read (0),
session (NULL),
options (options_),
endpoint (endpoint_),
plugged (false),
next_msg (&stream_engine_t::identity_msg),
process_msg (&stream_engine_t::process_identity_msg),
io_error (false),
subscription_required (false),
mechanism (NULL),
input_stopped (false),
output_stopped (false),
has_handshake_timer (false),
socket (NULL)
zmq::stream_engine_t::~stream_engine_t ()
void zmq::stream_engine_t::plug (io_thread_t *io_thread_,
session_base_t *session_)
void zmq::stream_engine_t::unplug ()
void zmq::stream_engine_t::terminate ()
void zmq::stream_engine_t::in_event ()
void zmq::stream_engine_t::out_event ()
void zmq::stream_engine_t::restart_output ()
void zmq::stream_engine_t::restart_input ()
bool zmq::stream_engine_t::handshake ()
int zmq::stream_engine_t::identity_msg (msg_t *msg_)
int zmq::stream_engine_t::process_identity_msg (msg_t *msg_)
int zmq::stream_engine_t::next_handshake_command (msg_t *msg_)
int zmq::stream_engine_t::process_handshake_command (msg_t *msg_)
void zmq::stream_engine_t::zap_msg_available ()
void zmq::stream_engine_t::mechanism_ready ()
int zmq::stream_engine_t::pull_msg_from_session (msg_t *msg_)
int zmq::stream_engine_t::push_msg_to_session (msg_t *msg_)
int zmq::stream_engine_t::push_raw_msg_to_session (msg_t *msg_)
int zmq::stream_engine_t::write_credential (msg_t *msg_)
int zmq::stream_engine_t::pull_and_encode (msg_t *msg_)
int zmq::stream_engine_t::decode_and_push (msg_t *msg_)
int zmq::stream_engine_t::push_one_then_decode_and_push (msg_t *msg_)
int zmq::stream_engine_t::write_subscription_msg (msg_t *msg_)
void zmq::stream_engine_t::error (error_reason_t reason)
void zmq::stream_engine_t::set_handshake_timer ()
void zmq::stream_engine_t::timer_event (int id_)
