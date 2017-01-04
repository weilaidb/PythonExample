#if defined (ZMQ_USE_TWEETNACL)
#   include "randombytes.h"
#elif defined (ZMQ_USE_LIBSODIUM)
#   include "sodium.h"
#define ZMQ_CTX_TAG_VALUE_GOOD 0xabadcafe
#define ZMQ_CTX_TAG_VALUE_BAD  0xdeadbeef
int clipped_maxsocket(int max_requested)
zmq::ctx_t::ctx_t () :
tag (ZMQ_CTX_TAG_VALUE_GOOD),
starting (true),
terminating (false),
reaper (NULL),
slot_count (0),
slots (NULL),
max_sockets (clipped_maxsocket (ZMQ_MAX_SOCKETS_DFLT)),
io_thread_count (ZMQ_IO_THREADS_DFLT),
ipv6 (false),
thread_priority (ZMQ_THREAD_PRIORITY_DFLT),
thread_sched_policy (ZMQ_THREAD_SCHED_POLICY_DFLT)
bool zmq::ctx_t::check_tag ()
zmq::ctx_t::~ctx_t ()
int zmq::ctx_t::terminate ()
int zmq::ctx_t::shutdown ()
int zmq::ctx_t::set (int option_, int optval_)
int zmq::ctx_t::get (int option_)
zmq::socket_base_t *zmq::ctx_t::create_socket (int type_)
void zmq::ctx_t::destroy_socket (class socket_base_t *socket_)
zmq::object_t *zmq::ctx_t::get_reaper ()
void zmq::ctx_t::start_thread (thread_t &thread_, thread_fn *tfn_, void *arg_) const
void zmq::ctx_t::send_command (uint32_t tid_, const command_t &command_)
zmq::io_thread_t *zmq::ctx_t::choose_io_thread (uint64_t affinity_)
int zmq::ctx_t::register_endpoint (const char *addr_,
const endpoint_t &endpoint_)
int zmq::ctx_t::unregister_endpoint (
const std::string &addr_, socket_base_t *socket_)
void zmq::ctx_t::unregister_endpoints (socket_base_t *socket_)
zmq::endpoint_t zmq::ctx_t::find_endpoint (const char *addr_)
void zmq::ctx_t::pend_connection (const std::string &addr_,
const endpoint_t &endpoint_, pipe_t **pipes_)
void zmq::ctx_t::connect_pending (const char *addr_, zmq::socket_base_t *bind_socket_)
void zmq::ctx_t::connect_inproc_sockets (zmq::socket_base_t *bind_socket_,
options_t& bind_options, const pending_connection_t &pending_connection_, side side_)
zmq::atomic_counter_t zmq::ctx_t::max_socket_id;
