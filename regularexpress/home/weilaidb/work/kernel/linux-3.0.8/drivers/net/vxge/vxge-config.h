#define VXGE_CONFIG_H
#define VXGE_CACHE_LINE_SIZE 128
#define VXGE_ALIGN(adrs, size) \
(((size) - (((u64)adrs) & ((size)-1))) & ((size)-1))
#define VXGE_HW_MIN_MTU				68
#define VXGE_HW_MAX_MTU				9600
#define VXGE_HW_DEFAULT_MTU			1500
#define VXGE_HW_MAX_ROM_IMAGES			8
struct eprom_image ;
#define vxge_assert(test) BUG_ON(!(test))
#define vxge_assert(test)
enum vxge_debug_level ;
#define NULL_VPID					0xFFFFFFFF
#define VXGE_DEBUG_MODULE_MASK  0xffffffff
#define VXGE_DEBUG_TRACE_MASK   0xffffffff
#define VXGE_DEBUG_ERR_MASK     0xffffffff
#define VXGE_DEBUG_MASK         0x000001ff
#define VXGE_DEBUG_MODULE_MASK  0x20000000
#define VXGE_DEBUG_TRACE_MASK   0x20000000
#define VXGE_DEBUG_ERR_MASK     0x20000000
#define VXGE_DEBUG_MASK         0x00000001
#define	VXGE_COMPONENT_LL				0x20000000
#define	VXGE_COMPONENT_ALL				0xffffffff
#define VXGE_HW_BASE_INF	100
#define VXGE_HW_BASE_ERR	200
#define VXGE_HW_BASE_BADCFG	300
enum vxge_hw_status ;
enum vxge_hw_device_link_state ;
enum vxge_hw_fw_upgrade_code ;
enum vxge_hw_fw_upgrade_err_code ;
#define VXGE_HW_FW_STRLEN	32
struct vxge_hw_device_date ;
struct vxge_hw_device_version ;
struct vxge_hw_fifo_config ;
struct vxge_hw_ring_config ;
struct vxge_hw_vp_config ;
struct vxge_hw_device_config ;
struct vxge_hw_uld_cbs ;
struct __vxge_hw_blockpool_entry ;
struct __vxge_hw_blockpool ;
enum __vxge_hw_channel_type ;
struct __vxge_hw_channel  ____cacheline_aligned;
struct __vxge_hw_virtualpath ;
struct __vxge_hw_vpath_handle ;
struct __vxge_hw_device ;
#define VXGE_HW_INFO_LEN	64
struct vxge_hw_device_hw_info ;
struct vxge_hw_device_attr ;
#define VXGE_HW_DEVICE_LINK_STATE_SET(hldev, ls)	(hldev->link_state = ls)
#define VXGE_HW_DEVICE_TIM_INT_MASK_SET(m0, m1, i)
#define VXGE_HW_DEVICE_TIM_INT_MASK_RESET(m0, m1, i)
#define VXGE_HW_DEVICE_STATS_PIO_READ(loc, offset)
struct __vxge_hw_ring  ____cacheline_aligned;
enum vxge_hw_txdl_state ;
struct __vxge_hw_fifo  ____cacheline_aligned;
struct __vxge_hw_fifo_txdl_priv ;
struct __vxge_hw_non_offload_db_wrapper ;
struct vxge_hw_fifo_txd ;
struct vxge_hw_ring_rxd_1 ;
enum vxge_hw_rth_algoritms ;
struct vxge_hw_rth_hash_types ;
void vxge_hw_device_debug_set(
struct __vxge_hw_device *devh,
enum vxge_debug_level level,
u32 mask);
u32
vxge_hw_device_error_level_get(struct __vxge_hw_device *devh);
u32
vxge_hw_device_trace_level_get(struct __vxge_hw_device *devh);
static inline u32 vxge_hw_ring_rxd_size_get(u32 buf_mode)
static inline u32 vxge_hw_ring_rxds_per_block_get(u32 buf_mode)
static inline
void vxge_hw_ring_rxd_1b_set(
void *rxdh,
dma_addr_t dma_pointer,
u32 size)
static inline
void vxge_hw_ring_rxd_1b_get(
struct __vxge_hw_ring *ring_handle,
void *rxdh,
u32 *pkt_length)
static inline
void vxge_hw_ring_rxd_1b_info_get(
struct __vxge_hw_ring *ring_handle,
void *rxdh,
struct vxge_hw_ring_rxd_info *rxd_info)
static inline void *vxge_hw_ring_rxd_private_get(void *rxdh)
static inline void vxge_hw_fifo_txdl_cksum_set_bits(void *txdlh, u64 cksum_bits)
static inline void vxge_hw_fifo_txdl_mss_set(void *txdlh, int mss)
static inline void vxge_hw_fifo_txdl_vlan_set(void *txdlh, u16 vlan_tag)
static inline void *vxge_hw_fifo_txdl_private_get(void *txdlh)
struct vxge_hw_ring_attr ;
struct vxge_hw_fifo_attr ;
struct vxge_hw_vpath_attr ;
enum vxge_hw_status __devinit vxge_hw_device_hw_info_get(
void __iomem *bar0,
struct vxge_hw_device_hw_info *hw_info);
enum vxge_hw_status __devinit vxge_hw_device_config_default_get(
struct vxge_hw_device_config *device_config);
static inline
enum vxge_hw_device_link_state vxge_hw_device_link_state_get(
struct __vxge_hw_device *devh)
void vxge_hw_device_terminate(struct __vxge_hw_device *devh);
const u8 *
vxge_hw_device_serial_number_get(struct __vxge_hw_device *devh);
u16 vxge_hw_device_link_width_get(struct __vxge_hw_device *devh);
const u8 *
vxge_hw_device_product_name_get(struct __vxge_hw_device *devh);
enum vxge_hw_status __devinit vxge_hw_device_initialize(
struct __vxge_hw_device **devh,
struct vxge_hw_device_attr *attr,
struct vxge_hw_device_config *device_config);
enum vxge_hw_status vxge_hw_device_getpause_data(
struct __vxge_hw_device *devh,
u32 port,
u32 *tx,
u32 *rx);
enum vxge_hw_status vxge_hw_device_setpause_data(
struct __vxge_hw_device *devh,
u32 port,
u32 tx,
u32 rx);
static inline void *vxge_os_dma_malloc(struct pci_dev *pdev,
unsigned long size,
struct pci_dev **p_dmah,
struct pci_dev **p_dma_acch)
static inline void vxge_os_dma_free(struct pci_dev *pdev, const void *vaddr,
struct pci_dev **p_dma_acch)
static inline void*
__vxge_hw_mempool_item_priv(
struct vxge_hw_mempool *mempool,
u32 memblock_idx,
void *item,
u32 *memblock_item_idx)
static inline struct __vxge_hw_fifo_txdl_priv *
__vxge_hw_fifo_txdl_priv(
struct __vxge_hw_fifo *fifo,
struct vxge_hw_fifo_txd *txdp)
enum vxge_hw_status vxge_hw_vpath_open(
struct __vxge_hw_device *devh,
struct vxge_hw_vpath_attr *attr,
struct __vxge_hw_vpath_handle **vpath_handle);
enum vxge_hw_status vxge_hw_vpath_close(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status
vxge_hw_vpath_reset(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status
vxge_hw_vpath_recover_from_reset(
struct __vxge_hw_vpath_handle *vpath_handle);
void
vxge_hw_vpath_enable(struct __vxge_hw_vpath_handle *vp);
enum vxge_hw_status
vxge_hw_vpath_check_leak(struct __vxge_hw_ring *ringh);
enum vxge_hw_status vxge_hw_vpath_mtu_set(
struct __vxge_hw_vpath_handle *vpath_handle,
u32 new_mtu);
void
vxge_hw_vpath_rx_doorbell_init(struct __vxge_hw_vpath_handle *vp);
static inline u64 readq(void __iomem *addr)
static inline void writeq(u64 val, void __iomem *addr)
static inline void __vxge_hw_pio_mem_write32_upper(u32 val, void __iomem *addr)
static inline void __vxge_hw_pio_mem_write32_lower(u32 val, void __iomem *addr)
enum vxge_hw_status
vxge_hw_device_flick_link_led(struct __vxge_hw_device *devh, u64 on_off);
enum vxge_hw_status
vxge_hw_vpath_strip_fcs_check(struct __vxge_hw_device *hldev, u64 vpath_mask);
#if (VXGE_COMPONENT_LL & VXGE_DEBUG_MODULE_MASK)
#define vxge_debug_ll(level, mask, fmt, ...) do  while (0)
#define vxge_debug_ll(level, mask, fmt, ...)
enum vxge_hw_status vxge_hw_vpath_rts_rth_itable_set(
struct __vxge_hw_vpath_handle **vpath_handles,
u32 vpath_count,
u8 *mtable,
u8 *itable,
u32 itable_size);
enum vxge_hw_status vxge_hw_vpath_rts_rth_set(
struct __vxge_hw_vpath_handle *vpath_handle,
enum vxge_hw_rth_algoritms algorithm,
struct vxge_hw_rth_hash_types *hash_type,
u16 bucket_size);
enum vxge_hw_status
__vxge_hw_device_is_privilaged(u32 host_type, u32 func_id);
#define VXGE_HW_MIN_SUCCESSIVE_IDLE_COUNT 5
#define VXGE_HW_MAX_POLLING_COUNT 100
void
vxge_hw_device_wait_receive_idle(struct __vxge_hw_device *hldev);
enum vxge_hw_status
vxge_hw_upgrade_read_version(struct __vxge_hw_device *hldev, u32 *major,
u32 *minor, u32 *build);
enum vxge_hw_status vxge_hw_flash_fw(struct __vxge_hw_device *hldev);
enum vxge_hw_status
vxge_update_fw_image(struct __vxge_hw_device *hldev, const u8 *filebuf,
int size);
enum vxge_hw_status
vxge_hw_vpath_eprom_img_ver_get(struct __vxge_hw_device *hldev,
struct eprom_image *eprom_image_data);
int vxge_hw_vpath_wait_receive_idle(struct __vxge_hw_device *hldev, u32 vp_id);
