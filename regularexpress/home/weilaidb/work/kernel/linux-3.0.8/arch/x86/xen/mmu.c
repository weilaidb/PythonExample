DEFINE_SPINLOCK(xen_reservation_lock);
#define LEVEL1_IDENT_ENTRIES	(PTRS_PER_PTE * 4)
static RESERVE_BRK_ARRAY(pte_t, level1_ident_pgt, LEVEL1_IDENT_ENTRIES);
static pud_t level3_user_vsyscall[PTRS_PER_PUD] __page_aligned_bss;
DEFINE_PER_CPU(unsigned long, xen_cr3);
DEFINE_PER_CPU(unsigned long, xen_current_cr3);
#define USER_LIMIT	((STACK_TOP_MAX + PGDIR_SIZE - 1) & PGDIR_MASK)
unsigned long arbitrary_virt_to_mfn(void *vaddr)
xmaddr_t arbitrary_virt_to_machine(void *vaddr)
EXPORT_SYMBOL_GPL(arbitrary_virt_to_machine);
void make_lowmem_page_readonly(void *vaddr)
void make_lowmem_page_readwrite(void *vaddr)
static bool xen_page_pinned(void *ptr)
void xen_set_domain_pte(pte_t *ptep, pte_t pteval, unsigned domid)
EXPORT_SYMBOL_GPL(xen_set_domain_pte);
static void xen_extend_mmu_update(const struct mmu_update *update)
static void xen_set_pmd_hyper(pmd_t *ptr, pmd_t val)
static void xen_set_pmd(pmd_t *ptr, pmd_t val)
void set_pte_mfn(unsigned long vaddr, unsigned long mfn, pgprot_t flags)
static bool xen_batched_set_pte(pte_t *ptep, pte_t pteval)
static void xen_set_pte(pte_t *ptep, pte_t pteval)
static void xen_set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pteval)
pte_t xen_ptep_modify_prot_start(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
void xen_ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static pteval_t pte_mfn_to_pfn(pteval_t val)
static pteval_t pte_pfn_to_mfn(pteval_t val)
static pteval_t iomap_pte(pteval_t val)
static pteval_t xen_pte_val(pte_t pte)
PV_CALLEE_SAVE_REGS_THUNK(xen_pte_val);
static pgdval_t xen_pgd_val(pgd_t pgd)
PV_CALLEE_SAVE_REGS_THUNK(xen_pgd_val);
void xen_set_pat(u64 pat)
static pte_t xen_make_pte(pteval_t pte)
PV_CALLEE_SAVE_REGS_THUNK(xen_make_pte);
pte_t xen_make_pte_debug(pteval_t pte)
PV_CALLEE_SAVE_REGS_THUNK(xen_make_pte_debug);
static pgd_t xen_make_pgd(pgdval_t pgd)
PV_CALLEE_SAVE_REGS_THUNK(xen_make_pgd);
static pmdval_t xen_pmd_val(pmd_t pmd)
PV_CALLEE_SAVE_REGS_THUNK(xen_pmd_val);
static void xen_set_pud_hyper(pud_t *ptr, pud_t val)
static void xen_set_pud(pud_t *ptr, pud_t val)
static void xen_set_pte_atomic(pte_t *ptep, pte_t pte)
static void xen_pte_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
static void xen_pmd_clear(pmd_t *pmdp)
static pmd_t xen_make_pmd(pmdval_t pmd)
PV_CALLEE_SAVE_REGS_THUNK(xen_make_pmd);
#if PAGETABLE_LEVELS == 4
static pudval_t xen_pud_val(pud_t pud)
PV_CALLEE_SAVE_REGS_THUNK(xen_pud_val);
static pud_t xen_make_pud(pudval_t pud)
PV_CALLEE_SAVE_REGS_THUNK(xen_make_pud);
static pgd_t *xen_get_user_pgd(pgd_t *pgd)
static void __xen_set_pgd_hyper(pgd_t *ptr, pgd_t val)
static void __init xen_set_pgd_hyper(pgd_t *ptr, pgd_t val)
static void xen_set_pgd(pgd_t *ptr, pgd_t val)
static int __xen_pgd_walk(struct mm_struct *mm, pgd_t *pgd,
int (*func)(struct mm_struct *mm, struct page *,
enum pt_level),
unsigned long limit)
static int xen_pgd_walk(struct mm_struct *mm,
int (*func)(struct mm_struct *mm, struct page *,
enum pt_level),
unsigned long limit)
static spinlock_t *xen_pte_lock(struct page *page, struct mm_struct *mm)
static void xen_pte_unlock(void *v)
static void xen_do_pin(unsigned level, unsigned long pfn)
static int xen_pin_page(struct mm_struct *mm, struct page *page,
enum pt_level level)
static void __xen_pgd_pin(struct mm_struct *mm, pgd_t *pgd)
static void xen_pgd_pin(struct mm_struct *mm)
void xen_mm_pin_all(void)
static int __init xen_mark_pinned(struct mm_struct *mm, struct page *page,
enum pt_level level)
static void __init xen_mark_init_mm_pinned(void)
static int xen_unpin_page(struct mm_struct *mm, struct page *page,
enum pt_level level)
static void __xen_pgd_unpin(struct mm_struct *mm, pgd_t *pgd)
static void xen_pgd_unpin(struct mm_struct *mm)
void xen_mm_unpin_all(void)
static void xen_activate_mm(struct mm_struct *prev, struct mm_struct *next)
static void xen_dup_mmap(struct mm_struct *oldmm, struct mm_struct *mm)
static void drop_other_mm_ref(void *info)
static void xen_drop_mm_ref(struct mm_struct *mm)
static void xen_drop_mm_ref(struct mm_struct *mm)
static void xen_exit_mmap(struct mm_struct *mm)
static void __init xen_pagetable_setup_start(pgd_t *base)
static __init void xen_mapping_pagetable_reserve(u64 start, u64 end)
static void xen_post_allocator_init(void);
static void __init xen_pagetable_setup_done(pgd_t *base)
static void xen_write_cr2(unsigned long cr2)
static unsigned long xen_read_cr2(void)
unsigned long xen_read_cr2_direct(void)
static void xen_flush_tlb(void)
static void xen_flush_tlb_single(unsigned long addr)
static void xen_flush_tlb_others(const struct cpumask *cpus,
struct mm_struct *mm, unsigned long va)
static unsigned long xen_read_cr3(void)
static void set_current_cr3(void *v)
static void __xen_write_cr3(bool kernel, unsigned long cr3)
static void xen_write_cr3(unsigned long cr3)
static int xen_pgd_alloc(struct mm_struct *mm)
static void xen_pgd_free(struct mm_struct *mm, pgd_t *pgd)
static pte_t __init mask_rw_pte(pte_t *ptep, pte_t pte)
static pte_t __init mask_rw_pte(pte_t *ptep, pte_t pte)
static void __init xen_set_pte_init(pte_t *ptep, pte_t pte)
static void pin_pagetable_pfn(unsigned cmd, unsigned long pfn)
static void __init xen_alloc_pte_init(struct mm_struct *mm, unsigned long pfn)
static void __init xen_alloc_pmd_init(struct mm_struct *mm, unsigned long pfn)
static void __init xen_release_pte_init(unsigned long pfn)
static void __init xen_release_pmd_init(unsigned long pfn)
static void xen_alloc_ptpage(struct mm_struct *mm, unsigned long pfn, unsigned level)
static void xen_alloc_pte(struct mm_struct *mm, unsigned long pfn)
static void xen_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
static void xen_release_ptpage(unsigned long pfn, unsigned level)
static void xen_release_pte(unsigned long pfn)
static void xen_release_pmd(unsigned long pfn)
#if PAGETABLE_LEVELS == 4
static void xen_alloc_pud(struct mm_struct *mm, unsigned long pfn)
static void xen_release_pud(unsigned long pfn)
void __init xen_reserve_top(void)
static void *__ka(phys_addr_t paddr)
static unsigned long m2p(phys_addr_t maddr)
static void *m2v(phys_addr_t maddr)
static void set_page_prot(void *addr, pgprot_t prot)
static void __init xen_map_identity_early(pmd_t *pmd, unsigned long max_pfn)
void __init xen_setup_machphys_mapping(void)
static void convert_pfn_mfn(void *v)
pgd_t * __init xen_setup_kernel_pagetable(pgd_t *pgd,
unsigned long max_pfn)
static RESERVE_BRK_ARRAY(pmd_t, initial_kernel_pmd, PTRS_PER_PMD);
static RESERVE_BRK_ARRAY(pmd_t, swapper_kernel_pmd, PTRS_PER_PMD);
static void __init xen_write_cr3_init(unsigned long cr3)
pgd_t * __init xen_setup_kernel_pagetable(pgd_t *pgd,
unsigned long max_pfn)
static unsigned char dummy_mapping[PAGE_SIZE] __page_aligned_bss;
static void xen_set_fixmap(unsigned idx, phys_addr_t phys, pgprot_t prot)
void __init xen_ident_map_ISA(void)
static void __init xen_post_allocator_init(void)
static void xen_leave_lazy_mmu(void)
static const struct pv_mmu_ops xen_mmu_ops __initconst = ;
void __init xen_init_mmu_ops(void)
#define MAX_CONTIG_ORDER 9
static unsigned long discontig_frames[1<<MAX_CONTIG_ORDER];
#define VOID_PTE (mfn_pte(0, __pgprot(0)))
static void xen_zap_pfn_range(unsigned long vaddr, unsigned int order,
unsigned long *in_frames,
unsigned long *out_frames)
static void xen_remap_exchanged_ptes(unsigned long vaddr, int order,
unsigned long *mfns,
unsigned long first_mfn)
static int xen_exchange_memory(unsigned long extents_in, unsigned int order_in,
unsigned long *pfns_in,
unsigned long extents_out,
unsigned int order_out,
unsigned long *mfns_out,
unsigned int address_bits)
int xen_create_contiguous_region(unsigned long vstart, unsigned int order,
unsigned int address_bits)
EXPORT_SYMBOL_GPL(xen_create_contiguous_region);
void xen_destroy_contiguous_region(unsigned long vstart, unsigned int order)
EXPORT_SYMBOL_GPL(xen_destroy_contiguous_region);
static void xen_hvm_exit_mmap(struct mm_struct *mm)
static int is_pagetable_dying_supported(void)
void __init xen_hvm_init_mmu_ops(void)
#define REMAP_BATCH_SIZE 16
struct remap_data ;
static int remap_area_mfn_pte_fn(pte_t *ptep, pgtable_t token,
unsigned long addr, void *data)
int xen_remap_domain_mfn_range(struct vm_area_struct *vma,
unsigned long addr,
unsigned long mfn, int nr,
pgprot_t prot, unsigned domid)
EXPORT_SYMBOL_GPL(xen_remap_domain_mfn_range);
static int p2m_dump_open(struct inode *inode, struct file *filp)
static const struct file_operations p2m_dump_fops = ;
