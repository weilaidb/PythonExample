#if defined ZMQ_USE_POLL
zmq::poll_t::poll_t (const zmq::ctx_t &ctx_) :
ctx(ctx_),
retired (false),
stopping (false)
zmq::poll_t::~poll_t ()
zmq::poll_t::handle_t zmq::poll_t::add_fd (fd_t fd_, i_poll_events *events_)
void zmq::poll_t::rm_fd (handle_t handle_)
void zmq::poll_t::set_pollin (handle_t handle_)
void zmq::poll_t::reset_pollin (handle_t handle_)
void zmq::poll_t::set_pollout (handle_t handle_)
void zmq::poll_t::reset_pollout (handle_t handle_)
void zmq::poll_t::start ()
void zmq::poll_t::stop ()
int zmq::poll_t::max_fds ()
void zmq::poll_t::loop ()
void zmq::poll_t::worker_routine (void *arg_)
