#define MODULE_NAME "vx855_gpio"
#define NR_VX855_GPI	14
#define NR_VX855_GPO	13
#define NR_VX855_GPIO	15
#define NR_VX855_GPInO	(NR_VX855_GPI + NR_VX855_GPO)
#define NR_VX855_GP	(NR_VX855_GPI + NR_VX855_GPO + NR_VX855_GPIO)
struct vx855_gpio ;
static inline u_int32_t gpi_i_bit(int i)
static inline u_int32_t gpo_o_bit(int i)
static inline u_int32_t gpio_i_bit(int i)
static inline u_int32_t gpio_o_bit(int i)
static int vx855gpio_direction_input(struct gpio_chip *gpio,
unsigned int nr)
static int vx855gpio_get(struct gpio_chip *gpio, unsigned int nr)
static void vx855gpio_set(struct gpio_chip *gpio, unsigned int nr,
int val)
static int vx855gpio_direction_output(struct gpio_chip *gpio,
unsigned int nr, int val)
static const char *vx855gpio_names[NR_VX855_GP] = ;
static void vx855gpio_gpio_setup(struct vx855_gpio *vg)
static __devinit int vx855gpio_probe(struct platform_device *pdev)
static int __devexit vx855gpio_remove(struct platform_device *pdev)
static struct platform_driver vx855gpio_driver = ;
static int vx855gpio_init(void)
module_init(vx855gpio_init);
static void vx855gpio_exit(void)
module_exit(vx855gpio_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <HaraldWelte@viatech.com>");
MODULE_DESCRIPTION("GPIO driver for the VIA VX855 chipset");
MODULE_ALIAS("platform:vx855_gpio");
