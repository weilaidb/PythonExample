zmq::address_t::address_t (
const std::string &protocol_, const std::string &address_)
: protocol (protocol_),
address (address_)
zmq::address_t::~address_t ()
int zmq::address_t::to_string (std::string &addr_) const
