static void default_threshold_interrupt(void)
void (*mce_threshold_vector)(void) = default_threshold_interrupt;
asmlinkage void smp_threshold_interrupt(void)
