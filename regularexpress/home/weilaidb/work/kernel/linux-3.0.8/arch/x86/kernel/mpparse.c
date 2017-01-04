static int __init mpf_checksum(unsigned char *mp, int len)
int __init default_mpc_apic_id(struct mpc_cpu *m)
static void __init MP_processor_info(struct mpc_cpu *m)
void __init default_mpc_oem_bus_info(struct mpc_bus *m, char *str)
static void __init MP_bus_info(struct mpc_bus *m)
static void __init MP_ioapic_info(struct mpc_ioapic *m)
static void __init print_mp_irq_info(struct mpc_intsrc *mp_irq)
static inline void __init MP_bus_info(struct mpc_bus *m)
static inline void __init MP_ioapic_info(struct mpc_ioapic *m)
static void __init MP_lintsrc_info(struct mpc_lintsrc *m)
static int __init smp_check_mpc(struct mpc_table *mpc, char *oem, char *str)
static void skip_entry(unsigned char **ptr, int *count, int size)
static void __init smp_dump_mptable(struct mpc_table *mpc, unsigned char *mpt)
void __init default_smp_read_mpc_oem(struct mpc_table *mpc)
static int __init smp_read_mpc(struct mpc_table *mpc, unsigned early)
static int __init ELCR_trigger(unsigned int irq)
static void __init construct_default_ioirq_mptable(int mpc_default_type)
static void __init construct_ioapic_table(int mpc_default_type)
static inline void __init construct_ioapic_table(int mpc_default_type)
static inline void __init construct_default_ISA_mptable(int mpc_default_type)
static struct mpf_intel *mpf_found;
static unsigned long __init get_mpc_size(unsigned long physptr)
static int __init check_physptr(struct mpf_intel *mpf, unsigned int early)
void __init default_get_smp_config(unsigned int early)
static void __init smp_reserve_memory(struct mpf_intel *mpf)
static int __init smp_scan_config(unsigned long base, unsigned long length)
void __init default_find_smp_config(void)
static u8 __initdata irq_used[MAX_IRQ_SOURCES];
static int  __init get_MP_intsrc_index(struct mpc_intsrc *m)
#define SPARE_SLOT_NUM 20
static struct mpc_intsrc __initdata *m_spare[SPARE_SLOT_NUM];
static void __init check_irq_src(struct mpc_intsrc *m, int *nr_m_spare)
static int __init
check_slot(unsigned long mpc_new_phys, unsigned long mpc_new_length, int count)
static
inline void __init check_irq_src(struct mpc_intsrc *m, int *nr_m_spare)
static int  __init replace_intsrc_all(struct mpc_table *mpc,
unsigned long mpc_new_phys,
unsigned long mpc_new_length)
int enable_update_mptable;
static int __init update_mptable_setup(char *str)
early_param("update_mptable", update_mptable_setup);
static unsigned long __initdata mpc_new_phys;
static unsigned long mpc_new_length __initdata = 4096;
static int __initdata alloc_mptable;
static int __init parse_alloc_mptable_opt(char *p)
early_param("alloc_mptable", parse_alloc_mptable_opt);
void __init early_reserve_e820_mpc_new(void)
static int __init update_mp_table(void)
late_initcall(update_mp_table);
