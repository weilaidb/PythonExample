zmq::plain_server_t::plain_server_t (session_base_t *session_,
const std::string &peer_address_,
const options_t &options_) :
mechanism_t (options_),
session (session_),
peer_address (peer_address_),
state (waiting_for_hello)
zmq::plain_server_t::~plain_server_t ()
int zmq::plain_server_t::next_handshake_command (msg_t *msg_)
int zmq::plain_server_t::process_handshake_command (msg_t *msg_)
zmq::mechanism_t::status_t zmq::plain_server_t::status () const
int zmq::plain_server_t::zap_msg_available ()
int zmq::plain_server_t::process_hello (msg_t *msg_)
int zmq::plain_server_t::produce_welcome (msg_t *msg_) const
int zmq::plain_server_t::process_initiate (msg_t *msg_)
int zmq::plain_server_t::produce_ready (msg_t *msg_) const
int zmq::plain_server_t::produce_error (msg_t *msg_) const
void zmq::plain_server_t::send_zap_request (const std::string &username,
const std::string &password)
int zmq::plain_server_t::receive_and_process_zap_reply ()
