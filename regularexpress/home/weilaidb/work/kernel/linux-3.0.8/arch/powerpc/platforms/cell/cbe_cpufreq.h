int cbe_cpufreq_set_pmode(int cpu, unsigned int pmode);
int cbe_cpufreq_get_pmode(int cpu);
int cbe_cpufreq_set_pmode_pmi(int cpu, unsigned int pmode);
#if defined(CONFIG_CBE_CPUFREQ_PMI) || defined(CONFIG_CBE_CPUFREQ_PMI_MODULE)
extern bool cbe_cpufreq_has_pmi;
#define cbe_cpufreq_has_pmi (0)
