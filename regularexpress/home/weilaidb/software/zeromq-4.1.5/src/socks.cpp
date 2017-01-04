zmq::socks_greeting_t::socks_greeting_t (uint8_t method_) :
num_methods (1)
zmq::socks_greeting_t::socks_greeting_t (
uint8_t *methods_, size_t num_methods_)
: num_methods (num_methods_)
zmq::socks_greeting_encoder_t::socks_greeting_encoder_t ()
: bytes_encoded (0), bytes_written (0)
void zmq::socks_greeting_encoder_t::encode (const socks_greeting_t &greeting_)
int zmq::socks_greeting_encoder_t::output (fd_t fd_)
bool zmq::socks_greeting_encoder_t::has_pending_data () const
void zmq::socks_greeting_encoder_t::reset ()
zmq::socks_choice_t::socks_choice_t (unsigned char method_)
: method (method_)
zmq::socks_choice_decoder_t::socks_choice_decoder_t ()
: bytes_read (0)
int zmq::socks_choice_decoder_t::input (fd_t fd_)
bool zmq::socks_choice_decoder_t::message_ready () const
zmq::socks_choice_t zmq::socks_choice_decoder_t::decode ()
void zmq::socks_choice_decoder_t::reset ()
zmq::socks_request_t::socks_request_t (
uint8_t command_, std::string hostname_, uint16_t port_)
: command (command_), hostname (hostname_), port (port_)
zmq::socks_request_encoder_t::socks_request_encoder_t ()
: bytes_encoded (0), bytes_written (0)
void zmq::socks_request_encoder_t::encode (const socks_request_t &req)
int zmq::socks_request_encoder_t::output (fd_t fd_)
bool zmq::socks_request_encoder_t::has_pending_data () const
void zmq::socks_request_encoder_t::reset ()
zmq::socks_response_t::socks_response_t (
uint8_t response_code_, std::string address_, uint16_t port_)
: response_code (response_code_), address (address_), port (port_)
zmq::socks_response_decoder_t::socks_response_decoder_t ()
: bytes_read (0)
int zmq::socks_response_decoder_t::input (fd_t fd_)
bool zmq::socks_response_decoder_t::message_ready () const
zmq::socks_response_t zmq::socks_response_decoder_t::decode ()
void zmq::socks_response_decoder_t::reset ()
