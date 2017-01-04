zmq::own_t::own_t (class ctx_t *parent_, uint32_t tid_) :
object_t (parent_, tid_),
terminating (false),
sent_seqnum (0),
processed_seqnum (0),
owner (NULL),
term_acks (0)
zmq::own_t::own_t (io_thread_t *io_thread_, const options_t &options_) :
object_t (io_thread_),
options (options_),
terminating (false),
sent_seqnum (0),
processed_seqnum (0),
owner (NULL),
term_acks (0)
zmq::own_t::~own_t ()
void zmq::own_t::set_owner (own_t *owner_)
void zmq::own_t::inc_seqnum ()
void zmq::own_t::process_seqnum ()
void zmq::own_t::launch_child (own_t *object_)
void zmq::own_t::term_child (own_t *object_)
void zmq::own_t::process_term_req (own_t *object_)
void zmq::own_t::process_own (own_t *object_)
void zmq::own_t::terminate ()
bool zmq::own_t::is_terminating ()
void zmq::own_t::process_term (int linger_)
void zmq::own_t::register_term_acks (int count_)
void zmq::own_t::unregister_term_ack ()
void zmq::own_t::process_term_ack ()
void zmq::own_t::check_term_acks ()
void zmq::own_t::process_destroy ()
