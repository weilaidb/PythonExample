#define MAX_KMALLOC_SIZE	131072
static struct sctp_ssnmap *sctp_ssnmap_init(struct sctp_ssnmap *map, __u16 in,
__u16 out);
static inline size_t sctp_ssnmap_size(__u16 in, __u16 out)
struct sctp_ssnmap *sctp_ssnmap_new(__u16 in, __u16 out,
gfp_t gfp)
static struct sctp_ssnmap *sctp_ssnmap_init(struct sctp_ssnmap *map, __u16 in,
__u16 out)
void sctp_ssnmap_clear(struct sctp_ssnmap *map)
void sctp_ssnmap_free(struct sctp_ssnmap *map)
