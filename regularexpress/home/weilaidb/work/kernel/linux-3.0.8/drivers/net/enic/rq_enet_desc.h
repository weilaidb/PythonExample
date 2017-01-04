#define _RQ_ENET_DESC_H_
struct rq_enet_desc ;
enum rq_enet_type_types ;
#define RQ_ENET_ADDR_BITS		64
#define RQ_ENET_LEN_BITS		14
#define RQ_ENET_LEN_MASK		((1 << RQ_ENET_LEN_BITS) - 1)
#define RQ_ENET_TYPE_BITS		2
#define RQ_ENET_TYPE_MASK		((1 << RQ_ENET_TYPE_BITS) - 1)
static inline void rq_enet_desc_enc(struct rq_enet_desc *desc,
u64 address, u8 type, u16 length)
static inline void rq_enet_desc_dec(struct rq_enet_desc *desc,
u64 *address, u8 *type, u16 *length)
