unsigned int verbose;
unsigned int read_only;
char *progname;
unsigned long long new_bias;
int cpu = -1;
void usage(void)
#define MSR_IA32_ENERGY_PERF_BIAS	0x000001b0
#define	BIAS_PERFORMANCE		0
#define BIAS_BALANCE			6
#define	BIAS_POWERSAVE			15
void cmdline(int argc, char **argv)
void validate_cpuid(void)
unsigned long long get_msr(int cpu, int offset)
unsigned long long  put_msr(int cpu, unsigned long long new_msr, int offset)
void print_msr(int cpu)
void update_msr(int cpu)
char *proc_stat = "/proc/stat";
void for_every_cpu(void (func)(int))
int main(int argc, char **argv)
