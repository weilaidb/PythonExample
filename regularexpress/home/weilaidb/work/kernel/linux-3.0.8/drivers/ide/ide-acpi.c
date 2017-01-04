#define REGS_PER_GTF		7
struct GTM_buffer ;
struct ide_acpi_drive_link ;
struct ide_acpi_hwif_link ;
#undef DEBUGGING
#define DEBPRINT(fmt, args...)	\
printk(KERN_DEBUG "%s: " fmt, __func__, ## args)
#define DEBPRINT(fmt, args...)	do  while (0)
static int ide_noacpi;
module_param_named(noacpi, ide_noacpi, bool, 0);
MODULE_PARM_DESC(noacpi, "disable IDE ACPI support");
static int ide_acpigtf;
module_param_named(acpigtf, ide_acpigtf, bool, 0);
MODULE_PARM_DESC(acpigtf, "enable IDE ACPI _GTF support");
static int ide_acpionboot;
module_param_named(acpionboot, ide_acpionboot, bool, 0);
MODULE_PARM_DESC(acpionboot, "call IDE ACPI methods on boot");
static bool ide_noacpi_psx;
static int no_acpi_psx(const struct dmi_system_id *id)
static const struct dmi_system_id ide_acpi_dmi_table[] = ;
int ide_acpi_init(void)
bool ide_port_acpi(ide_hwif_t *hwif)
static int ide_get_dev_handle(struct device *dev, acpi_handle *handle,
u64 *pcidevfn)
static acpi_handle ide_acpi_hwif_get_handle(ide_hwif_t *hwif)
static int do_drive_get_GTF(ide_drive_t *drive,
unsigned int *gtf_length, unsigned long *gtf_address,
unsigned long *obj_loc)
static int do_drive_set_taskfiles(ide_drive_t *drive,
unsigned int gtf_length,
unsigned long gtf_address)
int ide_acpi_exec_tfs(ide_drive_t *drive)
void ide_acpi_get_timing(ide_hwif_t *hwif)
void ide_acpi_push_timing(ide_hwif_t *hwif)
void ide_acpi_set_state(ide_hwif_t *hwif, int on)
void ide_acpi_init_port(ide_hwif_t *hwif)
void ide_acpi_port_init_devices(ide_hwif_t *hwif)
