#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u32 ql_read_other_func_reg(struct ql_adapter *qdev,
u32 reg)
static int ql_write_other_func_reg(struct ql_adapter *qdev,
u32 reg, u32 reg_val)
static int ql_wait_other_func_reg_rdy(struct ql_adapter *qdev, u32 reg,
u32 bit, u32 err_bit)
static int ql_read_other_func_serdes_reg(struct ql_adapter *qdev, u32 reg,
u32 *data)
static int ql_read_serdes_reg(struct ql_adapter *qdev, u32 reg, u32 * data)
static void ql_get_both_serdes(struct ql_adapter *qdev, u32 addr,
u32 *direct_ptr, u32 *indirect_ptr,
unsigned int direct_valid, unsigned int indirect_valid)
static int ql_get_serdes_regs(struct ql_adapter *qdev,
struct ql_mpi_coredump *mpi_coredump)
static int ql_read_other_func_xgmac_reg(struct ql_adapter *qdev, u32 reg,
u32 *data)
static int ql_get_xgmac_regs(struct ql_adapter *qdev, u32 * buf,
unsigned int other_function)
static int ql_get_ets_regs(struct ql_adapter *qdev, u32 * buf)
static void ql_get_intr_states(struct ql_adapter *qdev, u32 * buf)
static int ql_get_cam_entries(struct ql_adapter *qdev, u32 * buf)
static int ql_get_routing_entries(struct ql_adapter *qdev, u32 * buf)
static int ql_get_mpi_shadow_regs(struct ql_adapter *qdev, u32 * buf)
static int ql_get_mpi_regs(struct ql_adapter *qdev, u32 * buf,
u32 offset, u32 count)
static unsigned int *ql_get_probe(struct ql_adapter *qdev, u32 clock,
u32 valid, u32 *buf)
static int ql_get_probe_dump(struct ql_adapter *qdev, unsigned int *buf)
static int ql_get_routing_index_registers(struct ql_adapter *qdev, u32 *buf)
static void ql_get_mac_protocol_registers(struct ql_adapter *qdev, u32 *buf)
static void ql_get_sem_registers(struct ql_adapter *qdev, u32 *buf)
static void ql_build_coredump_seg_header(
struct mpi_coredump_segment_header *seg_hdr,
u32 seg_number, u32 seg_size, u8 *desc)
int ql_core_dump(struct ql_adapter *qdev, struct ql_mpi_coredump *mpi_coredump)
static void ql_get_core_dump(struct ql_adapter *qdev)
void ql_gen_reg_dump(struct ql_adapter *qdev,
struct ql_reg_dump *mpi_coredump)
void ql_get_dump(struct ql_adapter *qdev, void *buff)
void ql_mpi_core_to_log(struct work_struct *work)
static void ql_dump_intr_states(struct ql_adapter *qdev)
#define DUMP_XGMAC(qdev, reg)					\
do  while (0)
void ql_dump_xgmac_control_regs(struct ql_adapter *qdev)
static void ql_dump_ets_regs(struct ql_adapter *qdev)
static void ql_dump_cam_entries(struct ql_adapter *qdev)
void ql_dump_routing_entries(struct ql_adapter *qdev)
#define DUMP_REG(qdev, reg)			\
pr_err("%-32s= 0x%x\n", #reg, ql_read32(qdev, reg))
void ql_dump_regs(struct ql_adapter *qdev)
#define DUMP_STAT(qdev, stat)	\
pr_err("%s = %ld\n", #stat, (unsigned long)qdev->nic_stats.stat)
void ql_dump_stat(struct ql_adapter *qdev)
;
#define DUMP_QDEV_FIELD(qdev, type, field)		\
pr_err("qdev->%-24s = " type "\n", #field, qdev->field)
#define DUMP_QDEV_DMA_FIELD(qdev, field)		\
pr_err("qdev->%-24s = %llx\n", #field, (unsigned long long)qdev->field)
#define DUMP_QDEV_ARRAY(qdev, type, array, index, field) \
pr_err("%s[%d].%s = " type "\n",		 \
#array, index, #field, qdev->array[index].field);
void ql_dump_qdev(struct ql_adapter *qdev)
void ql_dump_wqicb(struct wqicb *wqicb)
void ql_dump_tx_ring(struct tx_ring *tx_ring)
void ql_dump_ricb(struct ricb *ricb)
void ql_dump_cqicb(struct cqicb *cqicb)
void ql_dump_rx_ring(struct rx_ring *rx_ring)
void ql_dump_hw_cb(struct ql_adapter *qdev, int size, u32 bit, u16 q_id)
void ql_dump_tx_desc(struct tx_buf_desc *tbd)
void ql_dump_ob_mac_iocb(struct ob_mac_iocb_req *ob_mac_iocb)
void ql_dump_ob_mac_rsp(struct ob_mac_iocb_rsp *ob_mac_rsp)
void ql_dump_ib_mac_rsp(struct ib_mac_iocb_rsp *ib_mac_rsp)
void ql_dump_all(struct ql_adapter *qdev)
