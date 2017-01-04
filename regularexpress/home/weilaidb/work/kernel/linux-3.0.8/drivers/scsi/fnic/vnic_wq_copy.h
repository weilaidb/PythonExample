#define _VNIC_WQ_COPY_H_
#define	VNIC_WQ_COPY_MAX 1
struct vnic_wq_copy ;
static inline unsigned int vnic_wq_copy_desc_avail(struct vnic_wq_copy *wq)
static inline unsigned int vnic_wq_copy_desc_in_use(struct vnic_wq_copy *wq)
static inline void *vnic_wq_copy_next_desc(struct vnic_wq_copy *wq)
static inline void vnic_wq_copy_post(struct vnic_wq_copy *wq)
static inline void vnic_wq_copy_desc_process(struct vnic_wq_copy *wq, u16 index)
static inline void vnic_wq_copy_service(struct vnic_wq_copy *wq,
u16 completed_index,
void (*q_service)(struct vnic_wq_copy *wq,
struct fcpio_host_req *wq_desc))
void vnic_wq_copy_enable(struct vnic_wq_copy *wq);
int vnic_wq_copy_disable(struct vnic_wq_copy *wq);
void vnic_wq_copy_free(struct vnic_wq_copy *wq);
int vnic_wq_copy_alloc(struct vnic_dev *vdev, struct vnic_wq_copy *wq,
unsigned int index, unsigned int desc_count, unsigned int desc_size);
void vnic_wq_copy_init(struct vnic_wq_copy *wq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset);
void vnic_wq_copy_clean(struct vnic_wq_copy *wq,
void (*q_clean)(struct vnic_wq_copy *wq,
struct fcpio_host_req *wq_desc));
