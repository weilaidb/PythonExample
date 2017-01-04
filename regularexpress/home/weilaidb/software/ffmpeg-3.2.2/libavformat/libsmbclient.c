typedef struct  LIBSMBContext;
static void libsmbc_get_auth_data(SMBCCTX *c, const char *server, const char *share,
char *workgroup, int workgroup_len,
char *username, int username_len,
char *password, int password_len)
static av_cold int libsmbc_connect(URLContext *h)
static av_cold int libsmbc_close(URLContext *h)
static av_cold int libsmbc_open(URLContext *h, const char *url, int flags)
static int64_t libsmbc_seek(URLContext *h, int64_t pos, int whence)
static int libsmbc_read(URLContext *h, unsigned char *buf, int size)
static int libsmbc_write(URLContext *h, const unsigned char *buf, int size)
static int libsmbc_open_dir(URLContext *h)
static int libsmbc_read_dir(URLContext *h, AVIODirEntry **next)
static int libsmbc_close_dir(URLContext *h)
static int libsmbc_delete(URLContext *h)
static int libsmbc_move(URLContext *h_src, URLContext *h_dst)
#define OFFSET(x) offsetof(LIBSMBContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass libsmbclient_context_class = ;
const URLProtocol ff_libsmbclient_protocol = ;
