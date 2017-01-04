#define CORE_STR "CORE"
#define ELF_CORE_EFLAGS	0
static struct proc_dir_entry *proc_root_kcore;
#define	kc_vaddr_to_offset(v) ((v) - PAGE_OFFSET)
#define	kc_offset_to_vaddr(o) ((o) + PAGE_OFFSET)
struct memelfnote
;
static LIST_HEAD(kclist_head);
static DEFINE_RWLOCK(kclist_lock);
static int kcore_need_update = 1;
void
kclist_add(struct kcore_list *new, void *addr, size_t size, int type)
static size_t get_kcore_size(int *nphdr, size_t *elf_buflen)
static void free_kclist_ents(struct list_head *head)
static void __kcore_update_ram(struct list_head *list)
static int kcore_update_ram(void)
int get_sparsemem_vmemmap_info(struct kcore_list *ent, struct list_head *head)
int get_sparsemem_vmemmap_info(struct kcore_list *ent, struct list_head *head)
static int
kclist_add_private(unsigned long pfn, unsigned long nr_pages, void *arg)
static int kcore_update_ram(void)
static int notesize(struct memelfnote *en)
static char *storenote(struct memelfnote *men, char *bufp)
static void elf_kcore_store_hdr(char *bufp, int nphdr, int dataoff)
static ssize_t
read_kcore(struct file *file, char __user *buffer, size_t buflen, loff_t *fpos)
static int open_kcore(struct inode *inode, struct file *filp)
static const struct file_operations proc_kcore_operations = ;
static int __meminit kcore_callback(struct notifier_block *self,
unsigned long action, void *arg)
static struct kcore_list kcore_vmalloc;
static struct kcore_list kcore_text;
static void __init proc_kcore_text_init(void)
static void __init proc_kcore_text_init(void)
#if defined(CONFIG_MODULES) && defined(MODULES_VADDR)
struct kcore_list kcore_modules;
static void __init add_modules_range(void)
static void __init add_modules_range(void)
static int __init proc_kcore_init(void)
module_init(proc_kcore_init);
