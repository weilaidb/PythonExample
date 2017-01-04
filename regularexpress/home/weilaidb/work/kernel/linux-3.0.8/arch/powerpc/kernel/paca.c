extern unsigned long __toc_start;
struct lppaca lppaca[] = ;
static struct lppaca *extra_lppacas;
static long __initdata lppaca_size;
static void allocate_lppacas(int nr_cpus, unsigned long limit)
static struct lppaca *new_lppaca(int cpu)
static void free_lppacas(void)
static inline void allocate_lppacas(int nr_cpus, unsigned long limit)
static inline void free_lppacas(void)
struct slb_shadow slb_shadow[] __cacheline_aligned = ;
struct paca_struct *paca;
EXPORT_SYMBOL(paca);
struct paca_struct boot_paca;
void __init initialise_paca(struct paca_struct *new_paca, int cpu)
void setup_paca(struct paca_struct *new_paca)
static int __initdata paca_size;
void __init allocate_pacas(void)
void __init free_unused_pacas(void)
