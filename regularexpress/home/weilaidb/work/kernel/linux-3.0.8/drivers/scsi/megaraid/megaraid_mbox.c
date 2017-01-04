static int megaraid_init(void);
static void megaraid_exit(void);
static int megaraid_probe_one(struct pci_dev*, const struct pci_device_id *);
static void megaraid_detach_one(struct pci_dev *);
static void megaraid_mbox_shutdown(struct pci_dev *);
static int megaraid_io_attach(adapter_t *);
static void megaraid_io_detach(adapter_t *);
static int megaraid_init_mbox(adapter_t *);
static void megaraid_fini_mbox(adapter_t *);
static int megaraid_alloc_cmd_packets(adapter_t *);
static void megaraid_free_cmd_packets(adapter_t *);
static int megaraid_mbox_setup_dma_pools(adapter_t *);
static void megaraid_mbox_teardown_dma_pools(adapter_t *);
static int megaraid_sysfs_alloc_resources(adapter_t *);
static void megaraid_sysfs_free_resources(adapter_t *);
static int megaraid_abort_handler(struct scsi_cmnd *);
static int megaraid_reset_handler(struct scsi_cmnd *);
static int mbox_post_sync_cmd(adapter_t *, uint8_t []);
static int mbox_post_sync_cmd_fast(adapter_t *, uint8_t []);
static int megaraid_busywait_mbox(mraid_device_t *);
static int megaraid_mbox_product_info(adapter_t *);
static int megaraid_mbox_extended_cdb(adapter_t *);
static int megaraid_mbox_support_ha(adapter_t *, uint16_t *);
static int megaraid_mbox_support_random_del(adapter_t *);
static int megaraid_mbox_get_max_sg(adapter_t *);
static void megaraid_mbox_enum_raid_scsi(adapter_t *);
static void megaraid_mbox_flush_cache(adapter_t *);
static int megaraid_mbox_fire_sync_cmd(adapter_t *);
static void megaraid_mbox_display_scb(adapter_t *, scb_t *);
static void megaraid_mbox_setup_device_map(adapter_t *);
static int megaraid_queue_command(struct Scsi_Host *, struct scsi_cmnd *);
static scb_t *megaraid_mbox_build_cmd(adapter_t *, struct scsi_cmnd *, int *);
static void megaraid_mbox_runpendq(adapter_t *, scb_t *);
static void megaraid_mbox_prepare_pthru(adapter_t *, scb_t *,
struct scsi_cmnd *);
static void megaraid_mbox_prepare_epthru(adapter_t *, scb_t *,
struct scsi_cmnd *);
static irqreturn_t megaraid_isr(int, void *);
static void megaraid_mbox_dpc(unsigned long);
static ssize_t megaraid_sysfs_show_app_hndl(struct device *, struct device_attribute *attr, char *);
static ssize_t megaraid_sysfs_show_ldnum(struct device *, struct device_attribute *attr, char *);
static int megaraid_cmm_register(adapter_t *);
static int megaraid_cmm_unregister(adapter_t *);
static int megaraid_mbox_mm_handler(unsigned long, uioc_t *, uint32_t);
static int megaraid_mbox_mm_command(adapter_t *, uioc_t *);
static void megaraid_mbox_mm_done(adapter_t *, scb_t *);
static int gather_hbainfo(adapter_t *, mraid_hba_info_t *);
static int wait_till_fw_empty(adapter_t *);
MODULE_AUTHOR("megaraidlinux@lsi.com");
MODULE_DESCRIPTION("LSI Logic MegaRAID Mailbox Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(MEGARAID_VERSION);
static int megaraid_expose_unconf_disks = 0;
module_param_named(unconf_disks, megaraid_expose_unconf_disks, int, 0);
MODULE_PARM_DESC(unconf_disks,
"Set to expose unconfigured disks to kernel (default=0)");
static unsigned int max_mbox_busy_wait = MBOX_BUSY_WAIT;
module_param_named(busy_wait, max_mbox_busy_wait, int, 0);
MODULE_PARM_DESC(busy_wait,
"Max wait for mailbox in microseconds if busy (default=10)");
static unsigned int megaraid_max_sectors = MBOX_MAX_SECTORS;
module_param_named(max_sectors, megaraid_max_sectors, int, 0);
MODULE_PARM_DESC(max_sectors,
"Maximum number of sectors per IO command (default=128)");
static unsigned int megaraid_cmd_per_lun = MBOX_DEF_CMD_PER_LUN;
module_param_named(cmd_per_lun, megaraid_cmd_per_lun, int, 0);
MODULE_PARM_DESC(cmd_per_lun,
"Maximum number of commands per logical unit (default=64)");
static unsigned int megaraid_fast_load = 0;
module_param_named(fast_load, megaraid_fast_load, int, 0);
MODULE_PARM_DESC(fast_load,
"Faster loading of the driver, skips physical devices! (default=0)");
int mraid_debug_level = CL_ANN;
module_param_named(debug_level, mraid_debug_level, int, 0);
MODULE_PARM_DESC(debug_level, "Debug level for driver (default=0)");
static uint8_t megaraid_mbox_version[8] =
;
static struct pci_device_id pci_id_table_g[] =  ;
MODULE_DEVICE_TABLE(pci, pci_id_table_g);
static struct pci_driver megaraid_pci_driver = ;
DEVICE_ATTR(megaraid_mbox_app_hndl, S_IRUSR, megaraid_sysfs_show_app_hndl,
NULL);
static struct device_attribute *megaraid_shost_attrs[] = ;
DEVICE_ATTR(megaraid_mbox_ld, S_IRUSR, megaraid_sysfs_show_ldnum, NULL);
static struct device_attribute *megaraid_sdev_attrs[] = ;
static int megaraid_change_queue_depth(struct scsi_device *sdev, int qdepth,
int reason)
static struct scsi_host_template megaraid_template_g = ;
static int __init
megaraid_init(void)
static void __exit
megaraid_exit(void)
static int __devinit
megaraid_probe_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void
megaraid_detach_one(struct pci_dev *pdev)
static void
megaraid_mbox_shutdown(struct pci_dev *pdev)
static int
megaraid_io_attach(adapter_t *adapter)
static void
megaraid_io_detach(adapter_t *adapter)
static int __devinit
megaraid_init_mbox(adapter_t *adapter)
static void
megaraid_fini_mbox(adapter_t *adapter)
static int
megaraid_alloc_cmd_packets(adapter_t *adapter)
static void
megaraid_free_cmd_packets(adapter_t *adapter)
static int
megaraid_mbox_setup_dma_pools(adapter_t *adapter)
static void
megaraid_mbox_teardown_dma_pools(adapter_t *adapter)
static scb_t *
megaraid_alloc_scb(adapter_t *adapter, struct scsi_cmnd *scp)
static inline void
megaraid_dealloc_scb(adapter_t *adapter, scb_t *scb)
static int
megaraid_mbox_mksgl(adapter_t *adapter, scb_t *scb)
static int
mbox_post_cmd(adapter_t *adapter, scb_t *scb)
static int
megaraid_queue_command_lck(struct scsi_cmnd *scp, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(megaraid_queue_command)
static scb_t *
megaraid_mbox_build_cmd(adapter_t *adapter, struct scsi_cmnd *scp, int *busy)
static void
megaraid_mbox_runpendq(adapter_t *adapter, scb_t *scb_q)
static void
megaraid_mbox_prepare_pthru(adapter_t *adapter, scb_t *scb,
struct scsi_cmnd *scp)
static void
megaraid_mbox_prepare_epthru(adapter_t *adapter, scb_t *scb,
struct scsi_cmnd *scp)
static int
megaraid_ack_sequence(adapter_t *adapter)
static irqreturn_t
megaraid_isr(int irq, void *devp)
static void
megaraid_mbox_sync_scb(adapter_t *adapter, scb_t *scb)
static void
megaraid_mbox_dpc(unsigned long devp)
static int
megaraid_abort_handler(struct scsi_cmnd *scp)
static int
megaraid_reset_handler(struct scsi_cmnd *scp)
static int
mbox_post_sync_cmd(adapter_t *adapter, uint8_t raw_mbox[])
static int
mbox_post_sync_cmd_fast(adapter_t *adapter, uint8_t raw_mbox[])
static int
megaraid_busywait_mbox(mraid_device_t *raid_dev)
static int
megaraid_mbox_product_info(adapter_t *adapter)
static int
megaraid_mbox_extended_cdb(adapter_t *adapter)
static int
megaraid_mbox_support_ha(adapter_t *adapter, uint16_t *init_id)
static int
megaraid_mbox_support_random_del(adapter_t *adapter)
static int
megaraid_mbox_get_max_sg(adapter_t *adapter)
static void
megaraid_mbox_enum_raid_scsi(adapter_t *adapter)
static void
megaraid_mbox_flush_cache(adapter_t *adapter)
static int
megaraid_mbox_fire_sync_cmd(adapter_t *adapter)
static void
megaraid_mbox_display_scb(adapter_t *adapter, scb_t *scb)
static void
megaraid_mbox_setup_device_map(adapter_t *adapter)
static int
megaraid_cmm_register(adapter_t *adapter)
static int
megaraid_cmm_unregister(adapter_t *adapter)
static int
megaraid_mbox_mm_handler(unsigned long drvr_data, uioc_t *kioc, uint32_t action)
static int
megaraid_mbox_mm_command(adapter_t *adapter, uioc_t *kioc)
static int
wait_till_fw_empty(adapter_t *adapter)
static void
megaraid_mbox_mm_done(adapter_t *adapter, scb_t *scb)
static int
gather_hbainfo(adapter_t *adapter, mraid_hba_info_t *hinfo)
static int
megaraid_sysfs_alloc_resources(adapter_t *adapter)
static void
megaraid_sysfs_free_resources(adapter_t *adapter)
static void
megaraid_sysfs_get_ldmap_done(uioc_t *uioc)
static void
megaraid_sysfs_get_ldmap_timeout(unsigned long data)
static int
megaraid_sysfs_get_ldmap(adapter_t *adapter)
static ssize_t
megaraid_sysfs_show_app_hndl(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
megaraid_sysfs_show_ldnum(struct device *dev, struct device_attribute *attr, char *buf)
module_init(megaraid_init);
module_exit(megaraid_exit);
