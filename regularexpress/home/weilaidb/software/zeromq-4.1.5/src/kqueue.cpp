#if defined ZMQ_USE_KQUEUE
#if defined ZMQ_HAVE_NETBSD
#define kevent_udata_t intptr_t
#define kevent_udata_t void *
zmq::kqueue_t::kqueue_t (const zmq::ctx_t &ctx_) :
ctx(ctx_),
stopping (false)
zmq::kqueue_t::~kqueue_t ()
void zmq::kqueue_t::kevent_add (fd_t fd_, short filter_, void *udata_)
void zmq::kqueue_t::kevent_delete (fd_t fd_, short filter_)
zmq::kqueue_t::handle_t zmq::kqueue_t::add_fd (fd_t fd_,
i_poll_events *reactor_)
void zmq::kqueue_t::rm_fd (handle_t handle_)
void zmq::kqueue_t::set_pollin (handle_t handle_)
void zmq::kqueue_t::reset_pollin (handle_t handle_)
void zmq::kqueue_t::set_pollout (handle_t handle_)
void zmq::kqueue_t::reset_pollout (handle_t handle_)
void zmq::kqueue_t::start ()
void zmq::kqueue_t::stop ()
int zmq::kqueue_t::max_fds ()
void zmq::kqueue_t::loop ()
void zmq::kqueue_t::worker_routine (void *arg_)
