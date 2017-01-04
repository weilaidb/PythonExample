static void vunmap_pte_range(pmd_t *pmd, unsigned long addr, unsigned long end)
static void vunmap_pmd_range(pud_t *pud, unsigned long addr, unsigned long end)
static void vunmap_pud_range(pgd_t *pgd, unsigned long addr, unsigned long end)
static void vunmap_page_range(unsigned long addr, unsigned long end)
static int vmap_pte_range(pmd_t *pmd, unsigned long addr,
unsigned long end, pgprot_t prot, struct page **pages, int *nr)
static int vmap_pmd_range(pud_t *pud, unsigned long addr,
unsigned long end, pgprot_t prot, struct page **pages, int *nr)
static int vmap_pud_range(pgd_t *pgd, unsigned long addr,
unsigned long end, pgprot_t prot, struct page **pages, int *nr)
static int vmap_page_range_noflush(unsigned long start, unsigned long end,
pgprot_t prot, struct page **pages)
static int vmap_page_range(unsigned long start, unsigned long end,
pgprot_t prot, struct page **pages)
int is_vmalloc_or_module_addr(const void *x)
struct page *vmalloc_to_page(const void *vmalloc_addr)
EXPORT_SYMBOL(vmalloc_to_page);
unsigned long vmalloc_to_pfn(const void *vmalloc_addr)
EXPORT_SYMBOL(vmalloc_to_pfn);
#define VM_LAZY_FREE	0x01
#define VM_LAZY_FREEING	0x02
#define VM_VM_AREA	0x04
struct vmap_area ;
static DEFINE_SPINLOCK(vmap_area_lock);
static LIST_HEAD(vmap_area_list);
static struct rb_root vmap_area_root = RB_ROOT;
static struct rb_node *free_vmap_cache;
static unsigned long cached_hole_size;
static unsigned long cached_vstart;
static unsigned long cached_align;
static unsigned long vmap_area_pcpu_hole;
static struct vmap_area *__find_vmap_area(unsigned long addr)
static void __insert_vmap_area(struct vmap_area *va)
static void purge_vmap_area_lazy(void);
static struct vmap_area *alloc_vmap_area(unsigned long size,
unsigned long align,
unsigned long vstart, unsigned long vend,
int node, gfp_t gfp_mask)
static void rcu_free_va(struct rcu_head *head)
static void __free_vmap_area(struct vmap_area *va)
static void free_vmap_area(struct vmap_area *va)
static void unmap_vmap_area(struct vmap_area *va)
static void vmap_debug_free_range(unsigned long start, unsigned long end)
static unsigned long lazy_max_pages(void)
static atomic_t vmap_lazy_nr = ATOMIC_INIT(0);
static void purge_fragmented_blocks_allcpus(void);
void set_iounmap_nonlazy(void)
static void __purge_vmap_area_lazy(unsigned long *start, unsigned long *end,
int sync, int force_flush)
static void try_purge_vmap_area_lazy(void)
static void purge_vmap_area_lazy(void)
static void free_vmap_area_noflush(struct vmap_area *va)
static void free_unmap_vmap_area_noflush(struct vmap_area *va)
static void free_unmap_vmap_area(struct vmap_area *va)
static struct vmap_area *find_vmap_area(unsigned long addr)
static void free_unmap_vmap_area_addr(unsigned long addr)
#if BITS_PER_LONG == 32
#define VMALLOC_SPACE		(128UL*1024*1024)
#define VMALLOC_SPACE		(128UL*1024*1024*1024)
#define VMALLOC_PAGES		(VMALLOC_SPACE / PAGE_SIZE)
#define VMAP_MAX_ALLOC		BITS_PER_LONG
#define VMAP_BBMAP_BITS_MAX	1024
#define VMAP_BBMAP_BITS_MIN	(VMAP_MAX_ALLOC*2)
#define VMAP_MIN(x, y)		((x) < (y) ? (x) : (y))
#define VMAP_MAX(x, y)		((x) > (y) ? (x) : (y))
#define VMAP_BBMAP_BITS		\
VMAP_MIN(VMAP_BBMAP_BITS_MAX,	\
VMAP_MAX(VMAP_BBMAP_BITS_MIN,	\
VMALLOC_PAGES / roundup_pow_of_two(NR_CPUS) / 16))
#define VMAP_BLOCK_SIZE		(VMAP_BBMAP_BITS * PAGE_SIZE)
static bool vmap_initialized __read_mostly = false;
struct vmap_block_queue ;
struct vmap_block ;
static DEFINE_PER_CPU(struct vmap_block_queue, vmap_block_queue);
static DEFINE_SPINLOCK(vmap_block_tree_lock);
static RADIX_TREE(vmap_block_tree, GFP_ATOMIC);
static unsigned long addr_to_vb_idx(unsigned long addr)
static struct vmap_block *new_vmap_block(gfp_t gfp_mask)
static void rcu_free_vb(struct rcu_head *head)
static void free_vmap_block(struct vmap_block *vb)
static void purge_fragmented_blocks(int cpu)
static void purge_fragmented_blocks_thiscpu(void)
static void purge_fragmented_blocks_allcpus(void)
static void *vb_alloc(unsigned long size, gfp_t gfp_mask)
static void vb_free(const void *addr, unsigned long size)
void vm_unmap_aliases(void)
EXPORT_SYMBOL_GPL(vm_unmap_aliases);
void vm_unmap_ram(const void *mem, unsigned int count)
EXPORT_SYMBOL(vm_unmap_ram);
void *vm_map_ram(struct page **pages, unsigned int count, int node, pgprot_t prot)
EXPORT_SYMBOL(vm_map_ram);
void __init vm_area_register_early(struct vm_struct *vm, size_t align)
void __init vmalloc_init(void)
int map_kernel_range_noflush(unsigned long addr, unsigned long size,
pgprot_t prot, struct page **pages)
void unmap_kernel_range_noflush(unsigned long addr, unsigned long size)
EXPORT_SYMBOL_GPL(unmap_kernel_range_noflush);
void unmap_kernel_range(unsigned long addr, unsigned long size)
int map_vm_area(struct vm_struct *area, pgprot_t prot, struct page ***pages)
EXPORT_SYMBOL_GPL(map_vm_area);
DEFINE_RWLOCK(vmlist_lock);
struct vm_struct *vmlist;
static void insert_vmalloc_vm(struct vm_struct *vm, struct vmap_area *va,
unsigned long flags, void *caller)
static struct vm_struct *__get_vm_area_node(unsigned long size,
unsigned long align, unsigned long flags, unsigned long start,
unsigned long end, int node, gfp_t gfp_mask, void *caller)
struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
unsigned long start, unsigned long end)
EXPORT_SYMBOL_GPL(__get_vm_area);
struct vm_struct *__get_vm_area_caller(unsigned long size, unsigned long flags,
unsigned long start, unsigned long end,
void *caller)
struct vm_struct *get_vm_area(unsigned long size, unsigned long flags)
struct vm_struct *get_vm_area_caller(unsigned long size, unsigned long flags,
void *caller)
static struct vm_struct *find_vm_area(const void *addr)
struct vm_struct *remove_vm_area(const void *addr)
static void __vunmap(const void *addr, int deallocate_pages)
void vfree(const void *addr)
EXPORT_SYMBOL(vfree);
void vunmap(const void *addr)
EXPORT_SYMBOL(vunmap);
void *vmap(struct page **pages, unsigned int count,
unsigned long flags, pgprot_t prot)
EXPORT_SYMBOL(vmap);
static void *__vmalloc_node(unsigned long size, unsigned long align,
gfp_t gfp_mask, pgprot_t prot,
int node, void *caller);
static void *__vmalloc_area_node(struct vm_struct *area, gfp_t gfp_mask,
pgprot_t prot, int node, void *caller)
void *__vmalloc_node_range(unsigned long size, unsigned long align,
unsigned long start, unsigned long end, gfp_t gfp_mask,
pgprot_t prot, int node, void *caller)
static void *__vmalloc_node(unsigned long size, unsigned long align,
gfp_t gfp_mask, pgprot_t prot,
int node, void *caller)
void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot)
EXPORT_SYMBOL(__vmalloc);
static inline void *__vmalloc_node_flags(unsigned long size,
int node, gfp_t flags)
void *vmalloc(unsigned long size)
EXPORT_SYMBOL(vmalloc);
void *vzalloc(unsigned long size)
EXPORT_SYMBOL(vzalloc);
void *vmalloc_user(unsigned long size)
EXPORT_SYMBOL(vmalloc_user);
void *vmalloc_node(unsigned long size, int node)
EXPORT_SYMBOL(vmalloc_node);
void *vzalloc_node(unsigned long size, int node)
EXPORT_SYMBOL(vzalloc_node);
# define PAGE_KERNEL_EXEC PAGE_KERNEL
void *vmalloc_exec(unsigned long size)
#if defined(CONFIG_64BIT) && defined(CONFIG_ZONE_DMA32)
#define GFP_VMALLOC32 GFP_DMA32 | GFP_KERNEL
#elif defined(CONFIG_64BIT) && defined(CONFIG_ZONE_DMA)
#define GFP_VMALLOC32 GFP_DMA | GFP_KERNEL
#define GFP_VMALLOC32 GFP_KERNEL
void *vmalloc_32(unsigned long size)
EXPORT_SYMBOL(vmalloc_32);
void *vmalloc_32_user(unsigned long size)
EXPORT_SYMBOL(vmalloc_32_user);
static int aligned_vread(char *buf, char *addr, unsigned long count)
static int aligned_vwrite(char *buf, char *addr, unsigned long count)
long vread(char *buf, char *addr, unsigned long count)
long vwrite(char *buf, char *addr, unsigned long count)
int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
unsigned long pgoff)
EXPORT_SYMBOL(remap_vmalloc_range);
void  __attribute__((weak)) vmalloc_sync_all(void)
static int f(pte_t *pte, pgtable_t table, unsigned long addr, void *data)
struct vm_struct *alloc_vm_area(size_t size)
EXPORT_SYMBOL_GPL(alloc_vm_area);
void free_vm_area(struct vm_struct *area)
EXPORT_SYMBOL_GPL(free_vm_area);
static struct vmap_area *node_to_va(struct rb_node *n)
static bool pvm_find_next_prev(unsigned long end,
struct vmap_area **pnext,
struct vmap_area **pprev)
static unsigned long pvm_determine_end(struct vmap_area **pnext,
struct vmap_area **pprev,
unsigned long align)
struct vm_struct **pcpu_get_vm_areas(const unsigned long *offsets,
const size_t *sizes, int nr_vms,
size_t align)
void pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms)
static void *s_start(struct seq_file *m, loff_t *pos)
__acquires(&vmlist_lock)
static void *s_next(struct seq_file *m, void *p, loff_t *pos)
static void s_stop(struct seq_file *m, void *p)
__releases(&vmlist_lock)
static void show_numa_info(struct seq_file *m, struct vm_struct *v)
static int s_show(struct seq_file *m, void *p)
static const struct seq_operations vmalloc_op = ;
static int vmalloc_open(struct inode *inode, struct file *file)
static const struct file_operations proc_vmalloc_operations = ;
static int __init proc_vmalloc_init(void)
module_init(proc_vmalloc_init);
