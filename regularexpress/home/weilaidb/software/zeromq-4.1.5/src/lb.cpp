zmq::lb_t::lb_t () :
active (0),
current (0),
more (false),
dropping (false)
zmq::lb_t::~lb_t ()
void zmq::lb_t::attach (pipe_t *pipe_)
void zmq::lb_t::pipe_terminated (pipe_t *pipe_)
void zmq::lb_t::activated (pipe_t *pipe_)
int zmq::lb_t::send (msg_t *msg_)
int zmq::lb_t::sendpipe (msg_t *msg_, pipe_t **pipe_)
bool zmq::lb_t::has_out ()
