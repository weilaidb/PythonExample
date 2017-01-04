#define DRV_MODULE_NAME "wii"
#define pr_fmt(fmt) DRV_MODULE_NAME ": " fmt
#define HW_CTRL_COMPATIBLE	"nintendo,hollywood-control"
#define HW_CTRL_RESETS		0x94
#define HW_CTRL_RESETS_SYS	(1<<0)
#define HW_GPIO_COMPATIBLE	"nintendo,hollywood-gpio"
#define HW_GPIO_BASE(idx)	(idx * 0x20)
#define HW_GPIO_OUT(idx)	(HW_GPIO_BASE(idx) + 0)
#define HW_GPIO_DIR(idx)	(HW_GPIO_BASE(idx) + 4)
#define HW_GPIO_SHUTDOWN	(1<<1)
#define HW_GPIO_SLOT_LED	(1<<5)
#define HW_GPIO_SENSOR_BAR	(1<<8)
static void __iomem *hw_ctrl;
static void __iomem *hw_gpio;
unsigned long wii_hole_start;
unsigned long wii_hole_size;
static int __init page_aligned(unsigned long x)
void __init wii_memory_fixups(void)
unsigned long __init wii_mmu_mapin_mem2(unsigned long top)
static void wii_spin(void)
static void __iomem *wii_ioremap_hw_regs(char *name, char *compatible)
static void __init wii_setup_arch(void)
static void wii_restart(char *cmd)
static void wii_power_off(void)
static void wii_halt(void)
static void __init wii_init_early(void)
static void __init wii_pic_probe(void)
static int __init wii_probe(void)
static void wii_shutdown(void)
define_machine(wii) ;
static struct of_device_id wii_of_bus[] = ;
static int __init wii_device_probe(void)
device_initcall(wii_device_probe);
