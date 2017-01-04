#define UVH_NMI_MMR				UVH_SCRATCH5
#define UVH_NMI_MMR_CLEAR			(UVH_NMI_MMR + 8)
#define UV_NMI_PENDING_MASK			(1UL << 63)
DEFINE_PER_CPU(unsigned long, cpu_last_nmi_count);
DEFINE_PER_CPU(int, x2apic_extra_bits);
#define PR_DEVEL(fmt, args...)	pr_devel("%s: " fmt, __func__, args)
static enum uv_system_type uv_system_type;
static u64 gru_start_paddr, gru_end_paddr;
static union uvh_apicid uvh_apicid;
int uv_min_hub_revision_id;
EXPORT_SYMBOL_GPL(uv_min_hub_revision_id);
unsigned int uv_apicid_hibits;
EXPORT_SYMBOL_GPL(uv_apicid_hibits);
static DEFINE_SPINLOCK(uv_nmi_lock);
static struct apic apic_x2apic_uv_x;
static unsigned long __init uv_early_read_mmr(unsigned long addr)
static inline bool is_GRU_range(u64 start, u64 end)
static bool uv_is_untracked_pat_range(u64 start, u64 end)
static int __init early_get_pnodeid(void)
static void __init early_get_apic_pnode_shift(void)
static void __init uv_set_apicid_hibit(void)
static int __init uv_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
enum uv_system_type get_uv_system_type(void)
int is_uv_system(void)
EXPORT_SYMBOL_GPL(is_uv_system);
DEFINE_PER_CPU(struct uv_hub_info_s, __uv_hub_info);
EXPORT_PER_CPU_SYMBOL_GPL(__uv_hub_info);
struct uv_blade_info *uv_blade_info;
EXPORT_SYMBOL_GPL(uv_blade_info);
short *uv_node_to_blade;
EXPORT_SYMBOL_GPL(uv_node_to_blade);
short *uv_cpu_to_blade;
EXPORT_SYMBOL_GPL(uv_cpu_to_blade);
short uv_possible_blades;
EXPORT_SYMBOL_GPL(uv_possible_blades);
unsigned long sn_rtc_cycles_per_second;
EXPORT_SYMBOL(sn_rtc_cycles_per_second);
static const struct cpumask *uv_target_cpus(void)
static void uv_vector_allocation_domain(int cpu, struct cpumask *retmask)
static int __cpuinit uv_wakeup_secondary(int phys_apicid, unsigned long start_rip)
static void uv_send_IPI_one(int cpu, int vector)
static void uv_send_IPI_mask(const struct cpumask *mask, int vector)
static void uv_send_IPI_mask_allbutself(const struct cpumask *mask, int vector)
static void uv_send_IPI_allbutself(int vector)
static void uv_send_IPI_all(int vector)
static int uv_apic_id_registered(void)
static void uv_init_apic_ldr(void)
static unsigned int uv_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int
uv_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static unsigned int x2apic_get_apic_id(unsigned long x)
static unsigned long set_apic_id(unsigned int id)
static unsigned int uv_read_apic_id(void)
static int uv_phys_pkg_id(int initial_apicid, int index_msb)
static void uv_send_IPI_self(int vector)
static int uv_probe(void)
static struct apic __refdata apic_x2apic_uv_x = ;
static __cpuinit void set_x2apic_extra_bits(int pnode)
static __init int boot_pnode_to_blade(int pnode)
struct redir_addr ;
#define DEST_SHIFT UVH_RH_GAM_ALIAS210_REDIRECT_CONFIG_0_MMR_DEST_BASE_SHFT
static __initdata struct redir_addr redir_addrs[] = ;
static __init void get_lowmem_redirect(unsigned long *base, unsigned long *size)
enum map_type ;
static __init void map_high(char *id, unsigned long base, int pshift,
int bshift, int max_pnode, enum map_type map_type)
static __init void map_gru_high(int max_pnode)
static __init void map_mmr_high(int max_pnode)
static __init void map_mmioh_high(int max_pnode)
static __init void map_low_mmrs(void)
static __init void uv_rtc_init(void)
static void uv_heartbeat(unsigned long ignored)
static void __cpuinit uv_heartbeat_enable(int cpu)
static void __cpuinit uv_heartbeat_disable(int cpu)
static __cpuinit int uv_scir_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static __init void uv_scir_register_cpu_notifier(void)
static __init void uv_scir_register_cpu_notifier(void)
static __init int uv_init_heartbeat(void)
late_initcall(uv_init_heartbeat);
int uv_set_vga_state(struct pci_dev *pdev, bool decode,
unsigned int command_bits, u32 flags)
void __cpuinit uv_cpu_init(void)
int uv_handle_nmi(struct notifier_block *self, unsigned long reason, void *data)
static struct notifier_block uv_dump_stack_nmi_nb = ;
void uv_register_nmi_notifier(void)
void uv_nmi_init(void)
void __init uv_system_init(void)
apic_driver(apic_x2apic_uv_x);
