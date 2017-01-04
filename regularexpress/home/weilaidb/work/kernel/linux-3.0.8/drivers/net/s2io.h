#define _S2IO_H
#define TBD 0
#define s2BIT(loc)		(0x8000000000000000ULL >> (loc))
#define vBIT(val, loc, sz)	(((u64)val) << (64-loc-sz))
#define INV(d)  ((d&0xff)<<24) | (((d>>8)&0xff)<<16) | (((d>>16)&0xff)<<8)| ((d>>24)&0xff)
#undef SUCCESS
#define SUCCESS 0
#define FAILURE -1
#define S2IO_MINUS_ONE 0xFFFFFFFFFFFFFFFFULL
#define S2IO_DISABLE_MAC_ENTRY 0xFFFFFFFFFFFFULL
#define S2IO_MAX_PCI_CONFIG_SPACE_REINIT 100
#define S2IO_BIT_RESET 1
#define S2IO_BIT_SET 2
#define CHECKBIT(value, nbit) (value & (1 << nbit))
#define MAX_FLICKER_TIME	60000
enum ;
#define XENA_MAX_OUTSTANDING_SPLITS(n) (n << 4)
#define WATCH_DOG_TIMEOUT		15*HZ
#define EFILL				0x1234
#define ALIGN_SIZE			127
#define	PCIX_COMMAND_REGISTER		0x62
#define	ERR_DBG		0
#define	INIT_DBG	1
#define	INFO_DBG	2
#define	TX_DBG		3
#define	INTR_DBG	4
static int debug_level = ERR_DBG;
#define DBG_PRINT(dbg_level, fmt, args...) do  while (0)
#define L3_CKSUM_OK 0xFFFF
#define L4_CKSUM_OK 0xFFFF
#define S2IO_JUMBO_SIZE 9600
struct swStat ;
struct xpakStat ;
struct stat_block ;
#define NO_STRIP_IN_PROMISC 2
#define MAX_TX_FIFOS 8
#define MAX_RX_RINGS 8
#define FIFO_DEFAULT_NUM	5
#define FIFO_UDP_MAX_NUM			2
#define FIFO_OTHER_MAX_NUM			1
#define MAX_RX_DESC_1  (MAX_RX_RINGS * MAX_RX_BLOCKS_PER_RING * 128)
#define MAX_RX_DESC_2  (MAX_RX_RINGS * MAX_RX_BLOCKS_PER_RING * 86)
#define MAX_TX_DESC    (MAX_AVAILABLE_TXDS)
static const int fifo_map[][MAX_TX_FIFOS] = ;
static const u16 fifo_selector[MAX_TX_FIFOS] = ;
struct tx_fifo_config ;
struct rx_ring_config ;
struct config_param ;
struct mac_addr ;
struct TxFIFO_element ;
struct TxD ;
struct list_info_hold ;
struct RxD_t ;
struct RxD1 ;
struct RxD3 ;
struct RxD_block ;
#define SIZE_OF_BLOCK	4096
#define RXD_MODE_1	0
#define RXD_MODE_3B	1
struct buffAdd ;
struct rx_curr_get_info ;
struct rx_curr_put_info ;
struct tx_curr_get_info ;
struct tx_curr_put_info ;
struct rxd_info ;
struct rx_block_info ;
struct lro  ____cacheline_aligned;
struct ring_info  ____cacheline_aligned;
struct fifo_info  ____cacheline_aligned;
struct mac_info ;
#define DEFAULT_FIFO_0_LEN 4096
#define DEFAULT_FIFO_1_7_LEN 512
#define SMALL_BLK_CNT	30
#define LARGE_BLK_CNT	100
#define MAX_REQUESTED_MSI_X	9
struct s2io_msix_entry
;
struct msix_info_st ;
enum s2io_device_state_t
;
struct s2io_nic ;
#define RESET_ERROR 1;
#define CMD_ERROR   2;
static inline u64 readq(void __iomem *addr)
static inline void writeq(u64 val, void __iomem *addr)
#define UF	1
#define LF	2
static inline void SPECIAL_REG_WRITE(u64 val, void __iomem *addr, int order)
#define ENABLE_INTRS    1
#define DISABLE_INTRS   2
#define TX_PIC_INTR     (0x0001<<0)
#define TX_DMA_INTR     (0x0001<<1)
#define TX_MAC_INTR     (0x0001<<2)
#define TX_XGXS_INTR    (0x0001<<3)
#define TX_TRAFFIC_INTR (0x0001<<4)
#define RX_PIC_INTR     (0x0001<<5)
#define RX_DMA_INTR     (0x0001<<6)
#define RX_MAC_INTR     (0x0001<<7)
#define RX_XGXS_INTR    (0x0001<<8)
#define RX_TRAFFIC_INTR (0x0001<<9)
#define MC_INTR         (0x0001<<10)
#define ENA_ALL_INTRS    (   TX_PIC_INTR     | \
TX_DMA_INTR     | \
TX_MAC_INTR     | \
TX_XGXS_INTR    | \
TX_TRAFFIC_INTR | \
RX_PIC_INTR     | \
RX_DMA_INTR     | \
RX_MAC_INTR     | \
RX_XGXS_INTR    | \
RX_TRAFFIC_INTR | \
MC_INTR )
#define DISABLE_ALL_INTRS   0xFFFFFFFFFFFFFFFFULL
#define TXPIC_INT_M         s2BIT(0)
#define TXDMA_INT_M         s2BIT(1)
#define TXMAC_INT_M         s2BIT(2)
#define TXXGXS_INT_M        s2BIT(3)
#define TXTRAFFIC_INT_M     s2BIT(8)
#define PIC_RX_INT_M        s2BIT(32)
#define RXDMA_INT_M         s2BIT(33)
#define RXMAC_INT_M         s2BIT(34)
#define MC_INT_M            s2BIT(35)
#define RXXGXS_INT_M        s2BIT(36)
#define RXTRAFFIC_INT_M     s2BIT(40)
#define TXDMA_PFC_INT_M     s2BIT(0)
#define TXDMA_PCC_INT_M     s2BIT(2)
#define PFC_MISC_ERR_1      s2BIT(0)
#define	PCC_FB_ECC_ERR	   vBIT(0xff, 16, 8)
#define RXD_GET_VLAN_TAG(Control_2) (u16)(Control_2 & MASK_VLAN_TAG)
static int __devinit s2io_init_nic(struct pci_dev *pdev,
const struct pci_device_id *pre);
static void __devexit s2io_rem_nic(struct pci_dev *pdev);
static int init_shared_mem(struct s2io_nic *sp);
static void free_shared_mem(struct s2io_nic *sp);
static int init_nic(struct s2io_nic *nic);
static int rx_intr_handler(struct ring_info *ring_data, int budget);
static void s2io_txpic_intr_handle(struct s2io_nic *sp);
static void tx_intr_handler(struct fifo_info *fifo_data);
static void s2io_handle_errors(void * dev_id);
static int s2io_starter(void);
static void s2io_closer(void);
static void s2io_tx_watchdog(struct net_device *dev);
static void s2io_set_multicast(struct net_device *dev);
static int rx_osm_handler(struct ring_info *ring_data, struct RxD_t * rxdp);
static void s2io_link(struct s2io_nic * sp, int link);
static void s2io_reset(struct s2io_nic * sp);
static int s2io_poll_msix(struct napi_struct *napi, int budget);
static int s2io_poll_inta(struct napi_struct *napi, int budget);
static void s2io_init_pci(struct s2io_nic * sp);
static int do_s2io_prog_unicast(struct net_device *dev, u8 *addr);
static void s2io_alarm_handle(unsigned long data);
static irqreturn_t
s2io_msix_ring_handle(int irq, void *dev_id);
static irqreturn_t
s2io_msix_fifo_handle(int irq, void *dev_id);
static irqreturn_t s2io_isr(int irq, void *dev_id);
static int verify_xena_quiescence(struct s2io_nic *sp);
static const struct ethtool_ops netdev_ethtool_ops;
static void s2io_set_link(struct work_struct *work);
static int s2io_set_swapper(struct s2io_nic * sp);
static void s2io_card_down(struct s2io_nic *nic);
static int s2io_card_up(struct s2io_nic *nic);
static int wait_for_cmd_complete(void __iomem *addr, u64 busy_bit,
int bit_state);
static int s2io_add_isr(struct s2io_nic * sp);
static void s2io_rem_isr(struct s2io_nic * sp);
static void restore_xmsi_data(struct s2io_nic *nic);
static void do_s2io_store_unicast_mc(struct s2io_nic *sp);
static void do_s2io_restore_unicast_mc(struct s2io_nic *sp);
static u64 do_s2io_read_unicast_mc(struct s2io_nic *sp, int offset);
static int do_s2io_add_mc(struct s2io_nic *sp, u8 *addr);
static int do_s2io_add_mac(struct s2io_nic *sp, u64 addr, int offset);
static int do_s2io_delete_unicast_mc(struct s2io_nic *sp, u64 addr);
static int s2io_club_tcp_session(struct ring_info *ring_data, u8 *buffer,
u8 **tcp, u32 *tcp_len, struct lro **lro, struct RxD_t *rxdp,
struct s2io_nic *sp);
static void clear_lro_session(struct lro *lro);
static void queue_rx_frame(struct sk_buff *skb, u16 vlan_tag);
static void update_L3L4_header(struct s2io_nic *sp, struct lro *lro);
static void lro_append_pkt(struct s2io_nic *sp, struct lro *lro,
struct sk_buff *skb, u32 tcp_len);
static int rts_ds_steer(struct s2io_nic *nic, u8 ds_codepoint, u8 ring);
static pci_ers_result_t s2io_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state);
static pci_ers_result_t s2io_io_slot_reset(struct pci_dev *pdev);
static void s2io_io_resume(struct pci_dev *pdev);
#define s2io_tcp_mss(skb) skb_shinfo(skb)->gso_size
#define s2io_udp_mss(skb) skb_shinfo(skb)->gso_size
#define s2io_offload_type(skb) skb_shinfo(skb)->gso_type
#define S2IO_PARM_INT(X, def_val) \
static unsigned int X = def_val;\
module_param(X , uint, 0);
