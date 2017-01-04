void vnic_wq_copy_enable(struct vnic_wq_copy *wq)
int vnic_wq_copy_disable(struct vnic_wq_copy *wq)
void vnic_wq_copy_clean(struct vnic_wq_copy *wq,
void (*q_clean)(struct vnic_wq_copy *wq,
struct fcpio_host_req *wq_desc))
void vnic_wq_copy_free(struct vnic_wq_copy *wq)
int vnic_wq_copy_alloc(struct vnic_dev *vdev, struct vnic_wq_copy *wq,
unsigned int index, unsigned int desc_count,
unsigned int desc_size)
void vnic_wq_copy_init(struct vnic_wq_copy *wq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset)
