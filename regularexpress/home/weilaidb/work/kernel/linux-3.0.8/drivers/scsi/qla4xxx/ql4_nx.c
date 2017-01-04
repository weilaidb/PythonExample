#define MASK(n)		DMA_BIT_MASK(n)
#define MN_WIN(addr)	(((addr & 0x1fc0000) >> 1) | ((addr >> 25) & 0x3ff))
#define OCM_WIN(addr)	(((addr & 0x1ff0000) >> 1) | ((addr >> 25) & 0x3ff))
#define MS_WIN(addr)	(addr & 0x0ffc0000)
#define QLA82XX_PCI_MN_2M	(0)
#define QLA82XX_PCI_MS_2M	(0x80000)
#define QLA82XX_PCI_OCM0_2M	(0xc0000)
#define VALID_OCM_ADDR(addr)	(((addr) & 0x3f800) != 0x3f800)
#define GET_MEM_OFFS_2M(addr)	(addr & MASK(18))
#define CRB_BLK(off)	((off >> 20) & 0x3f)
#define CRB_SUBBLK(off)	((off >> 16) & 0xf)
#define CRB_WINDOW_2M	(0x130060)
#define CRB_HI(off)	((qla4_8xxx_crb_hub_agt[CRB_BLK(off)] << 20) | \
((off) & 0xf0000))
#define QLA82XX_PCI_CAMQM_2M_END	(0x04800800UL)
#define QLA82XX_PCI_CAMQM_2M_BASE	(0x000ff800UL)
#define CRB_INDIRECT_2M			(0x1e0000UL)
static inline void __iomem *
qla4_8xxx_pci_base_offsetfset(struct scsi_qla_host *ha, unsigned long off)
#define MAX_CRB_XFORM 60
static unsigned long crb_addr_xform[MAX_CRB_XFORM];
static int qla4_8xxx_crb_table_initialized;
#define qla4_8xxx_crb_addr_transform(name) \
(crb_addr_xform[QLA82XX_HW_PX_MAP_CRB_##name] = \
QLA82XX_HW_CRB_HUB_AGT_ADR_##name << 20)
static void
qla4_8xxx_crb_addr_transform_setup(void)
static struct crb_128M_2M_block_map crb_128M_2M_map[64] = ;
static unsigned qla4_8xxx_crb_hub_agt[64] = ;
static char *qdev_state[] = ;
static void
qla4_8xxx_pci_set_crbwindow_2M(struct scsi_qla_host *ha, ulong *off)
void
qla4_8xxx_wr_32(struct scsi_qla_host *ha, ulong off, u32 data)
int
qla4_8xxx_rd_32(struct scsi_qla_host *ha, ulong off)
#define CRB_WIN_LOCK_TIMEOUT 100000000
int qla4_8xxx_crb_win_lock(struct scsi_qla_host *ha)
void qla4_8xxx_crb_win_unlock(struct scsi_qla_host *ha)
#define IDC_LOCK_TIMEOUT 100000000
int qla4_8xxx_idc_lock(struct scsi_qla_host *ha)
void qla4_8xxx_idc_unlock(struct scsi_qla_host *ha)
int
qla4_8xxx_pci_get_crb_addr_2M(struct scsi_qla_host *ha, ulong *off)
#define QLA82XX_ADDR_IN_RANGE(addr, low, high)            \
(((addr) <= (high)) && ((addr) >= (low)))
static unsigned long
qla4_8xxx_pci_mem_bound_check(struct scsi_qla_host *ha,
unsigned long long addr, int size)
static int qla4_8xxx_pci_set_window_warning_count;
static unsigned long
qla4_8xxx_pci_set_window(struct scsi_qla_host *ha, unsigned long long addr)
static int qla4_8xxx_pci_is_same_window(struct scsi_qla_host *ha,
unsigned long long addr)
static inline __u64 readq(const volatile void __iomem *addr)
static inline void writeq(__u64 val, volatile void __iomem *addr)
static int qla4_8xxx_pci_mem_read_direct(struct scsi_qla_host *ha,
u64 off, void *data, int size)
static int
qla4_8xxx_pci_mem_write_direct(struct scsi_qla_host *ha, u64 off,
void *data, int size)
#define MTU_FUDGE_FACTOR 100
static unsigned long
qla4_8xxx_decode_crb_addr(unsigned long addr)
static long rom_max_timeout = 100;
static long qla4_8xxx_rom_lock_timeout = 100;
static int
qla4_8xxx_rom_lock(struct scsi_qla_host *ha)
static void
qla4_8xxx_rom_unlock(struct scsi_qla_host *ha)
static int
qla4_8xxx_wait_rom_done(struct scsi_qla_host *ha)
static int
qla4_8xxx_do_rom_fast_read(struct scsi_qla_host *ha, int addr, int *valp)
static int
qla4_8xxx_rom_fast_read(struct scsi_qla_host *ha, int addr, int *valp)
static int
qla4_8xxx_pinit_from_rom(struct scsi_qla_host *ha, int verbose)
static int
qla4_8xxx_load_from_flash(struct scsi_qla_host *ha, uint32_t image_start)
static int qla4_8xxx_load_fw(struct scsi_qla_host *ha, uint32_t image_start)
int
qla4_8xxx_pci_mem_read_2M(struct scsi_qla_host *ha,
u64 off, void *data, int size)
int
qla4_8xxx_pci_mem_write_2M(struct scsi_qla_host *ha,
u64 off, void *data, int size)
static int qla4_8xxx_cmdpeg_ready(struct scsi_qla_host *ha, int pegtune_val)
static int qla4_8xxx_rcvpeg_ready(struct scsi_qla_host *ha)
void
qla4_8xxx_set_drv_active(struct scsi_qla_host *ha)
void
qla4_8xxx_clear_drv_active(struct scsi_qla_host *ha)
static inline int
qla4_8xxx_need_reset(struct scsi_qla_host *ha)
static inline void
qla4_8xxx_set_rst_ready(struct scsi_qla_host *ha)
static inline void
qla4_8xxx_clear_rst_ready(struct scsi_qla_host *ha)
static inline void
qla4_8xxx_set_qsnt_ready(struct scsi_qla_host *ha)
static int
qla4_8xxx_start_firmware(struct scsi_qla_host *ha, uint32_t image_start)
static int
qla4_8xxx_try_start_fw(struct scsi_qla_host *ha)
static void qla4_8xxx_rom_lock_recovery(struct scsi_qla_host *ha)
static int
qla4_8xxx_device_bootstrap(struct scsi_qla_host *ha)
static void
qla4_8xxx_need_reset_handler(struct scsi_qla_host *ha)
void
qla4_8xxx_need_qsnt_handler(struct scsi_qla_host *ha)
int qla4_8xxx_device_state_handler(struct scsi_qla_host *ha)
int qla4_8xxx_load_risc(struct scsi_qla_host *ha)
#define OPTROM_BURST_SIZE       0x1000
#define OPTROM_BURST_DWORDS     (OPTROM_BURST_SIZE / 4)
#define FARX_DATA_FLAG	BIT_31
#define FARX_ACCESS_FLASH_CONF	0x7FFD0000
#define FARX_ACCESS_FLASH_DATA	0x7FF00000
static inline uint32_t
flash_conf_addr(struct ql82xx_hw_data *hw, uint32_t faddr)
static inline uint32_t
flash_data_addr(struct ql82xx_hw_data *hw, uint32_t faddr)
static uint32_t *
qla4_8xxx_read_flash_data(struct scsi_qla_host *ha, uint32_t *dwptr,
uint32_t faddr, uint32_t length)
static uint8_t *
qla4_8xxx_read_optrom_data(struct scsi_qla_host *ha, uint8_t *buf,
uint32_t offset, uint32_t length)
static int
qla4_8xxx_find_flt_start(struct scsi_qla_host *ha, uint32_t *start)
static void
qla4_8xxx_get_flt_info(struct scsi_qla_host *ha, uint32_t flt_addr)
static void
qla4_8xxx_get_fdt_info(struct scsi_qla_host *ha)
static void
qla4_8xxx_get_idc_param(struct scsi_qla_host *ha)
int
qla4_8xxx_get_flash_info(struct scsi_qla_host *ha)
int
qla4_8xxx_stop_firmware(struct scsi_qla_host *ha)
int
qla4_8xxx_isp_reset(struct scsi_qla_host *ha)
int qla4_8xxx_get_sys_info(struct scsi_qla_host *ha)
static int
qla4_8xxx_mbx_intr_enable(struct scsi_qla_host *ha)
static int
qla4_8xxx_mbx_intr_disable(struct scsi_qla_host *ha)
void
qla4_8xxx_enable_intrs(struct scsi_qla_host *ha)
void
qla4_8xxx_disable_intrs(struct scsi_qla_host *ha)
struct ql4_init_msix_entry ;
static struct ql4_init_msix_entry qla4_8xxx_msix_entries[QLA_MSIX_ENTRIES] = ;
void
qla4_8xxx_disable_msix(struct scsi_qla_host *ha)
int
qla4_8xxx_enable_msix(struct scsi_qla_host *ha)
