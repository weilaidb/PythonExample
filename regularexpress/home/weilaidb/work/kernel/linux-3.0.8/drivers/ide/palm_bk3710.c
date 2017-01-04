#define IDE_PALM_ATA_PRI_REG_OFFSET 0x1F0
#define IDE_PALM_ATA_PRI_CTL_OFFSET 0x3F6
#define BK3710_BMICP		0x00
#define BK3710_BMISP		0x02
#define BK3710_BMIDTP		0x04
#define BK3710_IDETIMP		0x40
#define BK3710_IDESTATUS	0x47
#define BK3710_UDMACTL		0x48
#define BK3710_MISCCTL		0x50
#define BK3710_REGSTB		0x54
#define BK3710_REGRCVR		0x58
#define BK3710_DATSTB		0x5C
#define BK3710_DATRCVR		0x60
#define BK3710_DMASTB		0x64
#define BK3710_DMARCVR		0x68
#define BK3710_UDMASTB		0x6C
#define BK3710_UDMATRP		0x70
#define BK3710_UDMAENV		0x74
#define BK3710_IORDYTMP		0x78
static unsigned ideclk_period;
struct palm_bk3710_udmatiming ;
static const struct palm_bk3710_udmatiming palm_bk3710_udmatimings[6] = ;
static void palm_bk3710_setudmamode(void __iomem *base, unsigned int dev,
unsigned int mode)
static void palm_bk3710_setdmamode(void __iomem *base, unsigned int dev,
unsigned short min_cycle,
unsigned int mode)
static void palm_bk3710_setpiomode(void __iomem *base, ide_drive_t *mate,
unsigned int dev, unsigned int cycletime,
unsigned int mode)
static void palm_bk3710_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void palm_bk3710_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void __devinit palm_bk3710_chipinit(void __iomem *base)
static u8 palm_bk3710_cable_detect(ide_hwif_t *hwif)
static int __devinit palm_bk3710_init_dma(ide_hwif_t *hwif,
const struct ide_port_info *d)
static const struct ide_port_ops palm_bk3710_ports_ops = ;
static struct ide_port_info __devinitdata palm_bk3710_port_info = ;
static int __init palm_bk3710_probe(struct platform_device *pdev)
MODULE_ALIAS("platform:palm_bk3710");
static struct platform_driver platform_bk_driver = ;
static int __init palm_bk3710_init(void)
module_init(palm_bk3710_init);
MODULE_LICENSE("GPL");
