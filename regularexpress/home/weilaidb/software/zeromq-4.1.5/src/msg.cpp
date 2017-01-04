typedef char zmq_msg_size_check
[2 * ((sizeof (zmq::msg_t) == sizeof (zmq_msg_t)) != 0) - 1];
bool zmq::msg_t::check ()
int zmq::msg_t::init ()
int zmq::msg_t::init_size (size_t size_)
int zmq::msg_t::init_data (void *data_, size_t size_, msg_free_fn *ffn_,
void *hint_)
int zmq::msg_t::init_delimiter ()
int zmq::msg_t::close ()
int zmq::msg_t::move (msg_t &src_)
int zmq::msg_t::copy (msg_t &src_)
void *zmq::msg_t::data ()
size_t zmq::msg_t::size ()
unsigned char zmq::msg_t::flags ()
void zmq::msg_t::set_flags (unsigned char flags_)
void zmq::msg_t::reset_flags (unsigned char flags_)
int64_t zmq::msg_t::fd ()
void zmq::msg_t::set_fd (int64_t fd_)
zmq::metadata_t *zmq::msg_t::metadata () const
void zmq::msg_t::set_metadata (zmq::metadata_t *metadata_)
void zmq::msg_t::reset_metadata ()
bool zmq::msg_t::is_identity () const
bool zmq::msg_t::is_credential () const
bool zmq::msg_t::is_delimiter () const
bool zmq::msg_t::is_vsm ()
bool zmq::msg_t::is_cmsg ()
void zmq::msg_t::add_refs (int refs_)
bool zmq::msg_t::rm_refs (int refs_)
