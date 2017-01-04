enum vnic_proxy_type ;
struct vnic_res ;
struct vnic_dev ;
#define VNIC_MAX_RES_HDR_SIZE \
(sizeof(struct vnic_resource_header) + \
sizeof(struct vnic_resource) * RES_TYPE_MAX)
#define VNIC_RES_STRIDE	128
void *vnic_dev_priv(struct vnic_dev *vdev)
static int vnic_dev_discover_res(struct vnic_dev *vdev,
struct vnic_dev_bar *bar, unsigned int num_bars)
unsigned int vnic_dev_get_res_count(struct vnic_dev *vdev,
enum vnic_res_type type)
void __iomem *vnic_dev_get_res(struct vnic_dev *vdev, enum vnic_res_type type,
unsigned int index)
static unsigned int vnic_dev_desc_ring_size(struct vnic_dev_ring *ring,
unsigned int desc_count, unsigned int desc_size)
void vnic_dev_clear_desc_ring(struct vnic_dev_ring *ring)
int vnic_dev_alloc_desc_ring(struct vnic_dev *vdev, struct vnic_dev_ring *ring,
unsigned int desc_count, unsigned int desc_size)
void vnic_dev_free_desc_ring(struct vnic_dev *vdev, struct vnic_dev_ring *ring)
static int _vnic_dev_cmd(struct vnic_dev *vdev, enum vnic_devcmd_cmd cmd,
int wait)
static int vnic_dev_cmd_proxy_by_bdf(struct vnic_dev *vdev,
enum vnic_devcmd_cmd cmd, u64 *a0, u64 *a1, int wait)
static int vnic_dev_cmd_no_proxy(struct vnic_dev *vdev,
enum vnic_devcmd_cmd cmd, u64 *a0, u64 *a1, int wait)
int vnic_dev_cmd(struct vnic_dev *vdev, enum vnic_devcmd_cmd cmd,
u64 *a0, u64 *a1, int wait)
static int vnic_dev_capable(struct vnic_dev *vdev, enum vnic_devcmd_cmd cmd)
int vnic_dev_fw_info(struct vnic_dev *vdev,
struct vnic_devcmd_fw_info **fw_info)
int vnic_dev_spec(struct vnic_dev *vdev, unsigned int offset, unsigned int size,
void *value)
int vnic_dev_stats_dump(struct vnic_dev *vdev, struct vnic_stats **stats)
int vnic_dev_close(struct vnic_dev *vdev)
int vnic_dev_enable_wait(struct vnic_dev *vdev)
int vnic_dev_disable(struct vnic_dev *vdev)
int vnic_dev_open(struct vnic_dev *vdev, int arg)
int vnic_dev_open_done(struct vnic_dev *vdev, int *done)
static int vnic_dev_soft_reset(struct vnic_dev *vdev, int arg)
static int vnic_dev_soft_reset_done(struct vnic_dev *vdev, int *done)
int vnic_dev_hang_reset(struct vnic_dev *vdev, int arg)
int vnic_dev_hang_reset_done(struct vnic_dev *vdev, int *done)
int vnic_dev_hang_notify(struct vnic_dev *vdev)
int vnic_dev_mac_addr(struct vnic_dev *vdev, u8 *mac_addr)
int vnic_dev_packet_filter(struct vnic_dev *vdev, int directed, int multicast,
int broadcast, int promisc, int allmulti)
int vnic_dev_add_addr(struct vnic_dev *vdev, u8 *addr)
int vnic_dev_del_addr(struct vnic_dev *vdev, u8 *addr)
int vnic_dev_set_ig_vlan_rewrite_mode(struct vnic_dev *vdev,
u8 ig_vlan_rewrite_mode)
static int vnic_dev_notify_setcmd(struct vnic_dev *vdev,
void *notify_addr, dma_addr_t notify_pa, u16 intr)
int vnic_dev_notify_set(struct vnic_dev *vdev, u16 intr)
static int vnic_dev_notify_unsetcmd(struct vnic_dev *vdev)
int vnic_dev_notify_unset(struct vnic_dev *vdev)
static int vnic_dev_notify_ready(struct vnic_dev *vdev)
int vnic_dev_init(struct vnic_dev *vdev, int arg)
int vnic_dev_deinit(struct vnic_dev *vdev)
int vnic_dev_link_status(struct vnic_dev *vdev)
u32 vnic_dev_port_speed(struct vnic_dev *vdev)
u32 vnic_dev_msg_lvl(struct vnic_dev *vdev)
u32 vnic_dev_mtu(struct vnic_dev *vdev)
void vnic_dev_set_intr_mode(struct vnic_dev *vdev,
enum vnic_dev_intr_mode intr_mode)
enum vnic_dev_intr_mode vnic_dev_get_intr_mode(
struct vnic_dev *vdev)
void vnic_dev_unregister(struct vnic_dev *vdev)
struct vnic_dev *vnic_dev_register(struct vnic_dev *vdev,
void *priv, struct pci_dev *pdev, struct vnic_dev_bar *bar,
unsigned int num_bars)
int vnic_dev_init_prov2(struct vnic_dev *vdev, u8 *buf, u32 len)
int vnic_dev_enable2(struct vnic_dev *vdev, int active)
static int vnic_dev_cmd_status(struct vnic_dev *vdev, enum vnic_devcmd_cmd cmd,
int *status)
int vnic_dev_enable2_done(struct vnic_dev *vdev, int *status)
int vnic_dev_deinit_done(struct vnic_dev *vdev, int *status)
