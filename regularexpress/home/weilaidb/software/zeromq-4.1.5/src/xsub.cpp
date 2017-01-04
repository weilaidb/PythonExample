zmq::xsub_t::xsub_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
has_message (false),
more (false)
zmq::xsub_t::~xsub_t ()
void zmq::xsub_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
void zmq::xsub_t::xread_activated (pipe_t *pipe_)
void zmq::xsub_t::xwrite_activated (pipe_t *pipe_)
void zmq::xsub_t::xpipe_terminated (pipe_t *pipe_)
void zmq::xsub_t::xhiccuped (pipe_t *pipe_)
int zmq::xsub_t::xsend (msg_t *msg_)
bool zmq::xsub_t::xhas_out ()
int zmq::xsub_t::xrecv (msg_t *msg_)
bool zmq::xsub_t::xhas_in ()
zmq::blob_t zmq::xsub_t::get_credential () const
bool zmq::xsub_t::match (msg_t *msg_)
void zmq::xsub_t::send_subscription (unsigned char *data_, size_t size_,
void *arg_)
