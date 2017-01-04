zmq::null_mechanism_t::null_mechanism_t (session_base_t *session_,
const std::string &peer_address_,
const options_t &options_) :
mechanism_t (options_),
session (session_),
peer_address (peer_address_),
ready_command_sent (false),
error_command_sent (false),
ready_command_received (false),
error_command_received (false),
zap_connected (false),
zap_request_sent (false),
zap_reply_received (false)
zmq::null_mechanism_t::~null_mechanism_t ()
int zmq::null_mechanism_t::next_handshake_command (msg_t *msg_)
int zmq::null_mechanism_t::process_handshake_command (msg_t *msg_)
int zmq::null_mechanism_t::process_ready_command (
const unsigned char *cmd_data, size_t data_size)
int zmq::null_mechanism_t::process_error_command (
const unsigned char *cmd_data, size_t data_size)
int zmq::null_mechanism_t::zap_msg_available ()
zmq::mechanism_t::status_t zmq::null_mechanism_t::status () const
void zmq::null_mechanism_t::send_zap_request ()
int zmq::null_mechanism_t::receive_and_process_zap_reply ()
