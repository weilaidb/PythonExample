#if defined _MSC_VER
#if defined _WIN32_WCE
#if !defined ZMQ_HAVE_WINDOWS
#if defined HAVE_CLOCK_GETTIME || defined HAVE_GETHRTIME
typedef ULONGLONG (*f_compatible_get_tick_count64)();
static zmq::mutex_t compatible_get_tick_count64_mutex;
ULONGLONG compatible_get_tick_count64()
f_compatible_get_tick_count64 init_compatible_get_tick_count64()
static f_compatible_get_tick_count64 my_get_tick_count64 = init_compatible_get_tick_count64();
zmq::clock_t::clock_t () :
last_tsc (rdtsc ()),
last_time (static_cast<uint64_t>((*my_get_tick_count64)()))
last_time (now_us () / 1000)
zmq::clock_t::~clock_t ()
uint64_t zmq::clock_t::now_us ()
uint64_t zmq::clock_t::now_ms ()
uint64_t zmq::clock_t::rdtsc ()
