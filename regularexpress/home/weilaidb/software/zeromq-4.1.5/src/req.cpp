zmq::req_t::req_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
dealer_t (parent_, tid_, sid_),
receiving_reply (false),
message_begins (true),
reply_pipe (NULL),
request_id_frames_enabled (false),
request_id (generate_random()),
strict (true)
zmq::req_t::~req_t ()
int zmq::req_t::xsend (msg_t *msg_)
int zmq::req_t::xrecv (msg_t *msg_)
bool zmq::req_t::xhas_in ()
bool zmq::req_t::xhas_out ()
int zmq::req_t::xsetsockopt (int option_, const void *optval_, size_t optvallen_)
void zmq::req_t::xpipe_terminated (pipe_t *pipe_)
int zmq::req_t::recv_reply_pipe (msg_t *msg_)
zmq::req_session_t::req_session_t (io_thread_t *io_thread_, bool connect_,
socket_base_t *socket_, const options_t &options_,
address_t *addr_) :
session_base_t (io_thread_, connect_, socket_, options_, addr_),
state (bottom)
zmq::req_session_t::~req_session_t ()
int zmq::req_session_t::push_msg (msg_t *msg_)
void zmq::req_session_t::reset ()
