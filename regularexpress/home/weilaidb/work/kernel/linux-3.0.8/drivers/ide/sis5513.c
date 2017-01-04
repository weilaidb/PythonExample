#define DRV_NAME "sis5513"
#define ATA_16		0x01
#define ATA_33		0x02
#define ATA_66		0x03
#define ATA_100a	0x04
#define ATA_100		0x05
#define ATA_133a	0x06
#define ATA_133		0x07
static u8 chipset_family;
static const struct  SiSHostChipInfo[] = ;
static u8 cycle_time_offset[] = ;
static u8 cycle_time_range[]  = ;
static u8 cycle_time_value[][XFER_UDMA_6 - XFER_UDMA_0 + 1] = ;
static u8 cvs_time_value[][XFER_UDMA_6 - XFER_UDMA_0 + 1] = ;
static u8 ini_time_value[][8] = ;
static u8 act_time_value[][8] = ;
static u8 rco_time_value[][8] = ;
static char *chipset_capability[] = ;
static u8 sis_ata133_get_base(ide_drive_t *drive)
static void sis_ata16_program_timings(ide_drive_t *drive, const u8 mode)
static void sis_ata100_program_timings(ide_drive_t *drive, const u8 mode)
static void sis_ata133_program_timings(ide_drive_t *drive, const u8 mode)
static void sis_program_timings(ide_drive_t *drive, const u8 mode)
static void config_drive_art_rwp(ide_drive_t *drive)
static void sis_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void sis_ata133_program_udma_timings(ide_drive_t *drive, const u8 mode)
static void sis_ata33_program_udma_timings(ide_drive_t *drive, const u8 mode)
static void sis_program_udma_timings(ide_drive_t *drive, const u8 mode)
static void sis_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 sis_ata133_udma_filter(ide_drive_t *drive)
static int __devinit sis_find_family(struct pci_dev *dev)
static int init_chipset_sis5513(struct pci_dev *dev)
struct sis_laptop ;
static const struct sis_laptop sis_laptop[] = ;
static u8 sis_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops sis_port_ops = ;
static const struct ide_port_ops sis_ata133_port_ops = ;
static const struct ide_port_info sis5513_chipset __devinitdata = ;
static int __devinit sis5513_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit sis5513_remove(struct pci_dev *dev)
static const struct pci_device_id sis5513_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sis5513_pci_tbl);
static struct pci_driver sis5513_pci_driver = ;
static int __init sis5513_ide_init(void)
static void __exit sis5513_ide_exit(void)
module_init(sis5513_ide_init);
module_exit(sis5513_ide_exit);
MODULE_AUTHOR("Lionel Bouton, L C Chang, Andre Hedrick, Vojtech Pavlik");
MODULE_DESCRIPTION("PCI driver module for SIS IDE");
MODULE_LICENSE("GPL");
