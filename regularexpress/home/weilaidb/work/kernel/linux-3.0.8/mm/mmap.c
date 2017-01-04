#define arch_mmap_check(addr, len, flags)	(0)
#define arch_rebalance_pgtables(addr, len)		(addr)
static void unmap_region(struct mm_struct *mm,
struct vm_area_struct *vma, struct vm_area_struct *prev,
unsigned long start, unsigned long end);
#undef DEBUG_MM_RB
pgprot_t protection_map[16] = ;
pgprot_t vm_get_page_prot(unsigned long vm_flags)
EXPORT_SYMBOL(vm_get_page_prot);
int sysctl_overcommit_memory __read_mostly = OVERCOMMIT_GUESS;
int sysctl_overcommit_ratio __read_mostly = 50;
int sysctl_max_map_count __read_mostly = DEFAULT_MAX_MAP_COUNT;
struct percpu_counter vm_committed_as ____cacheline_aligned_in_smp;
int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin)
static void __remove_shared_vm_struct(struct vm_area_struct *vma,
struct file *file, struct address_space *mapping)
void unlink_file_vma(struct vm_area_struct *vma)
static struct vm_area_struct *remove_vma(struct vm_area_struct *vma)
SYSCALL_DEFINE1(brk, unsigned long, brk)
static int browse_rb(struct rb_root *root)
void validate_mm(struct mm_struct *mm)
#define validate_mm(mm) do  while (0)
static struct vm_area_struct *
find_vma_prepare(struct mm_struct *mm, unsigned long addr,
struct vm_area_struct **pprev, struct rb_node ***rb_link,
struct rb_node ** rb_parent)
void __vma_link_rb(struct mm_struct *mm, struct vm_area_struct *vma,
struct rb_node **rb_link, struct rb_node *rb_parent)
static void __vma_link_file(struct vm_area_struct *vma)
static void
__vma_link(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev, struct rb_node **rb_link,
struct rb_node *rb_parent)
static void vma_link(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev, struct rb_node **rb_link,
struct rb_node *rb_parent)
static void __insert_vm_struct(struct mm_struct *mm, struct vm_area_struct *vma)
static inline void
__vma_unlink(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev)
int vma_adjust(struct vm_area_struct *vma, unsigned long start,
unsigned long end, pgoff_t pgoff, struct vm_area_struct *insert)
static inline int is_mergeable_vma(struct vm_area_struct *vma,
struct file *file, unsigned long vm_flags)
static inline int is_mergeable_anon_vma(struct anon_vma *anon_vma1,
struct anon_vma *anon_vma2,
struct vm_area_struct *vma)
static int
can_vma_merge_before(struct vm_area_struct *vma, unsigned long vm_flags,
struct anon_vma *anon_vma, struct file *file, pgoff_t vm_pgoff)
static int
can_vma_merge_after(struct vm_area_struct *vma, unsigned long vm_flags,
struct anon_vma *anon_vma, struct file *file, pgoff_t vm_pgoff)
struct vm_area_struct *vma_merge(struct mm_struct *mm,
struct vm_area_struct *prev, unsigned long addr,
unsigned long end, unsigned long vm_flags,
struct anon_vma *anon_vma, struct file *file,
pgoff_t pgoff, struct mempolicy *policy)
static int anon_vma_compatible(struct vm_area_struct *a, struct vm_area_struct *b)
static struct anon_vma *reusable_anon_vma(struct vm_area_struct *old, struct vm_area_struct *a, struct vm_area_struct *b)
struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *vma)
void vm_stat_account(struct mm_struct *mm, unsigned long flags,
struct file *file, long pages)
unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
unsigned long len, unsigned long prot,
unsigned long flags, unsigned long pgoff)
EXPORT_SYMBOL(do_mmap_pgoff);
SYSCALL_DEFINE6(mmap_pgoff, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags,
unsigned long, fd, unsigned long, pgoff)
struct mmap_arg_struct ;
SYSCALL_DEFINE1(old_mmap, struct mmap_arg_struct __user *, arg)
int vma_wants_writenotify(struct vm_area_struct *vma)
static inline int accountable_mapping(struct file *file, vm_flags_t vm_flags)
unsigned long mmap_region(struct file *file, unsigned long addr,
unsigned long len, unsigned long flags,
vm_flags_t vm_flags, unsigned long pgoff)
unsigned long
arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
void arch_unmap_area(struct mm_struct *mm, unsigned long addr)
unsigned long
arch_get_unmapped_area_topdown(struct file *filp, const unsigned long addr0,
const unsigned long len, const unsigned long pgoff,
const unsigned long flags)
void arch_unmap_area_topdown(struct mm_struct *mm, unsigned long addr)
unsigned long
get_unmapped_area(struct file *file, unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
EXPORT_SYMBOL(get_unmapped_area);
struct vm_area_struct *find_vma(struct mm_struct *mm, unsigned long addr)
EXPORT_SYMBOL(find_vma);
struct vm_area_struct *
find_vma_prev(struct mm_struct *mm, unsigned long addr,
struct vm_area_struct **pprev)
static int acct_stack_growth(struct vm_area_struct *vma, unsigned long size, unsigned long grow)
#if defined(CONFIG_STACK_GROWSUP) || defined(CONFIG_IA64)
int expand_upwards(struct vm_area_struct *vma, unsigned long address)
int expand_downwards(struct vm_area_struct *vma,
unsigned long address)
int expand_stack(struct vm_area_struct *vma, unsigned long address)
struct vm_area_struct *
find_extend_vma(struct mm_struct *mm, unsigned long addr)
int expand_stack(struct vm_area_struct *vma, unsigned long address)
struct vm_area_struct *
find_extend_vma(struct mm_struct * mm, unsigned long addr)
static void remove_vma_list(struct mm_struct *mm, struct vm_area_struct *vma)
static void unmap_region(struct mm_struct *mm,
struct vm_area_struct *vma, struct vm_area_struct *prev,
unsigned long start, unsigned long end)
static void
detach_vmas_to_be_unmapped(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev, unsigned long end)
static int __split_vma(struct mm_struct * mm, struct vm_area_struct * vma,
unsigned long addr, int new_below)
int split_vma(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, int new_below)
int do_munmap(struct mm_struct *mm, unsigned long start, size_t len)
EXPORT_SYMBOL(do_munmap);
SYSCALL_DEFINE2(munmap, unsigned long, addr, size_t, len)
static inline void verify_mm_writelocked(struct mm_struct *mm)
unsigned long do_brk(unsigned long addr, unsigned long len)
EXPORT_SYMBOL(do_brk);
void exit_mmap(struct mm_struct *mm)
int insert_vm_struct(struct mm_struct * mm, struct vm_area_struct * vma)
struct vm_area_struct *copy_vma(struct vm_area_struct **vmap,
unsigned long addr, unsigned long len, pgoff_t pgoff)
int may_expand_vm(struct mm_struct *mm, unsigned long npages)
static int special_mapping_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
static void special_mapping_close(struct vm_area_struct *vma)
static const struct vm_operations_struct special_mapping_vmops = ;
int install_special_mapping(struct mm_struct *mm,
unsigned long addr, unsigned long len,
unsigned long vm_flags, struct page **pages)
static DEFINE_MUTEX(mm_all_locks_mutex);
static void vm_lock_anon_vma(struct mm_struct *mm, struct anon_vma *anon_vma)
static void vm_lock_mapping(struct mm_struct *mm, struct address_space *mapping)
int mm_take_all_locks(struct mm_struct *mm)
static void vm_unlock_anon_vma(struct anon_vma *anon_vma)
static void vm_unlock_mapping(struct address_space *mapping)
void mm_drop_all_locks(struct mm_struct *mm)
void __init mmap_init(void)
