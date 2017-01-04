#define _ASM_IA64_SN_PDA_H
typedef struct pda_s  pda_t;
#define CACHE_ALIGN(x)	(((x) + SMP_CACHE_BYTES-1) & ~(SMP_CACHE_BYTES-1))
DECLARE_PER_CPU(struct pda_s, pda_percpu);
#define pda		(&__ia64_per_cpu_var(pda_percpu))
#define pdacpu(cpu)	(&per_cpu(pda_percpu, cpu))
