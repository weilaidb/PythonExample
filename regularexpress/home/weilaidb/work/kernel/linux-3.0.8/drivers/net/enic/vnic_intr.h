#define _VNIC_INTR_H_
#define VNIC_INTR_TIMER_MAX		0xffff
#define VNIC_INTR_TIMER_TYPE_ABS	0
#define VNIC_INTR_TIMER_TYPE_QUIET	1
struct vnic_intr_ctrl ;
struct vnic_intr ;
static inline void vnic_intr_unmask(struct vnic_intr *intr)
static inline void vnic_intr_mask(struct vnic_intr *intr)
static inline int vnic_intr_masked(struct vnic_intr *intr)
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
void vnic_intr_coalescing_timer_set(struct vnic_intr *intr,
unsigned int coalescing_timer);
void vnic_intr_clean(struct vnic_intr *intr);
