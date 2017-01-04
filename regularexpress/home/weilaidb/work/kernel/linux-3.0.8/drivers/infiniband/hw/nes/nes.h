#define __NES_H
#define NES_SEND_FIRST_WRITE
#define QUEUE_DISCONNECTS
#define DRV_NAME    "iw_nes"
#define DRV_VERSION "1.5.0.0"
#define PFX         DRV_NAME ": "
#define PCI_VENDOR_ID_NETEFFECT          0x1678
#define PCI_DEVICE_ID_NETEFFECT_NE020    0x0100
#define PCI_DEVICE_ID_NETEFFECT_NE020_KR 0x0110
#define NE020_REV   4
#define NE020_REV1  5
#define BAR_0       0
#define BAR_1       2
#define RX_BUF_SIZE             (1536 + 8)
#define NES_REG0_SIZE           (4 * 1024)
#define NES_TX_TIMEOUT          (6*HZ)
#define NES_FIRST_QPN           64
#define NES_SW_CONTEXT_ALIGN    1024
#define NES_NIC_MAX_NICS        16
#define NES_MAX_ARP_TABLE_SIZE  4096
#define NES_NIC_CEQ_SIZE        8
#define NES_CCEQ_SIZE ((nesadapter->max_cq / nesadapter->port_count) - 32)
#define NES_MAX_PORT_COUNT 4
#define MAX_DPC_ITERATIONS               128
#define NES_DRV_OPT_ENABLE_MPA_VER_0     0x00000001
#define NES_DRV_OPT_DISABLE_MPA_CRC      0x00000002
#define NES_DRV_OPT_DISABLE_FIRST_WRITE  0x00000004
#define NES_DRV_OPT_DISABLE_INTF         0x00000008
#define NES_DRV_OPT_ENABLE_MSI           0x00000010
#define NES_DRV_OPT_DUAL_LOGICAL_PORT    0x00000020
#define NES_DRV_OPT_SUPRESS_OPTION_BC    0x00000040
#define NES_DRV_OPT_NO_INLINE_DATA       0x00000080
#define NES_DRV_OPT_DISABLE_INT_MOD      0x00000100
#define NES_DRV_OPT_DISABLE_VIRT_WQ      0x00000200
#define NES_AEQ_EVENT_TIMEOUT         2500
#define NES_DISCONNECT_EVENT_TIMEOUT  2000
#define NES_DBG_HW          0x00000001
#define NES_DBG_INIT        0x00000002
#define NES_DBG_ISR         0x00000004
#define NES_DBG_PHY         0x00000008
#define NES_DBG_NETDEV      0x00000010
#define NES_DBG_CM          0x00000020
#define NES_DBG_CM1         0x00000040
#define NES_DBG_NIC_RX      0x00000080
#define NES_DBG_NIC_TX      0x00000100
#define NES_DBG_CQP         0x00000200
#define NES_DBG_MMAP        0x00000400
#define NES_DBG_MR          0x00000800
#define NES_DBG_PD          0x00001000
#define NES_DBG_CQ          0x00002000
#define NES_DBG_QP          0x00004000
#define NES_DBG_MOD_QP      0x00008000
#define NES_DBG_AEQ         0x00010000
#define NES_DBG_IW_RX       0x00020000
#define NES_DBG_IW_TX       0x00040000
#define NES_DBG_SHUTDOWN    0x00080000
#define NES_DBG_RSVD1       0x10000000
#define NES_DBG_RSVD2       0x20000000
#define NES_DBG_RSVD3       0x40000000
#define NES_DBG_RSVD4       0x80000000
#define NES_DBG_ALL         0xffffffff
#define nes_debug(level, fmt, args...) \
do  while (0)
#define assert(expr) \
do  while (0)
#define NES_EVENT_TIMEOUT   1200000
#define nes_debug(level, fmt, args...)
#define assert(expr)          do  while (0)
#define NES_EVENT_TIMEOUT   100000
extern int max_mtu;
#define max_frame_len (max_mtu+ETH_HLEN)
extern int interrupt_mod_interval;
extern int nes_if_count;
extern int mpa_version;
extern int disable_mpa_crc;
extern unsigned int send_first;
extern unsigned int nes_drv_opt;
extern unsigned int nes_debug_level;
extern unsigned int wqm_quanta;
extern struct list_head nes_adapter_list;
extern atomic_t cm_connects;
extern atomic_t cm_accepts;
extern atomic_t cm_disconnects;
extern atomic_t cm_closes;
extern atomic_t cm_connecteds;
extern atomic_t cm_connect_reqs;
extern atomic_t cm_rejects;
extern atomic_t mod_qp_timouts;
extern atomic_t qps_created;
extern atomic_t qps_destroyed;
extern atomic_t sw_qps_destroyed;
extern u32 mh_detected;
extern u32 mh_pauses_sent;
extern u32 cm_packets_sent;
extern u32 cm_packets_bounced;
extern u32 cm_packets_created;
extern u32 cm_packets_received;
extern u32 cm_packets_dropped;
extern u32 cm_packets_retrans;
extern atomic_t cm_listens_created;
extern atomic_t cm_listens_destroyed;
extern u32 cm_backlog_drops;
extern atomic_t cm_loopbacks;
extern atomic_t cm_nodes_created;
extern atomic_t cm_nodes_destroyed;
extern atomic_t cm_accel_dropped_pkts;
extern atomic_t cm_resets_recvd;
extern u32 int_mod_timer_init;
extern u32 int_mod_cq_depth_256;
extern u32 int_mod_cq_depth_128;
extern u32 int_mod_cq_depth_32;
extern u32 int_mod_cq_depth_24;
extern u32 int_mod_cq_depth_16;
extern u32 int_mod_cq_depth_4;
extern u32 int_mod_cq_depth_1;
struct nes_device ;
static inline __le32 get_crc_value(struct nes_v4_quad *nes_quad)
static inline void
set_wqe_64bit_value(__le32 *wqe_words, u32 index, u64 value)
static inline void
set_wqe_32bit_value(__le32 *wqe_words, u32 index, u32 value)
static inline void
nes_fill_init_cqp_wqe(struct nes_hw_cqp_wqe *cqp_wqe, struct nes_device *nesdev)
static inline void
nes_fill_init_qp_wqe(struct nes_hw_qp_wqe *wqe, struct nes_qp *nesqp, u32 head)
static inline u32 nes_read_indexed(struct nes_device *nesdev, u32 reg_index)
static inline u32 nes_read32(const void __iomem *addr)
static inline u16 nes_read16(const void __iomem *addr)
static inline u8 nes_read8(const void __iomem *addr)
static inline void nes_write_indexed(struct nes_device *nesdev, u32 reg_index, u32 val)
static inline void nes_write32(void __iomem *addr, u32 val)
static inline void nes_write16(void __iomem *addr, u16 val)
static inline void nes_write8(void __iomem *addr, u8 val)
static inline int nes_alloc_resource(struct nes_adapter *nesadapter,
unsigned long *resource_array, u32 max_resources,
u32 *req_resource_num, u32 *next)
static inline int nes_is_resource_allocated(struct nes_adapter *nesadapter,
unsigned long *resource_array, u32 resource_num)
static inline void nes_free_resource(struct nes_adapter *nesadapter,
unsigned long *resource_array, u32 resource_num)
static inline struct nes_vnic *to_nesvnic(struct ib_device *ibdev)
static inline struct nes_pd *to_nespd(struct ib_pd *ibpd)
static inline struct nes_ucontext *to_nesucontext(struct ib_ucontext *ibucontext)
static inline struct nes_mr *to_nesmr(struct ib_mr *ibmr)
static inline struct nes_mr *to_nesmr_from_ibfmr(struct ib_fmr *ibfmr)
static inline struct nes_mr *to_nesmw(struct ib_mw *ibmw)
static inline struct nes_fmr *to_nesfmr(struct nes_mr *nesmr)
static inline struct nes_cq *to_nescq(struct ib_cq *ibcq)
static inline struct nes_qp *to_nesqp(struct ib_qp *ibqp)
void nes_add_ref(struct ib_qp *);
void nes_rem_ref(struct ib_qp *);
struct ib_qp *nes_get_qp(struct ib_device *, int);
struct nes_adapter *nes_init_adapter(struct nes_device *, u8);
void  nes_nic_init_timer_defaults(struct nes_device *, u8);
void nes_destroy_adapter(struct nes_adapter *);
int nes_init_cqp(struct nes_device *);
int nes_init_phy(struct nes_device *);
int nes_init_nic_qp(struct nes_device *, struct net_device *);
void nes_destroy_nic_qp(struct nes_vnic *);
int nes_napi_isr(struct nes_device *);
void nes_dpc(unsigned long);
void nes_nic_ce_handler(struct nes_device *, struct nes_hw_nic_cq *);
void nes_iwarp_ce_handler(struct nes_device *, struct nes_hw_cq *);
int nes_destroy_cqp(struct nes_device *);
int nes_nic_cm_xmit(struct sk_buff *, struct net_device *);
void nes_recheck_link_status(struct work_struct *work);
struct net_device *nes_netdev_init(struct nes_device *, void __iomem *);
void nes_netdev_destroy(struct net_device *);
int nes_nic_cm_xmit(struct sk_buff *, struct net_device *);
void *nes_cm_create(struct net_device *);
int nes_cm_recv(struct sk_buff *, struct net_device *);
void nes_update_arp(unsigned char *, u32, u32, u16, u16);
void nes_manage_arp_cache(struct net_device *, unsigned char *, u32, u32);
void nes_sock_release(struct nes_qp *, unsigned long *);
void flush_wqes(struct nes_device *nesdev, struct nes_qp *, u32, u32);
int nes_manage_apbvt(struct nes_vnic *, u32, u32, u32);
int nes_cm_disconn(struct nes_qp *);
void nes_cm_disconn_worker(void *);
int nes_hw_modify_qp(struct nes_device *, struct nes_qp *, u32, u32, u32);
int nes_modify_qp(struct ib_qp *, struct ib_qp_attr *, int, struct ib_udata *);
struct nes_ib_device *nes_init_ofa_device(struct net_device *);
void  nes_port_ibevent(struct nes_vnic *nesvnic);
void nes_destroy_ofa_device(struct nes_ib_device *);
int nes_register_ofa_device(struct nes_ib_device *);
int nes_read_eeprom_values(struct nes_device *, struct nes_adapter *);
void nes_write_1G_phy_reg(struct nes_device *, u8, u8, u16);
void nes_read_1G_phy_reg(struct nes_device *, u8, u8, u16 *);
void nes_write_10G_phy_reg(struct nes_device *, u16, u8, u16, u16);
void nes_read_10G_phy_reg(struct nes_device *, u8, u8, u16);
struct nes_cqp_request *nes_get_cqp_request(struct nes_device *);
void nes_free_cqp_request(struct nes_device *nesdev,
struct nes_cqp_request *cqp_request);
void nes_put_cqp_request(struct nes_device *nesdev,
struct nes_cqp_request *cqp_request);
void nes_post_cqp_request(struct nes_device *, struct nes_cqp_request *);
int nes_arp_table(struct nes_device *, u32, u8 *, u32);
void nes_mh_fix(unsigned long);
void nes_clc(unsigned long);
void nes_dump_mem(unsigned int, void *, int);
u32 nes_crc32(u32, u32, u32, u32, u8 *, u32, u32, u32);
