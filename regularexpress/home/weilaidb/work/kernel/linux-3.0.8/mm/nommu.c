void *high_memory;
struct page *mem_map;
unsigned long max_mapnr;
unsigned long num_physpages;
unsigned long highest_memmap_pfn;
struct percpu_counter vm_committed_as;
int sysctl_overcommit_memory = OVERCOMMIT_GUESS;
int sysctl_overcommit_ratio = 50;
int sysctl_max_map_count = DEFAULT_MAX_MAP_COUNT;
int sysctl_nr_trim_pages = CONFIG_NOMMU_INITIAL_TRIM_EXCESS;
int heap_stack_gap = 0;
atomic_long_t mmap_pages_allocated;
EXPORT_SYMBOL(mem_map);
EXPORT_SYMBOL(num_physpages);
static struct kmem_cache *vm_region_jar;
struct rb_root nommu_region_tree = RB_ROOT;
DECLARE_RWSEM(nommu_region_sem);
const struct vm_operations_struct generic_file_vm_ops = ;
unsigned int kobjsize(const void *objp)
int __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int nr_pages, unsigned int foll_flags,
struct page **pages, struct vm_area_struct **vmas,
int *retry)
int get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int nr_pages, int write, int force,
struct page **pages, struct vm_area_struct **vmas)
EXPORT_SYMBOL(get_user_pages);
int follow_pfn(struct vm_area_struct *vma, unsigned long address,
unsigned long *pfn)
EXPORT_SYMBOL(follow_pfn);
DEFINE_RWLOCK(vmlist_lock);
struct vm_struct *vmlist;
void vfree(const void *addr)
EXPORT_SYMBOL(vfree);
void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot)
EXPORT_SYMBOL(__vmalloc);
void *vmalloc_user(unsigned long size)
EXPORT_SYMBOL(vmalloc_user);
struct page *vmalloc_to_page(const void *addr)
EXPORT_SYMBOL(vmalloc_to_page);
unsigned long vmalloc_to_pfn(const void *addr)
EXPORT_SYMBOL(vmalloc_to_pfn);
long vread(char *buf, char *addr, unsigned long count)
long vwrite(char *buf, char *addr, unsigned long count)
void *vmalloc(unsigned long size)
EXPORT_SYMBOL(vmalloc);
void *vzalloc(unsigned long size)
EXPORT_SYMBOL(vzalloc);
void *vmalloc_node(unsigned long size, int node)
EXPORT_SYMBOL(vmalloc_node);
void *vzalloc_node(unsigned long size, int node)
EXPORT_SYMBOL(vzalloc_node);
# define PAGE_KERNEL_EXEC PAGE_KERNEL
void *vmalloc_exec(unsigned long size)
void *vmalloc_32(unsigned long size)
EXPORT_SYMBOL(vmalloc_32);
void *vmalloc_32_user(unsigned long size)
EXPORT_SYMBOL(vmalloc_32_user);
void *vmap(struct page **pages, unsigned int count, unsigned long flags, pgprot_t prot)
EXPORT_SYMBOL(vmap);
void vunmap(const void *addr)
EXPORT_SYMBOL(vunmap);
void *vm_map_ram(struct page **pages, unsigned int count, int node, pgprot_t prot)
EXPORT_SYMBOL(vm_map_ram);
void vm_unmap_ram(const void *mem, unsigned int count)
EXPORT_SYMBOL(vm_unmap_ram);
void vm_unmap_aliases(void)
EXPORT_SYMBOL_GPL(vm_unmap_aliases);
void  __attribute__((weak)) vmalloc_sync_all(void)
struct vm_struct *alloc_vm_area(size_t size)
EXPORT_SYMBOL_GPL(alloc_vm_area);
void free_vm_area(struct vm_struct *area)
EXPORT_SYMBOL_GPL(free_vm_area);
int vm_insert_page(struct vm_area_struct *vma, unsigned long addr,
struct page *page)
EXPORT_SYMBOL(vm_insert_page);
SYSCALL_DEFINE1(brk, unsigned long, brk)
void __init mmap_init(void)
static noinline void validate_nommu_regions(void)
static void validate_nommu_regions(void)
static void add_nommu_region(struct vm_region *region)
static void delete_nommu_region(struct vm_region *region)
static void free_page_series(unsigned long from, unsigned long to)
static void __put_nommu_region(struct vm_region *region)
__releases(nommu_region_sem)
static void put_nommu_region(struct vm_region *region)
static void protect_vma(struct vm_area_struct *vma, unsigned long flags)
static void add_vma_to_mm(struct mm_struct *mm, struct vm_area_struct *vma)
static void delete_vma_from_mm(struct vm_area_struct *vma)
static void delete_vma(struct mm_struct *mm, struct vm_area_struct *vma)
struct vm_area_struct *find_vma(struct mm_struct *mm, unsigned long addr)
EXPORT_SYMBOL(find_vma);
struct vm_area_struct *find_extend_vma(struct mm_struct *mm, unsigned long addr)
int expand_stack(struct vm_area_struct *vma, unsigned long address)
static struct vm_area_struct *find_vma_exact(struct mm_struct *mm,
unsigned long addr,
unsigned long len)
static int validate_mmap_request(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long prot,
unsigned long flags,
unsigned long pgoff,
unsigned long *_capabilities)
static unsigned long determine_vm_flags(struct file *file,
unsigned long prot,
unsigned long flags,
unsigned long capabilities)
static int do_mmap_shared_file(struct vm_area_struct *vma)
static int do_mmap_private(struct vm_area_struct *vma,
struct vm_region *region,
unsigned long len,
unsigned long capabilities)
unsigned long do_mmap_pgoff(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long prot,
unsigned long flags,
unsigned long pgoff)
EXPORT_SYMBOL(do_mmap_pgoff);
SYSCALL_DEFINE6(mmap_pgoff, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags,
unsigned long, fd, unsigned long, pgoff)
struct mmap_arg_struct ;
SYSCALL_DEFINE1(old_mmap, struct mmap_arg_struct __user *, arg)
int split_vma(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, int new_below)
static int shrink_vma(struct mm_struct *mm,
struct vm_area_struct *vma,
unsigned long from, unsigned long to)
int do_munmap(struct mm_struct *mm, unsigned long start, size_t len)
EXPORT_SYMBOL(do_munmap);
SYSCALL_DEFINE2(munmap, unsigned long, addr, size_t, len)
void exit_mmap(struct mm_struct *mm)
unsigned long do_brk(unsigned long addr, unsigned long len)
unsigned long do_mremap(unsigned long addr,
unsigned long old_len, unsigned long new_len,
unsigned long flags, unsigned long new_addr)
EXPORT_SYMBOL(do_mremap);
SYSCALL_DEFINE5(mremap, unsigned long, addr, unsigned long, old_len,
unsigned long, new_len, unsigned long, flags,
unsigned long, new_addr)
struct page *follow_page(struct vm_area_struct *vma, unsigned long address,
unsigned int foll_flags)
int remap_pfn_range(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn, unsigned long size, pgprot_t prot)
EXPORT_SYMBOL(remap_pfn_range);
int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
unsigned long pgoff)
EXPORT_SYMBOL(remap_vmalloc_range);
unsigned long arch_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
void arch_unmap_area(struct mm_struct *mm, unsigned long addr)
void unmap_mapping_range(struct address_space *mapping,
loff_t const holebegin, loff_t const holelen,
int even_cows)
EXPORT_SYMBOL(unmap_mapping_range);
int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin)
int in_gate_area_no_mm(unsigned long addr)
int filemap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
EXPORT_SYMBOL(filemap_fault);
static int __access_remote_vm(struct task_struct *tsk, struct mm_struct *mm,
unsigned long addr, void *buf, int len, int write)
int access_remote_vm(struct mm_struct *mm, unsigned long addr,
void *buf, int len, int write)
int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write)
int nommu_shrink_inode_mappings(struct inode *inode, size_t size,
size_t newsize)
