int mminit_loglevel;
#define SECTIONS_SHIFT	0
void mminit_verify_zonelist(void)
void __init mminit_verify_pageflags_layout(void)
void __meminit mminit_verify_page_links(struct page *page, enum zone_type zone,
unsigned long nid, unsigned long pfn)
static __init int set_mminit_loglevel(char *str)
early_param("mminit_loglevel", set_mminit_loglevel);
struct kobject *mm_kobj;
EXPORT_SYMBOL_GPL(mm_kobj);
static int __init mm_sysfs_init(void)
__initcall(mm_sysfs_init);
