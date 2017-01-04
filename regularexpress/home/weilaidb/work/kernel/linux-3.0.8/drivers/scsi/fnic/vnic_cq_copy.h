#define _VNIC_CQ_COPY_H_
static inline unsigned int vnic_cq_copy_service(
struct vnic_cq *cq,
int (*q_service)(struct vnic_dev *vdev,
unsigned int index,
struct fcpio_fw_req *desc),
unsigned int work_to_do)
