#define _QLGE_H_
#define DRV_NAME  	"qlge"
#define DRV_STRING 	"QLogic 10 Gigabit PCI-E Ethernet Driver "
#define DRV_VERSION	"v1.00.00.29.00.00-01"
#define WQ_ADDR_ALIGN	0x3
#define QLGE_VENDOR_ID    0x1077
#define QLGE_DEVICE_ID_8012	0x8012
#define QLGE_DEVICE_ID_8000	0x8000
#define MAX_CPUS 8
#define MAX_TX_RINGS MAX_CPUS
#define MAX_RX_RINGS ((MAX_CPUS * 2) + 1)
#define NUM_TX_RING_ENTRIES	256
#define NUM_RX_RING_ENTRIES	256
#define NUM_SMALL_BUFFERS   512
#define NUM_LARGE_BUFFERS   512
#define DB_PAGE_SIZE 4096
#define MAX_DB_PAGES_PER_BQ(x) \
(((x * sizeof(u64)) / DB_PAGE_SIZE) + \
(((x * sizeof(u64)) % DB_PAGE_SIZE) ? 1 : 0))
#define RX_RING_SHADOW_SPACE	(sizeof(u64) + \
MAX_DB_PAGES_PER_BQ(NUM_SMALL_BUFFERS) * sizeof(u64) + \
MAX_DB_PAGES_PER_BQ(NUM_LARGE_BUFFERS) * sizeof(u64))
#define LARGE_BUFFER_MAX_SIZE 8192
#define LARGE_BUFFER_MIN_SIZE 2048
#define MAX_CQ 128
#define DFLT_COALESCE_WAIT 100
#define MAX_INTER_FRAME_WAIT 10
#define DFLT_INTER_FRAME_WAIT (MAX_INTER_FRAME_WAIT/2)
#define UDELAY_COUNT 3
#define UDELAY_DELAY 100
#define TX_DESC_PER_IOCB 8
#if (PAGE_SHIFT == 12) || (PAGE_SHIFT == 13)
#define TX_DESC_PER_OAL ((MAX_SKB_FRAGS - TX_DESC_PER_IOCB) + 2)
#define TX_DESC_PER_OAL 0
#define LSW(x)  ((u16)(x))
#define MSW(x)  ((u16)((u32)(x) >> 16))
#define LSD(x)  ((u32)((u64)(x)))
#define MSD(x)  ((u32)((((u64)(x)) >> 32)))
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define SMALL_BUFFER_SIZE 256
#define SMALL_BUF_MAP_SIZE SMALL_BUFFER_SIZE
#define SPLT_SETTING  FSC_DBRST_1024
#define SPLT_LEN 0
#define QLGE_SB_PAD 0
#define SMALL_BUFFER_SIZE 512
#define SMALL_BUF_MAP_SIZE (SMALL_BUFFER_SIZE / 2)
#define SPLT_SETTING  FSC_SH
#define SPLT_LEN (SPLT_HDR_EP | \
min(SMALL_BUF_MAP_SIZE, 1023))
#define QLGE_SB_PAD 32
enum ;
enum ;
struct mbox_params ;
struct flash_params_8012 ;
#define FUNC0_FLASH_OFFSET 0x140200
#define FUNC1_FLASH_OFFSET 0x140600
struct flash_params_8000 ;
union flash_params ;
struct rx_doorbell_context ;
struct tx_doorbell_context ;
struct tx_buf_desc  __packed;
#define OPCODE_OB_MAC_IOCB 			0x01
#define OPCODE_OB_MAC_TSO_IOCB		0x02
#define OPCODE_IB_MAC_IOCB			0x20
#define OPCODE_IB_MPI_IOCB			0x21
#define OPCODE_IB_AE_IOCB			0x3f
struct ob_mac_iocb_req  __packed;
struct ob_mac_iocb_rsp  __packed;
struct ob_mac_tso_iocb_req  __packed;
struct ob_mac_tso_iocb_rsp  __packed;
struct ib_mac_iocb_rsp  __packed;
struct ib_ae_iocb_rsp  __packed;
struct ql_net_rsp_iocb  __packed;
struct net_req_iocb  __packed;
struct wqicb  __packed;
struct cqicb  __packed;
struct ricb  __packed;
struct oal ;
struct map_list ;
struct tx_ring_desc ;
struct page_chunk ;
struct bq_desc ;
#define QL_TXQ_IDX(qdev, skb) (smp_processor_id()%(qdev->tx_ring_count))
struct tx_ring ;
enum ;
struct rx_ring ;
struct hash_id ;
struct nic_stats ;
enum ;
#define MPI_COREDUMP_COOKIE 0x5555aaaa
struct mpi_coredump_global_header ;
struct mpi_coredump_segment_header ;
enum ;
#define NIC_REGS_DUMP_WORD_COUNT		64
#define XGMAC_DUMP_WORD_COUNT		(XGMAC_REGISTER_END / 4)
#define XG_SERDES_XAUI_AN_COUNT		14
#define XG_SERDES_XAUI_HSS_PCS_COUNT	33
#define XG_SERDES_XFI_AN_COUNT		14
#define XG_SERDES_XFI_TRAIN_COUNT		12
#define XG_SERDES_XFI_HSS_PCS_COUNT	15
#define XG_SERDES_XFI_HSS_TX_COUNT		32
#define XG_SERDES_XFI_HSS_RX_COUNT		32
#define XG_SERDES_XFI_HSS_PLL_COUNT	32
#define ETS_REGS_DUMP_WORD_COUNT		10
#define PRB_MX_ADDR_PRB_WORD_COUNT		(1 + (PRB_MX_ADDR_MAX_MUX * 2))
#define PRB_MX_DUMP_TOT_COUNT		(PRB_MX_ADDR_PRB_WORD_COUNT * \
PRB_MX_ADDR_VALID_TOTAL)
#define RT_IDX_DUMP_ENTRIES			48
#define RT_IDX_DUMP_WORDS_PER_ENTRY	4
#define RT_IDX_DUMP_TOT_WORDS		(RT_IDX_DUMP_ENTRIES * \
RT_IDX_DUMP_WORDS_PER_ENTRY)
#define MAC_ADDR_DUMP_ENTRIES \
((MAC_ADDR_MAX_CAM_ENTRIES * MAC_ADDR_MAX_CAM_WCOUNT) + \
(MAC_ADDR_MAX_MULTICAST_ENTRIES * MAC_ADDR_MAX_MULTICAST_WCOUNT) + \
(MAC_ADDR_MAX_VLAN_ENTRIES * MAC_ADDR_MAX_VLAN_WCOUNT) + \
(MAC_ADDR_MAX_MCAST_FLTR_ENTRIES * MAC_ADDR_MAX_MCAST_FLTR_WCOUNT) + \
(MAC_ADDR_MAX_FC_MAC_ENTRIES * MAC_ADDR_MAX_FC_MAC_WCOUNT) + \
(MAC_ADDR_MAX_MGMT_MAC_ENTRIES * MAC_ADDR_MAX_MGMT_MAC_WCOUNT) + \
(MAC_ADDR_MAX_MGMT_VLAN_ENTRIES * MAC_ADDR_MAX_MGMT_VLAN_WCOUNT) + \
(MAC_ADDR_MAX_MGMT_V4_ENTRIES * MAC_ADDR_MAX_MGMT_V4_WCOUNT) + \
(MAC_ADDR_MAX_MGMT_V6_ENTRIES * MAC_ADDR_MAX_MGMT_V6_WCOUNT) + \
(MAC_ADDR_MAX_MGMT_TU_DP_ENTRIES * MAC_ADDR_MAX_MGMT_TU_DP_WCOUNT))
#define MAC_ADDR_DUMP_WORDS_PER_ENTRY	2
#define MAC_ADDR_DUMP_TOT_WORDS		(MAC_ADDR_DUMP_ENTRIES * \
MAC_ADDR_DUMP_WORDS_PER_ENTRY)
#define MAX_SEMAPHORE_FUNCTIONS		4
#define RISC_124		0x0003007c
#define RISC_127		0x0003007f
#define SHADOW_OFFSET	0xb0000000
#define SHADOW_REG_SHIFT	20
struct ql_nic_misc ;
struct ql_reg_dump ;
struct ql_mpi_coredump ;
struct intr_context ;
enum ;
enum ;
enum ;
struct nic_operations ;
struct ql_adapter ;
static inline u32 ql_read32(const struct ql_adapter *qdev, int reg)
static inline void ql_write32(const struct ql_adapter *qdev, int reg, u32 val)
static inline void ql_write_db_reg(u32 val, void __iomem *addr)
static inline u32 ql_read_sh_reg(__le32  *addr)
extern char qlge_driver_name[];
extern const char qlge_driver_version[];
extern const struct ethtool_ops qlge_ethtool_ops;
extern int ql_sem_spinlock(struct ql_adapter *qdev, u32 sem_mask);
extern void ql_sem_unlock(struct ql_adapter *qdev, u32 sem_mask);
extern int ql_read_xgmac_reg(struct ql_adapter *qdev, u32 reg, u32 *data);
extern int ql_get_mac_addr_reg(struct ql_adapter *qdev, u32 type, u16 index,
u32 *value);
extern int ql_get_routing_reg(struct ql_adapter *qdev, u32 index, u32 *value);
extern int ql_write_cfg(struct ql_adapter *qdev, void *ptr, int size, u32 bit,
u16 q_id);
void ql_queue_fw_error(struct ql_adapter *qdev);
void ql_mpi_work(struct work_struct *work);
void ql_mpi_reset_work(struct work_struct *work);
void ql_mpi_core_to_log(struct work_struct *work);
int ql_wait_reg_rdy(struct ql_adapter *qdev, u32 reg, u32 bit, u32 ebit);
void ql_queue_asic_error(struct ql_adapter *qdev);
u32 ql_enable_completion_interrupt(struct ql_adapter *qdev, u32 intr);
void ql_set_ethtool_ops(struct net_device *ndev);
int ql_read_xgmac_reg64(struct ql_adapter *qdev, u32 reg, u64 *data);
void ql_mpi_idc_work(struct work_struct *work);
void ql_mpi_port_cfg_work(struct work_struct *work);
int ql_mb_get_fw_state(struct ql_adapter *qdev);
int ql_cam_route_initialize(struct ql_adapter *qdev);
int ql_read_mpi_reg(struct ql_adapter *qdev, u32 reg, u32 *data);
int ql_write_mpi_reg(struct ql_adapter *qdev, u32 reg, u32 data);
int ql_unpause_mpi_risc(struct ql_adapter *qdev);
int ql_pause_mpi_risc(struct ql_adapter *qdev);
int ql_hard_reset_mpi_risc(struct ql_adapter *qdev);
int ql_soft_reset_mpi_risc(struct ql_adapter *qdev);
int ql_dump_risc_ram_area(struct ql_adapter *qdev, void *buf,
u32 ram_addr, int word_count);
int ql_core_dump(struct ql_adapter *qdev,
struct ql_mpi_coredump *mpi_coredump);
int ql_mb_about_fw(struct ql_adapter *qdev);
int ql_mb_wol_set_magic(struct ql_adapter *qdev, u32 enable_wol);
int ql_mb_wol_mode(struct ql_adapter *qdev, u32 wol);
int ql_mb_set_led_cfg(struct ql_adapter *qdev, u32 led_config);
int ql_mb_get_led_cfg(struct ql_adapter *qdev);
void ql_link_on(struct ql_adapter *qdev);
void ql_link_off(struct ql_adapter *qdev);
int ql_mb_set_mgmnt_traffic_ctl(struct ql_adapter *qdev, u32 control);
int ql_mb_get_port_cfg(struct ql_adapter *qdev);
int ql_mb_set_port_cfg(struct ql_adapter *qdev);
int ql_wait_fifo_empty(struct ql_adapter *qdev);
void ql_get_dump(struct ql_adapter *qdev, void *buff);
void ql_gen_reg_dump(struct ql_adapter *qdev,
struct ql_reg_dump *mpi_coredump);
netdev_tx_t ql_lb_send(struct sk_buff *skb, struct net_device *ndev);
void ql_check_lb_frame(struct ql_adapter *, struct sk_buff *);
int ql_own_firmware(struct ql_adapter *qdev);
int ql_clean_lb_rx_ring(struct rx_ring *rx_ring, int budget);
extern void ql_dump_xgmac_control_regs(struct ql_adapter *qdev);
extern void ql_dump_routing_entries(struct ql_adapter *qdev);
extern void ql_dump_regs(struct ql_adapter *qdev);
#define QL_DUMP_REGS(qdev) ql_dump_regs(qdev)
#define QL_DUMP_ROUTE(qdev) ql_dump_routing_entries(qdev)
#define QL_DUMP_XGMAC_CONTROL_REGS(qdev) ql_dump_xgmac_control_regs(qdev)
#define QL_DUMP_REGS(qdev)
#define QL_DUMP_ROUTE(qdev)
#define QL_DUMP_XGMAC_CONTROL_REGS(qdev)
extern void ql_dump_stat(struct ql_adapter *qdev);
#define QL_DUMP_STAT(qdev) ql_dump_stat(qdev)
#define QL_DUMP_STAT(qdev)
extern void ql_dump_qdev(struct ql_adapter *qdev);
#define QL_DUMP_QDEV(qdev) ql_dump_qdev(qdev)
#define QL_DUMP_QDEV(qdev)
extern void ql_dump_wqicb(struct wqicb *wqicb);
extern void ql_dump_tx_ring(struct tx_ring *tx_ring);
extern void ql_dump_ricb(struct ricb *ricb);
extern void ql_dump_cqicb(struct cqicb *cqicb);
extern void ql_dump_rx_ring(struct rx_ring *rx_ring);
extern void ql_dump_hw_cb(struct ql_adapter *qdev, int size, u32 bit, u16 q_id);
#define QL_DUMP_RICB(ricb) ql_dump_ricb(ricb)
#define QL_DUMP_WQICB(wqicb) ql_dump_wqicb(wqicb)
#define QL_DUMP_TX_RING(tx_ring) ql_dump_tx_ring(tx_ring)
#define QL_DUMP_CQICB(cqicb) ql_dump_cqicb(cqicb)
#define QL_DUMP_RX_RING(rx_ring) ql_dump_rx_ring(rx_ring)
#define QL_DUMP_HW_CB(qdev, size, bit, q_id) \
ql_dump_hw_cb(qdev, size, bit, q_id)
#define QL_DUMP_RICB(ricb)
#define QL_DUMP_WQICB(wqicb)
#define QL_DUMP_TX_RING(tx_ring)
#define QL_DUMP_CQICB(cqicb)
#define QL_DUMP_RX_RING(rx_ring)
#define QL_DUMP_HW_CB(qdev, size, bit, q_id)
extern void ql_dump_tx_desc(struct tx_buf_desc *tbd);
extern void ql_dump_ob_mac_iocb(struct ob_mac_iocb_req *ob_mac_iocb);
extern void ql_dump_ob_mac_rsp(struct ob_mac_iocb_rsp *ob_mac_rsp);
#define QL_DUMP_OB_MAC_IOCB(ob_mac_iocb) ql_dump_ob_mac_iocb(ob_mac_iocb)
#define QL_DUMP_OB_MAC_RSP(ob_mac_rsp) ql_dump_ob_mac_rsp(ob_mac_rsp)
#define QL_DUMP_OB_MAC_IOCB(ob_mac_iocb)
#define QL_DUMP_OB_MAC_RSP(ob_mac_rsp)
extern void ql_dump_ib_mac_rsp(struct ib_mac_iocb_rsp *ib_mac_rsp);
#define QL_DUMP_IB_MAC_RSP(ib_mac_rsp) ql_dump_ib_mac_rsp(ib_mac_rsp)
#define QL_DUMP_IB_MAC_RSP(ib_mac_rsp)
extern void ql_dump_all(struct ql_adapter *qdev);
#define QL_DUMP_ALL(qdev) ql_dump_all(qdev)
#define QL_DUMP_ALL(qdev)
