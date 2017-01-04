zmq::mechanism_t::mechanism_t (const options_t &options_) :
options (options_)
zmq::mechanism_t::~mechanism_t ()
void zmq::mechanism_t::set_peer_identity (const void *id_ptr, size_t id_size)
void zmq::mechanism_t::peer_identity (msg_t *msg_)
void zmq::mechanism_t::set_user_id (const void *data_, size_t size_)
zmq::blob_t zmq::mechanism_t::get_user_id () const
const char *zmq::mechanism_t::socket_type_string (int socket_type) const
size_t zmq::mechanism_t::add_property (unsigned char *ptr, const char *name,
const void *value, size_t value_len) const
int zmq::mechanism_t::parse_metadata (const unsigned char *ptr_,
size_t length_, bool zap_flag)
int zmq::mechanism_t::property (const std::string&,
const void *, size_t)
bool zmq::mechanism_t::check_socket_type (const std::string& type_) const
