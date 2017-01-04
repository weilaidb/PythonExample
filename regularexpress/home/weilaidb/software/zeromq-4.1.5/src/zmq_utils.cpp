#if !defined ZMQ_HAVE_WINDOWS
#if defined (ZMQ_USE_TWEETNACL)
#   include "tweetnacl_base.h"
#elif defined (ZMQ_USE_LIBSODIUM)
#   include "sodium.h"
void zmq_sleep (int seconds_)
void *zmq_stopwatch_start ()
unsigned long zmq_stopwatch_stop (void *watch_)
void *zmq_threadstart(zmq_thread_fn* func, void* arg)
void zmq_threadclose(void* thread)
static char encoder [85 + 1] = ;
static uint8_t decoder [96] = ;
char *zmq_z85_encode (char *dest, const uint8_t *data, size_t size)
uint8_t *zmq_z85_decode (uint8_t *dest, const char *string)
int zmq_curve_keypair (char *z85_public_key, char *z85_secret_key)
