#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static unsigned long maple_find_nvram_base(void)
static void maple_restart(char *cmd)
static void maple_power_off(void)
static void maple_halt(void)
struct smp_ops_t maple_smp_ops = ;
static void __init maple_use_rtas_reboot_and_halt_if_present(void)
void __init maple_setup_arch(void)
static void __init maple_init_early(void)
static void __init maple_init_IRQ(void)
static void __init maple_progress(char *s, unsigned short hex)
static int __init maple_probe(void)
define_machine(maple) ;
#define MAPLE_CPC925_MODEL	"Motorola,ATCA-6101"
static int __init maple_cpc925_edac_setup(void)
machine_device_initcall(maple, maple_cpc925_edac_setup);
