#if defined(CONFIG_FB_FSL_DIU) || defined(CONFIG_FB_FSL_DIU_MODULE)
#define CLKDVDR_PXCKEN		0x80000000
#define CLKDVDR_PXCKINV		0x10000000
#define CLKDVDR_PXCKDLY		0x06000000
#define CLKDVDR_PXCLK_MASK	0x00FF0000
#define PX_BRDCFG1_DVIEN	0x80
#define PX_BRDCFG1_DFPEN	0x40
#define PX_BRDCFG1_BACKLIGHT	0x20
#define PX_BRDCFG1_DDCEN	0x10
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
static unsigned int p1022ds_get_pixel_format(unsigned int bits_per_pixel,
int monitor_port)
static void p1022ds_set_gamma_table(int monitor_port, char *gamma_table_base)
static void p1022ds_set_monitor_port(int monitor_port)
void p1022ds_set_pixel_clock(unsigned int pixclock)
ssize_t p1022ds_show_monitor_port(int monitor_port, char *buf)
int p1022ds_set_sysfs_monitor_port(int val)
void __init p1022_ds_pic_init(void)
void __init mpc85xx_smp_init(void);
static void __init p1022_ds_setup_arch(void)
static struct of_device_id __initdata p1022_ds_ids[] = ;
static int __init p1022_ds_publish_devices(void)
machine_device_initcall(p1022_ds, p1022_ds_publish_devices);
machine_arch_initcall(p1022_ds, swiotlb_setup_bus_notifier);
static int __init p1022_ds_probe(void)
define_machine(p1022_ds) ;
