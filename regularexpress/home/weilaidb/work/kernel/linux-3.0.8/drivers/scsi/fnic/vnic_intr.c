void vnic_intr_free(struct vnic_intr *intr)
int vnic_intr_alloc(struct vnic_dev *vdev, struct vnic_intr *intr,
unsigned int index)
void vnic_intr_init(struct vnic_intr *intr, unsigned int coalescing_timer,
unsigned int coalescing_type, unsigned int mask_on_assertion)
void vnic_intr_clean(struct vnic_intr *intr)
