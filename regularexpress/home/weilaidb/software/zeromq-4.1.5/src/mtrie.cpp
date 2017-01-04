#if defined ZMQ_HAVE_WINDOWS
zmq::mtrie_t::mtrie_t () :
pipes (0),
min (0),
count (0),
live_nodes (0)
zmq::mtrie_t::~mtrie_t ()
bool zmq::mtrie_t::add (unsigned char *prefix_, size_t size_, pipe_t *pipe_)
bool zmq::mtrie_t::add_helper (unsigned char *prefix_, size_t size_,
pipe_t *pipe_)
void zmq::mtrie_t::rm (pipe_t *pipe_,
void (*func_) (unsigned char *data_, size_t size_, void *arg_),
void *arg_)
void zmq::mtrie_t::rm_helper (pipe_t *pipe_, unsigned char **buff_,
size_t buffsize_, size_t maxbuffsize_,
void (*func_) (unsigned char *data_, size_t size_, void *arg_),
void *arg_)
bool zmq::mtrie_t::rm (unsigned char *prefix_, size_t size_, pipe_t *pipe_)
bool zmq::mtrie_t::rm_helper (unsigned char *prefix_, size_t size_,
pipe_t *pipe_)
void zmq::mtrie_t::match (unsigned char *data_, size_t size_,
void (*func_) (pipe_t *pipe_, void *arg_), void *arg_)
bool zmq::mtrie_t::is_redundant () const
