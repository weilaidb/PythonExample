extern void __secondary_start_mpc86xx(void);
#define MCM_PORT_CONFIG_OFFSET	0x10
#define MPC86xx_MCM_OFFSET      (0x1000)
#define MPC86xx_MCM_SIZE        (0x1000)
static void __init
smp_86xx_release_core(int nr)
static int __init
smp_86xx_kick_cpu(int nr)
static void __init
smp_86xx_setup_cpu(int cpu_nr)
struct smp_ops_t smp_86xx_ops = ;
void __init
mpc86xx_smp_init(void)
