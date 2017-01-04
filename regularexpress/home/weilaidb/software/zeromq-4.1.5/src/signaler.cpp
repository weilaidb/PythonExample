#if defined ZMQ_POLL_BASED_ON_POLL
#elif defined ZMQ_POLL_BASED_ON_SELECT
#if defined ZMQ_HAVE_WINDOWS
#elif defined ZMQ_HAVE_HPUX
#elif defined ZMQ_HAVE_OPENVMS
#if defined ZMQ_HAVE_EVENTFD
#if defined ZMQ_HAVE_WINDOWS
#if !defined (ZMQ_HAVE_WINDOWS)
static int sleep_ms (unsigned int ms_)
static int close_wait_ms (int fd_, unsigned int max_ms_ = 2000)
zmq::signaler_t::signaler_t ()
zmq::signaler_t::~signaler_t ()
zmq::fd_t zmq::signaler_t::get_fd () const
void zmq::signaler_t::send ()
int zmq::signaler_t::wait (int timeout_)
void zmq::signaler_t::recv ()
void zmq::signaler_t::forked ()
int zmq::signaler_t::make_fdpair (fd_t *r_, fd_t *w_)
