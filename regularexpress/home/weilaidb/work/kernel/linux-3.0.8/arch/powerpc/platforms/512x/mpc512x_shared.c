static struct mpc512x_reset_module __iomem *reset_module_base;
static void __init mpc512x_restart_init(void)
void mpc512x_restart(char *cmd)
struct fsl_diu_shared_fb ;
unsigned int mpc512x_get_pixel_format(unsigned int bits_per_pixel,
int monitor_port)
void mpc512x_set_gamma_table(int monitor_port, char *gamma_table_base)
void mpc512x_set_monitor_port(int monitor_port)
#define DIU_DIV_MASK	0x000000ff
void mpc512x_set_pixel_clock(unsigned int pixclock)
ssize_t mpc512x_show_monitor_port(int monitor_port, char *buf)
int mpc512x_set_sysfs_monitor_port(int val)
static struct fsl_diu_shared_fb __attribute__ ((__aligned__(8))) diu_shared_fb;
#if defined(CONFIG_FB_FSL_DIU) || \
defined(CONFIG_FB_FSL_DIU_MODULE)
static inline void mpc512x_free_bootmem(struct page *page)
void mpc512x_release_bootmem(void)
void __init mpc512x_init_diu(void)
void __init mpc512x_setup_diu(void)
void __init mpc512x_init_IRQ(void)
static struct of_device_id __initdata of_bus_ids[] = ;
void __init mpc512x_declare_of_platform_devices(void)
#define DEFAULT_FIFO_SIZE 16
static unsigned int __init get_fifo_size(struct device_node *np,
char *prop_name)
#define FIFOC(_base) ((struct mpc512x_psc_fifo __iomem *) \
((u32)(_base) + sizeof(struct mpc52xx_psc)))
void __init mpc512x_psc_fifo_init(void)
void __init mpc512x_init(void)
