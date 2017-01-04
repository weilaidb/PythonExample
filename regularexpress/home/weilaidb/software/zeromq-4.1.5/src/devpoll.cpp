#if defined ZMQ_USE_DEVPOLL
zmq::devpoll_t::devpoll_t (const zmq::ctx_t &ctx_) :
ctx(ctx_),
stopping (false)
zmq::devpoll_t::~devpoll_t ()
void zmq::devpoll_t::devpoll_ctl (fd_t fd_, short events_)
zmq::devpoll_t::handle_t zmq::devpoll_t::add_fd (fd_t fd_,
i_poll_events *reactor_)
void zmq::devpoll_t::rm_fd (handle_t handle_)
void zmq::devpoll_t::set_pollin (handle_t handle_)
void zmq::devpoll_t::reset_pollin (handle_t handle_)
void zmq::devpoll_t::set_pollout (handle_t handle_)
void zmq::devpoll_t::reset_pollout (handle_t handle_)
void zmq::devpoll_t::start ()
void zmq::devpoll_t::stop ()
int zmq::devpoll_t::max_fds ()
void zmq::devpoll_t::loop ()
void zmq::devpoll_t::worker_routine (void *arg_)
