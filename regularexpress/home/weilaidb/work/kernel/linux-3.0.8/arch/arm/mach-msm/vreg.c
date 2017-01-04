struct vreg ;
#define VREG(_name, _id, _status, _refcnt) \
static struct vreg vregs[] = ;
struct vreg *vreg_get(struct device *dev, const char *id)
void vreg_put(struct vreg *vreg)
int vreg_enable(struct vreg *vreg)
int vreg_disable(struct vreg *vreg)
int vreg_set_level(struct vreg *vreg, unsigned mv)
#if defined(CONFIG_DEBUG_FS)
static int vreg_debug_set(void *data, u64 val)
static int vreg_debug_get(void *data, u64 *val)
static int vreg_debug_count_set(void *data, u64 val)
static int vreg_debug_count_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(vreg_fops, vreg_debug_get, vreg_debug_set, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(vreg_count_fops, vreg_debug_count_get,
vreg_debug_count_set, "%llu\n");
static int __init vreg_debug_init(void)
device_initcall(vreg_debug_init);
