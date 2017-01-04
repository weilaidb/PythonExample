static int vnic_rq_alloc_bufs(struct vnic_rq *rq)
void vnic_rq_free(struct vnic_rq *rq)
int vnic_rq_alloc(struct vnic_dev *vdev, struct vnic_rq *rq, unsigned int index,
unsigned int desc_count, unsigned int desc_size)
static void vnic_rq_init_start(struct vnic_rq *rq, unsigned int cq_index,
unsigned int fetch_index, unsigned int posted_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset)
void vnic_rq_init(struct vnic_rq *rq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset)
unsigned int vnic_rq_error_status(struct vnic_rq *rq)
void vnic_rq_enable(struct vnic_rq *rq)
int vnic_rq_disable(struct vnic_rq *rq)
void vnic_rq_clean(struct vnic_rq *rq,
void (*buf_clean)(struct vnic_rq *rq, struct vnic_rq_buf *buf))
