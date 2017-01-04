#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void sctp_datamsg_init(struct sctp_datamsg *msg)
SCTP_STATIC struct sctp_datamsg *sctp_datamsg_new(gfp_t gfp)
void sctp_datamsg_free(struct sctp_datamsg *msg)
static void sctp_datamsg_destroy(struct sctp_datamsg *msg)
static void sctp_datamsg_hold(struct sctp_datamsg *msg)
void sctp_datamsg_put(struct sctp_datamsg *msg)
static void sctp_datamsg_assign(struct sctp_datamsg *msg, struct sctp_chunk *chunk)
struct sctp_datamsg *sctp_datamsg_from_user(struct sctp_association *asoc,
struct sctp_sndrcvinfo *sinfo,
struct msghdr *msgh, int msg_len)
int sctp_chunk_abandoned(struct sctp_chunk *chunk)
void sctp_chunk_fail(struct sctp_chunk *chunk, int error)
