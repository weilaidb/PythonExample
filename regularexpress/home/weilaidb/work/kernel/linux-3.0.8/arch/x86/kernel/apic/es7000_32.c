#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define NON_UNISYS			0
#define ES7000_CLASSIC			1
#define ES7000_ZORRO			2
#define	MIP_REG				1
#define	MIP_PSAI_REG			4
#define	MIP_BUSY			1
#define	MIP_SPIN			0xf0000
#define	MIP_VALID			0x0100000000000000ULL
#define	MIP_SW_APIC			0x1020b
#define	MIP_PORT(val)			((val >> 32) & 0xffff)
#define	MIP_RD_LO(val)			(val & 0xffffffff)
struct mip_reg ;
struct mip_reg_info ;
struct psai ;
struct es7000_oem_table ;
static unsigned long			oem_addrX;
static unsigned long			oem_size;
static volatile unsigned long		*psai;
static struct mip_reg			*mip_reg;
static struct mip_reg			*host_reg;
static int 				mip_port;
static unsigned long			mip_addr;
static unsigned long			host_addr;
int					es7000_plat;
static int __cpuinit wakeup_secondary_cpu_via_mip(int cpu, unsigned long eip)
static int es7000_apic_is_cluster(void)
static void setup_unisys(void)
static int parse_unisys_oem(char *oemptr)
static int __init find_unisys_acpi_oem_table(unsigned long *oem_addr)
static void __init unmap_unisys_acpi_oem_table(unsigned long oem_addr)
static int es7000_check_dsdt(void)
static int es7000_acpi_ret;
static int __init es7000_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static int es7000_acpi_madt_oem_check_cluster(char *oem_id, char *oem_table_id)
static int es7000_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static int es7000_acpi_madt_oem_check_cluster(char *oem_id, char *oem_table_id)
static void es7000_spin(int n)
static int es7000_mip_write(struct mip_reg *mip_reg)
static void es7000_enable_apic_mode(void)
static void es7000_vector_allocation_domain(int cpu, struct cpumask *retmask)
static void es7000_wait_for_init_deassert(atomic_t *deassert)
static unsigned int es7000_get_apic_id(unsigned long x)
static void es7000_send_IPI_mask(const struct cpumask *mask, int vector)
static void es7000_send_IPI_allbutself(int vector)
static void es7000_send_IPI_all(int vector)
static int es7000_apic_id_registered(void)
static const struct cpumask *target_cpus_cluster(void)
static const struct cpumask *es7000_target_cpus(void)
static unsigned long es7000_check_apicid_used(physid_mask_t *map, int apicid)
static unsigned long es7000_check_apicid_present(int bit)
static int es7000_early_logical_apicid(int cpu)
static unsigned long calculate_ldr(int cpu)
static void es7000_init_apic_ldr_cluster(void)
static void es7000_init_apic_ldr(void)
static void es7000_setup_apic_routing(void)
static int es7000_cpu_present_to_apicid(int mps_cpu)
static int cpu_id;
static void es7000_apicid_to_cpu_present(int phys_apicid, physid_mask_t *retmap)
static void es7000_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
static int es7000_check_phys_apicid_present(int cpu_physical_apicid)
static unsigned int es7000_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int
es7000_cpu_mask_to_apicid_and(const struct cpumask *inmask,
const struct cpumask *andmask)
static int es7000_phys_pkg_id(int cpuid_apic, int index_msb)
static int probe_es7000(void)
static int es7000_mps_ret;
static int es7000_mps_oem_check(struct mpc_table *mpc, char *oem,
char *productid)
static int es7000_mps_oem_check_cluster(struct mpc_table *mpc, char *oem,
char *productid)
static struct apic __refdata apic_es7000_cluster = ;
static struct apic __refdata apic_es7000 = ;
apic_drivers(apic_es7000, apic_es7000_cluster);
