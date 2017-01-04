#define TMEM_CONTROL               0
#define TMEM_NEW_POOL              1
#define TMEM_DESTROY_POOL          2
#define TMEM_NEW_PAGE              3
#define TMEM_PUT_PAGE              4
#define TMEM_GET_PAGE              5
#define TMEM_FLUSH_PAGE            6
#define TMEM_FLUSH_OBJECT          7
#define TMEM_READ                  8
#define TMEM_WRITE                 9
#define TMEM_XCHG                 10
#define TMEM_POOL_PERSIST          1
#define TMEM_POOL_SHARED           2
#define TMEM_POOL_PAGESIZE_SHIFT   4
#define TMEM_VERSION_SHIFT        24
struct tmem_pool_uuid ;
struct tmem_oid ;
#define TMEM_POOL_PRIVATE_UUID
#define TMEM_POOL_PERSIST          1
#define TMEM_POOL_SHARED           2
static inline int xen_tmem_op(u32 tmem_cmd, u32 tmem_pool, struct tmem_oid oid,
u32 index, unsigned long gmfn, u32 tmem_offset, u32 pfn_offset, u32 len)
static int xen_tmem_new_pool(struct tmem_pool_uuid uuid,
u32 flags, unsigned long pagesize)
static int xen_tmem_put_page(u32 pool_id, struct tmem_oid oid,
u32 index, unsigned long pfn)
static int xen_tmem_get_page(u32 pool_id, struct tmem_oid oid,
u32 index, unsigned long pfn)
static int xen_tmem_flush_page(u32 pool_id, struct tmem_oid oid, u32 index)
static int xen_tmem_flush_object(u32 pool_id, struct tmem_oid oid)
static int xen_tmem_destroy_pool(u32 pool_id)
int tmem_enabled;
static int __init enable_tmem(char *s)
__setup("tmem", enable_tmem);
static void tmem_cleancache_put_page(int pool, struct cleancache_filekey key,
pgoff_t index, struct page *page)
static int tmem_cleancache_get_page(int pool, struct cleancache_filekey key,
pgoff_t index, struct page *page)
static void tmem_cleancache_flush_page(int pool, struct cleancache_filekey key,
pgoff_t index)
static void tmem_cleancache_flush_inode(int pool, struct cleancache_filekey key)
static void tmem_cleancache_flush_fs(int pool)
static int tmem_cleancache_init_fs(size_t pagesize)
static int tmem_cleancache_init_shared_fs(char *uuid, size_t pagesize)
static int use_cleancache = 1;
static int __init no_cleancache(char *s)
__setup("nocleancache", no_cleancache);
static struct cleancache_ops tmem_cleancache_ops = ;
static int __init xen_tmem_init(void)
module_init(xen_tmem_init)
