extern int no_broadcast;
char visws_board_type	= -1;
char visws_board_rev	= -1;
static void __init visws_time_init(void)
static void __init visws_pre_intr_init(void);
#define MB (1024 * 1024)
unsigned long sgivwfb_mem_phys;
unsigned long sgivwfb_mem_size;
EXPORT_SYMBOL(sgivwfb_mem_phys);
EXPORT_SYMBOL(sgivwfb_mem_size);
long long mem_size __initdata = 0;
static char * __init visws_memory_setup(void)
static void visws_machine_emergency_restart(void)
static void visws_machine_power_off(void)
static void __init visws_get_smp_config(unsigned int early)
static void __init MP_processor_info(struct mpc_cpu *m)
static void __init visws_find_smp_config(void)
static void visws_trap_init(void);
void __init visws_early_detect(void)
#define A01234 (LI_INTA_0 | LI_INTA_1 | LI_INTA_2 | LI_INTA_3 | LI_INTA_4)
#define BCD (LI_INTB | LI_INTC | LI_INTD)
#define ALLDEVS (A01234 | BCD)
static __init void lithium_init(void)
static __init void cobalt_init(void)
static void __init visws_trap_init(void)
static DEFINE_SPINLOCK(cobalt_lock);
static inline void co_apic_set(int entry, int irq)
static inline int co_apic_ide0_hack(void)
static int is_co_apic(unsigned int irq)
static void enable_cobalt_irq(struct irq_data *data)
static void disable_cobalt_irq(struct irq_data *data)
static void ack_cobalt_irq(struct irq_data *data)
static struct irq_chip cobalt_irq_type = ;
static unsigned int startup_piix4_master_irq(struct irq_data *data)
static struct irq_chip piix4_master_irq_type = ;
static void pii4_mask(struct irq_data *data)
static struct irq_chip piix4_virtual_irq_type = ;
static irqreturn_t piix4_master_intr(int irq, void *dev_id)
static struct irqaction master_action = ;
static struct irqaction cascade_action = ;
static inline void set_piix4_virtual_irq_type(void)
static void __init visws_pre_intr_init(void)
