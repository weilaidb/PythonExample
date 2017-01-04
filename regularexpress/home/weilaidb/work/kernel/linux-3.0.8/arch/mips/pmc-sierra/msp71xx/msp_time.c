#define get_current_vpe()   \
((read_c0_tcbind() >> TCBIND_CURVPE_SHIFT) & TCBIND_CURVPE)
static struct irqaction timer_vpe1;
static int tim_installed;
void __init plat_time_init(void)
unsigned int __cpuinit get_c0_compare_int(void)
