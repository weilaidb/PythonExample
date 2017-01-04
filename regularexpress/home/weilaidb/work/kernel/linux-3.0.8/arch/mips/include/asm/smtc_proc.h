#define __ASM_SMTC_PROC_H
struct smtc_cpu_proc ;
extern struct smtc_cpu_proc smtc_cpu_stats[NR_CPUS];
extern atomic_t smtc_fpu_recoveries;
