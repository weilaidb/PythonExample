#if defined ZMQ_HAVE_OPENPGM
zmq::pgm_sender_t::pgm_sender_t (io_thread_t *parent_,
const options_t &options_) :
io_object_t (parent_),
has_tx_timer (false),
has_rx_timer (false),
session (NULL),
encoder (0),
more_flag (false),
pgm_socket (false, options_),
options (options_),
out_buffer (NULL),
out_buffer_size (0),
write_size (0)
int zmq::pgm_sender_t::init (bool udp_encapsulation_, const char *network_)
void zmq::pgm_sender_t::plug (io_thread_t *io_thread_, session_base_t *session_)
void zmq::pgm_sender_t::unplug ()
void zmq::pgm_sender_t::terminate ()
void zmq::pgm_sender_t::restart_output ()
void zmq::pgm_sender_t::restart_input ()
zmq::pgm_sender_t::~pgm_sender_t ()
void zmq::pgm_sender_t::in_event ()
void zmq::pgm_sender_t::out_event ()
void zmq::pgm_sender_t::timer_event (int token)
