#define _IDE_H
#if defined(CONFIG_CRIS) || defined(CONFIG_FRV) || defined(CONFIG_MN10300)
# define SUPPORT_VLB_SYNC 0
# define SUPPORT_VLB_SYNC 1
#define IDE_DEFAULT_MAX_FAILURES	1
#define ERROR_MAX	8
#define ERROR_RESET	3
#define ERROR_RECAL	1
enum ;
#define IDE_NR_PORTS		(10)
struct ide_io_ports ;
#define OK_STAT(stat,good,bad)	(((stat)&((good)|(bad)))==(good))
#define BAD_R_STAT	(ATA_BUSY | ATA_ERR)
#define BAD_W_STAT	(BAD_R_STAT | ATA_DF)
#define BAD_STAT	(BAD_R_STAT | ATA_DRQ)
#define DRIVE_READY	(ATA_DRDY | ATA_DSC)
#define BAD_CRC		(ATA_ABORTED | ATA_ICRC)
#define SATA_NR_PORTS		(3)
#define SATA_STATUS_OFFSET	(0)
#define SATA_ERROR_OFFSET	(1)
#define SATA_CONTROL_OFFSET	(2)
#define PRD_BYTES       8
#define PRD_ENTRIES	256
#define PARTN_BITS	6
#define MAX_DRIVES	2
#define SECTOR_SIZE	512
enum ;
#define REQ_DRIVE_RESET		0x20
#define REQ_DEVSET_EXEC		0x21
#define REQ_PARK_HEADS		0x22
#define REQ_UNPARK_HEADS	0x23
enum ;
typedef u8 hwif_chipset_t;
struct ide_hw ;
static inline void ide_std_init_ports(struct ide_hw *hw,
unsigned long io_addr,
unsigned long ctl_addr)
#define MAX_HWIFS	10
#define ide_scsi	0x21
#define ide_disk	0x20
#define ide_optical	0x7
#define ide_cdrom	0x5
#define ide_tape	0x1
#define ide_floppy	0x0
enum ;
typedef enum  ide_startstop_t;
enum ;
enum ;
enum ;
struct ide_taskfile ;
struct ide_cmd ;
enum ;
#define ATAPI_WAIT_PC		(60 * HZ)
struct ide_atapi_pc ;
struct ide_devset;
struct ide_driver;
struct ide_acpi_drive_link;
struct ide_acpi_hwif_link;
struct ide_drive_s;
struct ide_disk_ops ;
enum ;
enum ;
struct ide_drive_s ;
typedef struct ide_drive_s ide_drive_t;
#define to_ide_device(dev)		container_of(dev, ide_drive_t, gendev)
#define to_ide_drv(obj, cont_type)	\
container_of(obj, struct cont_type, dev)
#define ide_drv_g(disk, cont_type)	\
container_of((disk)->private_data, struct cont_type, driver)
struct ide_port_info;
struct ide_tp_ops ;
extern const struct ide_tp_ops default_tp_ops;
struct ide_port_ops ;
struct ide_dma_ops ;
enum ;
struct ide_host;
typedef struct hwif_s  ____cacheline_internodealigned_in_smp ide_hwif_t;
#define MAX_HOST_PORTS 4
struct ide_host ;
#define IDE_HOST_BUSY 0
typedef ide_startstop_t (ide_handler_t)(ide_drive_t *);
typedef int (ide_expiry_t)(ide_drive_t *);
typedef void (xfer_func_t)(ide_drive_t *, struct ide_cmd *, void *, unsigned);
extern struct mutex ide_setting_mtx;
#define DS_SYNC	(1 << 0)
struct ide_devset ;
#define __DEVSET(_flags, _get, _set)
#define ide_devset_get(name, field) \
static int get_##name(ide_drive_t *drive) \
#define ide_devset_set(name, field) \
static int set_##name(ide_drive_t *drive, int arg) \
#define ide_devset_get_flag(name, flag) \
static int get_##name(ide_drive_t *drive) \
#define ide_devset_set_flag(name, flag) \
static int set_##name(ide_drive_t *drive, int arg) \
#define __IDE_DEVSET(_name, _flags, _get, _set) \
const struct ide_devset ide_devset_##_name = \
__DEVSET(_flags, _get, _set)
#define IDE_DEVSET(_name, _flags, _get, _set) \
static __IDE_DEVSET(_name, _flags, _get, _set)
#define ide_devset_rw(_name, _func) \
IDE_DEVSET(_name, 0, get_##_func, set_##_func)
#define ide_devset_w(_name, _func) \
IDE_DEVSET(_name, 0, NULL, set_##_func)
#define ide_ext_devset_rw(_name, _func) \
__IDE_DEVSET(_name, 0, get_##_func, set_##_func)
#define ide_ext_devset_rw_sync(_name, _func) \
__IDE_DEVSET(_name, DS_SYNC, get_##_func, set_##_func)
#define ide_decl_devset(_name) \
extern const struct ide_devset ide_devset_##_name
ide_decl_devset(io_32bit);
ide_decl_devset(keepsettings);
ide_decl_devset(pio_mode);
ide_decl_devset(unmaskirq);
ide_decl_devset(using_dma);
#define ide_devset_rw_field(_name, _field) \
ide_devset_get(_name, _field); \
ide_devset_set(_name, _field); \
IDE_DEVSET(_name, DS_SYNC, get_##_name, set_##_name)
#define ide_devset_rw_flag(_name, _field) \
ide_devset_get_flag(_name, _field); \
ide_devset_set_flag(_name, _field); \
IDE_DEVSET(_name, DS_SYNC, get_##_name, set_##_name)
struct ide_proc_devset ;
#define __IDE_PROC_DEVSET(_name, _min, _max, _mulf, _divf)
#define IDE_PROC_DEVSET(_name, _min, _max) \
__IDE_PROC_DEVSET(_name, _min, _max, NULL, NULL)
typedef struct  ide_proc_entry_t;
void proc_ide_create(void);
void proc_ide_destroy(void);
void ide_proc_register_port(ide_hwif_t *);
void ide_proc_port_register_devices(ide_hwif_t *);
void ide_proc_unregister_device(ide_drive_t *);
void ide_proc_unregister_port(ide_hwif_t *);
void ide_proc_register_driver(ide_drive_t *, struct ide_driver *);
void ide_proc_unregister_driver(ide_drive_t *, struct ide_driver *);
extern const struct file_operations ide_capacity_proc_fops;
extern const struct file_operations ide_geometry_proc_fops;
static inline void proc_ide_create(void)
static inline void proc_ide_destroy(void)
static inline void ide_proc_register_port(ide_hwif_t *hwif)
static inline void ide_proc_port_register_devices(ide_hwif_t *hwif)
static inline void ide_proc_unregister_device(ide_drive_t *drive)
static inline void ide_proc_unregister_port(ide_hwif_t *hwif)
static inline void ide_proc_register_driver(ide_drive_t *drive,
struct ide_driver *driver)
static inline void ide_proc_unregister_driver(ide_drive_t *drive,
struct ide_driver *driver)
enum ;
#define __ide_debug_log(lvl, fmt, args...)				\
enum ;
int generic_ide_suspend(struct device *, pm_message_t);
int generic_ide_resume(struct device *);
void ide_complete_power_step(ide_drive_t *, struct request *);
ide_startstop_t ide_start_power_step(ide_drive_t *, struct request *);
void ide_complete_pm_rq(ide_drive_t *, struct request *);
void ide_check_pm_state(ide_drive_t *, struct request *);
struct ide_driver ;
#define to_ide_driver(drv) container_of(drv, struct ide_driver, gen_driver)
int ide_device_get(ide_drive_t *);
void ide_device_put(ide_drive_t *);
struct ide_ioctl_devset ;
int ide_setting_ioctl(ide_drive_t *, struct block_device *, unsigned int,
unsigned long, const struct ide_ioctl_devset *);
int generic_ide_ioctl(ide_drive_t *, struct block_device *, unsigned, unsigned long);
extern int ide_vlb_clk;
extern int ide_pci_clk;
int ide_end_rq(ide_drive_t *, struct request *, int, unsigned int);
void ide_kill_rq(ide_drive_t *, struct request *);
void __ide_set_handler(ide_drive_t *, ide_handler_t *, unsigned int);
void ide_set_handler(ide_drive_t *, ide_handler_t *, unsigned int);
void ide_execute_command(ide_drive_t *, struct ide_cmd *, ide_handler_t *,
unsigned int);
void ide_pad_transfer(ide_drive_t *, int, int);
ide_startstop_t ide_error(ide_drive_t *, const char *, u8);
void ide_fix_driveid(u16 *);
extern void ide_fixstring(u8 *, const int, const int);
int ide_busy_sleep(ide_drive_t *, unsigned long, int);
int __ide_wait_stat(ide_drive_t *, u8, u8, unsigned long, u8 *);
int ide_wait_stat(ide_startstop_t *, ide_drive_t *, u8, u8, unsigned long);
ide_startstop_t ide_do_park_unpark(ide_drive_t *, struct request *);
ide_startstop_t ide_do_devset(ide_drive_t *, struct request *);
extern ide_startstop_t ide_do_reset (ide_drive_t *);
extern int ide_devset_execute(ide_drive_t *drive,
const struct ide_devset *setting, int arg);
void ide_complete_cmd(ide_drive_t *, struct ide_cmd *, u8, u8);
int ide_complete_rq(ide_drive_t *, int, unsigned int);
void ide_tf_readback(ide_drive_t *drive, struct ide_cmd *cmd);
void ide_tf_dump(const char *, struct ide_cmd *);
void ide_exec_command(ide_hwif_t *, u8);
u8 ide_read_status(ide_hwif_t *);
u8 ide_read_altstatus(ide_hwif_t *);
void ide_write_devctl(ide_hwif_t *, u8);
void ide_dev_select(ide_drive_t *);
void ide_tf_load(ide_drive_t *, struct ide_taskfile *, u8);
void ide_tf_read(ide_drive_t *, struct ide_taskfile *, u8);
void ide_input_data(ide_drive_t *, struct ide_cmd *, void *, unsigned int);
void ide_output_data(ide_drive_t *, struct ide_cmd *, void *, unsigned int);
void SELECT_MASK(ide_drive_t *, int);
u8 ide_read_error(ide_drive_t *);
void ide_read_bcount_and_ireason(ide_drive_t *, u16 *, u8 *);
int ide_check_ireason(ide_drive_t *, struct request *, int, int, int);
int ide_check_atapi_device(ide_drive_t *, const char *);
void ide_init_pc(struct ide_atapi_pc *);
extern wait_queue_head_t ide_park_wq;
ssize_t ide_park_show(struct device *dev, struct device_attribute *attr,
char *buf);
ssize_t ide_park_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len);
enum ;
int ide_queue_pc_tail(ide_drive_t *, struct gendisk *, struct ide_atapi_pc *,
void *, unsigned int);
int ide_do_test_unit_ready(ide_drive_t *, struct gendisk *);
int ide_do_start_stop(ide_drive_t *, struct gendisk *, int);
int ide_set_media_lock(ide_drive_t *, struct gendisk *, int);
void ide_create_request_sense_cmd(ide_drive_t *, struct ide_atapi_pc *);
void ide_retry_pc(ide_drive_t *drive);
void ide_prep_sense(ide_drive_t *drive, struct request *rq);
int ide_queue_sense_rq(ide_drive_t *drive, void *special);
int ide_cd_expiry(ide_drive_t *);
int ide_cd_get_xferlen(struct request *);
ide_startstop_t ide_issue_pc(ide_drive_t *, struct ide_cmd *);
ide_startstop_t do_rw_taskfile(ide_drive_t *, struct ide_cmd *);
void ide_pio_bytes(ide_drive_t *, struct ide_cmd *, unsigned int, unsigned int);
void ide_finish_cmd(ide_drive_t *, struct ide_cmd *, u8);
int ide_raw_taskfile(ide_drive_t *, struct ide_cmd *, u8 *, u16);
int ide_no_data_taskfile(ide_drive_t *, struct ide_cmd *);
int ide_taskfile_ioctl(ide_drive_t *, unsigned long);
int ide_dev_read_id(ide_drive_t *, u8, u16 *, int);
extern int ide_driveid_update(ide_drive_t *);
extern int ide_config_drive_speed(ide_drive_t *, u8);
extern u8 eighty_ninty_three (ide_drive_t *);
extern int taskfile_lib_get_identify(ide_drive_t *drive, u8 *);
extern int ide_wait_not_busy(ide_hwif_t *hwif, unsigned long timeout);
extern void ide_stall_queue(ide_drive_t *drive, unsigned long timeout);
extern void ide_timer_expiry(unsigned long);
extern irqreturn_t ide_intr(int irq, void *dev_id);
extern void do_ide_request(struct request_queue *);
extern void ide_requeue_and_plug(ide_drive_t *drive, struct request *rq);
void ide_init_disk(struct gendisk *, ide_drive_t *);
extern int __ide_pci_register_driver(struct pci_driver *driver, struct module *owner, const char *mod_name);
#define ide_pci_register_driver(d) __ide_pci_register_driver(d, THIS_MODULE, KBUILD_MODNAME)
#define ide_pci_register_driver(d) pci_register_driver(d)
static inline int ide_pci_is_in_compatibility_mode(struct pci_dev *dev)
void ide_pci_setup_ports(struct pci_dev *, const struct ide_port_info *,
struct ide_hw *, struct ide_hw **);
void ide_setup_pci_noise(struct pci_dev *, const struct ide_port_info *);
int ide_pci_set_master(struct pci_dev *, const char *);
unsigned long ide_pci_dma_base(ide_hwif_t *, const struct ide_port_info *);
int ide_pci_check_simplex(ide_hwif_t *, const struct ide_port_info *);
int ide_hwif_setup_dma(ide_hwif_t *, const struct ide_port_info *);
static inline int ide_hwif_setup_dma(ide_hwif_t *hwif,
const struct ide_port_info *d)
struct ide_pci_enablebit ;
enum ;
# define IDE_HFLAG_OFF_BOARD	0
# define IDE_HFLAG_OFF_BOARD	IDE_HFLAG_NON_BOOTABLE
struct ide_port_info ;
int ide_pci_init_one(struct pci_dev *, const struct ide_port_info *, void *);
int ide_pci_init_two(struct pci_dev *, struct pci_dev *,
const struct ide_port_info *, void *);
void ide_pci_remove(struct pci_dev *);
int ide_pci_suspend(struct pci_dev *, pm_message_t);
int ide_pci_resume(struct pci_dev *);
#define ide_pci_suspend NULL
#define ide_pci_resume NULL
void ide_map_sg(ide_drive_t *, struct ide_cmd *);
void ide_init_sg_cmd(struct ide_cmd *, unsigned int);
#define BAD_DMA_DRIVE		0
#define GOOD_DMA_DRIVE		1
struct drive_list_entry ;
int ide_in_drive_list(u16 *, const struct drive_list_entry *);
int ide_dma_good_drive(ide_drive_t *);
int __ide_dma_bad_drive(ide_drive_t *);
u8 ide_find_dma_mode(ide_drive_t *, u8);
static inline u8 ide_max_dma_mode(ide_drive_t *drive)
void ide_dma_off_quietly(ide_drive_t *);
void ide_dma_off(ide_drive_t *);
void ide_dma_on(ide_drive_t *);
int ide_set_dma(ide_drive_t *);
void ide_check_dma_crc(ide_drive_t *);
ide_startstop_t ide_dma_intr(ide_drive_t *);
int ide_allocate_dma_engine(ide_hwif_t *);
void ide_release_dma_engine(ide_hwif_t *);
int ide_dma_prepare(ide_drive_t *, struct ide_cmd *);
void ide_dma_unmap_sg(ide_drive_t *, struct ide_cmd *);
int config_drive_for_dma(ide_drive_t *);
int ide_build_dmatable(ide_drive_t *, struct ide_cmd *);
void ide_dma_host_set(ide_drive_t *, int);
int ide_dma_setup(ide_drive_t *, struct ide_cmd *);
extern void ide_dma_start(ide_drive_t *);
int ide_dma_end(ide_drive_t *);
int ide_dma_test_irq(ide_drive_t *);
int ide_dma_sff_timer_expiry(ide_drive_t *);
u8 ide_dma_sff_read_status(ide_hwif_t *);
extern const struct ide_dma_ops sff_dma_ops;
static inline int config_drive_for_dma(ide_drive_t *drive)
void ide_dma_lost_irq(ide_drive_t *);
ide_startstop_t ide_dma_timeout_retry(ide_drive_t *, int);
static inline u8 ide_find_dma_mode(ide_drive_t *drive, u8 speed)
static inline u8 ide_max_dma_mode(ide_drive_t *drive)
static inline void ide_dma_off_quietly(ide_drive_t *drive)
static inline void ide_dma_off(ide_drive_t *drive)
static inline void ide_dma_on(ide_drive_t *drive)
static inline void ide_dma_verbose(ide_drive_t *drive)
static inline int ide_set_dma(ide_drive_t *drive)
static inline void ide_check_dma_crc(ide_drive_t *drive)
static inline ide_startstop_t ide_dma_intr(ide_drive_t *drive)
static inline ide_startstop_t ide_dma_timeout_retry(ide_drive_t *drive, int error)
static inline void ide_release_dma_engine(ide_hwif_t *hwif)
static inline int ide_dma_prepare(ide_drive_t *drive,
struct ide_cmd *cmd)
static inline void ide_dma_unmap_sg(ide_drive_t *drive,
struct ide_cmd *cmd)
int ide_acpi_init(void);
bool ide_port_acpi(ide_hwif_t *hwif);
extern int ide_acpi_exec_tfs(ide_drive_t *drive);
extern void ide_acpi_get_timing(ide_hwif_t *hwif);
extern void ide_acpi_push_timing(ide_hwif_t *hwif);
void ide_acpi_init_port(ide_hwif_t *);
void ide_acpi_port_init_devices(ide_hwif_t *);
extern void ide_acpi_set_state(ide_hwif_t *hwif, int on);
static inline int ide_acpi_init(void)
static inline bool ide_port_acpi(ide_hwif_t *hwif)
static inline int ide_acpi_exec_tfs(ide_drive_t *drive)
static inline void ide_acpi_get_timing(ide_hwif_t *hwif)
static inline void ide_acpi_push_timing(ide_hwif_t *hwif)
static inline void ide_acpi_init_port(ide_hwif_t *hwif)
static inline void ide_acpi_port_init_devices(ide_hwif_t *hwif)
static inline void ide_acpi_set_state(ide_hwif_t *hwif, int on)
void ide_register_region(struct gendisk *);
void ide_unregister_region(struct gendisk *);
void ide_check_nien_quirk_list(ide_drive_t *);
void ide_undecoded_slave(ide_drive_t *);
void ide_port_apply_params(ide_hwif_t *);
int ide_sysfs_register_port(ide_hwif_t *);
struct ide_host *ide_host_alloc(const struct ide_port_info *, struct ide_hw **,
unsigned int);
void ide_host_free(struct ide_host *);
int ide_host_register(struct ide_host *, const struct ide_port_info *,
struct ide_hw **);
int ide_host_add(const struct ide_port_info *, struct ide_hw **, unsigned int,
struct ide_host **);
void ide_host_remove(struct ide_host *);
int ide_legacy_device_add(const struct ide_port_info *, unsigned long);
void ide_port_unregister_devices(ide_hwif_t *);
void ide_port_scan(ide_hwif_t *);
static inline void *ide_get_hwifdata (ide_hwif_t * hwif)
static inline void ide_set_hwifdata (ide_hwif_t * hwif, void *data)
extern void ide_toggle_bounce(ide_drive_t *drive, int on);
u64 ide_get_lba_addr(struct ide_cmd *, int);
u8 ide_dump_status(ide_drive_t *, const char *, u8);
struct ide_timing ;
enum ;
struct ide_timing *ide_timing_find_mode(u8);
u16 ide_pio_cycle_time(ide_drive_t *, u8);
void ide_timing_merge(struct ide_timing *, struct ide_timing *,
struct ide_timing *, unsigned int);
int ide_timing_compute(ide_drive_t *, u8, struct ide_timing *, int, int);
int ide_scan_pio_blacklist(char *);
const char *ide_xfer_verbose(u8);
int ide_pio_need_iordy(ide_drive_t *, const u8);
int ide_set_pio_mode(ide_drive_t *, u8);
int ide_set_dma_mode(ide_drive_t *, u8);
void ide_set_pio(ide_drive_t *, u8);
int ide_set_xfer_rate(ide_drive_t *, u8);
static inline void ide_set_pio(ide_drive_t *drive, u8 pio)
static inline int ide_set_xfer_rate(ide_drive_t *drive, u8 rate)
static inline void ide_set_max_pio(ide_drive_t *drive)
char *ide_media_string(ide_drive_t *);
extern struct device_attribute ide_dev_attrs[];
extern struct bus_type ide_bus_type;
extern struct class *ide_port_class;
static inline void ide_dump_identify(u8 *id)
static inline int hwif_to_node(ide_hwif_t *hwif)
static inline ide_drive_t *ide_get_pair_dev(ide_drive_t *drive)
static inline void *ide_get_drivedata(ide_drive_t *drive)
static inline void ide_set_drivedata(ide_drive_t *drive, void *data)
#define ide_port_for_each_dev(i, dev, port) \
for ((i) = 0; ((dev) = (port)->devices[i]) || (i) < MAX_DRIVES; (i)++)
#define ide_port_for_each_present_dev(i, dev, port) \
for ((i) = 0; ((dev) = (port)->devices[i]) || (i) < MAX_DRIVES; (i)++) \
if ((dev)->dev_flags & IDE_DFLAG_PRESENT)
#define ide_host_for_each_port(i, port, host) \
for ((i) = 0; ((port) = (host)->ports[i]) || (i) < MAX_HOST_PORTS; (i)++)
