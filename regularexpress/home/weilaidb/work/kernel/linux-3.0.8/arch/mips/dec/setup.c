extern void dec_machine_restart(char *command);
extern void dec_machine_halt(void);
extern void dec_machine_power_off(void);
extern irqreturn_t dec_intr_halt(int irq, void *dev_id);
unsigned long dec_kn_slot_base, dec_kn_slot_size;
EXPORT_SYMBOL(dec_kn_slot_base);
EXPORT_SYMBOL(dec_kn_slot_size);
int dec_tc_bus;
DEFINE_SPINLOCK(ioasic_ssr_lock);
volatile u32 *ioasic_base;
EXPORT_SYMBOL(ioasic_base);
int dec_interrupt[DEC_NR_INTS] = ;
EXPORT_SYMBOL(dec_interrupt);
int_ptr cpu_mask_nr_tbl[DEC_MAX_CPU_INTS][2] = ;
int_ptr asic_mask_nr_tbl[DEC_MAX_ASIC_INTS][2] = ;
int cpu_fpu_mask = DEC_CPU_IRQ_MASK(DEC_CPU_INR_FPU);
static struct irqaction ioirq = ;
static struct irqaction fpuirq = ;
static struct irqaction busirq = ;
static struct irqaction haltirq = ;
static void __init dec_be_init(void)
void __init plat_mem_setup(void)
static int kn01_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn01_cpu_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn01(void)
static int kn230_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn230_cpu_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn230(void)
static int kn02_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn02_cpu_mask_nr_tbl[][2] __initdata = ;
static int_ptr kn02_asic_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn02(void)
static int kn02ba_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn02ba_cpu_mask_nr_tbl[][2] __initdata = ;
static int_ptr kn02ba_asic_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn02ba(void)
static int kn02ca_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn02ca_cpu_mask_nr_tbl[][2] __initdata = ;
static int_ptr kn02ca_asic_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn02ca(void)
static int kn03_interrupt[DEC_NR_INTS] __initdata = ;
static int_ptr kn03_cpu_mask_nr_tbl[][2] __initdata = ;
static int_ptr kn03_asic_mask_nr_tbl[][2] __initdata = ;
static void __init dec_init_kn03(void)
void __init arch_init_irq(void)
asmlinkage unsigned int dec_irq_dispatch(unsigned int irq)
