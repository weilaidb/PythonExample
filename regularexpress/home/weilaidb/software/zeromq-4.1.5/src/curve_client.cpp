zmq::curve_client_t::curve_client_t (const options_t &options_) :
mechanism_t (options_),
state (send_hello),
cn_nonce(1),
cn_peer_nonce(1),
sync()
zmq::curve_client_t::~curve_client_t ()
int zmq::curve_client_t::next_handshake_command (msg_t *msg_)
int zmq::curve_client_t::process_handshake_command (msg_t *msg_)
int zmq::curve_client_t::encode (msg_t *msg_)
int zmq::curve_client_t::decode (msg_t *msg_)
zmq::mechanism_t::status_t zmq::curve_client_t::status () const
int zmq::curve_client_t::produce_hello (msg_t *msg_)
int zmq::curve_client_t::process_welcome (
const uint8_t *msg_data, size_t msg_size)
int zmq::curve_client_t::produce_initiate (msg_t *msg_)
int zmq::curve_client_t::process_ready (
const uint8_t *msg_data, size_t msg_size)
int zmq::curve_client_t::process_error (
const uint8_t *msg_data, size_t msg_size)
