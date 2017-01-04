static int ahci_skip_host_reset;
int ahci_ignore_sss;
EXPORT_SYMBOL_GPL(ahci_ignore_sss);
module_param_named(skip_host_reset, ahci_skip_host_reset, int, 0444);
MODULE_PARM_DESC(skip_host_reset, "skip global host reset (0=don't skip, 1=skip)");
module_param_named(ignore_sss, ahci_ignore_sss, int, 0444);
MODULE_PARM_DESC(ignore_sss, "Ignore staggered spinup flag (0=don't ignore, 1=ignore)");
static int ahci_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
unsigned hints);
static ssize_t ahci_led_show(struct ata_port *ap, char *buf);
static ssize_t ahci_led_store(struct ata_port *ap, const char *buf,
size_t size);
static ssize_t ahci_transmit_led_message(struct ata_port *ap, u32 state,
ssize_t size);
static int ahci_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int ahci_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static unsigned int ahci_qc_issue(struct ata_queued_cmd *qc);
static bool ahci_qc_fill_rtf(struct ata_queued_cmd *qc);
static int ahci_port_start(struct ata_port *ap);
static void ahci_port_stop(struct ata_port *ap);
static void ahci_qc_prep(struct ata_queued_cmd *qc);
static int ahci_pmp_qc_defer(struct ata_queued_cmd *qc);
static void ahci_freeze(struct ata_port *ap);
static void ahci_thaw(struct ata_port *ap);
static void ahci_enable_fbs(struct ata_port *ap);
static void ahci_disable_fbs(struct ata_port *ap);
static void ahci_pmp_attach(struct ata_port *ap);
static void ahci_pmp_detach(struct ata_port *ap);
static int ahci_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int ahci_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void ahci_postreset(struct ata_link *link, unsigned int *class);
static void ahci_error_handler(struct ata_port *ap);
static void ahci_post_internal_cmd(struct ata_queued_cmd *qc);
static void ahci_dev_config(struct ata_device *dev);
static int ahci_port_suspend(struct ata_port *ap, pm_message_t mesg);
static ssize_t ahci_activity_show(struct ata_device *dev, char *buf);
static ssize_t ahci_activity_store(struct ata_device *dev,
enum sw_activity val);
static void ahci_init_sw_activity(struct ata_link *link);
static ssize_t ahci_show_host_caps(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t ahci_show_host_cap2(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t ahci_show_host_version(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t ahci_show_port_cmd(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t ahci_read_em_buffer(struct device *dev,
struct device_attribute *attr, char *buf);
static ssize_t ahci_store_em_buffer(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size);
static ssize_t ahci_show_em_supported(struct device *dev,
struct device_attribute *attr, char *buf);
static DEVICE_ATTR(ahci_host_caps, S_IRUGO, ahci_show_host_caps, NULL);
static DEVICE_ATTR(ahci_host_cap2, S_IRUGO, ahci_show_host_cap2, NULL);
static DEVICE_ATTR(ahci_host_version, S_IRUGO, ahci_show_host_version, NULL);
static DEVICE_ATTR(ahci_port_cmd, S_IRUGO, ahci_show_port_cmd, NULL);
static DEVICE_ATTR(em_buffer, S_IWUSR | S_IRUGO,
ahci_read_em_buffer, ahci_store_em_buffer);
static DEVICE_ATTR(em_message_supported, S_IRUGO, ahci_show_em_supported, NULL);
struct device_attribute *ahci_shost_attrs[] = ;
EXPORT_SYMBOL_GPL(ahci_shost_attrs);
struct device_attribute *ahci_sdev_attrs[] = ;
EXPORT_SYMBOL_GPL(ahci_sdev_attrs);
struct ata_port_operations ahci_ops = ;
EXPORT_SYMBOL_GPL(ahci_ops);
int ahci_em_messages = 1;
EXPORT_SYMBOL_GPL(ahci_em_messages);
module_param(ahci_em_messages, int, 0444);
MODULE_PARM_DESC(ahci_em_messages,
"AHCI Enclosure Management Message control (0 = off, 1 = on)");
static void ahci_enable_ahci(void __iomem *mmio)
static ssize_t ahci_show_host_caps(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ahci_show_host_cap2(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ahci_show_host_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ahci_show_port_cmd(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ahci_read_em_buffer(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ahci_store_em_buffer(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static ssize_t ahci_show_em_supported(struct device *dev,
struct device_attribute *attr, char *buf)
void ahci_save_initial_config(struct device *dev,
struct ahci_host_priv *hpriv,
unsigned int force_port_map,
unsigned int mask_port_map)
EXPORT_SYMBOL_GPL(ahci_save_initial_config);
static void ahci_restore_initial_config(struct ata_host *host)
static unsigned ahci_scr_offset(struct ata_port *ap, unsigned int sc_reg)
static int ahci_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int ahci_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
void ahci_start_engine(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ahci_start_engine);
int ahci_stop_engine(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ahci_stop_engine);
static void ahci_start_fis_rx(struct ata_port *ap)
static int ahci_stop_fis_rx(struct ata_port *ap)
static void ahci_power_up(struct ata_port *ap)
static int ahci_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
unsigned int hints)
static void ahci_power_down(struct ata_port *ap)
static void ahci_start_port(struct ata_port *ap)
static int ahci_deinit_port(struct ata_port *ap, const char **emsg)
int ahci_reset_controller(struct ata_host *host)
EXPORT_SYMBOL_GPL(ahci_reset_controller);
static void ahci_sw_activity(struct ata_link *link)
static void ahci_sw_activity_blink(unsigned long arg)
static void ahci_init_sw_activity(struct ata_link *link)
int ahci_reset_em(struct ata_host *host)
EXPORT_SYMBOL_GPL(ahci_reset_em);
static ssize_t ahci_transmit_led_message(struct ata_port *ap, u32 state,
ssize_t size)
static ssize_t ahci_led_show(struct ata_port *ap, char *buf)
static ssize_t ahci_led_store(struct ata_port *ap, const char *buf,
size_t size)
static ssize_t ahci_activity_store(struct ata_device *dev, enum sw_activity val)
static ssize_t ahci_activity_show(struct ata_device *dev, char *buf)
static void ahci_port_init(struct device *dev, struct ata_port *ap,
int port_no, void __iomem *mmio,
void __iomem *port_mmio)
void ahci_init_controller(struct ata_host *host)
EXPORT_SYMBOL_GPL(ahci_init_controller);
static void ahci_dev_config(struct ata_device *dev)
static unsigned int ahci_dev_classify(struct ata_port *ap)
void ahci_fill_cmd_slot(struct ahci_port_priv *pp, unsigned int tag,
u32 opts)
EXPORT_SYMBOL_GPL(ahci_fill_cmd_slot);
int ahci_kick_engine(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ahci_kick_engine);
static int ahci_exec_polled_cmd(struct ata_port *ap, int pmp,
struct ata_taskfile *tf, int is_cmd, u16 flags,
unsigned long timeout_msec)
int ahci_do_softreset(struct ata_link *link, unsigned int *class,
int pmp, unsigned long deadline,
int (*check_ready)(struct ata_link *link))
int ahci_check_ready(struct ata_link *link)
EXPORT_SYMBOL_GPL(ahci_check_ready);
static int ahci_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
EXPORT_SYMBOL_GPL(ahci_do_softreset);
static int ahci_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void ahci_postreset(struct ata_link *link, unsigned int *class)
static unsigned int ahci_fill_sg(struct ata_queued_cmd *qc, void *cmd_tbl)
static int ahci_pmp_qc_defer(struct ata_queued_cmd *qc)
static void ahci_qc_prep(struct ata_queued_cmd *qc)
static void ahci_fbs_dec_intr(struct ata_port *ap)
static void ahci_error_intr(struct ata_port *ap, u32 irq_stat)
static void ahci_port_intr(struct ata_port *ap)
irqreturn_t ahci_interrupt(int irq, void *dev_instance)
EXPORT_SYMBOL_GPL(ahci_interrupt);
static unsigned int ahci_qc_issue(struct ata_queued_cmd *qc)
static bool ahci_qc_fill_rtf(struct ata_queued_cmd *qc)
static void ahci_freeze(struct ata_port *ap)
static void ahci_thaw(struct ata_port *ap)
static void ahci_error_handler(struct ata_port *ap)
static void ahci_post_internal_cmd(struct ata_queued_cmd *qc)
static void ahci_enable_fbs(struct ata_port *ap)
static void ahci_disable_fbs(struct ata_port *ap)
static void ahci_pmp_attach(struct ata_port *ap)
static void ahci_pmp_detach(struct ata_port *ap)
int ahci_port_resume(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ahci_port_resume);
static int ahci_port_suspend(struct ata_port *ap, pm_message_t mesg)
static int ahci_port_start(struct ata_port *ap)
static void ahci_port_stop(struct ata_port *ap)
void ahci_print_info(struct ata_host *host, const char *scc_s)
EXPORT_SYMBOL_GPL(ahci_print_info);
void ahci_set_em_messages(struct ahci_host_priv *hpriv,
struct ata_port_info *pi)
EXPORT_SYMBOL_GPL(ahci_set_em_messages);
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("Common AHCI SATA low-level routines");
MODULE_LICENSE("GPL");
