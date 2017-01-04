#if defined ZMQ_HAVE_TIPC
zmq::tipc_address_t::tipc_address_t ()
zmq::tipc_address_t::tipc_address_t (const sockaddr *sa, socklen_t sa_len)
zmq::tipc_address_t::~tipc_address_t ()
int zmq::tipc_address_t::resolve (const char *name)
int zmq::tipc_address_t::to_string (std::string &addr_)
";
addr_ = s.str ();
return 0;
}
const sockaddr *zmq::tipc_address_t::addr () const
socklen_t zmq::tipc_address_t::addrlen () const
