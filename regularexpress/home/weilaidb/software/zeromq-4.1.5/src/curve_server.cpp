zmq::curve_server_t::curve_server_t (session_base_t *session_,
const std::string &peer_address_,
const options_t &options_) :
mechanism_t (options_),
session (session_),
peer_address (peer_address_),
state (expect_hello),
cn_nonce (1),
cn_peer_nonce(1),
sync()
zmq::curve_server_t::~curve_server_t ()
int zmq::curve_server_t::next_handshake_command (msg_t *msg_)
int zmq::curve_server_t::process_handshake_command (msg_t *msg_)
int zmq::curve_server_t::encode (msg_t *msg_)
int zmq::curve_server_t::decode (msg_t *msg_)
int zmq::curve_server_t::zap_msg_available ()
zmq::mechanism_t::status_t zmq::curve_server_t::status () const
int zmq::curve_server_t::process_hello (msg_t *msg_)
int zmq::curve_server_t::produce_welcome (msg_t *msg_)
int zmq::curve_server_t::process_initiate (msg_t *msg_)
int zmq::curve_server_t::produce_ready (msg_t *msg_)
int zmq::curve_server_t::produce_error (msg_t *msg_) const
void zmq::curve_server_t::send_zap_request (const uint8_t *key)
int zmq::curve_server_t::receive_and_process_zap_reply ()
