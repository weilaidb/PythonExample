#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int sctp_acked(struct sctp_sackhdr *sack, __u32 tsn);
static void sctp_check_transmitted(struct sctp_outq *q,
struct list_head *transmitted_queue,
struct sctp_transport *transport,
struct sctp_sackhdr *sack,
__u32 *highest_new_tsn);
static void sctp_mark_missing(struct sctp_outq *q,
struct list_head *transmitted_queue,
struct sctp_transport *transport,
__u32 highest_new_tsn,
int count_of_newacks);
static void sctp_generate_fwdtsn(struct sctp_outq *q, __u32 sack_ctsn);
static int sctp_outq_flush(struct sctp_outq *q, int rtx_timeout);
static inline void sctp_outq_head_data(struct sctp_outq *q,
struct sctp_chunk *ch)
static inline struct sctp_chunk *sctp_outq_dequeue_data(struct sctp_outq *q)
static inline void sctp_outq_tail_data(struct sctp_outq *q,
struct sctp_chunk *ch)
static inline int sctp_cacc_skip_3_1_d(struct sctp_transport *primary,
struct sctp_transport *transport,
int count_of_newacks)
static inline int sctp_cacc_skip_3_1_f(struct sctp_transport *transport,
int count_of_newacks)
static inline int sctp_cacc_skip_3_1(struct sctp_transport *primary,
struct sctp_transport *transport,
int count_of_newacks)
static inline int sctp_cacc_skip_3_2(struct sctp_transport *primary, __u32 tsn)
static inline int sctp_cacc_skip(struct sctp_transport *primary,
struct sctp_transport *transport,
int count_of_newacks,
__u32 tsn)
void sctp_outq_init(struct sctp_association *asoc, struct sctp_outq *q)
void sctp_outq_teardown(struct sctp_outq *q)
void sctp_outq_free(struct sctp_outq *q)
int sctp_outq_tail(struct sctp_outq *q, struct sctp_chunk *chunk)
static void sctp_insert_list(struct list_head *head, struct list_head *new)
void sctp_retransmit_mark(struct sctp_outq *q,
struct sctp_transport *transport,
__u8 reason)
void sctp_retransmit(struct sctp_outq *q, struct sctp_transport *transport,
sctp_retransmit_reason_t reason)
static int sctp_outq_flush_rtx(struct sctp_outq *q, struct sctp_packet *pkt,
int rtx_timeout, int *start_timer)
int sctp_outq_uncork(struct sctp_outq *q)
static int sctp_outq_flush(struct sctp_outq *q, int rtx_timeout)
static void sctp_sack_update_unack_data(struct sctp_association *assoc,
struct sctp_sackhdr *sack)
int sctp_outq_sack(struct sctp_outq *q, struct sctp_sackhdr *sack)
int sctp_outq_is_empty(const struct sctp_outq *q)
static void sctp_check_transmitted(struct sctp_outq *q,
struct list_head *transmitted_queue,
struct sctp_transport *transport,
struct sctp_sackhdr *sack,
__u32 *highest_new_tsn_in_sack)
static void sctp_mark_missing(struct sctp_outq *q,
struct list_head *transmitted_queue,
struct sctp_transport *transport,
__u32 highest_new_tsn_in_sack,
int count_of_newacks)
static int sctp_acked(struct sctp_sackhdr *sack, __u32 tsn)
static inline int sctp_get_skip_pos(struct sctp_fwdtsn_skip *skiplist,
int nskips, __be16 stream)
static void sctp_generate_fwdtsn(struct sctp_outq *q, __u32 ctsn)
