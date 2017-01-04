#define KMSG_COMPONENT "cpu"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define PTF_HORIZONTAL	(0UL)
#define PTF_VERTICAL	(1UL)
#define PTF_CHECK	(2UL)
struct mask_info ;
static int topology_enabled = 1;
static void topology_work_fn(struct work_struct *work);
static struct sysinfo_15_1_x *tl_info;
static struct timer_list topology_timer;
static void set_topology_timer(void);
static DECLARE_WORK(topology_work, topology_work_fn);
static DEFINE_SPINLOCK(topology_lock);
static struct mask_info core_info;
cpumask_t cpu_core_map[NR_CPUS];
unsigned char cpu_core_id[NR_CPUS];
static struct mask_info book_info;
cpumask_t cpu_book_map[NR_CPUS];
unsigned char cpu_book_id[NR_CPUS];
static cpumask_t cpu_group_map(struct mask_info *info, unsigned int cpu)
static void add_cpus_to_mask(struct topology_cpu *tl_cpu,
struct mask_info *book, struct mask_info *core)
static void clear_masks(void)
static union topology_entry *next_tle(union topology_entry *tle)
static void tl_to_cores(struct sysinfo_15_1_x *info)
static void topology_update_polarization_simple(void)
static int ptf(unsigned long fc)
int topology_set_cpu_management(int fc)
static void update_cpu_core_map(void)
void store_topology(struct sysinfo_15_1_x *info)
int arch_update_cpu_topology(void)
static void topology_work_fn(struct work_struct *work)
void topology_schedule_update(void)
static void topology_timer_fn(unsigned long ignored)
static void set_topology_timer(void)
static int __init early_parse_topology(char *p)
early_param("topology", early_parse_topology);
static int __init init_topology_update(void)
__initcall(init_topology_update);
static void alloc_masks(struct sysinfo_15_1_x *info, struct mask_info *mask,
int offset)
void __init s390_init_cpu_topology(void)
