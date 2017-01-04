#define _C2_MQ_H_
enum c2_shared_regs ;
struct c2_mq_shared ;
enum c2_mq_type ;
#define C2_MQ_MAGIC 0x4d512020
struct c2_mq ;
static __inline__ int c2_mq_empty(struct c2_mq *q)
static __inline__ int c2_mq_full(struct c2_mq *q)
extern void c2_mq_lconsume(struct c2_mq *q, u32 wqe_count);
extern void *c2_mq_alloc(struct c2_mq *q);
extern void c2_mq_produce(struct c2_mq *q);
extern void *c2_mq_consume(struct c2_mq *q);
extern void c2_mq_free(struct c2_mq *q);
extern void c2_mq_req_init(struct c2_mq *q, u32 index, u32 q_size, u32 msg_size,
u8 __iomem *pool_start, u16 __iomem *peer, u32 type);
extern void c2_mq_rep_init(struct c2_mq *q, u32 index, u32 q_size, u32 msg_size,
u8 *pool_start, u16 __iomem *peer, u32 type);
