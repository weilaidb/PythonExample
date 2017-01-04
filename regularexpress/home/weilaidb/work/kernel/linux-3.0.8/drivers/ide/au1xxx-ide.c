#define DRV_NAME	"au1200-ide"
#define DRV_AUTHOR	"Enrico Walther <enrico.walther@amd.com> / Pete Popov <ppopov@embeddedalley.com>"
#define IDE_AU1XXX_BURSTMODE	1
static _auide_hwif auide_hwif;
#if defined(CONFIG_BLK_DEV_IDE_AU1XXX_PIO_DBDMA)
static inline void auide_insw(unsigned long port, void *addr, u32 count)
static inline void auide_outsw(unsigned long port, void *addr, u32 count)
static void au1xxx_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void au1xxx_output_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void au1xxx_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void auide_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int auide_build_dmatable(ide_drive_t *drive, struct ide_cmd *cmd)
static int auide_dma_end(ide_drive_t *drive)
static void auide_dma_start(ide_drive_t *drive )
static int auide_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static int auide_dma_test_irq(ide_drive_t *drive)
static void auide_dma_host_set(ide_drive_t *drive, int on)
static void auide_ddma_tx_callback(int irq, void *param)
static void auide_ddma_rx_callback(int irq, void *param)
static void auide_init_dbdma_dev(dbdev_tab_t *dev, u32 dev_id, u32 tsize, u32 devwidth, u32 flags)
static const struct ide_dma_ops au1xxx_dma_ops = ;
static int auide_ddma_init(ide_hwif_t *hwif, const struct ide_port_info *d)
static int auide_ddma_init(ide_hwif_t *hwif, const struct ide_port_info *d)
static void auide_setup_ports(struct ide_hw *hw, _auide_hwif *ahwif)
static const struct ide_tp_ops au1xxx_tp_ops = ;
static const struct ide_port_ops au1xxx_port_ops = ;
static const struct ide_port_info au1xxx_port_info = ;
static int au_ide_probe(struct platform_device *dev)
static int au_ide_remove(struct platform_device *dev)
static struct platform_driver au1200_ide_driver = ;
static int __init au_ide_init(void)
static void __exit au_ide_exit(void)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("AU1200 IDE driver");
module_init(au_ide_init);
module_exit(au_ide_exit);
