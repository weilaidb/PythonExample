#define BUDDHA_NUM_HWIFS	2
#define CATWEASEL_NUM_HWIFS	3
#define XSURF_NUM_HWIFS         2
#define MAX_NUM_HWIFS		3
#define BUDDHA_BASE1	0x800
#define BUDDHA_BASE2	0xa00
#define BUDDHA_BASE3	0xc00
#define XSURF_BASE1     0xb000
#define XSURF_BASE2     0xd000
static u_int buddha_bases[CATWEASEL_NUM_HWIFS] __initdata = ;
static u_int xsurf_bases[XSURF_NUM_HWIFS] __initdata = ;
#define BUDDHA_CONTROL	0x11a
#define BUDDHA_IRQ1	0xf00
#define BUDDHA_IRQ2	0xf40
#define BUDDHA_IRQ3	0xf80
#define XSURF_IRQ1      0x7e
#define XSURF_IRQ2      0x7e
static int buddha_irqports[CATWEASEL_NUM_HWIFS] __initdata = ;
static int xsurf_irqports[XSURF_NUM_HWIFS] __initdata = ;
#define BUDDHA_IRQ_MR	0xfc0
typedef enum BuddhaType_Enum  BuddhaType;
static const char *buddha_board_name[] = ;
static int buddha_test_irq(ide_hwif_t *hwif)
static void xsurf_clear_irq(ide_drive_t *drive)
static void __init buddha_setup_ports(struct ide_hw *hw, unsigned long base,
unsigned long ctl, unsigned long irq_port)
static const struct ide_port_ops buddha_port_ops = ;
static const struct ide_port_ops xsurf_port_ops = ;
static const struct ide_port_info buddha_port_info = ;
static int __init buddha_init(void)
module_init(buddha_init);
MODULE_LICENSE("GPL");
