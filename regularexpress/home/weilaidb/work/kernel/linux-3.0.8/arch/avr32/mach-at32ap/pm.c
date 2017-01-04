#define SRAM_PAGE_FLAGS	(SYSREG_BIT(TLBELO_D) | SYSREG_BF(SZ, 1)	\
| SYSREG_BF(AP, 3) | SYSREG_BIT(G))
static unsigned long	pm_sram_start;
static size_t		pm_sram_size;
static struct vm_struct	*pm_sram_area;
static void (*avr32_pm_enter_standby)(unsigned long sdramc_base);
static void (*avr32_pm_enter_str)(unsigned long sdramc_base);
static void *avr32_pm_map_sram(void)
static void avr32_pm_unmap_sram(void)
static int avr32_pm_valid_state(suspend_state_t state)
static int avr32_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops avr32_pm_ops = ;
static unsigned long avr32_pm_offset(void *symbol)
static int __init avr32_pm_init(void)
arch_initcall(avr32_pm_init);
