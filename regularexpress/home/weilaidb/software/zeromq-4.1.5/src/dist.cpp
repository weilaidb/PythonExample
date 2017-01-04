zmq::dist_t::dist_t () :
matching (0),
active (0),
eligible (0),
more (false)
zmq::dist_t::~dist_t ()
void zmq::dist_t::attach (pipe_t *pipe_)
void zmq::dist_t::match (pipe_t *pipe_)
void zmq::dist_t::unmatch ()
void zmq::dist_t::pipe_terminated (pipe_t *pipe_)
void zmq::dist_t::activated (pipe_t *pipe_)
int zmq::dist_t::send_to_all (msg_t *msg_)
int zmq::dist_t::send_to_matching (msg_t *msg_)
void zmq::dist_t::distribute (msg_t *msg_)
bool zmq::dist_t::has_out ()
bool zmq::dist_t::write (pipe_t *pipe_, msg_t *msg_)
bool zmq::dist_t::check_hwm ()
