zmq::v2_decoder_t::v2_decoder_t (size_t bufsize_, int64_t maxmsgsize_) :
decoder_base_t <v2_decoder_t> (bufsize_),
msg_flags (0),
maxmsgsize (maxmsgsize_)
zmq::v2_decoder_t::~v2_decoder_t ()
int zmq::v2_decoder_t::flags_ready ()
int zmq::v2_decoder_t::one_byte_size_ready ()
int zmq::v2_decoder_t::eight_byte_size_ready ()
int zmq::v2_decoder_t::message_ready ()
