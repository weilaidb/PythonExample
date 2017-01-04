#define MSG_ERRQUEUE 0x2000
zmq::pgm_socket_t::pgm_socket_t (bool receiver_, const options_t &options_) :
sock (NULL),
options (options_),
receiver (receiver_),
pgm_msgv (NULL),
pgm_msgv_len (0),
nbytes_rec (0),
nbytes_processed (0),
pgm_msgv_processed (0)
int zmq::pgm_socket_t::init_address (const char *network_,
struct pgm_addrinfo_t **res, uint16_t *port_number)
int zmq::pgm_socket_t::init (bool udp_encapsulation_, const char *network_)
zmq::pgm_socket_t::~pgm_socket_t ()
void zmq::pgm_socket_t::get_receiver_fds (fd_t *receive_fd_,
fd_t *waiting_pipe_fd_)
void zmq::pgm_socket_t::get_sender_fds (fd_t *send_fd_, fd_t *receive_fd_,
fd_t *rdata_notify_fd_, fd_t *pending_notify_fd_)
size_t zmq::pgm_socket_t::send (unsigned char *data_, size_t data_len_)
long zmq::pgm_socket_t::get_rx_timeout ()
long zmq::pgm_socket_t::get_tx_timeout ()
size_t zmq::pgm_socket_t::get_max_tsdu_size ()
ssize_t zmq::pgm_socket_t::receive (void **raw_data_, const pgm_tsi_t **tsi_)
void zmq::pgm_socket_t::process_upstream ()
int zmq::pgm_socket_t::compute_sqns (int tpdu_)
