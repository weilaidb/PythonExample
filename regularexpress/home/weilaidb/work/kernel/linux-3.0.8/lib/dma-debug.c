#define HASH_SIZE       1024ULL
#define HASH_FN_SHIFT   13
#define HASH_FN_MASK    (HASH_SIZE - 1)
enum ;
#define DMA_DEBUG_STACKTRACE_ENTRIES 5
struct dma_debug_entry ;
struct hash_bucket  ____cacheline_aligned_in_smp;
static struct hash_bucket dma_entry_hash[HASH_SIZE];
static LIST_HEAD(free_entries);
static DEFINE_SPINLOCK(free_entries_lock);
static bool global_disable __read_mostly;
static u32 error_count;
static u32 show_all_errors __read_mostly;
static u32 show_num_errors = 1;
static u32 num_free_entries;
static u32 min_free_entries;
static u32 nr_total_entries;
static u32 req_entries;
static struct dentry *dma_debug_dent        __read_mostly;
static struct dentry *global_disable_dent   __read_mostly;
static struct dentry *error_count_dent      __read_mostly;
static struct dentry *show_all_errors_dent  __read_mostly;
static struct dentry *show_num_errors_dent  __read_mostly;
static struct dentry *num_free_entries_dent __read_mostly;
static struct dentry *min_free_entries_dent __read_mostly;
static struct dentry *filter_dent           __read_mostly;
#define NAME_MAX_LEN	64
static char                  current_driver_name[NAME_MAX_LEN] __read_mostly;
static struct device_driver *current_driver                    __read_mostly;
static DEFINE_RWLOCK(driver_name_lock);
static const char *type2name[4] = ;
static const char *dir2name[4] = ;
#define BUS_NOTIFY_UNBOUND_DRIVER 0x0005
static inline void dump_entry_trace(struct dma_debug_entry *entry)
static bool driver_filter(struct device *dev)
#define err_printk(dev, entry, format, arg...) do  while (0);
static int hash_fn(struct dma_debug_entry *entry)
static struct hash_bucket *get_hash_bucket(struct dma_debug_entry *entry,
unsigned long *flags)
static void put_hash_bucket(struct hash_bucket *bucket,
unsigned long *flags)
static struct dma_debug_entry *hash_bucket_find(struct hash_bucket *bucket,
struct dma_debug_entry *ref)
static void hash_bucket_add(struct hash_bucket *bucket,
struct dma_debug_entry *entry)
static void hash_bucket_del(struct dma_debug_entry *entry)
void debug_dma_dump_mappings(struct device *dev)
EXPORT_SYMBOL(debug_dma_dump_mappings);
static void add_dma_entry(struct dma_debug_entry *entry)
static struct dma_debug_entry *__dma_entry_alloc(void)
static struct dma_debug_entry *dma_entry_alloc(void)
static void dma_entry_free(struct dma_debug_entry *entry)
int dma_debug_resize_entries(u32 num_entries)
EXPORT_SYMBOL(dma_debug_resize_entries);
static int prealloc_memory(u32 num_entries)
static ssize_t filter_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t filter_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations filter_fops = ;
static int dma_debug_fs_init(void)
static int device_dma_allocations(struct device *dev, struct dma_debug_entry **out_entry)
static int dma_debug_device_change(struct notifier_block *nb, unsigned long action, void *data)
void dma_debug_add_bus(struct bus_type *bus)
void dma_debug_init(u32 num_entries)
static __init int dma_debug_cmdline(char *str)
static __init int dma_debug_entries_cmdline(char *str)
__setup("dma_debug=", dma_debug_cmdline);
__setup("dma_debug_entries=", dma_debug_entries_cmdline);
static void check_unmap(struct dma_debug_entry *ref)
static void check_for_stack(struct device *dev, void *addr)
static inline bool overlap(void *addr, unsigned long len, void *start, void *end)
static void check_for_illegal_area(struct device *dev, void *addr, unsigned long len)
static void check_sync(struct device *dev,
struct dma_debug_entry *ref,
bool to_cpu)
void debug_dma_map_page(struct device *dev, struct page *page, size_t offset,
size_t size, int direction, dma_addr_t dma_addr,
bool map_single)
EXPORT_SYMBOL(debug_dma_map_page);
void debug_dma_unmap_page(struct device *dev, dma_addr_t addr,
size_t size, int direction, bool map_single)
EXPORT_SYMBOL(debug_dma_unmap_page);
void debug_dma_map_sg(struct device *dev, struct scatterlist *sg,
int nents, int mapped_ents, int direction)
EXPORT_SYMBOL(debug_dma_map_sg);
static int get_nr_mapped_entries(struct device *dev,
struct dma_debug_entry *ref)
void debug_dma_unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems, int dir)
EXPORT_SYMBOL(debug_dma_unmap_sg);
void debug_dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t dma_addr, void *virt)
EXPORT_SYMBOL(debug_dma_alloc_coherent);
void debug_dma_free_coherent(struct device *dev, size_t size,
void *virt, dma_addr_t addr)
EXPORT_SYMBOL(debug_dma_free_coherent);
void debug_dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle,
size_t size, int direction)
EXPORT_SYMBOL(debug_dma_sync_single_for_cpu);
void debug_dma_sync_single_for_device(struct device *dev,
dma_addr_t dma_handle, size_t size,
int direction)
EXPORT_SYMBOL(debug_dma_sync_single_for_device);
void debug_dma_sync_single_range_for_cpu(struct device *dev,
dma_addr_t dma_handle,
unsigned long offset, size_t size,
int direction)
EXPORT_SYMBOL(debug_dma_sync_single_range_for_cpu);
void debug_dma_sync_single_range_for_device(struct device *dev,
dma_addr_t dma_handle,
unsigned long offset,
size_t size, int direction)
EXPORT_SYMBOL(debug_dma_sync_single_range_for_device);
void debug_dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int nelems, int direction)
EXPORT_SYMBOL(debug_dma_sync_sg_for_cpu);
void debug_dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nelems, int direction)
EXPORT_SYMBOL(debug_dma_sync_sg_for_device);
static int __init dma_debug_driver_setup(char *str)
__setup("dma_debug_driver=", dma_debug_driver_setup);
