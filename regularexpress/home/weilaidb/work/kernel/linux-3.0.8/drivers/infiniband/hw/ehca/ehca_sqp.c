#define IB_MAD_STATUS_REDIRECT		cpu_to_be16(0x0002)
#define IB_MAD_STATUS_UNSUP_VERSION	cpu_to_be16(0x0004)
#define IB_MAD_STATUS_UNSUP_METHOD	cpu_to_be16(0x0008)
#define IB_PMA_CLASS_PORT_INFO		cpu_to_be16(0x0001)
u64 ehca_define_sqp(struct ehca_shca *shca,
struct ehca_qp *ehca_qp,
struct ib_qp_init_attr *qp_init_attr)
struct ib_perf  __attribute__ ((packed));
struct tcslfl  __attribute__ ((packed));
struct vertcfl  __attribute__ ((packed));
static int ehca_process_perf(struct ib_device *ibdev, u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
int ehca_process_mad(struct ib_device *ibdev, int mad_flags, u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
