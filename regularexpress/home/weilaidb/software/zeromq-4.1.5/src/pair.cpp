zmq::pair_t::pair_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
pipe (NULL),
last_in (NULL)
zmq::pair_t::~pair_t ()
void zmq::pair_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
void zmq::pair_t::xpipe_terminated (pipe_t *pipe_)
void zmq::pair_t::xread_activated (pipe_t *)
void zmq::pair_t::xwrite_activated (pipe_t *)
int zmq::pair_t::xsend (msg_t *msg_)
int zmq::pair_t::xrecv (msg_t *msg_)
bool zmq::pair_t::xhas_in ()
bool zmq::pair_t::xhas_out ()
zmq::blob_t zmq::pair_t::get_credential () const
