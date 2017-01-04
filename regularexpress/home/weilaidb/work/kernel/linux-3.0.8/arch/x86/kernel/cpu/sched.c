static DEFINE_PER_CPU(struct aperfmperf, old_perf_sched);
static unsigned long scale_aperfmperf(void)
unsigned long arch_scale_freq_power(struct sched_domain *sd, int cpu)
unsigned long arch_scale_smt_power(struct sched_domain *sd, int cpu)
