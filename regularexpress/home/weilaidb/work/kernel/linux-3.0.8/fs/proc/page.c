#define KPMSIZE sizeof(u64)
#define KPMMASK (KPMSIZE - 1)
static ssize_t kpagecount_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_kpagecount_operations = ;
static inline u64 kpf_copy_bit(u64 kflags, int ubit, int kbit)
u64 stable_page_flags(struct page *page)
;
static ssize_t kpageflags_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_kpageflags_operations = ;
static int __init proc_page_init(void)
module_init(proc_page_init);
