#if defined(DEBUG)
#define DBG udbg_printf
#define DBG pr_debug
#define MSG_COUNT 4
static DEFINE_PER_CPU(unsigned int [MSG_COUNT], ps3_ipi_virqs);
static void ps3_smp_message_pass(int cpu, int msg)
static int ps3_smp_probe(void)
static void __init ps3_smp_setup_cpu(int cpu)
void ps3_smp_cleanup_cpu(int cpu)
static struct smp_ops_t ps3_smp_ops = ;
void smp_init_ps3(void)
