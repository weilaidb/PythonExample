#if (!defined(CONFIG_CLEANCACHE) && !defined(CONFIG_FRONTSWAP))
#error "zcache is useless without CONFIG_CLEANCACHE or CONFIG_FRONTSWAP"
#define ZBH_SENTINEL  0x43214321
#define ZBPG_SENTINEL  0xdeadbeef
#define ZBUD_MAX_BUDS 2
struct zbud_hdr ;
struct zbud_page ;
#define CHUNK_SHIFT	6
#define CHUNK_SIZE	(1 << CHUNK_SHIFT)
#define CHUNK_MASK	(~(CHUNK_SIZE-1))
#define NCHUNKS		(((PAGE_SIZE - sizeof(struct zbud_page)) & \
CHUNK_MASK) >> CHUNK_SHIFT)
#define MAX_CHUNK	(NCHUNKS-1)
static struct  zbud_unbuddied[NCHUNKS];
static unsigned long zbud_cumul_chunk_counts[NCHUNKS];
struct list_head zbud_buddied_list;
static unsigned long zcache_zbud_buddied_count;
static DEFINE_SPINLOCK(zbud_budlists_spinlock);
static LIST_HEAD(zbpg_unused_list);
static unsigned long zcache_zbpg_unused_list_count;
static DEFINE_SPINLOCK(zbpg_unused_list_spinlock);
static atomic_t zcache_zbud_curr_raw_pages;
static atomic_t zcache_zbud_curr_zpages;
static unsigned long zcache_zbud_curr_zbytes;
static unsigned long zcache_zbud_cumul_zpages;
static unsigned long zcache_zbud_cumul_zbytes;
static unsigned long zcache_compress_poor;
static void *zcache_get_free_page(void);
static void zcache_free_page(void *p);
static inline unsigned zbud_max_buddy_size(void)
static inline unsigned zbud_size_to_chunks(unsigned size)
static inline int zbud_budnum(struct zbud_hdr *zh)
static char *zbud_data(struct zbud_hdr *zh, unsigned size)
static struct zbud_page *zbud_alloc_raw_page(void)
static void zbud_free_raw_page(struct zbud_page *zbpg)
static unsigned zbud_free(struct zbud_hdr *zh)
static void zbud_free_and_delist(struct zbud_hdr *zh)
static struct zbud_hdr *zbud_create(uint32_t pool_id, struct tmem_oid *oid,
uint32_t index, struct page *page,
void *cdata, unsigned size)
static int zbud_decompress(struct page *page, struct zbud_hdr *zh)
static unsigned long zcache_evicted_raw_pages;
static unsigned long zcache_evicted_buddied_pages;
static unsigned long zcache_evicted_unbuddied_pages;
static struct tmem_pool *zcache_get_pool_by_id(uint32_t poolid);
static void zcache_put_pool(struct tmem_pool *pool);
static void zbud_evict_zbpg(struct zbud_page *zbpg)
static void zbud_evict_pages(int nr)
static void zbud_init(void)
static int zbud_show_unbuddied_list_counts(char *buf)
static int zbud_show_cumul_chunk_counts(char *buf)
#define ZVH_SENTINEL  0x43214321
struct zv_hdr ;
static const int zv_max_page_size = (PAGE_SIZE / 8) * 7;
static struct zv_hdr *zv_create(struct xv_pool *xvpool, uint32_t pool_id,
struct tmem_oid *oid, uint32_t index,
void *cdata, unsigned clen)
static void zv_free(struct xv_pool *xvpool, struct zv_hdr *zv)
static void zv_decompress(struct page *page, struct zv_hdr *zv)
static unsigned long zcache_flush_total;
static unsigned long zcache_flush_found;
static unsigned long zcache_flobj_total;
static unsigned long zcache_flobj_found;
static unsigned long zcache_failed_eph_puts;
static unsigned long zcache_failed_pers_puts;
#define MAX_POOLS_PER_CLIENT 16
static struct  zcache_client;
static struct tmem_pool *zcache_get_pool_by_id(uint32_t poolid)
static void zcache_put_pool(struct tmem_pool *pool)
static unsigned long zcache_failed_get_free_pages;
static unsigned long zcache_failed_alloc;
static unsigned long zcache_put_to_flush;
static unsigned long zcache_aborted_preload;
static unsigned long zcache_aborted_shrink;
static DEFINE_SPINLOCK(zcache_direct_reclaim_lock);
static struct kmem_cache *zcache_objnode_cache;
static struct kmem_cache *zcache_obj_cache;
static atomic_t zcache_curr_obj_count = ATOMIC_INIT(0);
static unsigned long zcache_curr_obj_count_max;
static atomic_t zcache_curr_objnode_count = ATOMIC_INIT(0);
static unsigned long zcache_curr_objnode_count_max;
struct zcache_preload ;
static DEFINE_PER_CPU(struct zcache_preload, zcache_preloads) = ;
static int zcache_do_preload(struct tmem_pool *pool)
static void *zcache_get_free_page(void)
static void zcache_free_page(void *p)
static struct tmem_objnode *zcache_objnode_alloc(struct tmem_pool *pool)
static void zcache_objnode_free(struct tmem_objnode *objnode,
struct tmem_pool *pool)
static struct tmem_obj *zcache_obj_alloc(struct tmem_pool *pool)
static void zcache_obj_free(struct tmem_obj *obj, struct tmem_pool *pool)
static struct tmem_hostops zcache_hostops = ;
static atomic_t zcache_curr_eph_pampd_count = ATOMIC_INIT(0);
static unsigned long zcache_curr_eph_pampd_count_max;
static atomic_t zcache_curr_pers_pampd_count = ATOMIC_INIT(0);
static unsigned long zcache_curr_pers_pampd_count_max;
static int zcache_compress(struct page *from, void **out_va, size_t *out_len);
static void *zcache_pampd_create(struct tmem_pool *pool, struct tmem_oid *oid,
uint32_t index, struct page *page)
static int zcache_pampd_get_data(struct page *page, void *pampd,
struct tmem_pool *pool)
static void zcache_pampd_free(void *pampd, struct tmem_pool *pool)
static struct tmem_pamops zcache_pamops = ;
#define LZO_WORKMEM_BYTES LZO1X_1_MEM_COMPRESS
#define LZO_DSTMEM_PAGE_ORDER 1
static DEFINE_PER_CPU(unsigned char *, zcache_workmem);
static DEFINE_PER_CPU(unsigned char *, zcache_dstmem);
static int zcache_compress(struct page *from, void **out_va, size_t *out_len)
static int zcache_cpu_notifier(struct notifier_block *nb,
unsigned long action, void *pcpu)
static struct notifier_block zcache_cpu_notifier_block = ;
#define ZCACHE_SYSFS_RO(_name) \
static ssize_t zcache_##_name##_show(struct kobject *kobj, \
struct kobj_attribute *attr, char *buf) \
\
static struct kobj_attribute zcache_##_name##_attr =
#define ZCACHE_SYSFS_RO_ATOMIC(_name) \
static ssize_t zcache_##_name##_show(struct kobject *kobj, \
struct kobj_attribute *attr, char *buf) \
\
static struct kobj_attribute zcache_##_name##_attr =
#define ZCACHE_SYSFS_RO_CUSTOM(_name, _func) \
static ssize_t zcache_##_name##_show(struct kobject *kobj, \
struct kobj_attribute *attr, char *buf) \
\
static struct kobj_attribute zcache_##_name##_attr =
ZCACHE_SYSFS_RO(curr_obj_count_max);
ZCACHE_SYSFS_RO(curr_objnode_count_max);
ZCACHE_SYSFS_RO(flush_total);
ZCACHE_SYSFS_RO(flush_found);
ZCACHE_SYSFS_RO(flobj_total);
ZCACHE_SYSFS_RO(flobj_found);
ZCACHE_SYSFS_RO(failed_eph_puts);
ZCACHE_SYSFS_RO(failed_pers_puts);
ZCACHE_SYSFS_RO(zbud_curr_zbytes);
ZCACHE_SYSFS_RO(zbud_cumul_zpages);
ZCACHE_SYSFS_RO(zbud_cumul_zbytes);
ZCACHE_SYSFS_RO(zbud_buddied_count);
ZCACHE_SYSFS_RO(zbpg_unused_list_count);
ZCACHE_SYSFS_RO(evicted_raw_pages);
ZCACHE_SYSFS_RO(evicted_unbuddied_pages);
ZCACHE_SYSFS_RO(evicted_buddied_pages);
ZCACHE_SYSFS_RO(failed_get_free_pages);
ZCACHE_SYSFS_RO(failed_alloc);
ZCACHE_SYSFS_RO(put_to_flush);
ZCACHE_SYSFS_RO(aborted_preload);
ZCACHE_SYSFS_RO(aborted_shrink);
ZCACHE_SYSFS_RO(compress_poor);
ZCACHE_SYSFS_RO_ATOMIC(zbud_curr_raw_pages);
ZCACHE_SYSFS_RO_ATOMIC(zbud_curr_zpages);
ZCACHE_SYSFS_RO_ATOMIC(curr_obj_count);
ZCACHE_SYSFS_RO_ATOMIC(curr_objnode_count);
ZCACHE_SYSFS_RO_CUSTOM(zbud_unbuddied_list_counts,
zbud_show_unbuddied_list_counts);
ZCACHE_SYSFS_RO_CUSTOM(zbud_cumul_chunk_counts,
zbud_show_cumul_chunk_counts);
static struct attribute *zcache_attrs[] = ;
static struct attribute_group zcache_attr_group = ;
static bool zcache_freeze;
static int shrink_zcache_memory(struct shrinker *shrink,
struct shrink_control *sc)
static struct shrinker zcache_shrinker = ;
static int zcache_put_page(int pool_id, struct tmem_oid *oidp,
uint32_t index, struct page *page)
static int zcache_get_page(int pool_id, struct tmem_oid *oidp,
uint32_t index, struct page *page)
static int zcache_flush_page(int pool_id, struct tmem_oid *oidp, uint32_t index)
static int zcache_flush_object(int pool_id, struct tmem_oid *oidp)
static int zcache_destroy_pool(int pool_id)
static int zcache_new_pool(uint32_t flags)
static void zcache_cleancache_put_page(int pool_id,
struct cleancache_filekey key,
pgoff_t index, struct page *page)
static int zcache_cleancache_get_page(int pool_id,
struct cleancache_filekey key,
pgoff_t index, struct page *page)
static void zcache_cleancache_flush_page(int pool_id,
struct cleancache_filekey key,
pgoff_t index)
static void zcache_cleancache_flush_inode(int pool_id,
struct cleancache_filekey key)
static void zcache_cleancache_flush_fs(int pool_id)
static int zcache_cleancache_init_fs(size_t pagesize)
static int zcache_cleancache_init_shared_fs(char *uuid, size_t pagesize)
static struct cleancache_ops zcache_cleancache_ops = ;
struct cleancache_ops zcache_cleancache_register_ops(void)
static int zcache_frontswap_poolid = -1;
#define SWIZ_BITS		4
#define SWIZ_MASK		((1 << SWIZ_BITS) - 1)
#define _oswiz(_type, _ind)	((_type << SWIZ_BITS) | (_ind & SWIZ_MASK))
#define iswiz(_ind)		(_ind >> SWIZ_BITS)
static inline struct tmem_oid oswiz(unsigned type, u32 ind)
static int zcache_frontswap_put_page(unsigned type, pgoff_t offset,
struct page *page)
static int zcache_frontswap_get_page(unsigned type, pgoff_t offset,
struct page *page)
static void zcache_frontswap_flush_page(unsigned type, pgoff_t offset)
static void zcache_frontswap_flush_area(unsigned type)
static void zcache_frontswap_init(unsigned ignored)
static struct frontswap_ops zcache_frontswap_ops = ;
struct frontswap_ops zcache_frontswap_register_ops(void)
static int zcache_enabled;
static int __init enable_zcache(char *s)
__setup("zcache", enable_zcache);
static int use_cleancache = 1;
static int __init no_cleancache(char *s)
__setup("nocleancache", no_cleancache);
static int use_frontswap = 1;
static int __init no_frontswap(char *s)
__setup("nofrontswap", no_frontswap);
static int __init zcache_init(void)
module_init(zcache_init)
