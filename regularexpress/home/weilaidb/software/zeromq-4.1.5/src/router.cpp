zmq::router_t::router_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
socket_base_t (parent_, tid_, sid_),
prefetched (false),
identity_sent (false),
more_in (false),
current_out (NULL),
more_out (false),
next_rid (generate_random ()),
mandatory (false),
raw_sock (false),
probe_router (false),
handover (false)
zmq::router_t::~router_t ()
void zmq::router_t::xattach_pipe (pipe_t *pipe_, bool subscribe_to_all_)
int zmq::router_t::xsetsockopt (int option_, const void *optval_,
size_t optvallen_)
void zmq::router_t::xpipe_terminated (pipe_t *pipe_)
void zmq::router_t::xread_activated (pipe_t *pipe_)
void zmq::router_t::xwrite_activated (pipe_t *pipe_)
int zmq::router_t::xsend (msg_t *msg_)
int zmq::router_t::xrecv (msg_t *msg_)
int zmq::router_t::rollback (void)
bool zmq::router_t::xhas_in ()
bool zmq::router_t::xhas_out ()
zmq::blob_t zmq::router_t::get_credential () const
bool zmq::router_t::identify_peer (pipe_t *pipe_)
