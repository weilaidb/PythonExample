zmq::gssapi_client_t::gssapi_client_t (const options_t &options_) :
gssapi_mechanism_base_t (options_),
state (call_next_init),
token_ptr (GSS_C_NO_BUFFER),
mechs (),
security_context_established (false)
zmq::gssapi_client_t::~gssapi_client_t ()
int zmq::gssapi_client_t::next_handshake_command (msg_t *msg_)
int zmq::gssapi_client_t::process_handshake_command (msg_t *msg_)
int zmq::gssapi_client_t::encode (msg_t *msg_)
int zmq::gssapi_client_t::decode (msg_t *msg_)
zmq::mechanism_t::status_t zmq::gssapi_client_t::status () const
int zmq::gssapi_client_t::initialize_context ()
int zmq::gssapi_client_t::produce_next_token (msg_t *msg_)
int zmq::gssapi_client_t::process_next_token (msg_t *msg_)
