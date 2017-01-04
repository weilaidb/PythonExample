static void __init
ruffian_init_irq(void)
#define RUFFIAN_LATCH	DIV_ROUND_CLOSEST(PIT_TICK_RATE, HZ)
static void __init
ruffian_init_rtc(void)
static void
ruffian_kill_arch (int mode)
static int __init
ruffian_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static u8 __init
ruffian_swizzle(struct pci_dev *dev, u8 *pinp)
static unsigned long __init
ruffian_get_bank_size(unsigned long offset)
struct alpha_machine_vector ruffian_mv __initmv = ;
ALIAS_MV(ruffian)
