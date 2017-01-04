#if defined ZMQ_HAVE_WINDOWS
#if defined ZMQ_HAVE_OPENVMS
zmq::fd_t zmq::open_socket (int domain_, int type_, int protocol_)
void zmq::unblock_socket (fd_t s_)
void zmq::enable_ipv4_mapping (fd_t s_)
int zmq::get_peer_ip_address (fd_t sockfd_, std::string &ip_addr_)
void zmq::set_ip_type_of_service (fd_t s_, int iptos)
