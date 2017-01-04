#if defined ZMQ_USE_EPOLL
zmq::epoll_t::epoll_t (const zmq::ctx_t &ctx_) :
ctx(ctx_),
stopping (false)
zmq::epoll_t::~epoll_t ()
zmq::epoll_t::handle_t zmq::epoll_t::add_fd (fd_t fd_, i_poll_events *events_)
void zmq::epoll_t::rm_fd (handle_t handle_)
void zmq::epoll_t::set_pollin (handle_t handle_)
void zmq::epoll_t::reset_pollin (handle_t handle_)
void zmq::epoll_t::set_pollout (handle_t handle_)
void zmq::epoll_t::reset_pollout (handle_t handle_)
void zmq::epoll_t::start ()
void zmq::epoll_t::stop ()
int zmq::epoll_t::max_fds ()
void zmq::epoll_t::loop ()
void zmq::epoll_t::worker_routine (void *arg_)
