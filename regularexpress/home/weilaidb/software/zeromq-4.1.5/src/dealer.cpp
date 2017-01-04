zmq::dealer_t::dealer_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
probe_router (false)
zmq::dealer_t::~dealer_t ()
void zmq::dealer_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
int zmq::dealer_t::xsetsockopt (int option_, const void *optval_,
size_t optvallen_)
int zmq::dealer_t::xsend (msg_t *msg_)
int zmq::dealer_t::xrecv (msg_t *msg_)
bool zmq::dealer_t::xhas_in ()
bool zmq::dealer_t::xhas_out ()
zmq::blob_t zmq::dealer_t::get_credential () const
void zmq::dealer_t::xread_activated (pipe_t *pipe_)
void zmq::dealer_t::xwrite_activated (pipe_t *pipe_)
void zmq::dealer_t::xpipe_terminated (pipe_t *pipe_)
int zmq::dealer_t::sendpipe (msg_t *msg_, pipe_t **pipe_)
int zmq::dealer_t::recvpipe (msg_t *msg_, pipe_t **pipe_)
