#define ASD_DRIVER_VERSION "1.0.3"
static int use_msi = 0;
module_param_named(use_msi, use_msi, int, S_IRUGO);
MODULE_PARM_DESC(use_msi, "\n"
"\tEnable(1) or disable(0) using PCI MSI.\n"
"\tDefault: 0");
static int lldd_max_execute_num = 0;
module_param_named(collector, lldd_max_execute_num, int, S_IRUGO);
MODULE_PARM_DESC(collector, "\n"
"\tIf greater than one, tells the SAS Layer to run in Task Collector\n"
"\tMode.  If 1 or 0, tells the SAS Layer to run in Direct Mode.\n"
"\tThe aic94xx SAS LLDD supports both modes.\n"
"\tDefault: 0 (Direct Mode).\n");
static struct scsi_transport_template *aic94xx_transport_template;
static int asd_scan_finished(struct Scsi_Host *, unsigned long);
static void asd_scan_start(struct Scsi_Host *);
static struct scsi_host_template aic94xx_sht = ;
static int __devinit asd_map_memio(struct asd_ha_struct *asd_ha)
static void asd_unmap_memio(struct asd_ha_struct *asd_ha)
static int __devinit asd_map_ioport(struct asd_ha_struct *asd_ha)
static void asd_unmap_ioport(struct asd_ha_struct *asd_ha)
static int __devinit asd_map_ha(struct asd_ha_struct *asd_ha)
static void asd_unmap_ha(struct asd_ha_struct *asd_ha)
static const char *asd_dev_rev[30] = ;
static int __devinit asd_common_setup(struct asd_ha_struct *asd_ha)
static int __devinit asd_aic9410_setup(struct asd_ha_struct *asd_ha)
static int __devinit asd_aic9405_setup(struct asd_ha_struct *asd_ha)
static ssize_t asd_show_dev_rev(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(revision, S_IRUGO, asd_show_dev_rev, NULL);
static ssize_t asd_show_dev_bios_build(struct device *dev,
struct device_attribute *attr,char *buf)
static DEVICE_ATTR(bios_build, S_IRUGO, asd_show_dev_bios_build, NULL);
static ssize_t asd_show_dev_pcba_sn(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(pcba_sn, S_IRUGO, asd_show_dev_pcba_sn, NULL);
#define FLASH_CMD_NONE      0x00
#define FLASH_CMD_UPDATE    0x01
#define FLASH_CMD_VERIFY    0x02
struct flash_command ;
static struct flash_command flash_command_table[] =
;
struct error_bios ;
static struct error_bios flash_error_table[] =
;
static ssize_t asd_store_update_bios(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t asd_show_update_bios(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(update_bios, S_IRUGO|S_IWUSR,
asd_show_update_bios, asd_store_update_bios);
static int asd_create_dev_attrs(struct asd_ha_struct *asd_ha)
static void asd_remove_dev_attrs(struct asd_ha_struct *asd_ha)
static const struct asd_pcidev_struct  asd_pcidev_data[] __devinitconst = ;
static int asd_create_ha_caches(struct asd_ha_struct *asd_ha)
static void asd_free_edbs(struct asd_ha_struct *asd_ha)
static void asd_free_escbs(struct asd_ha_struct *asd_ha)
static void asd_destroy_ha_caches(struct asd_ha_struct *asd_ha)
struct kmem_cache *asd_dma_token_cache;
struct kmem_cache *asd_ascb_cache;
static int asd_create_global_caches(void)
static void asd_destroy_global_caches(void)
static int asd_register_sas_ha(struct asd_ha_struct *asd_ha)
static int asd_unregister_sas_ha(struct asd_ha_struct *asd_ha)
static int __devinit asd_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void asd_free_queues(struct asd_ha_struct *asd_ha)
static void asd_turn_off_leds(struct asd_ha_struct *asd_ha)
static void __devexit asd_pci_remove(struct pci_dev *dev)
static void asd_scan_start(struct Scsi_Host *shost)
static int asd_scan_finished(struct Scsi_Host *shost, unsigned long time)
static ssize_t asd_version_show(struct device_driver *driver, char *buf)
static DRIVER_ATTR(version, S_IRUGO, asd_version_show, NULL);
static int asd_create_driver_attrs(struct device_driver *driver)
static void asd_remove_driver_attrs(struct device_driver *driver)
static struct sas_domain_function_template aic94xx_transport_functions = ;
static const struct pci_device_id aic94xx_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, aic94xx_pci_table);
static struct pci_driver aic94xx_pci_driver = ;
static int __init aic94xx_init(void)
static void __exit aic94xx_exit(void)
module_init(aic94xx_init);
module_exit(aic94xx_exit);
MODULE_AUTHOR("Luben Tuikov <luben_tuikov@adaptec.com>");
MODULE_DESCRIPTION(ASD_DRIVER_DESCRIPTION);
MODULE_LICENSE("GPL v2");
MODULE_VERSION(ASD_DRIVER_VERSION);
