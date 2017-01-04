static void generic_id(ide_drive_t *drive)
static void ide_disk_init_chs(ide_drive_t *drive)
static void ide_disk_init_mult_count(ide_drive_t *drive)
static void ide_classify_ata_dev(ide_drive_t *drive)
static void ide_classify_atapi_dev(ide_drive_t *drive)
static void do_identify(ide_drive_t *drive, u8 cmd, u16 *id)
int ide_dev_read_id(ide_drive_t *drive, u8 cmd, u16 *id, int irq_ctx)
int ide_busy_sleep(ide_drive_t *drive, unsigned long timeout, int altstatus)
static u8 ide_read_device(ide_drive_t *drive)
static int do_probe (ide_drive_t *drive, u8 cmd)
static u8 probe_for_drive(ide_drive_t *drive)
static void hwif_release_dev(struct device *dev)
static int ide_register_port(ide_hwif_t *hwif)
static int ide_port_wait_ready(ide_hwif_t *hwif)
void ide_undecoded_slave(ide_drive_t *dev1)
EXPORT_SYMBOL_GPL(ide_undecoded_slave);
static int ide_probe_port(ide_hwif_t *hwif)
static void ide_port_tune_devices(ide_hwif_t *hwif)
static int ide_init_queue(ide_drive_t *drive)
static DEFINE_MUTEX(ide_cfg_mtx);
static int ide_port_setup_devices(ide_hwif_t *hwif)
static void ide_host_enable_irqs(struct ide_host *host)
static int init_irq (ide_hwif_t *hwif)
static int ata_lock(dev_t dev, void *data)
static struct kobject *ata_probe(dev_t dev, int *part, void *data)
static struct kobject *exact_match(dev_t dev, int *part, void *data)
static int exact_lock(dev_t dev, void *data)
void ide_register_region(struct gendisk *disk)
EXPORT_SYMBOL_GPL(ide_register_region);
void ide_unregister_region(struct gendisk *disk)
EXPORT_SYMBOL_GPL(ide_unregister_region);
void ide_init_disk(struct gendisk *disk, ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_init_disk);
static void drive_release_dev (struct device *dev)
static int hwif_init(ide_hwif_t *hwif)
static void hwif_register_devices(ide_hwif_t *hwif)
static void ide_port_init_devices(ide_hwif_t *hwif)
static void ide_init_port(ide_hwif_t *hwif, unsigned int port,
const struct ide_port_info *d)
static void ide_port_cable_detect(ide_hwif_t *hwif)
static const u8 ide_hwif_to_major[] =
;
static void ide_port_init_devices_data(ide_hwif_t *hwif)
static void ide_init_port_data(ide_hwif_t *hwif, unsigned int index)
static void ide_init_port_hw(ide_hwif_t *hwif, struct ide_hw *hw)
static unsigned int ide_indexes;
static int ide_find_port_slot(const struct ide_port_info *d)
static void ide_free_port_slot(int idx)
static void ide_port_free_devices(ide_hwif_t *hwif)
static int ide_port_alloc_devices(ide_hwif_t *hwif, int node)
struct ide_host *ide_host_alloc(const struct ide_port_info *d,
struct ide_hw **hws, unsigned int n_ports)
EXPORT_SYMBOL_GPL(ide_host_alloc);
static void ide_port_free(ide_hwif_t *hwif)
static void ide_disable_port(ide_hwif_t *hwif)
int ide_host_register(struct ide_host *host, const struct ide_port_info *d,
struct ide_hw **hws)
EXPORT_SYMBOL_GPL(ide_host_register);
int ide_host_add(const struct ide_port_info *d, struct ide_hw **hws,
unsigned int n_ports, struct ide_host **hostp)
EXPORT_SYMBOL_GPL(ide_host_add);
static void __ide_port_unregister_devices(ide_hwif_t *hwif)
void ide_port_unregister_devices(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_port_unregister_devices);
static void ide_unregister(ide_hwif_t *hwif)
void ide_host_free(struct ide_host *host)
EXPORT_SYMBOL_GPL(ide_host_free);
void ide_host_remove(struct ide_host *host)
EXPORT_SYMBOL_GPL(ide_host_remove);
void ide_port_scan(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_port_scan);
