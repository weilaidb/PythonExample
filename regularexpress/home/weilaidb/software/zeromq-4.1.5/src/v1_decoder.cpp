#if defined ZMQ_HAVE_WINDOWS
zmq::v1_decoder_t::v1_decoder_t (size_t bufsize_, int64_t maxmsgsize_) :
decoder_base_t <v1_decoder_t> (bufsize_),
maxmsgsize (maxmsgsize_)
zmq::v1_decoder_t::~v1_decoder_t ()
int zmq::v1_decoder_t::one_byte_size_ready ()
int zmq::v1_decoder_t::eight_byte_size_ready ()
int zmq::v1_decoder_t::flags_ready ()
int zmq::v1_decoder_t::message_ready ()
