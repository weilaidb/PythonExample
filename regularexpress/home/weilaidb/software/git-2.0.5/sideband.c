#define PREFIX "remote:"
#define ANSI_SUFFIX "\033[K"
#define DUMB_SUFFIX "        "
#define FIX_SIZE 10
int recv_sideband(const char *me, int in_stream, int out)
ssize_t send_sideband(int fd, int band, const char *data, ssize_t sz, int packet_max)
