#define VXGE_HW_VPATH_STATS_PIO_READ(offset)
static void
vxge_hw_vpath_set_zero_rx_frm_len(struct vxge_hw_vpath_reg __iomem *vp_reg)
int vxge_hw_vpath_wait_receive_idle(struct __vxge_hw_device *hldev, u32 vp_id)
void vxge_hw_device_wait_receive_idle(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_device_register_poll(void __iomem *reg, u64 mask, u32 max_millis)
static inline enum vxge_hw_status
__vxge_hw_pio_mem_write64(u64 val64, void __iomem *addr,
u64 mask, u32 max_millis)
static enum vxge_hw_status
vxge_hw_vpath_fw_api(struct __vxge_hw_virtualpath *vpath, u32 action,
u32 fw_memo, u32 offset, u64 *data0, u64 *data1,
u64 *steer_ctrl)
enum vxge_hw_status
vxge_hw_upgrade_read_version(struct __vxge_hw_device *hldev, u32 *major,
u32 *minor, u32 *build)
enum vxge_hw_status vxge_hw_flash_fw(struct __vxge_hw_device *hldev)
enum vxge_hw_status
vxge_update_fw_image(struct __vxge_hw_device *hldev, const u8 *fwdata, int size)
enum vxge_hw_status
vxge_hw_vpath_eprom_img_ver_get(struct __vxge_hw_device *hldev,
struct eprom_image *img)
static void __vxge_hw_channel_free(struct __vxge_hw_channel *channel)
static enum vxge_hw_status
__vxge_hw_channel_initialize(struct __vxge_hw_channel *channel)
static enum vxge_hw_status
__vxge_hw_channel_reset(struct __vxge_hw_channel *channel)
static void __vxge_hw_device_pci_e_init(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_device_vpath_reset_in_prog_check(u64 __iomem *vpath_rst_in_prog)
static enum vxge_hw_status
__vxge_hw_legacy_swapper_set(struct vxge_hw_legacy_reg __iomem *legacy_reg)
static struct vxge_hw_toc_reg __iomem *
__vxge_hw_device_toc_get(void __iomem *bar0)
static enum vxge_hw_status
__vxge_hw_device_reg_addr_get(struct __vxge_hw_device *hldev)
static u32
__vxge_hw_device_access_rights_get(u32 host_type, u32 func_id)
enum vxge_hw_status
__vxge_hw_device_is_privilaged(u32 host_type, u32 func_id)
static u32
__vxge_hw_vpath_func_id_get(struct vxge_hw_vpmgmt_reg __iomem *vpmgmt_reg)
static void __vxge_hw_device_host_info_get(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_verify_pci_e_info(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_device_initialize(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_vpath_fw_ver_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_device_hw_info *hw_info)
static enum vxge_hw_status
__vxge_hw_vpath_card_info_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_device_hw_info *hw_info)
static enum vxge_hw_status
__vxge_hw_vpath_pci_func_mode_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_device_hw_info *hw_info)
static enum vxge_hw_status
__vxge_hw_vpath_addr_get(struct __vxge_hw_virtualpath *vpath,
u8 *macaddr, u8 *macaddr_mask)
enum vxge_hw_status __devinit
vxge_hw_device_hw_info_get(void __iomem *bar0,
struct vxge_hw_device_hw_info *hw_info)
static void __vxge_hw_blockpool_destroy(struct __vxge_hw_blockpool *blockpool)
static enum vxge_hw_status
__vxge_hw_blockpool_create(struct __vxge_hw_device *hldev,
struct __vxge_hw_blockpool *blockpool,
u32 pool_size,
u32 pool_max)
static enum vxge_hw_status
__vxge_hw_device_fifo_config_check(struct vxge_hw_fifo_config *fifo_config)
static enum vxge_hw_status
__vxge_hw_device_vpath_config_check(struct vxge_hw_vp_config *vp_config)
static enum vxge_hw_status
__vxge_hw_device_config_check(struct vxge_hw_device_config *new_config)
enum vxge_hw_status __devinit
vxge_hw_device_initialize(
struct __vxge_hw_device **devh,
struct vxge_hw_device_attr *attr,
struct vxge_hw_device_config *device_config)
void
vxge_hw_device_terminate(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_vpath_stats_access(struct __vxge_hw_virtualpath *vpath,
u32 operation, u32 offset, u64 *stat)
static enum vxge_hw_status
__vxge_hw_vpath_xmac_tx_stats_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_xmac_vpath_tx_stats *vpath_tx_stats)
static enum vxge_hw_status
__vxge_hw_vpath_xmac_rx_stats_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_xmac_vpath_rx_stats *vpath_rx_stats)
static enum vxge_hw_status
__vxge_hw_vpath_stats_get(struct __vxge_hw_virtualpath *vpath,
struct vxge_hw_vpath_stats_hw_info *hw_stats)
enum vxge_hw_status
vxge_hw_device_stats_get(struct __vxge_hw_device *hldev,
struct vxge_hw_device_stats_hw_info *hw_stats)
enum vxge_hw_status vxge_hw_driver_stats_get(
struct __vxge_hw_device *hldev,
struct vxge_hw_device_stats_sw_info *sw_stats)
enum vxge_hw_status
vxge_hw_mrpcim_stats_access(struct __vxge_hw_device *hldev,
u32 operation, u32 location, u32 offset, u64 *stat)
static enum vxge_hw_status
vxge_hw_device_xmac_aggr_stats_get(struct __vxge_hw_device *hldev, u32 port,
struct vxge_hw_xmac_aggr_stats *aggr_stats)
static enum vxge_hw_status
vxge_hw_device_xmac_port_stats_get(struct __vxge_hw_device *hldev, u32 port,
struct vxge_hw_xmac_port_stats *port_stats)
enum vxge_hw_status
vxge_hw_device_xmac_stats_get(struct __vxge_hw_device *hldev,
struct vxge_hw_xmac_stats *xmac_stats)
void vxge_hw_device_debug_set(struct __vxge_hw_device *hldev,
enum vxge_debug_level level, u32 mask)
u32 vxge_hw_device_error_level_get(struct __vxge_hw_device *hldev)
u32 vxge_hw_device_trace_level_get(struct __vxge_hw_device *hldev)
enum vxge_hw_status vxge_hw_device_getpause_data(struct __vxge_hw_device *hldev,
u32 port, u32 *tx, u32 *rx)
enum vxge_hw_status vxge_hw_device_setpause_data(struct __vxge_hw_device *hldev,
u32 port, u32 tx, u32 rx)
u16 vxge_hw_device_link_width_get(struct __vxge_hw_device *hldev)
static inline u32
__vxge_hw_ring_block_memblock_idx(u8 *block)
static inline void
__vxge_hw_ring_block_memblock_idx_set(u8 *block, u32 memblock_idx)
static inline void
__vxge_hw_ring_block_next_pointer_set(u8 *block, dma_addr_t dma_next)
static u64 __vxge_hw_ring_first_block_address_get(struct __vxge_hw_ring *ring)
static dma_addr_t __vxge_hw_ring_item_dma_addr(struct vxge_hw_mempool *mempoolh,
void *item)
static void __vxge_hw_ring_rxdblock_link(struct vxge_hw_mempool *mempoolh,
struct __vxge_hw_ring *ring, u32 from,
u32 to)
static void
__vxge_hw_ring_mempool_item_alloc(struct vxge_hw_mempool *mempoolh,
u32 memblock_index,
struct vxge_hw_mempool_dma *dma_object,
u32 index, u32 is_last)
enum vxge_hw_status
vxge_hw_ring_replenish(struct __vxge_hw_ring *ring)
static struct __vxge_hw_channel *
__vxge_hw_channel_allocate(struct __vxge_hw_vpath_handle *vph,
enum __vxge_hw_channel_type type,
u32 length, u32 per_dtr_space,
void *userdata)
static void vxge_hw_blockpool_block_add(struct __vxge_hw_device *devh,
void *block_addr,
u32 length,
struct pci_dev *dma_h,
struct pci_dev *acc_handle)
static inline void
vxge_os_dma_malloc_async(struct pci_dev *pdev, void *devh, unsigned long size)
static
void __vxge_hw_blockpool_blocks_add(struct __vxge_hw_blockpool *blockpool)
static void *__vxge_hw_blockpool_malloc(struct __vxge_hw_device *devh, u32 size,
struct vxge_hw_mempool_dma *dma_object)
static void
__vxge_hw_blockpool_blocks_remove(struct __vxge_hw_blockpool *blockpool)
static void __vxge_hw_blockpool_free(struct __vxge_hw_device *devh,
void *memblock, u32 size,
struct vxge_hw_mempool_dma *dma_object)
static void __vxge_hw_mempool_destroy(struct vxge_hw_mempool *mempool)
static enum vxge_hw_status
__vxge_hw_mempool_grow(struct vxge_hw_mempool *mempool, u32 num_allocate,
u32 *num_allocated)
static struct vxge_hw_mempool *
__vxge_hw_mempool_create(struct __vxge_hw_device *devh,
u32 memblock_size,
u32 item_size,
u32 items_priv_size,
u32 items_initial,
u32 items_max,
struct vxge_hw_mempool_cbs *mp_callback,
void *userdata)
static enum vxge_hw_status __vxge_hw_ring_abort(struct __vxge_hw_ring *ring)
static enum vxge_hw_status __vxge_hw_ring_reset(struct __vxge_hw_ring *ring)
static enum vxge_hw_status
__vxge_hw_ring_delete(struct __vxge_hw_vpath_handle *vp)
static enum vxge_hw_status
__vxge_hw_ring_create(struct __vxge_hw_vpath_handle *vp,
struct vxge_hw_ring_attr *attr)
enum vxge_hw_status __devinit
vxge_hw_device_config_default_get(struct vxge_hw_device_config *device_config)
static enum vxge_hw_status
__vxge_hw_vpath_swapper_set(struct vxge_hw_vpath_reg __iomem *vpath_reg)
static enum vxge_hw_status
__vxge_hw_kdfc_swapper_set(struct vxge_hw_legacy_reg __iomem *legacy_reg,
struct vxge_hw_vpath_reg __iomem *vpath_reg)
enum vxge_hw_status
vxge_hw_mgmt_reg_read(struct __vxge_hw_device *hldev,
enum vxge_hw_mgmt_reg_type type,
u32 index, u32 offset, u64 *value)
enum vxge_hw_status
vxge_hw_vpath_strip_fcs_check(struct __vxge_hw_device *hldev, u64 vpath_mask)
enum vxge_hw_status
vxge_hw_mgmt_reg_write(struct __vxge_hw_device *hldev,
enum vxge_hw_mgmt_reg_type type,
u32 index, u32 offset, u64 value)
static enum vxge_hw_status __vxge_hw_fifo_abort(struct __vxge_hw_fifo *fifo)
static enum vxge_hw_status __vxge_hw_fifo_reset(struct __vxge_hw_fifo *fifo)
static enum vxge_hw_status
__vxge_hw_fifo_delete(struct __vxge_hw_vpath_handle *vp)
static void
__vxge_hw_fifo_mempool_item_alloc(
struct vxge_hw_mempool *mempoolh,
u32 memblock_index, struct vxge_hw_mempool_dma *dma_object,
u32 index, u32 is_last)
static enum vxge_hw_status
__vxge_hw_fifo_create(struct __vxge_hw_vpath_handle *vp,
struct vxge_hw_fifo_attr *attr)
static enum vxge_hw_status
__vxge_hw_vpath_pci_read(struct __vxge_hw_virtualpath *vpath,
u32 phy_func_0, u32 offset, u32 *val)
enum vxge_hw_status
vxge_hw_device_flick_link_led(struct __vxge_hw_device *hldev, u64 on_off)
enum vxge_hw_status
__vxge_hw_vpath_rts_table_get(struct __vxge_hw_vpath_handle *vp,
u32 action, u32 rts_table, u32 offset,
u64 *data0, u64 *data1)
enum vxge_hw_status
__vxge_hw_vpath_rts_table_set(struct __vxge_hw_vpath_handle *vp, u32 action,
u32 rts_table, u32 offset, u64 steer_data0,
u64 steer_data1)
enum vxge_hw_status vxge_hw_vpath_rts_rth_set(
struct __vxge_hw_vpath_handle *vp,
enum vxge_hw_rth_algoritms algorithm,
struct vxge_hw_rth_hash_types *hash_type,
u16 bucket_size)
static void
vxge_hw_rts_rth_data0_data1_get(u32 j, u64 *data0, u64 *data1,
u16 flag, u8 *itable)
enum vxge_hw_status vxge_hw_vpath_rts_rth_itable_set(
struct __vxge_hw_vpath_handle **vpath_handles,
u32 vpath_count,
u8 *mtable,
u8 *itable,
u32 itable_size)
enum vxge_hw_status
vxge_hw_vpath_check_leak(struct __vxge_hw_ring *ring)
static enum vxge_hw_status
__vxge_hw_vpath_mgmt_read(
struct __vxge_hw_device *hldev,
struct __vxge_hw_virtualpath *vpath)
static enum vxge_hw_status
__vxge_hw_vpath_reset_check(struct __vxge_hw_virtualpath *vpath)
static enum vxge_hw_status
__vxge_hw_vpath_reset(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vpath_sw_reset(struct __vxge_hw_device *hldev, u32 vp_id)
static void
__vxge_hw_vpath_prc_configure(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vpath_kdfc_configure(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vpath_mac_configure(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vpath_tim_configure(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vpath_initialize(struct __vxge_hw_device *hldev, u32 vp_id)
static void __vxge_hw_vp_terminate(struct __vxge_hw_device *hldev, u32 vp_id)
static enum vxge_hw_status
__vxge_hw_vp_initialize(struct __vxge_hw_device *hldev, u32 vp_id,
struct vxge_hw_vp_config *config)
enum vxge_hw_status
vxge_hw_vpath_mtu_set(struct __vxge_hw_vpath_handle *vp, u32 new_mtu)
static enum vxge_hw_status
vxge_hw_vpath_stats_enable(struct __vxge_hw_vpath_handle *vp)
static struct __vxge_hw_blockpool_entry *
__vxge_hw_blockpool_block_allocate(struct __vxge_hw_device *devh, u32 size)
enum vxge_hw_status
vxge_hw_vpath_open(struct __vxge_hw_device *hldev,
struct vxge_hw_vpath_attr *attr,
struct __vxge_hw_vpath_handle **vpath_handle)
void vxge_hw_vpath_rx_doorbell_init(struct __vxge_hw_vpath_handle *vp)
static void
__vxge_hw_blockpool_block_free(struct __vxge_hw_device *devh,
struct __vxge_hw_blockpool_entry *entry)
enum vxge_hw_status vxge_hw_vpath_close(struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_reset(struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status
vxge_hw_vpath_recover_from_reset(struct __vxge_hw_vpath_handle *vp)
void
vxge_hw_vpath_enable(struct __vxge_hw_vpath_handle *vp)
