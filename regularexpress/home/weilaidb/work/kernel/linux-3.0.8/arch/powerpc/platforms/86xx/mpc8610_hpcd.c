static struct device_node *pixis_node;
static unsigned char *pixis_bdcfg0, *pixis_arch;
static irqreturn_t mpc8610_sw9_irq(int irq, void *data)
static void __init mpc8610_suspend_init(void)
static inline void mpc8610_suspend_init(void)
static struct of_device_id __initdata mpc8610_ids[] = ;
static int __init mpc8610_declare_of_platform_devices(void)
machine_device_initcall(mpc86xx_hpcd, mpc8610_declare_of_platform_devices);
#if defined(CONFIG_FB_FSL_DIU) || defined(CONFIG_FB_FSL_DIU_MODULE)
#define AD_BYTE_F		0x10000000
#define AD_ALPHA_C_MASK		0x0E000000
#define AD_ALPHA_C_SHIFT	25
#define AD_BLUE_C_MASK		0x01800000
#define AD_BLUE_C_SHIFT		23
#define AD_GREEN_C_MASK		0x00600000
#define AD_GREEN_C_SHIFT	21
#define AD_RED_C_MASK		0x00180000
#define AD_RED_C_SHIFT		19
#define AD_PALETTE		0x00040000
#define AD_PIXEL_S_MASK		0x00030000
#define AD_PIXEL_S_SHIFT	16
#define AD_COMP_3_MASK		0x0000F000
#define AD_COMP_3_SHIFT		12
#define AD_COMP_2_MASK		0x00000F00
#define AD_COMP_2_SHIFT		8
#define AD_COMP_1_MASK		0x000000F0
#define AD_COMP_1_SHIFT		4
#define AD_COMP_0_MASK		0x0000000F
#define AD_COMP_0_SHIFT		0
#define MAKE_AD(alpha, red, blue, green, size, c0, c1, c2, c3) \
cpu_to_le32(AD_BYTE_F | (alpha << AD_ALPHA_C_SHIFT) | \
(blue << AD_BLUE_C_SHIFT) | (green << AD_GREEN_C_SHIFT) | \
(red << AD_RED_C_SHIFT) | (c3 << AD_COMP_3_SHIFT) | \
(c2 << AD_COMP_2_SHIFT) | (c1 << AD_COMP_1_SHIFT) | \
(c0 << AD_COMP_0_SHIFT) | (size << AD_PIXEL_S_SHIFT))
unsigned int mpc8610hpcd_get_pixel_format(unsigned int bits_per_pixel,
int monitor_port)
void mpc8610hpcd_set_gamma_table(int monitor_port, char *gamma_table_base)
#define PX_BRDCFG0_DVISEL	(1 << 3)
#define PX_BRDCFG0_DLINK	(1 << 4)
#define PX_BRDCFG0_DIU_MASK	(PX_BRDCFG0_DVISEL | PX_BRDCFG0_DLINK)
void mpc8610hpcd_set_monitor_port(int monitor_port)
void mpc8610hpcd_set_pixel_clock(unsigned int pixclock)
ssize_t mpc8610hpcd_show_monitor_port(int monitor_port, char *buf)
int mpc8610hpcd_set_sysfs_monitor_port(int val)
static void __init mpc86xx_hpcd_setup_arch(void)
static int __init mpc86xx_hpcd_probe(void)
static long __init mpc86xx_time_init(void)
define_machine(mpc86xx_hpcd) ;
