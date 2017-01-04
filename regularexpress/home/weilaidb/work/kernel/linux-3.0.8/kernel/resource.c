struct resource ioport_resource = ;
EXPORT_SYMBOL(ioport_resource);
struct resource iomem_resource = ;
EXPORT_SYMBOL(iomem_resource);
struct resource_constraint ;
static DEFINE_RWLOCK(resource_lock);
static void *r_next(struct seq_file *m, void *v, loff_t *pos)
enum ;
static void *r_start(struct seq_file *m, loff_t *pos)
__acquires(resource_lock)
static void r_stop(struct seq_file *m, void *v)
__releases(resource_lock)
static int r_show(struct seq_file *m, void *v)
static const struct seq_operations resource_op = ;
static int ioports_open(struct inode *inode, struct file *file)
static int iomem_open(struct inode *inode, struct file *file)
static const struct file_operations proc_ioports_operations = ;
static const struct file_operations proc_iomem_operations = ;
static int __init ioresources_init(void)
__initcall(ioresources_init);
static struct resource * __request_resource(struct resource *root, struct resource *new)
static int __release_resource(struct resource *old)
static void __release_child_resources(struct resource *r)
void release_child_resources(struct resource *r)
struct resource *request_resource_conflict(struct resource *root, struct resource *new)
int request_resource(struct resource *root, struct resource *new)
EXPORT_SYMBOL(request_resource);
int release_resource(struct resource *old)
EXPORT_SYMBOL(release_resource);
#if !defined(CONFIG_ARCH_HAS_WALK_MEMORY)
static int find_next_system_ram(struct resource *res, char *name)
int walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
void *arg, int (*func)(unsigned long, unsigned long, void *))
static int __is_ram(unsigned long pfn, unsigned long nr_pages, void *arg)
int __weak page_is_ram(unsigned long pfn)
void __weak arch_remove_reservations(struct resource *avail)
static resource_size_t simple_align_resource(void *data,
const struct resource *avail,
resource_size_t size,
resource_size_t align)
static void resource_clip(struct resource *res, resource_size_t min,
resource_size_t max)
static bool resource_contains(struct resource *res1, struct resource *res2)
static int __find_resource(struct resource *root, struct resource *old,
struct resource *new,
resource_size_t  size,
struct resource_constraint *constraint)
static int find_resource(struct resource *root, struct resource *new,
resource_size_t size,
struct resource_constraint  *constraint)
int reallocate_resource(struct resource *root, struct resource *old,
resource_size_t newsize,
struct resource_constraint  *constraint)
int allocate_resource(struct resource *root, struct resource *new,
resource_size_t size, resource_size_t min,
resource_size_t max, resource_size_t align,
resource_size_t (*alignf)(void *,
const struct resource *,
resource_size_t,
resource_size_t),
void *alignf_data)
EXPORT_SYMBOL(allocate_resource);
static struct resource * __insert_resource(struct resource *parent, struct resource *new)
struct resource *insert_resource_conflict(struct resource *parent, struct resource *new)
int insert_resource(struct resource *parent, struct resource *new)
void insert_resource_expand_to_fit(struct resource *root, struct resource *new)
int adjust_resource(struct resource *res, resource_size_t start, resource_size_t size)
static void __init __reserve_region_with_split(struct resource *root,
resource_size_t start, resource_size_t end,
const char *name)
void __init reserve_region_with_split(struct resource *root,
resource_size_t start, resource_size_t end,
const char *name)
EXPORT_SYMBOL(adjust_resource);
resource_size_t resource_alignment(struct resource *res)
static DECLARE_WAIT_QUEUE_HEAD(muxed_resource_wait);
struct resource * __request_region(struct resource *parent,
resource_size_t start, resource_size_t n,
const char *name, int flags)
EXPORT_SYMBOL(__request_region);
int __check_region(struct resource *parent, resource_size_t start,
resource_size_t n)
EXPORT_SYMBOL(__check_region);
void __release_region(struct resource *parent, resource_size_t start,
resource_size_t n)
EXPORT_SYMBOL(__release_region);
struct region_devres ;
static void devm_region_release(struct device *dev, void *res)
static int devm_region_match(struct device *dev, void *res, void *match_data)
struct resource * __devm_request_region(struct device *dev,
struct resource *parent, resource_size_t start,
resource_size_t n, const char *name)
EXPORT_SYMBOL(__devm_request_region);
void __devm_release_region(struct device *dev, struct resource *parent,
resource_size_t start, resource_size_t n)
EXPORT_SYMBOL(__devm_release_region);
#define MAXRESERVE 4
static int __init reserve_setup(char *str)
__setup("reserve=", reserve_setup);
int iomem_map_sanity_check(resource_size_t addr, unsigned long size)
static int strict_iomem_checks = 1;
static int strict_iomem_checks;
int iomem_is_exclusive(u64 addr)
static int __init strict_iomem(char *str)
__setup("iomem=", strict_iomem);
