static struct phyp_dump phyp_dump_vars;
struct phyp_dump *phyp_dump_info = &phyp_dump_vars;
static int ibm_configure_kernel_dump;
struct dump_section ;
struct phyp_dump_header ;
static struct phyp_dump_header phdr;
#define NUM_DUMP_SECTIONS	3
#define DUMP_HEADER_VERSION	0x1
#define DUMP_REQUEST_FLAG	0x1
#define DUMP_SOURCE_CPU		0x0001
#define DUMP_SOURCE_HPTE	0x0002
#define DUMP_SOURCE_RMO		0x0011
#define DUMP_ERROR_FLAG		0x2000
#define DUMP_TRIGGERED		0x4000
#define DUMP_PERFORMED		0x8000
static unsigned long init_dump_header(struct phyp_dump_header *ph)
static void print_dump_header(const struct phyp_dump_header *ph)
static ssize_t show_phyp_dump_active(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static struct kobj_attribute pdl = __ATTR(phyp_dump_active, 0600,
show_phyp_dump_active,
NULL);
static void register_dump_area(struct phyp_dump_header *ph, unsigned long addr)
static
void invalidate_last_dump(struct phyp_dump_header *ph, unsigned long addr)
static void release_memory_range(unsigned long start_pfn,
unsigned long nr_pages)
static void
track_freed_range(unsigned long addr, unsigned long length)
static ssize_t store_release_region(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t show_release_region(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static struct kobj_attribute rr = __ATTR(release_region, 0600,
show_release_region,
store_release_region);
static int __init phyp_dump_setup(void)
machine_subsys_initcall(pseries, phyp_dump_setup);
int __init early_init_dt_scan_phyp_dump(unsigned long node,
const char *uname, int depth, void *data)
static int __init early_phyp_dump_enabled(char *p)
early_param("phyp_dump", early_phyp_dump_enabled);
static int __init early_phyp_dump_reserve_size(char *p)
early_param("phyp_dump_reserve_size", early_phyp_dump_reserve_size);
