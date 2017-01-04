static struct sctp_ulpevent * sctp_ulpq_reasm(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *);
static struct sctp_ulpevent * sctp_ulpq_order(struct sctp_ulpq *,
struct sctp_ulpevent *);
static void sctp_ulpq_reasm_drain(struct sctp_ulpq *ulpq);
struct sctp_ulpq *sctp_ulpq_init(struct sctp_ulpq *ulpq,
struct sctp_association *asoc)
void sctp_ulpq_flush(struct sctp_ulpq *ulpq)
void sctp_ulpq_free(struct sctp_ulpq *ulpq)
int sctp_ulpq_tail_data(struct sctp_ulpq *ulpq, struct sctp_chunk *chunk,
gfp_t gfp)
int sctp_clear_pd(struct sock *sk, struct sctp_association *asoc)
static void sctp_ulpq_set_pd(struct sctp_ulpq *ulpq)
static int sctp_ulpq_clear_pd(struct sctp_ulpq *ulpq)
int sctp_ulpq_tail_event(struct sctp_ulpq *ulpq, struct sctp_ulpevent *event)
static void sctp_ulpq_store_reasm(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *event)
static struct sctp_ulpevent *sctp_make_reassembled_event(struct sk_buff_head *queue, struct sk_buff *f_frag, struct sk_buff *l_frag)
static struct sctp_ulpevent *sctp_ulpq_retrieve_reassembled(struct sctp_ulpq *ulpq)
static struct sctp_ulpevent *sctp_ulpq_retrieve_partial(struct sctp_ulpq *ulpq)
static struct sctp_ulpevent *sctp_ulpq_reasm(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *event)
static struct sctp_ulpevent *sctp_ulpq_retrieve_first(struct sctp_ulpq *ulpq)
void sctp_ulpq_reasm_flushtsn(struct sctp_ulpq *ulpq, __u32 fwd_tsn)
static void sctp_ulpq_reasm_drain(struct sctp_ulpq *ulpq)
static void sctp_ulpq_retrieve_ordered(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *event)
static void sctp_ulpq_store_ordered(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *event)
static struct sctp_ulpevent *sctp_ulpq_order(struct sctp_ulpq *ulpq,
struct sctp_ulpevent *event)
static void sctp_ulpq_reap_ordered(struct sctp_ulpq *ulpq, __u16 sid)
void sctp_ulpq_skip(struct sctp_ulpq *ulpq, __u16 sid, __u16 ssn)
static __u16 sctp_ulpq_renege_list(struct sctp_ulpq *ulpq,
struct sk_buff_head *list, __u16 needed)
static __u16 sctp_ulpq_renege_order(struct sctp_ulpq *ulpq, __u16 needed)
static __u16 sctp_ulpq_renege_frags(struct sctp_ulpq *ulpq, __u16 needed)
void sctp_ulpq_partial_delivery(struct sctp_ulpq *ulpq,
struct sctp_chunk *chunk,
gfp_t gfp)
void sctp_ulpq_renege(struct sctp_ulpq *ulpq, struct sctp_chunk *chunk,
gfp_t gfp)
void sctp_ulpq_abort_pd(struct sctp_ulpq *ulpq, gfp_t gfp)
