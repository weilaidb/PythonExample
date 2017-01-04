static int vnic_wq_alloc_bufs(struct vnic_wq *wq)
void vnic_wq_free(struct vnic_wq *wq)
int vnic_wq_alloc(struct vnic_dev *vdev, struct vnic_wq *wq, unsigned int index,
unsigned int desc_count, unsigned int desc_size)
static void vnic_wq_init_start(struct vnic_wq *wq, unsigned int cq_index,
unsigned int fetch_index, unsigned int posted_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset)
void vnic_wq_init(struct vnic_wq *wq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset)
unsigned int vnic_wq_error_status(struct vnic_wq *wq)
void vnic_wq_enable(struct vnic_wq *wq)
int vnic_wq_disable(struct vnic_wq *wq)
void vnic_wq_clean(struct vnic_wq *wq,
void (*buf_clean)(struct vnic_wq *wq, struct vnic_wq_buf *buf))
