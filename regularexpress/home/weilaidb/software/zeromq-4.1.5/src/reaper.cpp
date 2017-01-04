zmq::reaper_t::reaper_t (class ctx_t *ctx_, uint32_t tid_) :
object_t (ctx_, tid_),
sockets (0),
terminating (false)
zmq::reaper_t::~reaper_t ()
zmq::mailbox_t *zmq::reaper_t::get_mailbox ()
void zmq::reaper_t::start ()
void zmq::reaper_t::stop ()
void zmq::reaper_t::in_event ()
void zmq::reaper_t::out_event ()
void zmq::reaper_t::timer_event (int)
void zmq::reaper_t::process_stop ()
void zmq::reaper_t::process_reap (socket_base_t *socket_)
void zmq::reaper_t::process_reaped ()
