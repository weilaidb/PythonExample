#if defined ZMQ_HAVE_WINDOWS
static int message_count;
static size_t message_size;
#if defined ZMQ_HAVE_WINDOWS
static unsigned int __stdcall worker (void *ctx_)
static void *worker (void *ctx_)
int main (int argc, char *argv [])
