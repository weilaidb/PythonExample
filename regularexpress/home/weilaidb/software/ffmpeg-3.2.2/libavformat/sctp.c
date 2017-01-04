#if HAVE_POLL_H
static int ff_sctp_recvmsg(int s, void *msg, size_t len, struct sockaddr *from,
socklen_t *fromlen, struct sctp_sndrcvinfo *sinfo,
int *msg_flags)
static int ff_sctp_send(int s, const void *msg, size_t len,
const struct sctp_sndrcvinfo *sinfo, int flags)
typedef struct SCTPContext  SCTPContext;
#define OFFSET(x) offsetof(SCTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass sctp_class = ;
static int sctp_open(URLContext *h, const char *uri, int flags)
static int sctp_wait_fd(int fd, int write)
static int sctp_read(URLContext *h, uint8_t *buf, int size)
static int sctp_write(URLContext *h, const uint8_t *buf, int size)
static int sctp_close(URLContext *h)
static int sctp_get_file_handle(URLContext *h)
const URLProtocol ff_sctp_protocol = ;
