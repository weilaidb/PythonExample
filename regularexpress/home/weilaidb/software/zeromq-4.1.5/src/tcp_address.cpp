int zmq::tcp_address_t::resolve_nic_name (const char *nic_, bool ipv6_, bool is_src_)
#elif defined ZMQ_HAVE_AIX || defined ZMQ_HAVE_HPUX || defined ZMQ_HAVE_ANDROID
int zmq::tcp_address_t::resolve_nic_name (const char *nic_, bool ipv6_, bool is_src_)
#elif ((defined ZMQ_HAVE_LINUX || defined ZMQ_HAVE_FREEBSD ||\
defined ZMQ_HAVE_OSX || defined ZMQ_HAVE_OPENBSD ||\
defined ZMQ_HAVE_QNXNTO || defined ZMQ_HAVE_NETBSD)\
&& defined ZMQ_HAVE_IFADDRS)
int zmq::tcp_address_t::resolve_nic_name (const char *nic_, bool ipv6_, bool is_src_)
int zmq::tcp_address_t::resolve_nic_name (const char *nic_, bool ipv6_, bool is_src_)
int zmq::tcp_address_t::resolve_interface (const char *interface_, bool ipv6_, bool is_src_)
int zmq::tcp_address_t::resolve_hostname (const char *hostname_, bool ipv6_, bool is_src_)
zmq::tcp_address_t::tcp_address_t () :
_has_src_addr (false)
zmq::tcp_address_t::tcp_address_t (const sockaddr *sa, socklen_t sa_len) :
_has_src_addr (false)
zmq::tcp_address_t::~tcp_address_t ()
int zmq::tcp_address_t::resolve (const char *name_, bool local_, bool ipv6_, bool is_src_)
int zmq::tcp_address_t::to_string (std::string &addr_)
const sockaddr *zmq::tcp_address_t::addr () const
socklen_t zmq::tcp_address_t::addrlen () const
const sockaddr *zmq::tcp_address_t::src_addr () const
socklen_t zmq::tcp_address_t::src_addrlen () const
bool zmq::tcp_address_t::has_src_addr () const
#if defined ZMQ_HAVE_WINDOWS
unsigned short zmq::tcp_address_t::family () const
sa_family_t zmq::tcp_address_t::family () const
zmq::tcp_address_mask_t::tcp_address_mask_t () :
tcp_address_t (),
address_mask (-1)
int zmq::tcp_address_mask_t::mask () const
int zmq::tcp_address_mask_t::resolve (const char *name_, bool ipv6_)
int zmq::tcp_address_mask_t::to_string (std::string &addr_)
bool zmq::tcp_address_mask_t::match_address (const struct sockaddr *ss, const socklen_t ss_len) const
