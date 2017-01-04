#define _CQ_DESC_H_
enum cq_desc_types ;
struct cq_desc ;
#define CQ_DESC_TYPE_BITS        4
#define CQ_DESC_TYPE_MASK        ((1 << CQ_DESC_TYPE_BITS) - 1)
#define CQ_DESC_COLOR_MASK       1
#define CQ_DESC_COLOR_SHIFT      7
#define CQ_DESC_Q_NUM_BITS       10
#define CQ_DESC_Q_NUM_MASK       ((1 << CQ_DESC_Q_NUM_BITS) - 1)
#define CQ_DESC_COMP_NDX_BITS    12
#define CQ_DESC_COMP_NDX_MASK    ((1 << CQ_DESC_COMP_NDX_BITS) - 1)
static inline void cq_desc_dec(const struct cq_desc *desc_arg,
u8 *type, u8 *color, u16 *q_number, u16 *completed_index)
