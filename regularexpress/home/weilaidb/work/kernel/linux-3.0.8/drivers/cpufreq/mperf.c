static DEFINE_PER_CPU(struct aperfmperf, acfreq_old_perf);
static void read_measured_perf_ctrs(void *_cur)
unsigned int cpufreq_get_measured_perf(struct cpufreq_policy *policy,
unsigned int cpu)
EXPORT_SYMBOL_GPL(cpufreq_get_measured_perf);
MODULE_LICENSE("GPL");
