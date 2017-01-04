#if !defined ZMQ_HAVE_WINDOWS && !defined ZMQ_HAVE_OPENVMS
zmq::ipc_address_t::ipc_address_t ()
zmq::ipc_address_t::ipc_address_t (const sockaddr *sa, socklen_t sa_len)
zmq::ipc_address_t::~ipc_address_t ()
int zmq::ipc_address_t::resolve (const char *path_)
int zmq::ipc_address_t::to_string (std::string &addr_)
const sockaddr *zmq::ipc_address_t::addr () const
socklen_t zmq::ipc_address_t::addrlen () const
