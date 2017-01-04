#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
void sctp_inq_init(struct sctp_inq *queue)
void sctp_inq_free(struct sctp_inq *queue)
void sctp_inq_push(struct sctp_inq *q, struct sctp_chunk *chunk)
struct sctp_chunkhdr *sctp_inq_peek(struct sctp_inq *queue)
struct sctp_chunk *sctp_inq_pop(struct sctp_inq *queue)
void sctp_inq_set_th_handler(struct sctp_inq *q, work_func_t callback)
