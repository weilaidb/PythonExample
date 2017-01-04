typedef void *SSL;
static const char imap_send_usage[] = "git imap-send < <mbox>";
#undef DRV_OK
#define DRV_OK          0
#define DRV_MSG_BAD     -1
#define DRV_BOX_BAD     -2
#define DRV_STORE_BAD   -3
static int Verbose, Quiet;
__attribute__((format (printf, 1, 2)))
static void imap_info(const char *, ...);
__attribute__((format (printf, 1, 2)))
static void imap_warn(const char *, ...);
static char *next_arg(char **);
__attribute__((format (printf, 3, 4)))
static int nfsnprintf(char *buf, int blen, const char *fmt, ...);
static int nfvasprintf(char **strp, const char *fmt, va_list ap)
struct imap_server_conf ;
static struct imap_server_conf server = ;
struct imap_socket ;
struct imap_buffer ;
struct imap_cmd;
struct imap ;
struct imap_store ;
struct imap_cmd_cb ;
struct imap_cmd ;
#define CAP(cap) (imap->caps & (1 << (cap)))
enum CAPABILITY ;
static const char *cap_list[] = ;
#define RESP_OK    0
#define RESP_NO    1
#define RESP_BAD   2
static int get_cmd_result(struct imap_store *ctx, struct imap_cmd *tcmd);
static void ssl_socket_perror(const char *func)
static void socket_perror(const char *func, struct imap_socket *sock, int ret)
static int ssl_socket_connect(struct imap_socket *sock, int use_tls_only, int verify)
static int host_matches(const char *host, const char *pattern)
static int verify_hostname(X509 *cert, const char *hostname)
static int ssl_socket_connect(struct imap_socket *sock, int use_tls_only, int verify)
static int socket_read(struct imap_socket *sock, char *buf, int len)
static int socket_write(struct imap_socket *sock, const char *buf, int len)
static void socket_shutdown(struct imap_socket *sock)
static int buffer_gets(struct imap_buffer *b, char **s)
static void imap_info(const char *msg, ...)
static void imap_warn(const char *msg, ...)
static char *next_arg(char **s)
static int nfsnprintf(char *buf, int blen, const char *fmt, ...)
static struct imap_cmd *v_issue_imap_cmd(struct imap_store *ctx,
struct imap_cmd_cb *cb,
const char *fmt, va_list ap)
__attribute__((format (printf, 3, 4)))
static struct imap_cmd *issue_imap_cmd(struct imap_store *ctx,
struct imap_cmd_cb *cb,
const char *fmt, ...)
__attribute__((format (printf, 3, 4)))
static int imap_exec(struct imap_store *ctx, struct imap_cmd_cb *cb,
const char *fmt, ...)
__attribute__((format (printf, 3, 4)))
static int imap_exec_m(struct imap_store *ctx, struct imap_cmd_cb *cb,
const char *fmt, ...)
static int skip_imap_list_l(char **sp, int level)
static void skip_list(char **sp)
static void parse_capability(struct imap *imap, char *cmd)
static int parse_response_code(struct imap_store *ctx, struct imap_cmd_cb *cb,
char *s)
static int get_cmd_result(struct imap_store *ctx, struct imap_cmd *tcmd)
static void imap_close_server(struct imap_store *ictx)
static void imap_close_store(struct imap_store *ctx)
static char hexchar(unsigned int b)
#define ENCODED_SIZE(n) (4*((n+2)/3))
static char *cram(const char *challenge_64, const char *user, const char *pass)
static char *cram(const char *challenge_64, const char *user, const char *pass)
static int auth_cram_md5(struct imap_store *ctx, struct imap_cmd *cmd, const char *prompt)
static struct imap_store *imap_open_store(struct imap_server_conf *srvc)
static void lf_to_crlf(struct strbuf *msg)
static int imap_store_msg(struct imap_store *ctx, struct strbuf *msg)
static void wrap_in_html(struct strbuf *msg)
#define CHUNKSIZE 0x1000
static int read_message(FILE *f, struct strbuf *all_msgs)
static int count_messages(struct strbuf *all_msgs)
static int split_msg(struct strbuf *all_msgs, struct strbuf *msg, int *ofs)
static char *imap_folder;
static int git_imap_config(const char *key, const char *val, void *cb)
int main(int argc, char **argv)
