static int unix_stream_socket(void)
static int chdir_len(const char *orig, int len)
struct unix_sockaddr_context ;
static void unix_sockaddr_cleanup(struct unix_sockaddr_context *ctx)
static int unix_sockaddr_init(struct sockaddr_un *sa, const char *path,
struct unix_sockaddr_context *ctx)
int unix_stream_connect(const char *path)
int unix_stream_listen(const char *path)
