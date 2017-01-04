extern void __early_start(void);
#define BOOT_ENTRY_ADDR_UPPER	0
#define BOOT_ENTRY_ADDR_LOWER	1
#define BOOT_ENTRY_R3_UPPER	2
#define BOOT_ENTRY_R3_LOWER	3
#define BOOT_ENTRY_RESV		4
#define BOOT_ENTRY_PIR		5
#define BOOT_ENTRY_R6_UPPER	6
#define BOOT_ENTRY_R6_LOWER	7
#define NUM_BOOT_ENTRY		8
#define SIZE_BOOT_ENTRY		(NUM_BOOT_ENTRY * sizeof(u32))
static int __init
smp_85xx_kick_cpu(int nr)
static void __init
smp_85xx_setup_cpu(int cpu_nr)
struct smp_ops_t smp_85xx_ops = ;
atomic_t kexec_down_cpus = ATOMIC_INIT(0);
void mpc85xx_smp_kexec_cpu_down(int crash_shutdown, int secondary)
static void mpc85xx_smp_kexec_down(void *arg)
static void map_and_flush(unsigned long paddr)
static void mpc85xx_smp_flush_dcache_kexec(struct kimage *image)
static void mpc85xx_smp_machine_kexec(struct kimage *image)
void __init mpc85xx_smp_init(void)
