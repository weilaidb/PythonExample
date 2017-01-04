const unsigned long sata_deb_timing_normal[]		= ;
const unsigned long sata_deb_timing_hotplug[]		= ;
const unsigned long sata_deb_timing_long[]		= ;
const struct ata_port_operations ata_base_port_ops = ;
const struct ata_port_operations sata_port_ops = ;
static unsigned int ata_dev_init_params(struct ata_device *dev,
u16 heads, u16 sectors);
static unsigned int ata_dev_set_xfermode(struct ata_device *dev);
static void ata_dev_xfermask(struct ata_device *dev);
static unsigned long ata_dev_blacklisted(const struct ata_device *dev);
unsigned int ata_print_id = 1;
struct ata_force_param ;
struct ata_force_ent ;
static struct ata_force_ent *ata_force_tbl;
static int ata_force_tbl_size;
static char ata_force_param_buf[PAGE_SIZE] __initdata;
module_param_string(force, ata_force_param_buf, sizeof(ata_force_param_buf), 0);
MODULE_PARM_DESC(force, "Force ATA configurations including cable type, link speed and transfer mode (see Documentation/kernel-parameters.txt for details)");
static int atapi_enabled = 1;
module_param(atapi_enabled, int, 0444);
MODULE_PARM_DESC(atapi_enabled, "Enable discovery of ATAPI devices (0=off, 1=on [default])");
static int atapi_dmadir = 0;
module_param(atapi_dmadir, int, 0444);
MODULE_PARM_DESC(atapi_dmadir, "Enable ATAPI DMADIR bridge support (0=off [default], 1=on)");
int atapi_passthru16 = 1;
module_param(atapi_passthru16, int, 0444);
MODULE_PARM_DESC(atapi_passthru16, "Enable ATA_16 passthru for ATAPI devices (0=off, 1=on [default])");
int libata_fua = 0;
module_param_named(fua, libata_fua, int, 0444);
MODULE_PARM_DESC(fua, "FUA support (0=off [default], 1=on)");
static int ata_ignore_hpa;
module_param_named(ignore_hpa, ata_ignore_hpa, int, 0644);
MODULE_PARM_DESC(ignore_hpa, "Ignore HPA limit (0=keep BIOS limits, 1=ignore limits, using full disk)");
static int libata_dma_mask = ATA_DMA_MASK_ATA|ATA_DMA_MASK_ATAPI|ATA_DMA_MASK_CFA;
module_param_named(dma, libata_dma_mask, int, 0444);
MODULE_PARM_DESC(dma, "DMA enable/disable (0x1==ATA, 0x2==ATAPI, 0x4==CF)");
static int ata_probe_timeout;
module_param(ata_probe_timeout, int, 0444);
MODULE_PARM_DESC(ata_probe_timeout, "Set ATA probing timeout (seconds)");
int libata_noacpi = 0;
module_param_named(noacpi, libata_noacpi, int, 0444);
MODULE_PARM_DESC(noacpi, "Disable the use of ACPI in probe/suspend/resume (0=off [default], 1=on)");
int libata_allow_tpm = 0;
module_param_named(allow_tpm, libata_allow_tpm, int, 0444);
MODULE_PARM_DESC(allow_tpm, "Permit the use of TPM commands (0=off [default], 1=on)");
static int atapi_an;
module_param(atapi_an, int, 0444);
MODULE_PARM_DESC(atapi_an, "Enable ATAPI AN media presence notification (0=0ff [default], 1=on)");
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("Library module for ATA devices");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static bool ata_sstatus_online(u32 sstatus)
struct ata_link *ata_link_next(struct ata_link *link, struct ata_port *ap,
enum ata_link_iter_mode mode)
struct ata_device *ata_dev_next(struct ata_device *dev, struct ata_link *link,
enum ata_dev_iter_mode mode)
struct ata_link *ata_dev_phys_link(struct ata_device *dev)
void ata_force_cbl(struct ata_port *ap)
static void ata_force_link_limits(struct ata_link *link)
static void ata_force_xfermask(struct ata_device *dev)
static void ata_force_horkage(struct ata_device *dev)
int atapi_cmd_type(u8 opcode)
void ata_tf_to_fis(const struct ata_taskfile *tf, u8 pmp, int is_cmd, u8 *fis)
void ata_tf_from_fis(const u8 *fis, struct ata_taskfile *tf)
static const u8 ata_rw_cmds[] = ;
static int ata_rwcmd_protocol(struct ata_taskfile *tf, struct ata_device *dev)
u64 ata_tf_read_block(struct ata_taskfile *tf, struct ata_device *dev)
int ata_build_rw_tf(struct ata_taskfile *tf, struct ata_device *dev,
u64 block, u32 n_block, unsigned int tf_flags,
unsigned int tag)
unsigned long ata_pack_xfermask(unsigned long pio_mask,
unsigned long mwdma_mask,
unsigned long udma_mask)
void ata_unpack_xfermask(unsigned long xfer_mask, unsigned long *pio_mask,
unsigned long *mwdma_mask, unsigned long *udma_mask)
static const struct ata_xfer_ent  ata_xfer_tbl[] = ;
u8 ata_xfer_mask2mode(unsigned long xfer_mask)
unsigned long ata_xfer_mode2mask(u8 xfer_mode)
int ata_xfer_mode2shift(unsigned long xfer_mode)
const char *ata_mode_string(unsigned long xfer_mask)
const char *sata_spd_string(unsigned int spd)
unsigned int ata_dev_classify(const struct ata_taskfile *tf)
void ata_id_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len)
void ata_id_c_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len)
static u64 ata_id_n_sectors(const u16 *id)
u64 ata_tf_to_lba48(const struct ata_taskfile *tf)
u64 ata_tf_to_lba(const struct ata_taskfile *tf)
static int ata_read_native_max_address(struct ata_device *dev, u64 *max_sectors)
static int ata_set_max_sectors(struct ata_device *dev, u64 new_sectors)
static int ata_hpa_resize(struct ata_device *dev)
static inline void ata_dump_id(const u16 *id)
unsigned long ata_id_xfermask(const u16 *id)
static void ata_qc_complete_internal(struct ata_queued_cmd *qc)
unsigned ata_exec_internal_sg(struct ata_device *dev,
struct ata_taskfile *tf, const u8 *cdb,
int dma_dir, struct scatterlist *sgl,
unsigned int n_elem, unsigned long timeout)
unsigned ata_exec_internal(struct ata_device *dev,
struct ata_taskfile *tf, const u8 *cdb,
int dma_dir, void *buf, unsigned int buflen,
unsigned long timeout)
unsigned int ata_do_simple_cmd(struct ata_device *dev, u8 cmd)
unsigned int ata_pio_need_iordy(const struct ata_device *adev)
static u32 ata_pio_mask_no_iordy(const struct ata_device *adev)
unsigned int ata_do_dev_read_id(struct ata_device *dev,
struct ata_taskfile *tf, u16 *id)
int ata_dev_read_id(struct ata_device *dev, unsigned int *p_class,
unsigned int flags, u16 *id)
static int ata_do_link_spd_horkage(struct ata_device *dev)
static inline u8 ata_dev_knobble(struct ata_device *dev)
static int ata_dev_config_ncq(struct ata_device *dev,
char *desc, size_t desc_sz)
int ata_dev_configure(struct ata_device *dev)
int ata_cable_40wire(struct ata_port *ap)
int ata_cable_80wire(struct ata_port *ap)
int ata_cable_unknown(struct ata_port *ap)
int ata_cable_ignore(struct ata_port *ap)
int ata_cable_sata(struct ata_port *ap)
int ata_bus_probe(struct ata_port *ap)
static void sata_print_link_status(struct ata_link *link)
struct ata_device *ata_dev_pair(struct ata_device *adev)
int sata_down_spd_limit(struct ata_link *link, u32 spd_limit)
static int __sata_set_spd_needed(struct ata_link *link, u32 *scontrol)
static int sata_set_spd_needed(struct ata_link *link)
int sata_set_spd(struct ata_link *link)
static const struct ata_timing ata_timing[] = ;
#define ENOUGH(v, unit)		(((v)-1)/(unit)+1)
#define EZ(v, unit)		((v)?ENOUGH(v, unit):0)
static void ata_timing_quantize(const struct ata_timing *t, struct ata_timing *q, int T, int UT)
void ata_timing_merge(const struct ata_timing *a, const struct ata_timing *b,
struct ata_timing *m, unsigned int what)
const struct ata_timing *ata_timing_find_mode(u8 xfer_mode)
int ata_timing_compute(struct ata_device *adev, unsigned short speed,
struct ata_timing *t, int T, int UT)
u8 ata_timing_cycle2mode(unsigned int xfer_shift, int cycle)
int ata_down_xfermask_limit(struct ata_device *dev, unsigned int sel)
static int ata_dev_set_mode(struct ata_device *dev)
int ata_do_set_mode(struct ata_link *link, struct ata_device **r_failed_dev)
int ata_wait_ready(struct ata_link *link, unsigned long deadline,
int (*check_ready)(struct ata_link *link))
int ata_wait_after_reset(struct ata_link *link, unsigned long deadline,
int (*check_ready)(struct ata_link *link))
int sata_link_debounce(struct ata_link *link, const unsigned long *params,
unsigned long deadline)
int sata_link_resume(struct ata_link *link, const unsigned long *params,
unsigned long deadline)
int sata_link_scr_lpm(struct ata_link *link, enum ata_lpm_policy policy,
bool spm_wakeup)
int ata_std_prereset(struct ata_link *link, unsigned long deadline)
int sata_link_hardreset(struct ata_link *link, const unsigned long *timing,
unsigned long deadline,
bool *online, int (*check_ready)(struct ata_link *))
int sata_std_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
void ata_std_postreset(struct ata_link *link, unsigned int *classes)
static int ata_dev_same_device(struct ata_device *dev, unsigned int new_class,
const u16 *new_id)
int ata_dev_reread_id(struct ata_device *dev, unsigned int readid_flags)
int ata_dev_revalidate(struct ata_device *dev, unsigned int new_class,
unsigned int readid_flags)
struct ata_blacklist_entry ;
static const struct ata_blacklist_entry ata_device_blacklist [] = ;
static int glob_match (const char *text, const char *pattern)
static unsigned long ata_dev_blacklisted(const struct ata_device *dev)
static int ata_dma_blacklisted(const struct ata_device *dev)
static int ata_is_40wire(struct ata_device *dev)
static int cable_is_40wire(struct ata_port *ap)
static void ata_dev_xfermask(struct ata_device *dev)
static unsigned int ata_dev_set_xfermode(struct ata_device *dev)
unsigned int ata_dev_set_feature(struct ata_device *dev, u8 enable, u8 feature)
static unsigned int ata_dev_init_params(struct ata_device *dev,
u16 heads, u16 sectors)
void ata_sg_clean(struct ata_queued_cmd *qc)
int atapi_check_dma(struct ata_queued_cmd *qc)
int ata_std_qc_defer(struct ata_queued_cmd *qc)
void ata_noop_qc_prep(struct ata_queued_cmd *qc)
void ata_sg_init(struct ata_queued_cmd *qc, struct scatterlist *sg,
unsigned int n_elem)
static int ata_sg_setup(struct ata_queued_cmd *qc)
void swap_buf_le16(u16 *buf, unsigned int buf_words)
static struct ata_queued_cmd *ata_qc_new(struct ata_port *ap)
struct ata_queued_cmd *ata_qc_new_init(struct ata_device *dev)
void ata_qc_free(struct ata_queued_cmd *qc)
void __ata_qc_complete(struct ata_queued_cmd *qc)
static void fill_result_tf(struct ata_queued_cmd *qc)
static void ata_verify_xfer(struct ata_queued_cmd *qc)
void ata_qc_complete(struct ata_queued_cmd *qc)
int ata_qc_complete_multiple(struct ata_port *ap, u32 qc_active)
void ata_qc_issue(struct ata_queued_cmd *qc)
int sata_scr_valid(struct ata_link *link)
int sata_scr_read(struct ata_link *link, int reg, u32 *val)
int sata_scr_write(struct ata_link *link, int reg, u32 val)
int sata_scr_write_flush(struct ata_link *link, int reg, u32 val)
bool ata_phys_link_online(struct ata_link *link)
bool ata_phys_link_offline(struct ata_link *link)
bool ata_link_online(struct ata_link *link)
bool ata_link_offline(struct ata_link *link)
static int ata_host_request_pm(struct ata_host *host, pm_message_t mesg,
unsigned int action, unsigned int ehi_flags,
int wait)
int ata_host_suspend(struct ata_host *host, pm_message_t mesg)
void ata_host_resume(struct ata_host *host)
void ata_dev_init(struct ata_device *dev)
void ata_link_init(struct ata_port *ap, struct ata_link *link, int pmp)
int sata_link_init_spd(struct ata_link *link)
struct ata_port *ata_port_alloc(struct ata_host *host)
static void ata_host_release(struct device *gendev, void *res)
struct ata_host *ata_host_alloc(struct device *dev, int max_ports)
struct ata_host *ata_host_alloc_pinfo(struct device *dev,
const struct ata_port_info * const * ppi,
int n_ports)
int ata_slave_link_init(struct ata_port *ap)
static void ata_host_stop(struct device *gendev, void *res)
static void ata_finalize_port_ops(struct ata_port_operations *ops)
int ata_host_start(struct ata_host *host)
void ata_host_init(struct ata_host *host, struct device *dev,
unsigned long flags, struct ata_port_operations *ops)
int ata_port_probe(struct ata_port *ap)
static void async_port_probe(void *data, async_cookie_t cookie)
int ata_host_register(struct ata_host *host, struct scsi_host_template *sht)
int ata_host_activate(struct ata_host *host, int irq,
irq_handler_t irq_handler, unsigned long irq_flags,
struct scsi_host_template *sht)
static void ata_port_detach(struct ata_port *ap)
void ata_host_detach(struct ata_host *host)
void ata_pci_remove_one(struct pci_dev *pdev)
int pci_test_config_bits(struct pci_dev *pdev, const struct pci_bits *bits)
void ata_pci_device_do_suspend(struct pci_dev *pdev, pm_message_t mesg)
int ata_pci_device_do_resume(struct pci_dev *pdev)
int ata_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
int ata_pci_device_resume(struct pci_dev *pdev)
static int __init ata_parse_force_one(char **cur,
struct ata_force_ent *force_ent,
const char **reason)
static void __init ata_parse_force_param(void)
static int __init ata_init(void)
static void __exit ata_exit(void)
subsys_initcall(ata_init);
module_exit(ata_exit);
static DEFINE_RATELIMIT_STATE(ratelimit, HZ / 5, 1);
int ata_ratelimit(void)
void ata_msleep(struct ata_port *ap, unsigned int msecs)
u32 ata_wait_register(struct ata_port *ap, void __iomem *reg, u32 mask, u32 val,
unsigned long interval, unsigned long timeout)
static unsigned int ata_dummy_qc_issue(struct ata_queued_cmd *qc)
static void ata_dummy_error_handler(struct ata_port *ap)
struct ata_port_operations ata_dummy_port_ops = ;
const struct ata_port_info ata_dummy_port_info = ;
EXPORT_SYMBOL_GPL(sata_deb_timing_normal);
EXPORT_SYMBOL_GPL(sata_deb_timing_hotplug);
EXPORT_SYMBOL_GPL(sata_deb_timing_long);
EXPORT_SYMBOL_GPL(ata_base_port_ops);
EXPORT_SYMBOL_GPL(sata_port_ops);
EXPORT_SYMBOL_GPL(ata_dummy_port_ops);
EXPORT_SYMBOL_GPL(ata_dummy_port_info);
EXPORT_SYMBOL_GPL(ata_link_next);
EXPORT_SYMBOL_GPL(ata_dev_next);
EXPORT_SYMBOL_GPL(ata_std_bios_param);
EXPORT_SYMBOL_GPL(ata_scsi_unlock_native_capacity);
EXPORT_SYMBOL_GPL(ata_host_init);
EXPORT_SYMBOL_GPL(ata_host_alloc);
EXPORT_SYMBOL_GPL(ata_host_alloc_pinfo);
EXPORT_SYMBOL_GPL(ata_slave_link_init);
EXPORT_SYMBOL_GPL(ata_host_start);
EXPORT_SYMBOL_GPL(ata_host_register);
EXPORT_SYMBOL_GPL(ata_host_activate);
EXPORT_SYMBOL_GPL(ata_host_detach);
EXPORT_SYMBOL_GPL(ata_sg_init);
EXPORT_SYMBOL_GPL(ata_qc_complete);
EXPORT_SYMBOL_GPL(ata_qc_complete_multiple);
EXPORT_SYMBOL_GPL(atapi_cmd_type);
EXPORT_SYMBOL_GPL(ata_tf_to_fis);
EXPORT_SYMBOL_GPL(ata_tf_from_fis);
EXPORT_SYMBOL_GPL(ata_pack_xfermask);
EXPORT_SYMBOL_GPL(ata_unpack_xfermask);
EXPORT_SYMBOL_GPL(ata_xfer_mask2mode);
EXPORT_SYMBOL_GPL(ata_xfer_mode2mask);
EXPORT_SYMBOL_GPL(ata_xfer_mode2shift);
EXPORT_SYMBOL_GPL(ata_mode_string);
EXPORT_SYMBOL_GPL(ata_id_xfermask);
EXPORT_SYMBOL_GPL(ata_do_set_mode);
EXPORT_SYMBOL_GPL(ata_std_qc_defer);
EXPORT_SYMBOL_GPL(ata_noop_qc_prep);
EXPORT_SYMBOL_GPL(ata_dev_disable);
EXPORT_SYMBOL_GPL(sata_set_spd);
EXPORT_SYMBOL_GPL(ata_wait_after_reset);
EXPORT_SYMBOL_GPL(sata_link_debounce);
EXPORT_SYMBOL_GPL(sata_link_resume);
EXPORT_SYMBOL_GPL(sata_link_scr_lpm);
EXPORT_SYMBOL_GPL(ata_std_prereset);
EXPORT_SYMBOL_GPL(sata_link_hardreset);
EXPORT_SYMBOL_GPL(sata_std_hardreset);
EXPORT_SYMBOL_GPL(ata_std_postreset);
EXPORT_SYMBOL_GPL(ata_dev_classify);
EXPORT_SYMBOL_GPL(ata_dev_pair);
EXPORT_SYMBOL_GPL(ata_ratelimit);
EXPORT_SYMBOL_GPL(ata_msleep);
EXPORT_SYMBOL_GPL(ata_wait_register);
EXPORT_SYMBOL_GPL(ata_scsi_queuecmd);
EXPORT_SYMBOL_GPL(ata_scsi_slave_config);
EXPORT_SYMBOL_GPL(ata_scsi_slave_destroy);
EXPORT_SYMBOL_GPL(ata_scsi_change_queue_depth);
EXPORT_SYMBOL_GPL(sata_scr_valid);
EXPORT_SYMBOL_GPL(sata_scr_read);
EXPORT_SYMBOL_GPL(sata_scr_write);
EXPORT_SYMBOL_GPL(sata_scr_write_flush);
EXPORT_SYMBOL_GPL(ata_link_online);
EXPORT_SYMBOL_GPL(ata_link_offline);
EXPORT_SYMBOL_GPL(ata_host_suspend);
EXPORT_SYMBOL_GPL(ata_host_resume);
EXPORT_SYMBOL_GPL(ata_id_string);
EXPORT_SYMBOL_GPL(ata_id_c_string);
EXPORT_SYMBOL_GPL(ata_do_dev_read_id);
EXPORT_SYMBOL_GPL(ata_scsi_simulate);
EXPORT_SYMBOL_GPL(ata_pio_need_iordy);
EXPORT_SYMBOL_GPL(ata_timing_find_mode);
EXPORT_SYMBOL_GPL(ata_timing_compute);
EXPORT_SYMBOL_GPL(ata_timing_merge);
EXPORT_SYMBOL_GPL(ata_timing_cycle2mode);
EXPORT_SYMBOL_GPL(pci_test_config_bits);
EXPORT_SYMBOL_GPL(ata_pci_remove_one);
EXPORT_SYMBOL_GPL(ata_pci_device_do_suspend);
EXPORT_SYMBOL_GPL(ata_pci_device_do_resume);
EXPORT_SYMBOL_GPL(ata_pci_device_suspend);
EXPORT_SYMBOL_GPL(ata_pci_device_resume);
EXPORT_SYMBOL_GPL(__ata_ehi_push_desc);
EXPORT_SYMBOL_GPL(ata_ehi_push_desc);
EXPORT_SYMBOL_GPL(ata_ehi_clear_desc);
EXPORT_SYMBOL_GPL(ata_port_desc);
EXPORT_SYMBOL_GPL(ata_port_pbar_desc);
EXPORT_SYMBOL_GPL(ata_port_schedule_eh);
EXPORT_SYMBOL_GPL(ata_link_abort);
EXPORT_SYMBOL_GPL(ata_port_abort);
EXPORT_SYMBOL_GPL(ata_port_freeze);
EXPORT_SYMBOL_GPL(sata_async_notification);
EXPORT_SYMBOL_GPL(ata_eh_freeze_port);
EXPORT_SYMBOL_GPL(ata_eh_thaw_port);
EXPORT_SYMBOL_GPL(ata_eh_qc_complete);
EXPORT_SYMBOL_GPL(ata_eh_qc_retry);
EXPORT_SYMBOL_GPL(ata_eh_analyze_ncq_error);
EXPORT_SYMBOL_GPL(ata_do_eh);
EXPORT_SYMBOL_GPL(ata_std_error_handler);
EXPORT_SYMBOL_GPL(ata_cable_40wire);
EXPORT_SYMBOL_GPL(ata_cable_80wire);
EXPORT_SYMBOL_GPL(ata_cable_unknown);
EXPORT_SYMBOL_GPL(ata_cable_ignore);
EXPORT_SYMBOL_GPL(ata_cable_sata);
