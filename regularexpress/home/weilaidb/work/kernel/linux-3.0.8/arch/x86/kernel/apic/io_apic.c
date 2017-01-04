#define __apicdebuginit(type) static type __init
#define for_each_irq_pin(entry, head) \
for (entry = head; entry; entry = entry->next)
int sis_apic_bug = -1;
static DEFINE_RAW_SPINLOCK(ioapic_lock);
static DEFINE_RAW_SPINLOCK(vector_lock);
static struct ioapic  ioapics[MAX_IO_APICS];
#define mpc_ioapic_ver(id)		ioapics[id].mp_config.apicver
int mpc_ioapic_id(int id)
unsigned int mpc_ioapic_addr(int id)
struct mp_ioapic_gsi *mp_ioapic_gsi_routing(int id)
int nr_ioapics;
u32 gsi_top;
struct mpc_intsrc mp_irqs[MAX_IRQ_SOURCES];
int mp_irq_entries;
static int nr_irqs_gsi = NR_IRQS_LEGACY;
#if defined (CONFIG_MCA) || defined (CONFIG_EISA)
int mp_bus_id_to_type[MAX_MP_BUSSES];
DECLARE_BITMAP(mp_bus_not_pci, MAX_MP_BUSSES);
int skip_ioapic_setup;
void disable_ioapic_support(void)
static int __init parse_noapic(char *str)
early_param("noapic", parse_noapic);
static int io_apic_setup_irq_pin(unsigned int irq, int node,
struct io_apic_irq_attr *attr);
void mp_save_irq(struct mpc_intsrc *m)
struct irq_pin_list ;
static struct irq_pin_list *alloc_irq_pin_list(int node)
static struct irq_cfg irq_cfgx[NR_IRQS_LEGACY];
static struct irq_cfg irq_cfgx[NR_IRQS];
int __init arch_early_irq_init(void)
static struct irq_cfg *irq_cfg(unsigned int irq)
static struct irq_cfg *alloc_irq_cfg(unsigned int irq, int node)
static void free_irq_cfg(unsigned int at, struct irq_cfg *cfg)
struct irq_cfg *irq_cfg(unsigned int irq)
static struct irq_cfg *alloc_irq_cfg(unsigned int irq, int node)
static inline void free_irq_cfg(unsigned int at, struct irq_cfg *cfg)
static struct irq_cfg *alloc_irq_and_cfg_at(unsigned int at, int node)
static int alloc_irq_from(unsigned int from, int node)
static void free_irq_at(unsigned int at, struct irq_cfg *cfg)
struct io_apic ;
static __attribute_const__ struct io_apic __iomem *io_apic_base(int idx)
static inline void io_apic_eoi(unsigned int apic, unsigned int vector)
static inline unsigned int io_apic_read(unsigned int apic, unsigned int reg)
static inline void io_apic_write(unsigned int apic, unsigned int reg, unsigned int value)
static inline void io_apic_modify(unsigned int apic, unsigned int reg, unsigned int value)
static bool io_apic_level_ack_pending(struct irq_cfg *cfg)
union entry_union ;
static struct IO_APIC_route_entry ioapic_read_entry(int apic, int pin)
static void
__ioapic_write_entry(int apic, int pin, struct IO_APIC_route_entry e)
static void ioapic_write_entry(int apic, int pin, struct IO_APIC_route_entry e)
static void ioapic_mask_entry(int apic, int pin)
static int
__add_pin_to_irq_node(struct irq_cfg *cfg, int node, int apic, int pin)
static void add_pin_to_irq_node(struct irq_cfg *cfg, int node, int apic, int pin)
static void __init replace_pin_at_irq_node(struct irq_cfg *cfg, int node,
int oldapic, int oldpin,
int newapic, int newpin)
static void __io_apic_modify_irq(struct irq_pin_list *entry,
int mask_and, int mask_or,
void (*final)(struct irq_pin_list *entry))
static void io_apic_modify_irq(struct irq_cfg *cfg,
int mask_and, int mask_or,
void (*final)(struct irq_pin_list *entry))
static void __mask_and_edge_IO_APIC_irq(struct irq_pin_list *entry)
static void __unmask_and_level_IO_APIC_irq(struct irq_pin_list *entry)
static void io_apic_sync(struct irq_pin_list *entry)
static void mask_ioapic(struct irq_cfg *cfg)
static void mask_ioapic_irq(struct irq_data *data)
static void __unmask_ioapic(struct irq_cfg *cfg)
static void unmask_ioapic(struct irq_cfg *cfg)
static void unmask_ioapic_irq(struct irq_data *data)
static void clear_IO_APIC_pin(unsigned int apic, unsigned int pin)
static void clear_IO_APIC (void)
#define MAX_PIRQS 8
static int pirq_entries[MAX_PIRQS] = ;
static int __init ioapic_pirq_setup(char *str)
__setup("pirq=", ioapic_pirq_setup);
int save_ioapic_entries(void)
void mask_ioapic_entries(void)
int restore_ioapic_entries(void)
static int find_irq_entry(int apic, int pin, int type)
static int __init find_isa_irq_pin(int irq, int type)
static int __init find_isa_irq_apic(int irq, int type)
#if defined(CONFIG_EISA) || defined(CONFIG_MCA)
static int EISA_ELCR(unsigned int irq)
#define default_ISA_trigger(idx)	(0)
#define default_ISA_polarity(idx)	(0)
#define default_EISA_trigger(idx)	(EISA_ELCR(mp_irqs[idx].srcbusirq))
#define default_EISA_polarity(idx)	default_ISA_polarity(idx)
#define default_PCI_trigger(idx)	(1)
#define default_PCI_polarity(idx)	(1)
#define default_MCA_trigger(idx)	(1)
#define default_MCA_polarity(idx)	default_ISA_polarity(idx)
static int irq_polarity(int idx)
static int irq_trigger(int idx)
static int pin_2_irq(int idx, int apic, int pin)
int IO_APIC_get_PCI_irq_vector(int bus, int slot, int pin,
struct io_apic_irq_attr *irq_attr)
EXPORT_SYMBOL(IO_APIC_get_PCI_irq_vector);
void lock_vector_lock(void)
void unlock_vector_lock(void)
static int
__assign_irq_vector(int irq, struct irq_cfg *cfg, const struct cpumask *mask)
int assign_irq_vector(int irq, struct irq_cfg *cfg, const struct cpumask *mask)
static void __clear_irq_vector(int irq, struct irq_cfg *cfg)
void __setup_vector_irq(int cpu)
static struct irq_chip ioapic_chip;
static struct irq_chip ir_ioapic_chip;
static inline int IO_APIC_irq_trigger(int irq)
static inline int IO_APIC_irq_trigger(int irq)
static void ioapic_register_intr(unsigned int irq, struct irq_cfg *cfg,
unsigned long trigger)
static int setup_ioapic_entry(int apic_id, int irq,
struct IO_APIC_route_entry *entry,
unsigned int destination, int trigger,
int polarity, int vector, int pin)
static void setup_ioapic_irq(int apic_id, int pin, unsigned int irq,
struct irq_cfg *cfg, int trigger, int polarity)
static bool __init io_apic_pin_not_connected(int idx, int apic_id, int pin)
static void __init __io_apic_setup_irqs(unsigned int apic_id)
static void __init setup_IO_APIC_irqs(void)
void setup_IO_APIC_irq_extra(u32 gsi)
static void __init setup_timer_IRQ0_pin(unsigned int apic_id, unsigned int pin,
int vector)
__apicdebuginit(void) print_IO_APIC(void)
__apicdebuginit(void) print_APIC_field(int base)
__apicdebuginit(void) print_local_APIC(void *dummy)
__apicdebuginit(void) print_local_APICs(int maxcpu)
__apicdebuginit(void) print_PIC(void)
static int __initdata show_lapic = 1;
static __init int setup_show_lapic(char *arg)
__setup("show_lapic=", setup_show_lapic);
__apicdebuginit(int) print_ICs(void)
fs_initcall(print_ICs);
static struct  ioapic_i8259 = ;
void __init enable_IO_APIC(void)
void disable_IO_APIC(void)
void __init setup_ioapic_ids_from_mpc_nocheck(void)
void __init setup_ioapic_ids_from_mpc(void)
int no_timer_check __initdata;
static int __init notimercheck(char *s)
__setup("no_timer_check", notimercheck);
static int __init timer_irq_works(void)
static unsigned int startup_ioapic_irq(struct irq_data *data)
static int ioapic_retrigger_irq(struct irq_data *data)
void send_cleanup_vector(struct irq_cfg *cfg)
static void __target_IO_APIC_irq(unsigned int irq, unsigned int dest, struct irq_cfg *cfg)
int __ioapic_set_affinity(struct irq_data *data, const struct cpumask *mask,
unsigned int *dest_id)
static int
ioapic_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
static int
ir_ioapic_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
static inline int
ir_ioapic_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
asmlinkage void smp_irq_move_cleanup_interrupt(void)
static void __irq_complete_move(struct irq_cfg *cfg, unsigned vector)
static void irq_complete_move(struct irq_cfg *cfg)
void irq_force_complete_move(int irq)
static inline void irq_complete_move(struct irq_cfg *cfg)
static void ack_apic_edge(struct irq_data *data)
atomic_t irq_mis_count;
static void eoi_ioapic_irq(unsigned int irq, struct irq_cfg *cfg)
static void ack_apic_level(struct irq_data *data)
static void ir_ack_apic_edge(struct irq_data *data)
static void ir_ack_apic_level(struct irq_data *data)
static struct irq_chip ioapic_chip __read_mostly = ;
static struct irq_chip ir_ioapic_chip __read_mostly = ;
static inline void init_IO_APIC_traps(void)
static void mask_lapic_irq(struct irq_data *data)
static void unmask_lapic_irq(struct irq_data *data)
static void ack_lapic_irq(struct irq_data *data)
static struct irq_chip lapic_chip __read_mostly = ;
static void lapic_register_intr(int irq)
static inline void __init unlock_ExtINT_logic(void)
static int disable_timer_pin_1 __initdata;
static int __init disable_timer_pin_setup(char *arg)
early_param("disable_timer_pin_1", disable_timer_pin_setup);
int timer_through_8259 __initdata;
static inline void __init check_timer(void)
#define PIC_IRQS	(1UL << PIC_CASCADE_IR)
void __init setup_IO_APIC(void)
static int __init io_apic_bug_finalize(void)
late_initcall(io_apic_bug_finalize);
static void resume_ioapic_id(int ioapic_id)
static void ioapic_resume(void)
static struct syscore_ops ioapic_syscore_ops = ;
static int __init ioapic_init_ops(void)
device_initcall(ioapic_init_ops);
unsigned int create_irq_nr(unsigned int from, int node)
int create_irq(void)
void destroy_irq(unsigned int irq)
static int msi_compose_msg(struct pci_dev *pdev, unsigned int irq,
struct msi_msg *msg, u8 hpet_id)
static int
msi_set_affinity(struct irq_data *data, const struct cpumask *mask, bool force)
static int
ir_msi_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
static struct irq_chip msi_chip = ;
static struct irq_chip msi_ir_chip = ;
static int msi_alloc_irte(struct pci_dev *dev, int irq, int nvec)
static int setup_msi_irq(struct pci_dev *dev, struct msi_desc *msidesc, int irq)
int native_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
void native_teardown_msi_irq(unsigned int irq)
#if defined (CONFIG_DMAR) || defined (CONFIG_INTR_REMAP)
static int
dmar_msi_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
static struct irq_chip dmar_msi_type = ;
int arch_setup_dmar_msi(unsigned int irq)
static int hpet_msi_set_affinity(struct irq_data *data,
const struct cpumask *mask, bool force)
static struct irq_chip ir_hpet_msi_type = ;
static struct irq_chip hpet_msi_type = ;
int arch_setup_hpet_msi(unsigned int irq, unsigned int id)
static void target_ht_irq(unsigned int irq, unsigned int dest, u8 vector)
static int
ht_set_affinity(struct irq_data *data, const struct cpumask *mask, bool force)
static struct irq_chip ht_irq_chip = ;
int arch_setup_ht_irq(unsigned int irq, struct pci_dev *dev)
static int
io_apic_setup_irq_pin(unsigned int irq, int node, struct io_apic_irq_attr *attr)
int io_apic_setup_irq_pin_once(unsigned int irq, int node,
struct io_apic_irq_attr *attr)
static int __init io_apic_get_redir_entries(int ioapic)
static void __init probe_nr_irqs_gsi(void)
int get_nr_irqs_gsi(void)
int __init arch_probe_nr_irqs(void)
int io_apic_set_pci_routing(struct device *dev, int irq,
struct io_apic_irq_attr *irq_attr)
static int __init io_apic_get_unique_id(int ioapic, int apic_id)
static u8 __init io_apic_unique_id(u8 id)
static u8 __init io_apic_unique_id(u8 id)
static int __init io_apic_get_version(int ioapic)
int acpi_get_override_irq(u32 gsi, int *trigger, int *polarity)
void __init setup_ioapic_dest(void)
#define IOAPIC_RESOURCE_NAME_SIZE 11
static struct resource *ioapic_resources;
static struct resource * __init ioapic_setup_resources(int nr_ioapics)
void __init ioapic_and_gsi_init(void)
void __init ioapic_insert_resources(void)
int mp_find_ioapic(u32 gsi)
int mp_find_ioapic_pin(int ioapic, u32 gsi)
static __init int bad_ioapic(unsigned long address)
void __init mp_register_ioapic(int id, u32 address, u32 gsi_base)
void __init pre_init_apic_IRQ0(void)
