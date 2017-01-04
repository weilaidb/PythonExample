notrace long
__vdso_getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *unused)
long getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *tcache)
__attribute__((weak, alias("__vdso_getcpu")));
