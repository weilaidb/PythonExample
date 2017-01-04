zmq::plain_client_t::plain_client_t (const options_t &options_) :
mechanism_t (options_),
state (sending_hello)
zmq::plain_client_t::~plain_client_t ()
int zmq::plain_client_t::next_handshake_command (msg_t *msg_)
int zmq::plain_client_t::process_handshake_command (msg_t *msg_)
zmq::mechanism_t::status_t zmq::plain_client_t::status () const
int zmq::plain_client_t::produce_hello (msg_t *msg_) const
int zmq::plain_client_t::process_welcome (
const unsigned char *cmd_data, size_t data_size)
int zmq::plain_client_t::produce_initiate (msg_t *msg_) const
int zmq::plain_client_t::process_ready (
const unsigned char *cmd_data, size_t data_size)
int zmq::plain_client_t::process_error (
const unsigned char *cmd_data, size_t data_size)
