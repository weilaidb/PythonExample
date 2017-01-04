zmq::stream_t::stream_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
prefetched (false),
identity_sent (false),
current_out (NULL),
more_out (false),
next_rid (generate_random ())
zmq::stream_t::~stream_t ()
void zmq::stream_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
void zmq::stream_t::xpipe_terminated (pipe_t *pipe_)
void zmq::stream_t::xread_activated (pipe_t *pipe_)
void zmq::stream_t::xwrite_activated (pipe_t *pipe_)
int zmq::stream_t::xsend (msg_t *msg_)
int zmq::stream_t::xsetsockopt (int option_, const void *optval_,
size_t optvallen_)
int zmq::stream_t::xrecv (msg_t *msg_)
bool zmq::stream_t::xhas_in ()
bool zmq::stream_t::xhas_out ()
void zmq::stream_t::identify_peer (pipe_t *pipe_)
