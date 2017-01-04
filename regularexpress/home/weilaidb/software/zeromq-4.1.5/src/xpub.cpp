zmq::xpub_t::xpub_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
verbose (false),
more (false),
lossy (true)
zmq::xpub_t::~xpub_t ()
void zmq::xpub_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
void zmq::xpub_t::xread_activated (pipe_t *pipe_)
void zmq::xpub_t::xwrite_activated (pipe_t *pipe_)
int zmq::xpub_t::xsetsockopt (int option_, const void *optval_,
size_t optvallen_)
void zmq::xpub_t::xpipe_terminated (pipe_t *pipe_)
void zmq::xpub_t::mark_as_matching (pipe_t *pipe_, void *arg_)
int zmq::xpub_t::xsend (msg_t *msg_)
bool zmq::xpub_t::xhas_out ()
int zmq::xpub_t::xrecv (msg_t *msg_)
bool zmq::xpub_t::xhas_in ()
void zmq::xpub_t::send_unsubscription (unsigned char *data_, size_t size_,
void *arg_)
