zmq::fq_t::fq_t () :
active (0),
last_in (NULL),
current (0),
more (false)
zmq::fq_t::~fq_t ()
void zmq::fq_t::attach (pipe_t *pipe_)
void zmq::fq_t::pipe_terminated (pipe_t *pipe_)
void zmq::fq_t::activated (pipe_t *pipe_)
int zmq::fq_t::recv (msg_t *msg_)
int zmq::fq_t::recvpipe (msg_t *msg_, pipe_t **pipe_)
bool zmq::fq_t::has_in ()
zmq::blob_t zmq::fq_t::get_credential () const
