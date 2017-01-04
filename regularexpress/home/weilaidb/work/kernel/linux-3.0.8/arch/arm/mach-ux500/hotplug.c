extern volatile int pen_release;
static inline void platform_do_lowpower(unsigned int cpu)
int platform_cpu_kill(unsigned int cpu)
void platform_cpu_die(unsigned int cpu)
int platform_cpu_disable(unsigned int cpu)
