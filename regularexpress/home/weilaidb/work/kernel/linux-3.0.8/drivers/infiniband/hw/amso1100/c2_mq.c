void *c2_mq_alloc(struct c2_mq *q)
void c2_mq_produce(struct c2_mq *q)
void *c2_mq_consume(struct c2_mq *q)
void c2_mq_free(struct c2_mq *q)
void c2_mq_lconsume(struct c2_mq *q, u32 wqe_count)
void c2_mq_req_init(struct c2_mq *q, u32 index, u32 q_size, u32 msg_size,
u8 __iomem *pool_start, u16 __iomem *peer, u32 type)
void c2_mq_rep_init(struct c2_mq *q, u32 index, u32 q_size, u32 msg_size,
u8 *pool_start, u16 __iomem *peer, u32 type)
