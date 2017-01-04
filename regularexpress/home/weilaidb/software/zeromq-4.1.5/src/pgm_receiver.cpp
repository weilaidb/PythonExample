#if defined ZMQ_HAVE_OPENPGM
zmq::pgm_receiver_t::pgm_receiver_t (class io_thread_t *parent_,
const options_t &options_) :
io_object_t (parent_),
has_rx_timer (false),
pgm_socket (true, options_),
options (options_),
session (NULL),
active_tsi (NULL),
insize (0)
zmq::pgm_receiver_t::~pgm_receiver_t ()
int zmq::pgm_receiver_t::init (bool udp_encapsulation_, const char *network_)
void zmq::pgm_receiver_t::plug (io_thread_t *io_thread_,
session_base_t *session_)
void zmq::pgm_receiver_t::unplug ()
void zmq::pgm_receiver_t::terminate ()
void zmq::pgm_receiver_t::restart_output ()
void zmq::pgm_receiver_t::restart_input ()
void zmq::pgm_receiver_t::in_event ()
int zmq::pgm_receiver_t::process_input (v1_decoder_t *decoder)
void zmq::pgm_receiver_t::timer_event (int token)
void zmq::pgm_receiver_t::drop_subscriptions ()
