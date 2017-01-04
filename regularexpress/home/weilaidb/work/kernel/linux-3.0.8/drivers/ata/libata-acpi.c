unsigned int ata_acpi_gtf_filter = ATA_ACPI_FILTER_DEFAULT;
module_param_named(acpi_gtf_filter, ata_acpi_gtf_filter, int, 0644);
MODULE_PARM_DESC(acpi_gtf_filter, "filter mask for ACPI _GTF commands, set to filter out (0x1=set xfermode, 0x2=lock/freeze lock, 0x4=DIPM, 0x8=FPDMA non-zero offset, 0x10=FPDMA DMA Setup FIS auto-activate)");
#define NO_PORT_MULT		0xffff
#define SATA_ADR(root, pmp)	(((root) << 16) | (pmp))
#define REGS_PER_GTF		7
struct ata_acpi_gtf  __packed;
static int is_pci_dev(struct device *dev)
static void ata_acpi_clear_gtf(struct ata_device *dev)
void ata_acpi_associate_sata_port(struct ata_port *ap)
static void ata_acpi_associate_ide_port(struct ata_port *ap)
static void ata_acpi_detach_device(struct ata_port *ap, struct ata_device *dev)
static void ata_acpi_handle_hotplug(struct ata_port *ap, struct ata_device *dev,
u32 event)
static void ata_acpi_dev_notify_dock(acpi_handle handle, u32 event, void *data)
static void ata_acpi_ap_notify_dock(acpi_handle handle, u32 event, void *data)
static void ata_acpi_uevent(struct ata_port *ap, struct ata_device *dev,
u32 event)
static void ata_acpi_ap_uevent(acpi_handle handle, u32 event, void *data)
static void ata_acpi_dev_uevent(acpi_handle handle, u32 event, void *data)
static struct acpi_dock_ops ata_acpi_dev_dock_ops = ;
static struct acpi_dock_ops ata_acpi_ap_dock_ops = ;
void ata_acpi_associate(struct ata_host *host)
void ata_acpi_dissociate(struct ata_host *host)
int ata_acpi_gtm(struct ata_port *ap, struct ata_acpi_gtm *gtm)
EXPORT_SYMBOL_GPL(ata_acpi_gtm);
int ata_acpi_stm(struct ata_port *ap, const struct ata_acpi_gtm *stm)
EXPORT_SYMBOL_GPL(ata_acpi_stm);
static int ata_dev_get_GTF(struct ata_device *dev, struct ata_acpi_gtf **gtf)
unsigned long ata_acpi_gtm_xfermask(struct ata_device *dev,
const struct ata_acpi_gtm *gtm)
EXPORT_SYMBOL_GPL(ata_acpi_gtm_xfermask);
int ata_acpi_cbl_80wire(struct ata_port *ap, const struct ata_acpi_gtm *gtm)
EXPORT_SYMBOL_GPL(ata_acpi_cbl_80wire);
static void ata_acpi_gtf_to_tf(struct ata_device *dev,
const struct ata_acpi_gtf *gtf,
struct ata_taskfile *tf)
static int ata_acpi_filter_tf(struct ata_device *dev,
const struct ata_taskfile *tf,
const struct ata_taskfile *ptf)
static int ata_acpi_run_tf(struct ata_device *dev,
const struct ata_acpi_gtf *gtf,
const struct ata_acpi_gtf *prev_gtf)
static int ata_acpi_exec_tfs(struct ata_device *dev, int *nr_executed)
static int ata_acpi_push_id(struct ata_device *dev)
int ata_acpi_on_suspend(struct ata_port *ap)
void ata_acpi_on_resume(struct ata_port *ap)
void ata_acpi_set_state(struct ata_port *ap, pm_message_t state)
int ata_acpi_on_devcfg(struct ata_device *dev)
void ata_acpi_on_disable(struct ata_device *dev)
