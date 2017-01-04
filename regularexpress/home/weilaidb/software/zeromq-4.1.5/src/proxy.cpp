#if defined ZMQ_POLL_BASED_ON_POLL
int capture(
class zmq::socket_base_t *capture_,
zmq::msg_t& msg_,
int more_ = 0)
int forward(
class zmq::socket_base_t *from_,
class zmq::socket_base_t *to_,
class zmq::socket_base_t *capture_,
zmq::msg_t& msg_)
int zmq::proxy (
class socket_base_t *frontend_,
class socket_base_t *backend_,
class socket_base_t *capture_,
class socket_base_t *control_)
