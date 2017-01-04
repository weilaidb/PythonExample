struct tboot *tboot __read_mostly;
EXPORT_SYMBOL(tboot);
#define AP_WAIT_TIMEOUT		1
#undef pr_fmt
#define pr_fmt(fmt)	"tboot: " fmt
static u8 tboot_uuid[16] __initdata = TBOOT_UUID;
void __init tboot_probe(void)
static pgd_t *tboot_pg_dir;
static struct mm_struct tboot_mm = ;
static inline void switch_to_tboot_pt(void)
static int map_tboot_page(unsigned long vaddr, unsigned long pfn,
pgprot_t prot)
static int map_tboot_pages(unsigned long vaddr, unsigned long start_pfn,
unsigned long nr)
static void tboot_create_trampoline(void)
static void add_mac_region(phys_addr_t start, unsigned long size)
static int tboot_setup_sleep(void)
static int tboot_setup_sleep(void)
void tboot_shutdown(u32 shutdown_type)
static void tboot_copy_fadt(const struct acpi_table_fadt *fadt)
void tboot_sleep(u8 sleep_state, u32 pm1a_control, u32 pm1b_control)
static atomic_t ap_wfs_count;
static int tboot_wait_for_aps(int num_aps)
static int __cpuinit tboot_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block tboot_cpu_notifier __cpuinitdata =
;
static __init int tboot_late_init(void)
late_initcall(tboot_late_init);
#define TXT_PUB_CONFIG_REGS_BASE       0xfed30000
#define TXT_PRIV_CONFIG_REGS_BASE      0xfed20000
#define NR_TXT_CONFIG_PAGES     ((TXT_PUB_CONFIG_REGS_BASE -                \
TXT_PRIV_CONFIG_REGS_BASE) >> PAGE_SHIFT)
#define TXTCR_HEAP_BASE             0x0300
#define TXTCR_HEAP_SIZE             0x0308
#define SHA1_SIZE      20
struct sha1_hash ;
struct sinit_mle_data  __packed;
struct acpi_table_header *tboot_get_dmar_table(struct acpi_table_header *dmar_tbl)
int tboot_force_iommu(void)
