#define __LINUX_LIBATA_H__
#undef ATA_DEBUG
#undef ATA_VERBOSE_DEBUG
#undef ATA_IRQ_TRAP
#undef ATA_NDEBUG
#define DPRINTK(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define VPRINTK(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define VPRINTK(fmt, args...)
#define DPRINTK(fmt, args...)
#define VPRINTK(fmt, args...)
#define BPRINTK(fmt, args...) if (ap->flags & ATA_FLAG_DEBUGMSG) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define HAVE_LIBATA_MSG 1
enum ;
#define ata_msg_drv(p)    ((p)->msg_enable & ATA_MSG_DRV)
#define ata_msg_info(p)   ((p)->msg_enable & ATA_MSG_INFO)
#define ata_msg_probe(p)  ((p)->msg_enable & ATA_MSG_PROBE)
#define ata_msg_warn(p)   ((p)->msg_enable & ATA_MSG_WARN)
#define ata_msg_malloc(p) ((p)->msg_enable & ATA_MSG_MALLOC)
#define ata_msg_ctl(p)    ((p)->msg_enable & ATA_MSG_CTL)
#define ata_msg_intr(p)   ((p)->msg_enable & ATA_MSG_INTR)
#define ata_msg_err(p)    ((p)->msg_enable & ATA_MSG_ERR)
static inline u32 ata_msg_init(int dval, int default_msg_enable_bits)
#define ATA_TAG_POISON		0xfafbfcfdU
enum ;
enum ata_xfer_mask ;
enum hsm_task_states ;
enum ata_completion_errors ;
enum ata_lpm_policy ;
enum ata_lpm_hints ;
struct scsi_device;
struct ata_port_operations;
struct ata_port;
struct ata_link;
struct ata_queued_cmd;
typedef void (*ata_qc_cb_t) (struct ata_queued_cmd *qc);
typedef int (*ata_prereset_fn_t)(struct ata_link *link, unsigned long deadline);
typedef int (*ata_reset_fn_t)(struct ata_link *link, unsigned int *classes,
unsigned long deadline);
typedef void (*ata_postreset_fn_t)(struct ata_link *link, unsigned int *classes);
extern struct device_attribute dev_attr_link_power_management_policy;
extern struct device_attribute dev_attr_unload_heads;
extern struct device_attribute dev_attr_em_message_type;
extern struct device_attribute dev_attr_em_message;
extern struct device_attribute dev_attr_sw_activity;
enum sw_activity ;
struct ata_ioports ;
struct ata_host ;
struct ata_queued_cmd ;
struct ata_port_stats ;
struct ata_ering_entry ;
struct ata_ering ;
struct ata_device ;
#define ATA_DEVICE_CLEAR_BEGIN		offsetof(struct ata_device, n_sectors)
#define ATA_DEVICE_CLEAR_END		offsetof(struct ata_device, ering)
struct ata_eh_info ;
struct ata_eh_context ;
struct ata_acpi_drive
__packed;
struct ata_acpi_gtm  __packed;
struct ata_link ;
#define ATA_LINK_CLEAR_BEGIN		offsetof(struct ata_link, active_tag)
#define ATA_LINK_CLEAR_END		offsetof(struct ata_link, device[0])
struct ata_port ;
#define ATA_OP_NULL		(void *)(unsigned long)(-ENOENT)
struct ata_port_operations ;
struct ata_port_info ;
struct ata_timing ;
extern const unsigned long sata_deb_timing_normal[];
extern const unsigned long sata_deb_timing_hotplug[];
extern const unsigned long sata_deb_timing_long[];
extern struct ata_port_operations ata_dummy_port_ops;
extern const struct ata_port_info ata_dummy_port_info;
static inline const unsigned long *
sata_ehc_deb_timing(struct ata_eh_context *ehc)
static inline int ata_port_is_dummy(struct ata_port *ap)
extern int sata_set_spd(struct ata_link *link);
extern int ata_std_prereset(struct ata_link *link, unsigned long deadline);
extern int ata_wait_after_reset(struct ata_link *link, unsigned long deadline,
int (*check_ready)(struct ata_link *link));
extern int sata_link_debounce(struct ata_link *link,
const unsigned long *params, unsigned long deadline);
extern int sata_link_resume(struct ata_link *link, const unsigned long *params,
unsigned long deadline);
extern int sata_link_scr_lpm(struct ata_link *link, enum ata_lpm_policy policy,
bool spm_wakeup);
extern int sata_link_hardreset(struct ata_link *link,
const unsigned long *timing, unsigned long deadline,
bool *online, int (*check_ready)(struct ata_link *));
extern int sata_std_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
extern void ata_std_postreset(struct ata_link *link, unsigned int *classes);
extern struct ata_host *ata_host_alloc(struct device *dev, int max_ports);
extern struct ata_host *ata_host_alloc_pinfo(struct device *dev,
const struct ata_port_info * const * ppi, int n_ports);
extern int ata_slave_link_init(struct ata_port *ap);
extern int ata_host_start(struct ata_host *host);
extern int ata_host_register(struct ata_host *host,
struct scsi_host_template *sht);
extern int ata_host_activate(struct ata_host *host, int irq,
irq_handler_t irq_handler, unsigned long irq_flags,
struct scsi_host_template *sht);
extern void ata_host_detach(struct ata_host *host);
extern void ata_host_init(struct ata_host *, struct device *,
unsigned long, struct ata_port_operations *);
extern int ata_scsi_detect(struct scsi_host_template *sht);
extern int ata_scsi_ioctl(struct scsi_device *dev, int cmd, void __user *arg);
extern int ata_scsi_queuecmd(struct Scsi_Host *h, struct scsi_cmnd *cmd);
extern int ata_sas_scsi_ioctl(struct ata_port *ap, struct scsi_device *dev,
int cmd, void __user *arg);
extern void ata_sas_port_destroy(struct ata_port *);
extern struct ata_port *ata_sas_port_alloc(struct ata_host *,
struct ata_port_info *, struct Scsi_Host *);
extern int ata_sas_port_init(struct ata_port *);
extern int ata_sas_port_start(struct ata_port *ap);
extern void ata_sas_port_stop(struct ata_port *ap);
extern int ata_sas_slave_configure(struct scsi_device *, struct ata_port *);
extern int ata_sas_queuecmd(struct scsi_cmnd *cmd, struct ata_port *ap);
extern int sata_scr_valid(struct ata_link *link);
extern int sata_scr_read(struct ata_link *link, int reg, u32 *val);
extern int sata_scr_write(struct ata_link *link, int reg, u32 val);
extern int sata_scr_write_flush(struct ata_link *link, int reg, u32 val);
extern bool ata_link_online(struct ata_link *link);
extern bool ata_link_offline(struct ata_link *link);
extern int ata_host_suspend(struct ata_host *host, pm_message_t mesg);
extern void ata_host_resume(struct ata_host *host);
extern int ata_ratelimit(void);
extern void ata_msleep(struct ata_port *ap, unsigned int msecs);
extern u32 ata_wait_register(struct ata_port *ap, void __iomem *reg, u32 mask,
u32 val, unsigned long interval, unsigned long timeout);
extern int atapi_cmd_type(u8 opcode);
extern void ata_tf_to_fis(const struct ata_taskfile *tf,
u8 pmp, int is_cmd, u8 *fis);
extern void ata_tf_from_fis(const u8 *fis, struct ata_taskfile *tf);
extern unsigned long ata_pack_xfermask(unsigned long pio_mask,
unsigned long mwdma_mask, unsigned long udma_mask);
extern void ata_unpack_xfermask(unsigned long xfer_mask,
unsigned long *pio_mask, unsigned long *mwdma_mask,
unsigned long *udma_mask);
extern u8 ata_xfer_mask2mode(unsigned long xfer_mask);
extern unsigned long ata_xfer_mode2mask(u8 xfer_mode);
extern int ata_xfer_mode2shift(unsigned long xfer_mode);
extern const char *ata_mode_string(unsigned long xfer_mask);
extern unsigned long ata_id_xfermask(const u16 *id);
extern int ata_std_qc_defer(struct ata_queued_cmd *qc);
extern void ata_noop_qc_prep(struct ata_queued_cmd *qc);
extern void ata_sg_init(struct ata_queued_cmd *qc, struct scatterlist *sg,
unsigned int n_elem);
extern unsigned int ata_dev_classify(const struct ata_taskfile *tf);
extern void ata_dev_disable(struct ata_device *adev);
extern void ata_id_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len);
extern void ata_id_c_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len);
extern unsigned int ata_do_dev_read_id(struct ata_device *dev,
struct ata_taskfile *tf, u16 *id);
extern void ata_qc_complete(struct ata_queued_cmd *qc);
extern int ata_qc_complete_multiple(struct ata_port *ap, u32 qc_active);
extern void ata_scsi_simulate(struct ata_device *dev, struct scsi_cmnd *cmd);
extern int ata_std_bios_param(struct scsi_device *sdev,
struct block_device *bdev,
sector_t capacity, int geom[]);
extern void ata_scsi_unlock_native_capacity(struct scsi_device *sdev);
extern int ata_scsi_slave_config(struct scsi_device *sdev);
extern void ata_scsi_slave_destroy(struct scsi_device *sdev);
extern int ata_scsi_change_queue_depth(struct scsi_device *sdev,
int queue_depth, int reason);
extern struct ata_device *ata_dev_pair(struct ata_device *adev);
extern int ata_do_set_mode(struct ata_link *link, struct ata_device **r_failed_dev);
extern void ata_scsi_port_error_handler(struct Scsi_Host *host, struct ata_port *ap);
extern void ata_scsi_cmd_error_handler(struct Scsi_Host *host, struct ata_port *ap, struct list_head *eh_q);
extern int ata_cable_40wire(struct ata_port *ap);
extern int ata_cable_80wire(struct ata_port *ap);
extern int ata_cable_sata(struct ata_port *ap);
extern int ata_cable_ignore(struct ata_port *ap);
extern int ata_cable_unknown(struct ata_port *ap);
extern unsigned int ata_pio_need_iordy(const struct ata_device *);
extern const struct ata_timing *ata_timing_find_mode(u8 xfer_mode);
extern int ata_timing_compute(struct ata_device *, unsigned short,
struct ata_timing *, int, int);
extern void ata_timing_merge(const struct ata_timing *,
const struct ata_timing *, struct ata_timing *,
unsigned int);
extern u8 ata_timing_cycle2mode(unsigned int xfer_shift, int cycle);
struct pci_dev;
struct pci_bits ;
extern int pci_test_config_bits(struct pci_dev *pdev, const struct pci_bits *bits);
extern void ata_pci_remove_one(struct pci_dev *pdev);
extern void ata_pci_device_do_suspend(struct pci_dev *pdev, pm_message_t mesg);
extern int __must_check ata_pci_device_do_resume(struct pci_dev *pdev);
extern int ata_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg);
extern int ata_pci_device_resume(struct pci_dev *pdev);
static inline const struct ata_acpi_gtm *ata_acpi_init_gtm(struct ata_port *ap)
int ata_acpi_stm(struct ata_port *ap, const struct ata_acpi_gtm *stm);
int ata_acpi_gtm(struct ata_port *ap, struct ata_acpi_gtm *stm);
unsigned long ata_acpi_gtm_xfermask(struct ata_device *dev,
const struct ata_acpi_gtm *gtm);
int ata_acpi_cbl_80wire(struct ata_port *ap, const struct ata_acpi_gtm *gtm);
static inline const struct ata_acpi_gtm *ata_acpi_init_gtm(struct ata_port *ap)
static inline int ata_acpi_stm(const struct ata_port *ap,
struct ata_acpi_gtm *stm)
static inline int ata_acpi_gtm(const struct ata_port *ap,
struct ata_acpi_gtm *stm)
static inline unsigned int ata_acpi_gtm_xfermask(struct ata_device *dev,
const struct ata_acpi_gtm *gtm)
static inline int ata_acpi_cbl_80wire(struct ata_port *ap,
const struct ata_acpi_gtm *gtm)
extern void ata_port_schedule_eh(struct ata_port *ap);
extern int ata_link_abort(struct ata_link *link);
extern int ata_port_abort(struct ata_port *ap);
extern int ata_port_freeze(struct ata_port *ap);
extern int sata_async_notification(struct ata_port *ap);
extern void ata_eh_freeze_port(struct ata_port *ap);
extern void ata_eh_thaw_port(struct ata_port *ap);
extern void ata_eh_qc_complete(struct ata_queued_cmd *qc);
extern void ata_eh_qc_retry(struct ata_queued_cmd *qc);
extern void ata_eh_analyze_ncq_error(struct ata_link *link);
extern void ata_do_eh(struct ata_port *ap, ata_prereset_fn_t prereset,
ata_reset_fn_t softreset, ata_reset_fn_t hardreset,
ata_postreset_fn_t postreset);
extern void ata_std_error_handler(struct ata_port *ap);
extern int ata_link_nr_enabled(struct ata_link *link);
extern const struct ata_port_operations ata_base_port_ops;
extern const struct ata_port_operations sata_port_ops;
extern struct device_attribute *ata_common_sdev_attrs[];
#define ATA_BASE_SHT(drv_name)					\
.module			= THIS_MODULE,			\
.name			= drv_name,			\
.ioctl			= ata_scsi_ioctl,		\
.queuecommand		= ata_scsi_queuecmd,		\
.can_queue		= ATA_DEF_QUEUE,		\
.this_id		= ATA_SHT_THIS_ID,		\
.cmd_per_lun		= ATA_SHT_CMD_PER_LUN,		\
.emulated		= ATA_SHT_EMULATED,		\
.use_clustering		= ATA_SHT_USE_CLUSTERING,	\
.proc_name		= drv_name,			\
.slave_configure	= ata_scsi_slave_config,	\
.slave_destroy		= ata_scsi_slave_destroy,	\
.bios_param		= ata_std_bios_param,		\
.unlock_native_capacity	= ata_scsi_unlock_native_capacity, \
.sdev_attrs		= ata_common_sdev_attrs
#define ATA_NCQ_SHT(drv_name)					\
ATA_BASE_SHT(drv_name),					\
.change_queue_depth	= ata_scsi_change_queue_depth
static inline bool sata_pmp_supported(struct ata_port *ap)
static inline bool sata_pmp_attached(struct ata_port *ap)
static inline int ata_is_host_link(const struct ata_link *link)
static inline bool sata_pmp_supported(struct ata_port *ap)
static inline bool sata_pmp_attached(struct ata_port *ap)
static inline int ata_is_host_link(const struct ata_link *link)
static inline int sata_srst_pmp(struct ata_link *link)
#define ata_port_printk(ap, lv, fmt, args...) \
printk("%sata%u: "fmt, lv, (ap)->print_id , ##args)
#define ata_link_printk(link, lv, fmt, args...) do  while(0)
#define ata_dev_printk(dev, lv, fmt, args...) \
printk("%sata%u.%02u: "fmt, lv, (dev)->link->ap->print_id,	\
(dev)->link->pmp + (dev)->devno , ##args)
extern void __ata_ehi_push_desc(struct ata_eh_info *ehi, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern void ata_ehi_push_desc(struct ata_eh_info *ehi, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern void ata_ehi_clear_desc(struct ata_eh_info *ehi);
static inline void ata_ehi_hotplugged(struct ata_eh_info *ehi)
extern void ata_port_desc(struct ata_port *ap, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern void ata_port_pbar_desc(struct ata_port *ap, int bar, ssize_t offset,
const char *name);
static inline unsigned int ata_tag_valid(unsigned int tag)
static inline unsigned int ata_tag_internal(unsigned int tag)
static inline unsigned int ata_class_enabled(unsigned int class)
static inline unsigned int ata_class_disabled(unsigned int class)
static inline unsigned int ata_class_absent(unsigned int class)
static inline unsigned int ata_dev_enabled(const struct ata_device *dev)
static inline unsigned int ata_dev_disabled(const struct ata_device *dev)
static inline unsigned int ata_dev_absent(const struct ata_device *dev)
static inline int ata_link_max_devices(const struct ata_link *link)
static inline int ata_link_active(struct ata_link *link)
enum ata_link_iter_mode ;
enum ata_dev_iter_mode ;
extern struct ata_link *ata_link_next(struct ata_link *link,
struct ata_port *ap,
enum ata_link_iter_mode mode);
extern struct ata_device *ata_dev_next(struct ata_device *dev,
struct ata_link *link,
enum ata_dev_iter_mode mode);
#define ata_for_each_link(link, ap, mode) \
for ((link) = ata_link_next(NULL, (ap), ATA_LITER_##mode); (link); \
(link) = ata_link_next((link), (ap), ATA_LITER_##mode))
#define ata_for_each_dev(dev, link, mode) \
for ((dev) = ata_dev_next(NULL, (link), ATA_DITER_##mode); (dev); \
(dev) = ata_dev_next((dev), (link), ATA_DITER_##mode))
static inline int ata_ncq_enabled(struct ata_device *dev)
static inline void ata_qc_set_polling(struct ata_queued_cmd *qc)
static inline struct ata_queued_cmd *__ata_qc_from_tag(struct ata_port *ap,
unsigned int tag)
static inline struct ata_queued_cmd *ata_qc_from_tag(struct ata_port *ap,
unsigned int tag)
static inline unsigned int ata_qc_raw_nbytes(struct ata_queued_cmd *qc)
static inline void ata_tf_init(struct ata_device *dev, struct ata_taskfile *tf)
static inline void ata_qc_reinit(struct ata_queued_cmd *qc)
static inline int ata_try_flush_cache(const struct ata_device *dev)
static inline unsigned int ac_err_mask(u8 status)
static inline unsigned int __ac_err_mask(u8 status)
static inline struct ata_port *ata_shost_to_port(struct Scsi_Host *host)
static inline int ata_check_ready(u8 status)
static inline unsigned long ata_deadline(unsigned long from_jiffies,
unsigned long timeout_msecs)
static inline int ata_using_mwdma(struct ata_device *adev)
static inline int ata_using_udma(struct ata_device *adev)
static inline int ata_dma_enabled(struct ata_device *adev)
extern const struct ata_port_operations sata_pmp_port_ops;
extern int sata_pmp_qc_defer_cmd_switch(struct ata_queued_cmd *qc);
extern void sata_pmp_error_handler(struct ata_port *ap);
#define sata_pmp_port_ops		sata_port_ops
#define sata_pmp_qc_defer_cmd_switch	ata_std_qc_defer
#define sata_pmp_error_handler		ata_std_error_handler
extern const struct ata_port_operations ata_sff_port_ops;
extern const struct ata_port_operations ata_bmdma32_port_ops;
#define ATA_PIO_SHT(drv_name)					\
ATA_BASE_SHT(drv_name),					\
.sg_tablesize		= LIBATA_MAX_PRD,		\
.dma_boundary		= ATA_DMA_BOUNDARY
extern void ata_sff_dev_select(struct ata_port *ap, unsigned int device);
extern u8 ata_sff_check_status(struct ata_port *ap);
extern void ata_sff_pause(struct ata_port *ap);
extern void ata_sff_dma_pause(struct ata_port *ap);
extern int ata_sff_busy_sleep(struct ata_port *ap,
unsigned long timeout_pat, unsigned long timeout);
extern int ata_sff_wait_ready(struct ata_link *link, unsigned long deadline);
extern void ata_sff_tf_load(struct ata_port *ap, const struct ata_taskfile *tf);
extern void ata_sff_tf_read(struct ata_port *ap, struct ata_taskfile *tf);
extern void ata_sff_exec_command(struct ata_port *ap,
const struct ata_taskfile *tf);
extern unsigned int ata_sff_data_xfer(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw);
extern unsigned int ata_sff_data_xfer32(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw);
extern unsigned int ata_sff_data_xfer_noirq(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw);
extern void ata_sff_irq_on(struct ata_port *ap);
extern void ata_sff_irq_clear(struct ata_port *ap);
extern int ata_sff_hsm_move(struct ata_port *ap, struct ata_queued_cmd *qc,
u8 status, int in_wq);
extern void ata_sff_queue_work(struct work_struct *work);
extern void ata_sff_queue_delayed_work(struct delayed_work *dwork,
unsigned long delay);
extern void ata_sff_queue_pio_task(struct ata_link *link, unsigned long delay);
extern unsigned int ata_sff_qc_issue(struct ata_queued_cmd *qc);
extern bool ata_sff_qc_fill_rtf(struct ata_queued_cmd *qc);
extern unsigned int ata_sff_port_intr(struct ata_port *ap,
struct ata_queued_cmd *qc);
extern irqreturn_t ata_sff_interrupt(int irq, void *dev_instance);
extern void ata_sff_lost_interrupt(struct ata_port *ap);
extern void ata_sff_freeze(struct ata_port *ap);
extern void ata_sff_thaw(struct ata_port *ap);
extern int ata_sff_prereset(struct ata_link *link, unsigned long deadline);
extern unsigned int ata_sff_dev_classify(struct ata_device *dev, int present,
u8 *r_err);
extern int ata_sff_wait_after_reset(struct ata_link *link, unsigned int devmask,
unsigned long deadline);
extern int ata_sff_softreset(struct ata_link *link, unsigned int *classes,
unsigned long deadline);
extern int sata_sff_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
extern void ata_sff_postreset(struct ata_link *link, unsigned int *classes);
extern void ata_sff_drain_fifo(struct ata_queued_cmd *qc);
extern void ata_sff_error_handler(struct ata_port *ap);
extern void ata_sff_std_ports(struct ata_ioports *ioaddr);
extern int ata_pci_sff_init_host(struct ata_host *host);
extern int ata_pci_sff_prepare_host(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct ata_host **r_host);
extern int ata_pci_sff_activate_host(struct ata_host *host,
irq_handler_t irq_handler,
struct scsi_host_template *sht);
extern int ata_pci_sff_init_one(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct scsi_host_template *sht, void *host_priv, int hflags);
extern const struct ata_port_operations ata_bmdma_port_ops;
#define ATA_BMDMA_SHT(drv_name)					\
ATA_BASE_SHT(drv_name),					\
.sg_tablesize		= LIBATA_MAX_PRD,		\
.dma_boundary		= ATA_DMA_BOUNDARY
extern void ata_bmdma_qc_prep(struct ata_queued_cmd *qc);
extern unsigned int ata_bmdma_qc_issue(struct ata_queued_cmd *qc);
extern void ata_bmdma_dumb_qc_prep(struct ata_queued_cmd *qc);
extern unsigned int ata_bmdma_port_intr(struct ata_port *ap,
struct ata_queued_cmd *qc);
extern irqreturn_t ata_bmdma_interrupt(int irq, void *dev_instance);
extern void ata_bmdma_error_handler(struct ata_port *ap);
extern void ata_bmdma_post_internal_cmd(struct ata_queued_cmd *qc);
extern void ata_bmdma_irq_clear(struct ata_port *ap);
extern void ata_bmdma_setup(struct ata_queued_cmd *qc);
extern void ata_bmdma_start(struct ata_queued_cmd *qc);
extern void ata_bmdma_stop(struct ata_queued_cmd *qc);
extern u8 ata_bmdma_status(struct ata_port *ap);
extern int ata_bmdma_port_start(struct ata_port *ap);
extern int ata_bmdma_port_start32(struct ata_port *ap);
extern int ata_pci_bmdma_clear_simplex(struct pci_dev *pdev);
extern void ata_pci_bmdma_init(struct ata_host *host);
extern int ata_pci_bmdma_prepare_host(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct ata_host **r_host);
extern int ata_pci_bmdma_init_one(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct scsi_host_template *sht,
void *host_priv, int hflags);
static inline u8 ata_sff_busy_wait(struct ata_port *ap, unsigned int bits,
unsigned int max)
static inline u8 ata_wait_idle(struct ata_port *ap)
