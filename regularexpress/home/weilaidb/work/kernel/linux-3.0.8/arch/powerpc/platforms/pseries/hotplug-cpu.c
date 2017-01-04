static struct rtas_args rtas_stop_self_args = ;
static DEFINE_PER_CPU(enum cpu_state_vals, preferred_offline_state) =
CPU_STATE_OFFLINE;
static DEFINE_PER_CPU(enum cpu_state_vals, current_state) = CPU_STATE_OFFLINE;
static enum cpu_state_vals default_offline_state = CPU_STATE_OFFLINE;
static int cede_offline_enabled __read_mostly = 1;
static int __init setup_cede_offline(char *str)
__setup("cede_offline=", setup_cede_offline);
enum cpu_state_vals get_cpu_current_state(int cpu)
void set_cpu_current_state(int cpu, enum cpu_state_vals state)
enum cpu_state_vals get_preferred_offline_state(int cpu)
void set_preferred_offline_state(int cpu, enum cpu_state_vals state)
void set_default_offline_state(int cpu)
static void rtas_stop_self(void)
static void pseries_mach_cpu_die(void)
static int pseries_cpu_disable(void)
static void pseries_cpu_die(unsigned int cpu)
static int pseries_add_processor(struct device_node *np)
static void pseries_remove_processor(struct device_node *np)
static int pseries_smp_notifier(struct notifier_block *nb,
unsigned long action, void *node)
static struct notifier_block pseries_smp_nb = ;
#define MAX_CEDE_LATENCY_LEVELS		4
#define	CEDE_LATENCY_PARAM_LENGTH	10
#define CEDE_LATENCY_PARAM_MAX_LENGTH	\
(MAX_CEDE_LATENCY_LEVELS * CEDE_LATENCY_PARAM_LENGTH * sizeof(char))
#define CEDE_LATENCY_TOKEN		45
static char cede_parameters[CEDE_LATENCY_PARAM_MAX_LENGTH];
static int parse_cede_parameters(void)
static int __init pseries_cpu_hotplug_init(void)
arch_initcall(pseries_cpu_hotplug_init);
