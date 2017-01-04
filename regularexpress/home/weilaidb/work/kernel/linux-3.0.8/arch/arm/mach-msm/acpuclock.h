#define __ARCH_ARM_MACH_MSM_ACPUCLOCK_H
int acpuclk_set_rate(unsigned long rate, int for_power_collapse);
unsigned long acpuclk_get_rate(void);
uint32_t acpuclk_get_switch_time(void);
unsigned long acpuclk_wait_for_irq(void);
unsigned long acpuclk_power_collapse(void);
unsigned long acpuclk_get_wfi_rate(void);
