zmq::gssapi_server_t::gssapi_server_t (session_base_t *session_,
const std::string &peer_address_,
const options_t &options_) :
gssapi_mechanism_base_t (options_),
session (session_),
peer_address (peer_address_),
state (recv_next_token),
security_context_established (false)
zmq::gssapi_server_t::~gssapi_server_t ()
int zmq::gssapi_server_t::next_handshake_command (msg_t *msg_)
int zmq::gssapi_server_t::process_handshake_command (msg_t *msg_)
void zmq::gssapi_server_t::send_zap_request ()
int zmq::gssapi_server_t::receive_and_process_zap_reply ()
int zmq::gssapi_server_t::encode (msg_t *msg_)
int zmq::gssapi_server_t::decode (msg_t *msg_)
int zmq::gssapi_server_t::zap_msg_available ()
zmq::mechanism_t::status_t zmq::gssapi_server_t::status () const
int zmq::gssapi_server_t::produce_next_token (msg_t *msg_)
int zmq::gssapi_server_t::process_next_token (msg_t *msg_)
void zmq::gssapi_server_t::accept_context ()
