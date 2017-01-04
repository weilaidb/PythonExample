#define DRV_NAME "icside"
#define ICS_IDENT_OFFSET		0x2280
#define ICS_ARCIN_V5_INTRSTAT		0x0000
#define ICS_ARCIN_V5_INTROFFSET		0x0004
#define ICS_ARCIN_V5_IDEOFFSET		0x2800
#define ICS_ARCIN_V5_IDEALTOFFSET	0x2b80
#define ICS_ARCIN_V5_IDESTEPPING	6
#define ICS_ARCIN_V6_IDEOFFSET_1	0x2000
#define ICS_ARCIN_V6_INTROFFSET_1	0x2200
#define ICS_ARCIN_V6_INTRSTAT_1		0x2290
#define ICS_ARCIN_V6_IDEALTOFFSET_1	0x2380
#define ICS_ARCIN_V6_IDEOFFSET_2	0x3000
#define ICS_ARCIN_V6_INTROFFSET_2	0x3200
#define ICS_ARCIN_V6_INTRSTAT_2		0x3290
#define ICS_ARCIN_V6_IDEALTOFFSET_2	0x3380
#define ICS_ARCIN_V6_IDESTEPPING	6
struct cardinfo ;
static struct cardinfo icside_cardinfo_v5 = ;
static struct cardinfo icside_cardinfo_v6_1 = ;
static struct cardinfo icside_cardinfo_v6_2 = ;
struct icside_state ;
#define ICS_TYPE_A3IN	0
#define ICS_TYPE_A3USER	1
#define ICS_TYPE_V6	3
#define ICS_TYPE_V5	15
#define ICS_TYPE_NOTYPE	((unsigned int)-1)
static void icside_irqenable_arcin_v5 (struct expansion_card *ec, int irqnr)
static void icside_irqdisable_arcin_v5 (struct expansion_card *ec, int irqnr)
static const expansioncard_ops_t icside_ops_arcin_v5 = ;
static void icside_irqenable_arcin_v6 (struct expansion_card *ec, int irqnr)
static void icside_irqdisable_arcin_v6 (struct expansion_card *ec, int irqnr)
static int icside_irqpending_arcin_v6(struct expansion_card *ec)
static const expansioncard_ops_t icside_ops_arcin_v6 = ;
static void icside_maskproc(ide_drive_t *drive, int mask)
static const struct ide_port_ops icside_v6_no_dma_port_ops = ;
static void icside_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops icside_v6_port_ops = ;
static void icside_dma_host_set(ide_drive_t *drive, int on)
static int icside_dma_end(ide_drive_t *drive)
static void icside_dma_start(ide_drive_t *drive)
static int icside_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static int icside_dma_test_irq(ide_drive_t *drive)
static int icside_dma_init(ide_hwif_t *hwif, const struct ide_port_info *d)
static const struct ide_dma_ops icside_v6_dma_ops = ;
#define icside_v6_dma_ops NULL
static int icside_dma_off_init(ide_hwif_t *hwif, const struct ide_port_info *d)
static void icside_setup_ports(struct ide_hw *hw, void __iomem *base,
struct cardinfo *info, struct expansion_card *ec)
static const struct ide_port_info icside_v5_port_info = ;
static int __devinit
icside_register_v5(struct icside_state *state, struct expansion_card *ec)
static const struct ide_port_info icside_v6_port_info __initdata = ;
static int __devinit
icside_register_v6(struct icside_state *state, struct expansion_card *ec)
static int __devinit
icside_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit icside_remove(struct expansion_card *ec)
static void icside_shutdown(struct expansion_card *ec)
static const struct ecard_id icside_ids[] = ;
static struct ecard_driver icside_driver = ;
static int __init icside_init(void)
static void __exit icside_exit(void)
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ICS IDE driver");
module_init(icside_init);
module_exit(icside_exit);
