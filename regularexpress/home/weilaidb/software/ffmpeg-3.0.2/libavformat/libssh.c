#define LIBSSH_STATIC
typedef struct  LIBSSHContext;
static av_cold int libssh_create_ssh_session(LIBSSHContext *libssh, const char* hostname, unsigned int port)
static av_cold int libssh_authentication(LIBSSHContext *libssh, const char *user, const char *password)
static av_cold int libssh_create_sftp_session(LIBSSHContext *libssh)
static av_cold int libssh_open_file(LIBSSHContext *libssh, int flags, const char *file)
static av_cold void libssh_stat_file(LIBSSHContext *libssh)
static av_cold int libssh_close(URLContext *h)
static av_cold int libssh_connect(URLContext *h, const char *url, char *path, size_t path_size)
static av_cold int libssh_open(URLContext *h, const char *url, int flags)
static int64_t libssh_seek(URLContext *h, int64_t pos, int whence)
static int libssh_read(URLContext *h, unsigned char *buf, int size)
static int libssh_write(URLContext *h, const unsigned char *buf, int size)
static int libssh_open_dir(URLContext *h)
static int libssh_read_dir(URLContext *h, AVIODirEntry **next)
static int libssh_close_dir(URLContext *h)
static int libssh_delete(URLContext *h)
static int libssh_move(URLContext *h_src, URLContext *h_dst)
#define OFFSET(x) offsetof(LIBSSHContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass libssh_context_class = ;
URLProtocol ff_libssh_protocol = ;
