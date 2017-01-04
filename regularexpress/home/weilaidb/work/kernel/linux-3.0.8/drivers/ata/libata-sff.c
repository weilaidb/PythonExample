static struct workqueue_struct *ata_sff_wq;
const struct ata_port_operations ata_sff_port_ops = ;
EXPORT_SYMBOL_GPL(ata_sff_port_ops);
u8 ata_sff_check_status(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_check_status);
static u8 ata_sff_altstatus(struct ata_port *ap)
static u8 ata_sff_irq_status(struct ata_port *ap)
static void ata_sff_sync(struct ata_port *ap)
void ata_sff_pause(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_pause);
void ata_sff_dma_pause(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_dma_pause);
int ata_sff_busy_sleep(struct ata_port *ap,
unsigned long tmout_pat, unsigned long tmout)
EXPORT_SYMBOL_GPL(ata_sff_busy_sleep);
static int ata_sff_check_ready(struct ata_link *link)
int ata_sff_wait_ready(struct ata_link *link, unsigned long deadline)
EXPORT_SYMBOL_GPL(ata_sff_wait_ready);
static void ata_sff_set_devctl(struct ata_port *ap, u8 ctl)
void ata_sff_dev_select(struct ata_port *ap, unsigned int device)
EXPORT_SYMBOL_GPL(ata_sff_dev_select);
static void ata_dev_select(struct ata_port *ap, unsigned int device,
unsigned int wait, unsigned int can_sleep)
void ata_sff_irq_on(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_irq_on);
void ata_sff_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
EXPORT_SYMBOL_GPL(ata_sff_tf_load);
void ata_sff_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
EXPORT_SYMBOL_GPL(ata_sff_tf_read);
void ata_sff_exec_command(struct ata_port *ap, const struct ata_taskfile *tf)
EXPORT_SYMBOL_GPL(ata_sff_exec_command);
static inline void ata_tf_to_host(struct ata_port *ap,
const struct ata_taskfile *tf)
unsigned int ata_sff_data_xfer(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
EXPORT_SYMBOL_GPL(ata_sff_data_xfer);
unsigned int ata_sff_data_xfer32(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
EXPORT_SYMBOL_GPL(ata_sff_data_xfer32);
unsigned int ata_sff_data_xfer_noirq(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
EXPORT_SYMBOL_GPL(ata_sff_data_xfer_noirq);
static void ata_pio_sector(struct ata_queued_cmd *qc)
static void ata_pio_sectors(struct ata_queued_cmd *qc)
static void atapi_send_cdb(struct ata_port *ap, struct ata_queued_cmd *qc)
static int __atapi_pio_bytes(struct ata_queued_cmd *qc, unsigned int bytes)
static void atapi_pio_bytes(struct ata_queued_cmd *qc)
static inline int ata_hsm_ok_in_wq(struct ata_port *ap,
struct ata_queued_cmd *qc)
static void ata_hsm_qc_complete(struct ata_queued_cmd *qc, int in_wq)
int ata_sff_hsm_move(struct ata_port *ap, struct ata_queued_cmd *qc,
u8 status, int in_wq)
EXPORT_SYMBOL_GPL(ata_sff_hsm_move);
void ata_sff_queue_work(struct work_struct *work)
EXPORT_SYMBOL_GPL(ata_sff_queue_work);
void ata_sff_queue_delayed_work(struct delayed_work *dwork, unsigned long delay)
EXPORT_SYMBOL_GPL(ata_sff_queue_delayed_work);
void ata_sff_queue_pio_task(struct ata_link *link, unsigned long delay)
EXPORT_SYMBOL_GPL(ata_sff_queue_pio_task);
void ata_sff_flush_pio_task(struct ata_port *ap)
static void ata_sff_pio_task(struct work_struct *work)
unsigned int ata_sff_qc_issue(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_sff_qc_issue);
bool ata_sff_qc_fill_rtf(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_sff_qc_fill_rtf);
static unsigned int ata_sff_idle_irq(struct ata_port *ap)
static unsigned int __ata_sff_port_intr(struct ata_port *ap,
struct ata_queued_cmd *qc,
bool hsmv_on_idle)
unsigned int ata_sff_port_intr(struct ata_port *ap, struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_sff_port_intr);
static inline irqreturn_t __ata_sff_interrupt(int irq, void *dev_instance,
unsigned int (*port_intr)(struct ata_port *, struct ata_queued_cmd *))
irqreturn_t ata_sff_interrupt(int irq, void *dev_instance)
EXPORT_SYMBOL_GPL(ata_sff_interrupt);
void ata_sff_lost_interrupt(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_lost_interrupt);
void ata_sff_freeze(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_freeze);
void ata_sff_thaw(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_thaw);
int ata_sff_prereset(struct ata_link *link, unsigned long deadline)
EXPORT_SYMBOL_GPL(ata_sff_prereset);
static unsigned int ata_devchk(struct ata_port *ap, unsigned int device)
unsigned int ata_sff_dev_classify(struct ata_device *dev, int present,
u8 *r_err)
EXPORT_SYMBOL_GPL(ata_sff_dev_classify);
int ata_sff_wait_after_reset(struct ata_link *link, unsigned int devmask,
unsigned long deadline)
EXPORT_SYMBOL_GPL(ata_sff_wait_after_reset);
static int ata_bus_softreset(struct ata_port *ap, unsigned int devmask,
unsigned long deadline)
int ata_sff_softreset(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
EXPORT_SYMBOL_GPL(ata_sff_softreset);
int sata_sff_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
EXPORT_SYMBOL_GPL(sata_sff_hardreset);
void ata_sff_postreset(struct ata_link *link, unsigned int *classes)
EXPORT_SYMBOL_GPL(ata_sff_postreset);
void ata_sff_drain_fifo(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_sff_drain_fifo);
void ata_sff_error_handler(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_sff_error_handler);
void ata_sff_std_ports(struct ata_ioports *ioaddr)
EXPORT_SYMBOL_GPL(ata_sff_std_ports);
static int ata_resources_present(struct pci_dev *pdev, int port)
int ata_pci_sff_init_host(struct ata_host *host)
EXPORT_SYMBOL_GPL(ata_pci_sff_init_host);
int ata_pci_sff_prepare_host(struct pci_dev *pdev,
const struct ata_port_info * const *ppi,
struct ata_host **r_host)
EXPORT_SYMBOL_GPL(ata_pci_sff_prepare_host);
int ata_pci_sff_activate_host(struct ata_host *host,
irq_handler_t irq_handler,
struct scsi_host_template *sht)
EXPORT_SYMBOL_GPL(ata_pci_sff_activate_host);
static const struct ata_port_info *ata_sff_find_valid_pi(
const struct ata_port_info * const *ppi)
int ata_pci_sff_init_one(struct pci_dev *pdev,
const struct ata_port_info * const *ppi,
struct scsi_host_template *sht, void *host_priv, int hflag)
EXPORT_SYMBOL_GPL(ata_pci_sff_init_one);
const struct ata_port_operations ata_bmdma_port_ops = ;
EXPORT_SYMBOL_GPL(ata_bmdma_port_ops);
const struct ata_port_operations ata_bmdma32_port_ops = ;
EXPORT_SYMBOL_GPL(ata_bmdma32_port_ops);
static void ata_bmdma_fill_sg(struct ata_queued_cmd *qc)
static void ata_bmdma_fill_sg_dumb(struct ata_queued_cmd *qc)
void ata_bmdma_qc_prep(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_qc_prep);
void ata_bmdma_dumb_qc_prep(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_dumb_qc_prep);
unsigned int ata_bmdma_qc_issue(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_qc_issue);
unsigned int ata_bmdma_port_intr(struct ata_port *ap, struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_port_intr);
irqreturn_t ata_bmdma_interrupt(int irq, void *dev_instance)
EXPORT_SYMBOL_GPL(ata_bmdma_interrupt);
void ata_bmdma_error_handler(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_bmdma_error_handler);
void ata_bmdma_post_internal_cmd(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_post_internal_cmd);
void ata_bmdma_irq_clear(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_bmdma_irq_clear);
void ata_bmdma_setup(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_setup);
void ata_bmdma_start(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_start);
void ata_bmdma_stop(struct ata_queued_cmd *qc)
EXPORT_SYMBOL_GPL(ata_bmdma_stop);
u8 ata_bmdma_status(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_bmdma_status);
int ata_bmdma_port_start(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_bmdma_port_start);
int ata_bmdma_port_start32(struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_bmdma_port_start32);
int ata_pci_bmdma_clear_simplex(struct pci_dev *pdev)
EXPORT_SYMBOL_GPL(ata_pci_bmdma_clear_simplex);
static void ata_bmdma_nodma(struct ata_host *host, const char *reason)
void ata_pci_bmdma_init(struct ata_host *host)
EXPORT_SYMBOL_GPL(ata_pci_bmdma_init);
int ata_pci_bmdma_prepare_host(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct ata_host **r_host)
EXPORT_SYMBOL_GPL(ata_pci_bmdma_prepare_host);
int ata_pci_bmdma_init_one(struct pci_dev *pdev,
const struct ata_port_info * const * ppi,
struct scsi_host_template *sht, void *host_priv,
int hflags)
EXPORT_SYMBOL_GPL(ata_pci_bmdma_init_one);
void ata_sff_port_init(struct ata_port *ap)
int __init ata_sff_init(void)
void ata_sff_exit(void)
