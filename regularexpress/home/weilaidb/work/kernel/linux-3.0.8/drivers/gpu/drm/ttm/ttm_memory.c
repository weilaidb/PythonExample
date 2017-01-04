#define TTM_MEMORY_ALLOC_RETRIES 4
struct ttm_mem_zone ;
static struct attribute ttm_mem_sys = ;
static struct attribute ttm_mem_emer = ;
static struct attribute ttm_mem_max = ;
static struct attribute ttm_mem_swap = ;
static struct attribute ttm_mem_used = ;
static void ttm_mem_zone_kobj_release(struct kobject *kobj)
static ssize_t ttm_mem_zone_show(struct kobject *kobj,
struct attribute *attr,
char *buffer)
static void ttm_check_swapping(struct ttm_mem_global *glob);
static ssize_t ttm_mem_zone_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer,
size_t size)
static struct attribute *ttm_mem_zone_attrs[] = ;
static const struct sysfs_ops ttm_mem_zone_ops = ;
static struct kobj_type ttm_mem_zone_kobj_type = ;
static void ttm_mem_global_kobj_release(struct kobject *kobj)
static struct kobj_type ttm_mem_glob_kobj_type = ;
static bool ttm_zones_above_swap_target(struct ttm_mem_global *glob,
bool from_wq, uint64_t extra)
static void ttm_shrink(struct ttm_mem_global *glob, bool from_wq,
uint64_t extra)
static void ttm_shrink_work(struct work_struct *work)
static int ttm_mem_init_kernel_zone(struct ttm_mem_global *glob,
const struct sysinfo *si)
static int ttm_mem_init_highmem_zone(struct ttm_mem_global *glob,
const struct sysinfo *si)
static int ttm_mem_init_dma32_zone(struct ttm_mem_global *glob,
const struct sysinfo *si)
int ttm_mem_global_init(struct ttm_mem_global *glob)
EXPORT_SYMBOL(ttm_mem_global_init);
void ttm_mem_global_release(struct ttm_mem_global *glob)
EXPORT_SYMBOL(ttm_mem_global_release);
static void ttm_check_swapping(struct ttm_mem_global *glob)
static void ttm_mem_global_free_zone(struct ttm_mem_global *glob,
struct ttm_mem_zone *single_zone,
uint64_t amount)
void ttm_mem_global_free(struct ttm_mem_global *glob,
uint64_t amount)
EXPORT_SYMBOL(ttm_mem_global_free);
static int ttm_mem_global_reserve(struct ttm_mem_global *glob,
struct ttm_mem_zone *single_zone,
uint64_t amount, bool reserve)
static int ttm_mem_global_alloc_zone(struct ttm_mem_global *glob,
struct ttm_mem_zone *single_zone,
uint64_t memory,
bool no_wait, bool interruptible)
int ttm_mem_global_alloc(struct ttm_mem_global *glob, uint64_t memory,
bool no_wait, bool interruptible)
EXPORT_SYMBOL(ttm_mem_global_alloc);
int ttm_mem_global_alloc_page(struct ttm_mem_global *glob,
struct page *page,
bool no_wait, bool interruptible)
void ttm_mem_global_free_page(struct ttm_mem_global *glob, struct page *page)
size_t ttm_round_pot(size_t size)
EXPORT_SYMBOL(ttm_round_pot);
