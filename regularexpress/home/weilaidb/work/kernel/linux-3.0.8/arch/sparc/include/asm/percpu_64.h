#define __ARCH_SPARC64_PERCPU__
register unsigned long __local_per_cpu_offset asm("g5");
#define __per_cpu_offset(__cpu) \
(trap_block[(__cpu)].__per_cpu_base)
#define per_cpu_offset(x) (__per_cpu_offset(x))
#define __my_cpu_offset __local_per_cpu_offset
