#define _VNIC_INTR_H_
#define vnic_intr_unmask fnic_intr_unmask
#define vnic_intr_mask fnic_intr_mask
#define vnic_intr_return_credits fnic_intr_return_credits
#define vnic_intr_credits fnic_intr_credits
#define vnic_intr_return_all_credits fnic_intr_return_all_credits
#define vnic_intr_legacy_pba fnic_intr_legacy_pba
#define vnic_intr_free fnic_intr_free
#define vnic_intr_alloc fnic_intr_alloc
#define vnic_intr_init fnic_intr_init
#define vnic_intr_clean fnic_intr_clean
#define VNIC_INTR_TIMER_MAX		0xffff
#define VNIC_INTR_TIMER_TYPE_ABS	0
#define VNIC_INTR_TIMER_TYPE_QUIET	1
struct vnic_intr_ctrl ;
struct vnic_intr ;
static inline void vnic_intr_unmask(struct vnic_intr *intr)
static inline void vnic_intr_mask(struct vnic_intr *intr)
static inline void vnic_intr_return_credits(struct vnic_intr *intr,
unsigned int credits, int unmask, int reset_timer)
static inline unsigned int vnic_intr_credits(struct vnic_intr *intr)
static inline void vnic_intr_return_all_credits(struct vnic_intr *intr)
static inline u32 vnic_intr_legacy_pba(u32 __iomem *legacy_pba)
void vnic_intr_free(struct vnic_intr *intr);
int vnic_intr_alloc(struct vnic_dev *vdev, struct vnic_intr *intr,
unsigned int index);
void vnic_intr_init(struct vnic_intr *intr, unsigned int coalescing_timer,
unsigned int coalescing_type, unsigned int mask_on_assertion);
void vnic_intr_clean(struct vnic_intr *intr);
