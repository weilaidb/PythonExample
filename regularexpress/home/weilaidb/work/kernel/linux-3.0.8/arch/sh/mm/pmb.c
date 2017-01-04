struct pmb_entry;
struct pmb_entry ;
static struct  pmb_sizes[] = ;
static void pmb_unmap_entry(struct pmb_entry *, int depth);
static DEFINE_RWLOCK(pmb_rwlock);
static struct pmb_entry pmb_entry_list[NR_PMB_ENTRIES];
static DECLARE_BITMAP(pmb_map, NR_PMB_ENTRIES);
static unsigned int pmb_iomapping_enabled;
static __always_inline unsigned long mk_pmb_entry(unsigned int entry)
static __always_inline unsigned long mk_pmb_addr(unsigned int entry)
static __always_inline unsigned long mk_pmb_data(unsigned int entry)
static __always_inline unsigned int pmb_ppn_in_range(unsigned long ppn)
static __always_inline unsigned long pmb_cache_flags(void)
static inline unsigned long pgprot_to_pmb_flags(pgprot_t prot)
static inline bool pmb_can_merge(struct pmb_entry *a, struct pmb_entry *b)
static bool pmb_mapping_exists(unsigned long vaddr, phys_addr_t phys,
unsigned long size)
static bool pmb_size_valid(unsigned long size)
static inline bool pmb_addr_valid(unsigned long addr, unsigned long size)
static inline bool pmb_prot_valid(pgprot_t prot)
static int pmb_size_to_flags(unsigned long size)
static int pmb_alloc_entry(void)
static struct pmb_entry *pmb_alloc(unsigned long vpn, unsigned long ppn,
unsigned long flags, int entry)
static void pmb_free(struct pmb_entry *pmbe)
static void __set_pmb_entry(struct pmb_entry *pmbe)
static void __clear_pmb_entry(struct pmb_entry *pmbe)
static void set_pmb_entry(struct pmb_entry *pmbe)
int pmb_bolt_mapping(unsigned long vaddr, phys_addr_t phys,
unsigned long size, pgprot_t prot)
void __iomem *pmb_remap_caller(phys_addr_t phys, unsigned long size,
pgprot_t prot, void *caller)
int pmb_unmap(void __iomem *addr)
static void __pmb_unmap_entry(struct pmb_entry *pmbe, int depth)
static void pmb_unmap_entry(struct pmb_entry *pmbe, int depth)
static void __init pmb_notify(void)
static void __init pmb_synchronize(void)
static void __init pmb_merge(struct pmb_entry *head)
static void __init pmb_coalesce(void)
static void __init pmb_resize(void)
static int __init early_pmb(char *p)
early_param("pmb", early_pmb);
void __init pmb_init(void)
bool __in_29bit_mode(void)
static int pmb_seq_show(struct seq_file *file, void *iter)
static int pmb_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations pmb_debugfs_fops = ;
static int __init pmb_debugfs_init(void)
subsys_initcall(pmb_debugfs_init);
static void pmb_syscore_resume(void)
static struct syscore_ops pmb_syscore_ops = ;
static int __init pmb_sysdev_init(void)
subsys_initcall(pmb_sysdev_init);
