#define DRV_NAME "ali14xx"
#define ALI_NUM_PORTS 4
static const int ports[ALI_NUM_PORTS] __initdata =
;
typedef struct  RegInitializer;
static const RegInitializer initData[] __initdata = ;
static struct  regTab[4] = ;
static int basePort;
static int regPort;
static int dataPort;
static u8 regOn;
static u8 regOff;
static inline u8 inReg(u8 reg)
static void outReg(u8 data, u8 reg)
static DEFINE_SPINLOCK(ali14xx_lock);
static void ali14xx_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int __init findPort(void)
static int __init initRegisters(void)
static const struct ide_port_ops ali14xx_port_ops = ;
static const struct ide_port_info ali14xx_port_info = ;
static int __init ali14xx_probe(void)
static int probe_ali14xx;
module_param_named(probe, probe_ali14xx, bool, 0);
MODULE_PARM_DESC(probe, "probe for ALI M14xx chipsets");
static int __init ali14xx_init(void)
module_init(ali14xx_init);
MODULE_AUTHOR("see local file");
MODULE_DESCRIPTION("support of ALI 14XX IDE chipsets");
MODULE_LICENSE("GPL");
