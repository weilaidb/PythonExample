#define MASK(n) ((1ULL<<(n))-1)
#define MN_WIN(addr) (((addr & 0x1fc0000) >> 1) | ((addr >> 25) & 0x3ff))
#define OCM_WIN(addr) (((addr & 0x1ff0000) >> 1) | ((addr >> 25) & 0x3ff))
#define MS_WIN(addr) (addr & 0x0ffc0000)
#define GET_MEM_OFFS_2M(addr) (addr & MASK(18))
#define CRB_BLK(off)	((off >> 20) & 0x3f)
#define CRB_SUBBLK(off)	((off >> 16) & 0xf)
#define CRB_WINDOW_2M	(0x130060)
#define CRB_HI(off)	((crb_hub_agt[CRB_BLK(off)] << 20) | ((off) & 0xf0000))
#define CRB_INDIRECT_2M	(0x1e0000UL)
static void netxen_nic_io_write_128M(struct netxen_adapter *adapter,
void __iomem *addr, u32 data);
static u32 netxen_nic_io_read_128M(struct netxen_adapter *adapter,
void __iomem *addr);
static inline u64 readq(void __iomem *addr)
static inline void writeq(u64 val, void __iomem *addr)
#define PCI_OFFSET_FIRST_RANGE(adapter, off)    \
((adapter)->ahw.pci_base0 + (off))
#define PCI_OFFSET_SECOND_RANGE(adapter, off)   \
((adapter)->ahw.pci_base1 + (off) - SECOND_PAGE_GROUP_START)
#define PCI_OFFSET_THIRD_RANGE(adapter, off)    \
((adapter)->ahw.pci_base2 + (off) - THIRD_PAGE_GROUP_START)
static void __iomem *pci_base_offset(struct netxen_adapter *adapter,
unsigned long off)
static crb_128M_2M_block_map_t
crb_128M_2M_map[64] __cacheline_aligned_in_smp = ;
static unsigned crb_hub_agt[64] =
;
#define NETXEN_WINDOW_ONE 	0x2000000
#define NETXEN_PCIE_SEM_TIMEOUT	10000
static int netxen_nic_set_mtu_xgb(struct netxen_adapter *adapter, int new_mtu);
int
netxen_pcie_sem_lock(struct netxen_adapter *adapter, int sem, u32 id_reg)
void
netxen_pcie_sem_unlock(struct netxen_adapter *adapter, int sem)
static int netxen_niu_xg_init_port(struct netxen_adapter *adapter, int port)
static int netxen_niu_disable_xg_port(struct netxen_adapter *adapter)
#define NETXEN_UNICAST_ADDR(port, index) \
(NETXEN_UNICAST_ADDR_BASE+(port*32)+(index*8))
#define NETXEN_MCAST_ADDR(port, index) \
(NETXEN_MULTICAST_ADDR_BASE+(port*0x80)+(index*8))
#define MAC_HI(addr) \
((addr[2] << 16) | (addr[1] << 8) | (addr[0]))
#define MAC_LO(addr) \
((addr[5] << 16) | (addr[4] << 8) | (addr[3]))
static int netxen_p2_nic_set_promisc(struct netxen_adapter *adapter, u32 mode)
static int netxen_p2_nic_set_mac_addr(struct netxen_adapter *adapter, u8 *addr)
static int
netxen_nic_enable_mcast_filter(struct netxen_adapter *adapter)
static int
netxen_nic_disable_mcast_filter(struct netxen_adapter *adapter)
static int
netxen_nic_set_mcast_addr(struct netxen_adapter *adapter,
int index, u8 *addr)
static void netxen_p2_nic_set_multi(struct net_device *netdev)
static int
netxen_send_cmd_descs(struct netxen_adapter *adapter,
struct cmd_desc_type0 *cmd_desc_arr, int nr_desc)
static int
nx_p3_sre_macaddr_change(struct netxen_adapter *adapter, u8 *addr, unsigned op)
static int nx_p3_nic_add_mac(struct netxen_adapter *adapter,
const u8 *addr, struct list_head *del_list)
static void netxen_p3_nic_set_multi(struct net_device *netdev)
static int netxen_p3_nic_set_promisc(struct netxen_adapter *adapter, u32 mode)
void netxen_p3_free_mac_list(struct netxen_adapter *adapter)
static int netxen_p3_nic_set_mac_addr(struct netxen_adapter *adapter, u8 *addr)
#define	NETXEN_CONFIG_INTR_COALESCE	3
int netxen_config_intr_coalesce(struct netxen_adapter *adapter)
int netxen_config_hw_lro(struct netxen_adapter *adapter, int enable)
int netxen_config_bridged_mode(struct netxen_adapter *adapter, int enable)
#define RSS_HASHTYPE_IP_TCP	0x3
int netxen_config_rss(struct netxen_adapter *adapter, int enable)
int netxen_config_ipaddr(struct netxen_adapter *adapter, u32 ip, int cmd)
int netxen_linkevent_request(struct netxen_adapter *adapter, int enable)
int netxen_send_lro_cleanup(struct netxen_adapter *adapter)
#define MTU_FUDGE_FACTOR	100
int netxen_nic_change_mtu(struct net_device *netdev, int mtu)
static int netxen_get_flash_block(struct netxen_adapter *adapter, int base,
int size, __le32 * buf)
int netxen_get_flash_mac_addr(struct netxen_adapter *adapter, u64 *mac)
int netxen_p3_get_mac_addr(struct netxen_adapter *adapter, u64 *mac)
static void
netxen_nic_pci_set_crbwindow_128M(struct netxen_adapter *adapter,
u32 window)
static int
netxen_nic_pci_get_crb_addr_2M(struct netxen_adapter *adapter,
ulong off, void __iomem **addr)
static void
netxen_nic_pci_set_crbwindow_2M(struct netxen_adapter *adapter, ulong off)
static void __iomem *
netxen_nic_map_indirect_address_128M(struct netxen_adapter *adapter,
ulong win_off, void __iomem **mem_ptr)
static int
netxen_nic_hw_write_wx_128M(struct netxen_adapter *adapter, ulong off, u32 data)
static u32
netxen_nic_hw_read_wx_128M(struct netxen_adapter *adapter, ulong off)
static int
netxen_nic_hw_write_wx_2M(struct netxen_adapter *adapter, ulong off, u32 data)
static u32
netxen_nic_hw_read_wx_2M(struct netxen_adapter *adapter, ulong off)
static void netxen_nic_io_write_128M(struct netxen_adapter *adapter,
void __iomem *addr, u32 data)
static u32 netxen_nic_io_read_128M(struct netxen_adapter *adapter,
void __iomem *addr)
static void netxen_nic_io_write_2M(struct netxen_adapter *adapter,
void __iomem *addr, u32 data)
static u32 netxen_nic_io_read_2M(struct netxen_adapter *adapter,
void __iomem *addr)
void __iomem *
netxen_get_ioaddr(struct netxen_adapter *adapter, u32 offset)
static int
netxen_nic_pci_set_window_128M(struct netxen_adapter *adapter,
u64 addr, u32 *start)
static int
netxen_nic_pci_set_window_2M(struct netxen_adapter *adapter,
u64 addr, u32 *start)
static int
netxen_nic_pci_mem_access_direct(struct netxen_adapter *adapter, u64 off,
u64 *data, int op)
void
netxen_pci_camqm_read_2M(struct netxen_adapter *adapter, u64 off, u64 *data)
void
netxen_pci_camqm_write_2M(struct netxen_adapter *adapter, u64 off, u64 data)
#define MAX_CTL_CHECK   1000
static int
netxen_nic_pci_mem_write_128M(struct netxen_adapter *adapter,
u64 off, u64 data)
static int
netxen_nic_pci_mem_read_128M(struct netxen_adapter *adapter,
u64 off, u64 *data)
static int
netxen_nic_pci_mem_write_2M(struct netxen_adapter *adapter,
u64 off, u64 data)
static int
netxen_nic_pci_mem_read_2M(struct netxen_adapter *adapter,
u64 off, u64 *data)
void
netxen_setup_hwops(struct netxen_adapter *adapter)
int netxen_nic_get_board_info(struct netxen_adapter *adapter)
static int netxen_nic_set_mtu_xgb(struct netxen_adapter *adapter, int new_mtu)
void netxen_nic_set_link_parameters(struct netxen_adapter *adapter)
int
netxen_nic_wol_supported(struct netxen_adapter *adapter)
