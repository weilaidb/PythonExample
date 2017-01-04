#define MASK(n)			((1ULL<<(n))-1)
#define MN_WIN(addr) (((addr & 0x1fc0000) >> 1) | \
((addr >> 25) & 0x3ff))
#define OCM_WIN(addr) (((addr & 0x1ff0000) >> 1) | \
((addr >> 25) & 0x3ff))
#define MS_WIN(addr) (addr & 0x0ffc0000)
#define QLA82XX_PCI_MN_2M   (0)
#define QLA82XX_PCI_MS_2M   (0x80000)
#define QLA82XX_PCI_OCM0_2M (0xc0000)
#define VALID_OCM_ADDR(addr) (((addr) & 0x3f800) != 0x3f800)
#define GET_MEM_OFFS_2M(addr) (addr & MASK(18))
#define BLOCK_PROTECT_BITS 0x0F
#define CRB_BLK(off)	((off >> 20) & 0x3f)
#define CRB_SUBBLK(off)	((off >> 16) & 0xf)
#define CRB_WINDOW_2M	(0x130060)
#define QLA82XX_PCI_CAMQM_2M_END	(0x04800800UL)
#define CRB_HI(off)	((qla82xx_crb_hub_agt[CRB_BLK(off)] << 20) | \
((off) & 0xf0000))
#define QLA82XX_PCI_CAMQM_2M_BASE	(0x000ff800UL)
#define CRB_INDIRECT_2M	(0x1e0000UL)
#define MAX_CRB_XFORM 60
static unsigned long crb_addr_xform[MAX_CRB_XFORM];
int qla82xx_crb_table_initialized;
#define qla82xx_crb_addr_transform(name) \
(crb_addr_xform[QLA82XX_HW_PX_MAP_CRB_##name] = \
QLA82XX_HW_CRB_HUB_AGT_ADR_##name << 20)
static void qla82xx_crb_addr_transform_setup(void)
struct crb_128M_2M_block_map crb_128M_2M_map[64] = ;
unsigned qla82xx_crb_hub_agt[64] = ;
char *qdev_state[] = ;
static void
qla82xx_pci_set_crbwindow_2M(struct qla_hw_data *ha, ulong *off)
static inline unsigned long
qla82xx_pci_set_crbwindow(struct qla_hw_data *ha, u64 off)
static int
qla82xx_pci_get_crb_addr_2M(struct qla_hw_data *ha, ulong *off)
#define CRB_WIN_LOCK_TIMEOUT 100000000
static int qla82xx_crb_win_lock(struct qla_hw_data *ha)
int
qla82xx_wr_32(struct qla_hw_data *ha, ulong off, u32 data)
int
qla82xx_rd_32(struct qla_hw_data *ha, ulong off)
#define IDC_LOCK_TIMEOUT 100000000
int qla82xx_idc_lock(struct qla_hw_data *ha)
void qla82xx_idc_unlock(struct qla_hw_data *ha)
#define QLA82XX_ADDR_IN_RANGE(addr, low, high) \
(((addr) <= (high)) && ((addr) >= (low)))
static unsigned long
qla82xx_pci_mem_bound_check(struct qla_hw_data *ha,
unsigned long long addr, int size)
int qla82xx_pci_set_window_warning_count;
static unsigned long
qla82xx_pci_set_window(struct qla_hw_data *ha, unsigned long long addr)
static int qla82xx_pci_is_same_window(struct qla_hw_data *ha,
unsigned long long addr)
static int qla82xx_pci_mem_read_direct(struct qla_hw_data *ha,
u64 off, void *data, int size)
static int
qla82xx_pci_mem_write_direct(struct qla_hw_data *ha,
u64 off, void *data, int size)
#define MTU_FUDGE_FACTOR 100
static unsigned long
qla82xx_decode_crb_addr(unsigned long addr)
static long rom_max_timeout = 100;
static long qla82xx_rom_lock_timeout = 100;
static int
qla82xx_rom_lock(struct qla_hw_data *ha)
static void
qla82xx_rom_unlock(struct qla_hw_data *ha)
static int
qla82xx_wait_rom_busy(struct qla_hw_data *ha)
static int
qla82xx_wait_rom_done(struct qla_hw_data *ha)
static int
qla82xx_do_rom_fast_read(struct qla_hw_data *ha, int addr, int *valp)
static int
qla82xx_rom_fast_read(struct qla_hw_data *ha, int addr, int *valp)
static int
qla82xx_read_status_reg(struct qla_hw_data *ha, uint32_t *val)
static int
qla82xx_flash_wait_write_finish(struct qla_hw_data *ha)
static int
qla82xx_flash_set_write_enable(struct qla_hw_data *ha)
static int
qla82xx_write_status_reg(struct qla_hw_data *ha, uint32_t val)
static int
qla82xx_write_disable_flash(struct qla_hw_data *ha)
static int
ql82xx_rom_lock_d(struct qla_hw_data *ha)
static int
qla82xx_write_flash_dword(struct qla_hw_data *ha, uint32_t flashaddr,
uint32_t data)
static int
qla82xx_pinit_from_rom(scsi_qla_host_t *vha)
static int
qla82xx_pci_mem_write_2M(struct qla_hw_data *ha,
u64 off, void *data, int size)
static int
qla82xx_fw_load_from_flash(struct qla_hw_data *ha)
int
qla82xx_pci_mem_read_2M(struct qla_hw_data *ha,
u64 off, void *data, int size)
static struct qla82xx_uri_table_desc *
qla82xx_get_table_desc(const u8 *unirom, int section)
static struct qla82xx_uri_data_desc *
qla82xx_get_data_desc(struct qla_hw_data *ha,
u32 section, u32 idx_offset)
static u8 *
qla82xx_get_bootld_offset(struct qla_hw_data *ha)
static __le32
qla82xx_get_fw_size(struct qla_hw_data *ha)
static u8 *
qla82xx_get_fw_offs(struct qla_hw_data *ha)
char *
qla82xx_pci_info_str(struct scsi_qla_host *vha, char *str)
int qla82xx_pci_region_offset(struct pci_dev *pdev, int region)
int
qla82xx_iospace_config(struct qla_hw_data *ha)
int
qla82xx_pci_config(scsi_qla_host_t *vha)
void
qla82xx_reset_chip(scsi_qla_host_t *vha)
void qla82xx_config_rings(struct scsi_qla_host *vha)
void qla82xx_reset_adapter(struct scsi_qla_host *vha)
static int
qla82xx_fw_load_from_blob(struct qla_hw_data *ha)
static int
qla82xx_set_product_offset(struct qla_hw_data *ha)
int
qla82xx_validate_firmware_blob(scsi_qla_host_t *vha, uint8_t fw_type)
static int
qla82xx_check_cmdpeg_state(struct qla_hw_data *ha)
static int
qla82xx_check_rcvpeg_state(struct qla_hw_data *ha)
uint32_t qla82xx_isr_int_target_mask_enable[8] = ;
uint32_t qla82xx_isr_int_target_status[8] = ;
static struct qla82xx_legacy_intr_set legacy_intr[] = \
QLA82XX_LEGACY_INTR_CONFIG;
static void
qla82xx_mbx_completion(scsi_qla_host_t *vha, uint16_t mb0)
irqreturn_t
qla82xx_intr_handler(int irq, void *dev_id)
irqreturn_t
qla82xx_msix_default(int irq, void *dev_id)
irqreturn_t
qla82xx_msix_rsp_q(int irq, void *dev_id)
void
qla82xx_poll(int irq, void *dev_id)
void
qla82xx_enable_intrs(struct qla_hw_data *ha)
void
qla82xx_disable_intrs(struct qla_hw_data *ha)
void qla82xx_init_flags(struct qla_hw_data *ha)
inline void
qla82xx_set_drv_active(scsi_qla_host_t *vha)
inline void
qla82xx_clear_drv_active(struct qla_hw_data *ha)
static inline int
qla82xx_need_reset(struct qla_hw_data *ha)
static inline void
qla82xx_set_rst_ready(struct qla_hw_data *ha)
static inline void
qla82xx_clear_rst_ready(struct qla_hw_data *ha)
static inline void
qla82xx_set_qsnt_ready(struct qla_hw_data *ha)
void
qla82xx_clear_qsnt_ready(scsi_qla_host_t *vha)
static int
qla82xx_load_fw(scsi_qla_host_t *vha)
int
qla82xx_start_firmware(scsi_qla_host_t *vha)
static inline int
qla2xx_build_scsi_type_6_iocbs(srb_t *sp, struct cmd_type_6 *cmd_pkt,
uint16_t tot_dsds)
inline uint16_t
qla82xx_calc_dsd_lists(uint16_t dsds)
int
qla82xx_start_scsi(srb_t *sp)
static uint32_t *
qla82xx_read_flash_data(scsi_qla_host_t *vha, uint32_t *dwptr, uint32_t faddr,
uint32_t length)
static int
qla82xx_unprotect_flash(struct qla_hw_data *ha)
static int
qla82xx_protect_flash(struct qla_hw_data *ha)
static int
qla82xx_erase_sector(struct qla_hw_data *ha, int addr)
uint8_t *
qla82xx_read_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
static int
qla82xx_write_flash_data(struct scsi_qla_host *vha, uint32_t *dwptr,
uint32_t faddr, uint32_t dwords)
int
qla82xx_write_optrom_data(struct scsi_qla_host *vha, uint8_t *buf,
uint32_t offset, uint32_t length)
void
qla82xx_start_iocbs(srb_t *sp)
void qla82xx_rom_lock_recovery(struct qla_hw_data *ha)
static int
qla82xx_device_bootstrap(scsi_qla_host_t *vha)
static void
qla82xx_need_qsnt_handler(scsi_qla_host_t *vha)
uint32_t
qla82xx_wait_for_state_change(scsi_qla_host_t *vha, uint32_t curr_state)
static void
qla82xx_dev_failed_handler(scsi_qla_host_t *vha)
static void
qla82xx_need_reset_handler(scsi_qla_host_t *vha)
int
qla82xx_check_fw_alive(scsi_qla_host_t *vha)
int
qla82xx_device_state_handler(scsi_qla_host_t *vha)
void qla82xx_watchdog(scsi_qla_host_t *vha)
int qla82xx_load_risc(scsi_qla_host_t *vha, uint32_t *srisc_addr)
int
qla82xx_abort_isp(scsi_qla_host_t *vha)
int qla82xx_fcoe_ctx_reset(scsi_qla_host_t *vha)
int qla2x00_wait_for_fcoe_ctx_reset(scsi_qla_host_t *vha)
void
qla82xx_chip_reset_cleanup(scsi_qla_host_t *vha)
