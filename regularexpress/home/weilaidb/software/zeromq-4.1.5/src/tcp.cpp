#if defined ZMQ_HAVE_WINDOWS
#if defined ZMQ_HAVE_OPENVMS
void zmq::tune_tcp_socket (fd_t s_)
void zmq::set_tcp_send_buffer (fd_t sockfd_, int bufsize_)
void zmq::set_tcp_receive_buffer (fd_t sockfd_, int bufsize_)
void zmq::tune_tcp_keepalives (fd_t s_, int keepalive_, int keepalive_cnt_, int keepalive_idle_, int keepalive_intvl_)
int zmq::tcp_write (fd_t s_, const void *data_, size_t size_)
int zmq::tcp_read (fd_t s_, void *data_, size_t size_)
