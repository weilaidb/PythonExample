#define CRVML_DEVICE_MCH   0x5001
#define CRVML_REG_MCHBAR   0x44
#define CRVML_REG_MCHEN    0x54
#define CRVML_MCHEN_BIT    (1 << 28)
#define CRVML_MCHMAP_SIZE  4096
#define CRVML_REG_CLOCK    0xc3c
#define CRVML_CLOCK_SHIFT  8
#define CRVML_CLOCK_MASK   0x00000f00
static struct pci_dev *mch_dev;
static u32 mch_bar;
static void __iomem *mch_regs_base;
static u32 saved_clock;
static const unsigned crvml_clocks[] = ;
static const u32 crvml_clock_bits[] = ;
static const unsigned crvml_num_clocks = ARRAY_SIZE(crvml_clocks);
static int crvml_sys_restore(struct vml_sys *sys)
static int crvml_sys_save(struct vml_sys *sys)
static int crvml_nearest_index(const struct vml_sys *sys, int clock)
static int crvml_nearest_clock(const struct vml_sys *sys, int clock)
static int crvml_set_clock(struct vml_sys *sys, int clock)
static struct vml_sys cr_pll_ops = ;
static int __init cr_pll_init(void)
static void __exit cr_pll_exit(void)
module_init(cr_pll_init);
module_exit(cr_pll_exit);
MODULE_AUTHOR("Tungsten Graphics Inc.");
MODULE_DESCRIPTION("Carillo Ranch PLL Driver");
MODULE_LICENSE("GPL");
