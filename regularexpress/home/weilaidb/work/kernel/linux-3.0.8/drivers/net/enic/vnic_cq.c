void vnic_cq_free(struct vnic_cq *cq)
int vnic_cq_alloc(struct vnic_dev *vdev, struct vnic_cq *cq, unsigned int index,
unsigned int desc_count, unsigned int desc_size)
void vnic_cq_init(struct vnic_cq *cq, unsigned int flow_control_enable,
unsigned int color_enable, unsigned int cq_head, unsigned int cq_tail,
unsigned int cq_tail_color, unsigned int interrupt_enable,
unsigned int cq_entry_enable, unsigned int cq_message_enable,
unsigned int interrupt_offset, u64 cq_message_addr)
void vnic_cq_clean(struct vnic_cq *cq)
