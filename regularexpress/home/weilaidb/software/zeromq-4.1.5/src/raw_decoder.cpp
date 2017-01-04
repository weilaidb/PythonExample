zmq::raw_decoder_t::raw_decoder_t (size_t bufsize_) :
bufsize (bufsize_)
zmq::raw_decoder_t::~raw_decoder_t ()
void zmq::raw_decoder_t::get_buffer (unsigned char **data_, size_t *size_)
int zmq::raw_decoder_t::decode (const uint8_t *data_, size_t size_,
size_t &bytes_used_)
