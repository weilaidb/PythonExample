#define PCI_DEVICE_ID_TOSHIBA_SCC_ATA            0x01b4
#define SCC_PATA_NAME           "scc IDE"
#define TDVHSEL_MASTER          0x00000001
#define TDVHSEL_SLAVE           0x00000004
#define MODE_JCUSFEN            0x00000080
#define CCKCTRL_ATARESET        0x00040000
#define CCKCTRL_BUFCNT          0x00020000
#define CCKCTRL_CRST            0x00010000
#define CCKCTRL_OCLKEN          0x00000100
#define CCKCTRL_ATACLKOEN       0x00000002
#define CCKCTRL_LCLKEN          0x00000001
#define QCHCD_IOS_SS		0x00000001
#define QCHSD_STPDIAG		0x00020000
#define INTMASK_MSK             0xD1000012
#define INTSTS_SERROR		0x80000000
#define INTSTS_PRERR		0x40000000
#define INTSTS_RERR		0x10000000
#define INTSTS_ICERR		0x01000000
#define INTSTS_BMSINT		0x00000010
#define INTSTS_BMHE		0x00000008
#define INTSTS_IOIRQS           0x00000004
#define INTSTS_INTRQ            0x00000002
#define INTSTS_ACTEINT          0x00000001
#define ECMODE_VALUE 0x01
static struct scc_ports  scc_ports[MAX_HWIFS];
static unsigned long JCHSTtbl[2][7] = ;
static unsigned long JCHHTtbl[2][7] = ;
static unsigned long JCHCTtbl[2][7] = ;
static unsigned long JCHDCTxtbl[2][7] = ;
static unsigned long JCSTWTxtbl[2][7] = ;
static unsigned long JCTSStbl[2][7] = ;
static unsigned long JCENVTtbl[2][7] = ;
static unsigned long JCACTSELtbl[2][7] = ;
static u8 scc_ide_inb(unsigned long port)
static void scc_exec_command(ide_hwif_t *hwif, u8 cmd)
static u8 scc_read_status(ide_hwif_t *hwif)
static u8 scc_read_altstatus(ide_hwif_t *hwif)
static u8 scc_dma_sff_read_status(ide_hwif_t *hwif)
static void scc_write_devctl(ide_hwif_t *hwif, u8 ctl)
static void scc_ide_insw(unsigned long port, void *addr, u32 count)
static void scc_ide_insl(unsigned long port, void *addr, u32 count)
static void scc_ide_outb(u8 addr, unsigned long port)
static void
scc_ide_outsw(unsigned long port, void *addr, u32 count)
static void
scc_ide_outsl(unsigned long port, void *addr, u32 count)
static void scc_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void scc_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void scc_dma_host_set(ide_drive_t *drive, int on)
static int scc_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static void scc_dma_start(ide_drive_t *drive)
static int __scc_dma_end(ide_drive_t *drive)
static int scc_dma_end(ide_drive_t *drive)
static int scc_dma_test_irq(ide_drive_t *drive)
static u8 scc_udma_filter(ide_drive_t *drive)
static int setup_mmio_scc (struct pci_dev *dev, const char *name)
static int scc_ide_setup_pci_device(struct pci_dev *dev,
const struct ide_port_info *d)
static int __devinit init_setup_scc(struct pci_dev *dev,
const struct ide_port_info *d)
static void scc_tf_load(ide_drive_t *drive, struct ide_taskfile *tf, u8 valid)
static void scc_tf_read(ide_drive_t *drive, struct ide_taskfile *tf, u8 valid)
static void scc_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void scc_output_data(ide_drive_t *drive,  struct ide_cmd *cmd,
void *buf, unsigned int len)
static void __devinit init_mmio_iops_scc(ide_hwif_t *hwif)
static void __devinit init_iops_scc(ide_hwif_t *hwif)
static int __devinit scc_init_dma(ide_hwif_t *hwif,
const struct ide_port_info *d)
static u8 scc_cable_detect(ide_hwif_t *hwif)
static void __devinit init_hwif_scc(ide_hwif_t *hwif)
static const struct ide_tp_ops scc_tp_ops = ;
static const struct ide_port_ops scc_port_ops = ;
static const struct ide_dma_ops scc_dma_ops = ;
static const struct ide_port_info scc_chipset __devinitdata = ;
static int __devinit scc_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit scc_remove(struct pci_dev *dev)
static const struct pci_device_id scc_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, scc_pci_tbl);
static struct pci_driver scc_pci_driver = ;
static int __init scc_ide_init(void)
static void __exit scc_ide_exit(void)
module_init(scc_ide_init);
module_exit(scc_ide_exit);
MODULE_DESCRIPTION("PCI driver module for Toshiba SCC IDE");
MODULE_LICENSE("GPL");
