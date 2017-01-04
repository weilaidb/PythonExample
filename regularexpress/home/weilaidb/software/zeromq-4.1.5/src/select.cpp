#if defined ZMQ_USE_SELECT
#if defined ZMQ_HAVE_WINDOWS
#elif defined ZMQ_HAVE_HPUX
#elif defined ZMQ_HAVE_OPENVMS
zmq::select_t::select_t (const zmq::ctx_t &ctx_) :
ctx(ctx_),
maxfd (retired_fd),
retired (false),
stopping (false)
zmq::select_t::~select_t ()
zmq::select_t::handle_t zmq::select_t::add_fd (fd_t fd_, i_poll_events *events_)
void zmq::select_t::rm_fd (handle_t handle_)
void zmq::select_t::set_pollin (handle_t handle_)
void zmq::select_t::reset_pollin (handle_t handle_)
void zmq::select_t::set_pollout (handle_t handle_)
void zmq::select_t::reset_pollout (handle_t handle_)
void zmq::select_t::start ()
void zmq::select_t::stop ()
int zmq::select_t::max_fds ()
void zmq::select_t::loop ()
void zmq::select_t::worker_routine (void *arg_)
bool zmq::select_t::is_retired_fd (const fd_entry_t &entry)
