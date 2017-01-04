#define MASK(n) ((1ULL<<(n))-1)
#define OCM_WIN_P3P(addr) (addr & 0xffc0000)
#define GET_MEM_OFFS_2M(addr) (addr & MASK(18))
#define CRB_BLK(off)	((off >> 20) & 0x3f)
#define CRB_SUBBLK(off)	((off >> 16) & 0xf)
#define CRB_WINDOW_2M	(0x130060)
#define CRB_HI(off)	((crb_hub_agt[CRB_BLK(off)] << 20) | ((off) & 0xf0000))
#define CRB_INDIRECT_2M	(0x1e0000UL)
static inline u64 readq(void __iomem *addr)
static inline void writeq(u64 val, void __iomem *addr)
static const struct crb_128M_2M_block_map
crb_128M_2M_map[64] __cacheline_aligned_in_smp = ;
static const unsigned crb_hub_agt[64] = ;
#define QLCNIC_PCIE_SEM_TIMEOUT	10000
int
qlcnic_pcie_sem_lock(struct qlcnic_adapter *adapter, int sem, u32 id_reg)
void
qlcnic_pcie_sem_unlock(struct qlcnic_adapter *adapter, int sem)
static int
qlcnic_send_cmd_descs(struct qlcnic_adapter *adapter,
struct cmd_desc_type0 *cmd_desc_arr, int nr_desc)
static int
qlcnic_sre_macaddr_change(struct qlcnic_adapter *adapter, u8 *addr,
__le16 vlan_id, unsigned op)
static int qlcnic_nic_add_mac(struct qlcnic_adapter *adapter, const u8 *addr)
void qlcnic_set_multi(struct net_device *netdev)
int qlcnic_nic_set_promisc(struct qlcnic_adapter *adapter, u32 mode)
void qlcnic_free_mac_list(struct qlcnic_adapter *adapter)
void qlcnic_prune_lb_filters(struct qlcnic_adapter *adapter)
void qlcnic_delete_lb_filters(struct qlcnic_adapter *adapter)
int qlcnic_config_intr_coalesce(struct qlcnic_adapter *adapter)
int qlcnic_config_hw_lro(struct qlcnic_adapter *adapter, int enable)
int qlcnic_config_bridged_mode(struct qlcnic_adapter *adapter, u32 enable)
#define RSS_HASHTYPE_IP_TCP	0x3
int qlcnic_config_rss(struct qlcnic_adapter *adapter, int enable)
int qlcnic_config_ipaddr(struct qlcnic_adapter *adapter, __be32 ip, int cmd)
int qlcnic_linkevent_request(struct qlcnic_adapter *adapter, int enable)
int qlcnic_send_lro_cleanup(struct qlcnic_adapter *adapter)
int qlcnic_change_mtu(struct net_device *netdev, int mtu)
u32 qlcnic_fix_features(struct net_device *netdev, u32 features)
int qlcnic_set_features(struct net_device *netdev, u32 features)
static int
qlcnic_pci_get_crb_addr_2M(struct qlcnic_adapter *adapter,
ulong off, void __iomem **addr)
static int
qlcnic_pci_set_crbwindow_2M(struct qlcnic_adapter *adapter, ulong off)
int
qlcnic_hw_write_wx_2M(struct qlcnic_adapter *adapter, ulong off, u32 data)
u32
qlcnic_hw_read_wx_2M(struct qlcnic_adapter *adapter, ulong off)
void __iomem *
qlcnic_get_ioaddr(struct qlcnic_adapter *adapter, u32 offset)
static int
qlcnic_pci_set_window_2M(struct qlcnic_adapter *adapter,
u64 addr, u32 *start)
static int
qlcnic_pci_mem_access_direct(struct qlcnic_adapter *adapter, u64 off,
u64 *data, int op)
void
qlcnic_pci_camqm_read_2M(struct qlcnic_adapter *adapter, u64 off, u64 *data)
void
qlcnic_pci_camqm_write_2M(struct qlcnic_adapter *adapter, u64 off, u64 data)
#define MAX_CTL_CHECK   1000
int
qlcnic_pci_mem_write_2M(struct qlcnic_adapter *adapter,
u64 off, u64 data)
int
qlcnic_pci_mem_read_2M(struct qlcnic_adapter *adapter,
u64 off, u64 *data)
int qlcnic_get_board_info(struct qlcnic_adapter *adapter)
int
qlcnic_wol_supported(struct qlcnic_adapter *adapter)
int qlcnic_config_led(struct qlcnic_adapter *adapter, u32 state, u32 rate)
static u32
qlcnic_dump_crb(struct qlcnic_adapter *adapter, struct qlcnic_dump_entry *entry,
u32 *buffer)
static u32
qlcnic_dump_ctrl(struct qlcnic_adapter *adapter,
struct qlcnic_dump_entry *entry, u32 *buffer)
static u32
qlcnic_dump_mux(struct qlcnic_adapter *adapter, struct qlcnic_dump_entry *entry,
u32 *buffer)
static u32
qlcnic_dump_que(struct qlcnic_adapter *adapter, struct qlcnic_dump_entry *entry,
u32 *buffer)
static u32
qlcnic_dump_ocm(struct qlcnic_adapter *adapter, struct qlcnic_dump_entry *entry,
u32 *buffer)
static u32
qlcnic_read_rom(struct qlcnic_adapter *adapter, struct qlcnic_dump_entry *entry,
u32 *buffer)
static u32
qlcnic_dump_l1_cache(struct qlcnic_adapter *adapter,
struct qlcnic_dump_entry *entry, u32 *buffer)
static u32
qlcnic_dump_l2_cache(struct qlcnic_adapter *adapter,
struct qlcnic_dump_entry *entry, u32 *buffer)
static u32
qlcnic_read_memory(struct qlcnic_adapter *adapter,
struct qlcnic_dump_entry *entry, u32 *buffer)
static u32
qlcnic_dump_nop(struct qlcnic_adapter *adapter,
struct qlcnic_dump_entry *entry, u32 *buffer)
struct qlcnic_dump_operations fw_dump_ops[] = ;
static int
qlcnic_valid_dump_entry(struct device *dev, struct qlcnic_dump_entry *entry,
u32 size)
int qlcnic_dump_fw(struct qlcnic_adapter *adapter)
