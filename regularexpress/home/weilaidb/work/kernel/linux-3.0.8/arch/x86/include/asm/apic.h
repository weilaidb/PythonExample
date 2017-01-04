#define _ASM_X86_APIC_H
#define ARCH_APICTIMER_STOPS_ON_C3	1
#define APIC_QUIET   0
#define APIC_VERBOSE 1
#define APIC_DEBUG   2
#define apic_printk(v, s, a...) do  while (0)
#if defined(CONFIG_X86_LOCAL_APIC) && defined(CONFIG_X86_32)
extern void generic_apic_probe(void);
static inline void generic_apic_probe(void)
extern unsigned int apic_verbosity;
extern int local_apic_timer_c2_ok;
extern int disable_apic;
extern void __inquire_remote_apic(int apicid);
static inline void __inquire_remote_apic(int apicid)
static inline void default_inquire_remote_apic(int apicid)
static inline bool apic_from_smp_config(void)
extern int is_vsmp_box(void);
static inline int is_vsmp_box(void)
extern void xapic_wait_icr_idle(void);
extern u32 safe_xapic_wait_icr_idle(void);
extern void xapic_icr_write(u32, u32);
extern int setup_profiling_timer(unsigned int);
static inline void native_apic_mem_write(u32 reg, u32 v)
static inline u32 native_apic_mem_read(u32 reg)
extern void native_apic_wait_icr_idle(void);
extern u32 native_safe_apic_wait_icr_idle(void);
extern void native_apic_icr_write(u32 low, u32 id);
extern u64 native_apic_icr_read(void);
extern int x2apic_mode;
static inline void x2apic_wrmsr_fence(void)
static inline void native_apic_msr_write(u32 reg, u32 v)
static inline u32 native_apic_msr_read(u32 reg)
static inline void native_x2apic_wait_icr_idle(void)
static inline u32 native_safe_x2apic_wait_icr_idle(void)
static inline void native_x2apic_icr_write(u32 low, u32 id)
static inline u64 native_x2apic_icr_read(void)
extern int x2apic_phys;
extern void check_x2apic(void);
extern void enable_x2apic(void);
extern void x2apic_icr_write(u32 low, u32 id);
static inline int x2apic_enabled(void)
#define x2apic_supported()	(cpu_has_x2apic)
static inline void x2apic_force_phys(void)
static inline void check_x2apic(void)
static inline void enable_x2apic(void)
static inline int x2apic_enabled(void)
static inline void x2apic_force_phys(void)
#define	x2apic_preenabled 0
#define	x2apic_supported()	0
extern void enable_IR_x2apic(void);
extern int get_physical_broadcast(void);
extern int lapic_get_maxlvt(void);
extern void clear_local_APIC(void);
extern void connect_bsp_APIC(void);
extern void disconnect_bsp_APIC(int virt_wire_setup);
extern void disable_local_APIC(void);
extern void lapic_shutdown(void);
extern int verify_local_APIC(void);
extern void sync_Arb_IDs(void);
extern void init_bsp_APIC(void);
extern void setup_local_APIC(void);
extern void end_local_APIC_setup(void);
extern void bsp_end_local_APIC_setup(void);
extern void init_apic_mappings(void);
void register_lapic_address(unsigned long address);
extern void setup_boot_APIC_clock(void);
extern void setup_secondary_APIC_clock(void);
extern int APIC_init_uniprocessor(void);
extern int apic_force_enable(unsigned long addr);
extern int apic_is_clustered_box(void);
static inline int apic_is_clustered_box(void)
extern int setup_APIC_eilvt(u8 lvt_off, u8 vector, u8 msg_type, u8 mask);
static inline void lapic_shutdown(void)
#define local_apic_timer_c2_ok		1
static inline void init_apic_mappings(void)
static inline void disable_local_APIC(void)
# define setup_boot_APIC_clock x86_init_noop
# define setup_secondary_APIC_clock x86_init_noop
#define	SET_APIC_ID(x)		(apic->set_apic_id(x))
struct apic ;
extern struct apic *apic;
#define apic_driver(sym)					\
static struct apic *__apicdrivers_##sym __used		\
__aligned(sizeof(struct apic *))			\
__section(.apicdrivers) =
#define apic_drivers(sym1, sym2)					\
static struct apic *__apicdrivers_##sym1##sym2[2] __used	\
__aligned(sizeof(struct apic *))				\
__section(.apicdrivers) =
extern struct apic *__apicdrivers[], *__apicdrivers_end[];
extern atomic_t init_deasserted;
extern int wakeup_secondary_cpu_via_nmi(int apicid, unsigned long start_eip);
static inline u32 apic_read(u32 reg)
static inline void apic_write(u32 reg, u32 val)
static inline u64 apic_icr_read(void)
static inline void apic_icr_write(u32 low, u32 high)
static inline void apic_wait_icr_idle(void)
static inline u32 safe_apic_wait_icr_idle(void)
static inline u32 apic_read(u32 reg)
static inline void apic_write(u32 reg, u32 val)
static inline u64 apic_icr_read(void)
static inline void apic_icr_write(u32 low, u32 high)
static inline void apic_wait_icr_idle(void)
static inline u32 safe_apic_wait_icr_idle(void)
static inline void ack_APIC_irq(void)
static inline unsigned default_get_apic_id(unsigned long x)
#define DEFAULT_TRAMPOLINE_PHYS_LOW		0x467
#define DEFAULT_TRAMPOLINE_PHYS_HIGH		0x469
extern int default_acpi_madt_oem_check(char *, char *);
extern void apic_send_IPI_self(int vector);
DECLARE_PER_CPU(int, x2apic_extra_bits);
extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);
static inline void default_wait_for_init_deassert(atomic_t *deassert)
extern struct apic *generic_bigsmp_probe(void);
#define APIC_DFR_VALUE	(APIC_DFR_FLAT)
static inline const struct cpumask *default_target_cpus(void)
DECLARE_EARLY_PER_CPU(u16, x86_bios_cpu_apicid);
static inline unsigned int read_apic_id(void)
extern void default_setup_apic_routing(void);
extern struct apic apic_noop;
static inline int noop_x86_32_early_logical_apicid(int cpu)
extern void default_init_apic_ldr(void);
static inline int default_apic_id_registered(void)
static inline int default_phys_pkg_id(int cpuid_apic, int index_msb)
static inline unsigned int
default_cpu_mask_to_apicid(const struct cpumask *cpumask)
static inline unsigned int
default_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static inline unsigned long default_check_apicid_used(physid_mask_t *map, int apicid)
static inline unsigned long default_check_apicid_present(int bit)
static inline void default_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
static inline int __default_cpu_present_to_apicid(int mps_cpu)
static inline int
__default_check_phys_apicid_present(int phys_apicid)
static inline int default_cpu_present_to_apicid(int mps_cpu)
static inline int
default_check_phys_apicid_present(int phys_apicid)
extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);
