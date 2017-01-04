#define NR_TASK_BUCKETS 512
extern int num_segmaps, num_contexts;
extern unsigned long page_kernel;
#define SUN4C_VAC_SIZE 65536
#define SUN4C_KERNEL_BUCKETS 32
struct sun4c_vac_props sun4c_vacinfo;
unsigned long sun4c_kernel_faults;
static void __init sun4c_flush_all(void)
static void sun4c_flush_context_hw(void)
static void sun4c_flush_segment_hw(unsigned long addr)
BTFIXUPDEF_CALL(void, sun4c_flush_page, unsigned long)
BTFIXUPDEF_CALL(void, sun4c_flush_segment, unsigned long)
BTFIXUPDEF_CALL(void, sun4c_flush_context, void)
#define sun4c_flush_page(addr) BTFIXUP_CALL(sun4c_flush_page)(addr)
#define sun4c_flush_segment(addr) BTFIXUP_CALL(sun4c_flush_segment)(addr)
#define sun4c_flush_context() BTFIXUP_CALL(sun4c_flush_context)()
static void sun4c_flush_page_hw(unsigned long addr)
static void sun4c_flush_context_sw(void)
static void sun4c_flush_segment_sw(unsigned long addr)
static void sun4c_flush_page_sw(unsigned long addr)
void sun4c_complete_all_stores(void)
static inline void sun4c_init_clean_segmap(unsigned char pseg)
static inline void sun4c_init_clean_mmu(unsigned long kernel_end)
void __init sun4c_probe_vac(void)
extern unsigned long invalid_segment_patch1, invalid_segment_patch1_ff;
extern unsigned long invalid_segment_patch2, invalid_segment_patch2_ff;
extern unsigned long invalid_segment_patch1_1ff, invalid_segment_patch2_1ff;
extern unsigned long num_context_patch1, num_context_patch1_16;
extern unsigned long num_context_patch2_16;
extern unsigned long vac_linesize_patch, vac_linesize_patch_32;
extern unsigned long vac_hwflush_patch1, vac_hwflush_patch1_on;
extern unsigned long vac_hwflush_patch2, vac_hwflush_patch2_on;
#define PATCH_INSN(src, dst) do  while (0)
static void __init patch_kernel_fault_handler(void)
static void __init sun4c_probe_mmu(void)
volatile unsigned long __iomem *sun4c_memerr_reg = NULL;
void __init sun4c_probe_memerr_reg(void)
static inline void sun4c_init_ss2_cache_bug(void)
static int sun4c_map_dma_area(struct device *dev, dma_addr_t *pba, unsigned long va,
unsigned long addr, int len)
static void sun4c_unmap_dma_area(struct device *dev, unsigned long busa, int len)
struct sun4c_mmu_entry ;
static struct sun4c_mmu_entry mmu_entry_pool[SUN4C_MAX_SEGMAPS];
static void __init sun4c_init_mmu_entry_pool(void)
static inline void fix_permissions(unsigned long vaddr, unsigned long bits_on,
unsigned long bits_off)
static inline void sun4c_init_map_kernelprom(unsigned long kernel_end)
static void __init sun4c_init_lock_area(unsigned long start, unsigned long end)
struct sun4c_mmu_ring ;
static struct sun4c_mmu_ring sun4c_context_ring[SUN4C_MAX_CONTEXTS];
static struct sun4c_mmu_ring sun4c_ufree_ring;
static struct sun4c_mmu_ring sun4c_ulru_ring;
struct sun4c_mmu_ring sun4c_kernel_ring;
struct sun4c_mmu_ring sun4c_kfree_ring;
static inline void sun4c_init_rings(void)
static void add_ring(struct sun4c_mmu_ring *ring,
struct sun4c_mmu_entry *entry)
static inline void add_lru(struct sun4c_mmu_entry *entry)
static void add_ring_ordered(struct sun4c_mmu_ring *ring,
struct sun4c_mmu_entry *entry)
static inline void remove_ring(struct sun4c_mmu_ring *ring,
struct sun4c_mmu_entry *entry)
static void remove_lru(struct sun4c_mmu_entry *entry)
static void free_user_entry(int ctx, struct sun4c_mmu_entry *entry)
static void free_kernel_entry(struct sun4c_mmu_entry *entry,
struct sun4c_mmu_ring *ring)
static void __init sun4c_init_fill_kernel_ring(int howmany)
static void __init sun4c_init_fill_user_ring(void)
static void sun4c_kernel_unmap(struct sun4c_mmu_entry *kentry)
static void sun4c_kernel_map(struct sun4c_mmu_entry *kentry)
#define sun4c_user_unmap(__entry) \
sun4c_put_segmap((__entry)->vaddr, invalid_segment)
static void sun4c_demap_context(struct sun4c_mmu_ring *crp, unsigned char ctx)
static int sun4c_user_taken_entries;
static int max_user_taken_entries;
static struct sun4c_mmu_entry *sun4c_kernel_strategy(void)
static struct sun4c_mmu_entry *sun4c_user_strategy(void)
void sun4c_grow_kernel_ring(void)
union task_union *sun4c_bucket[NR_TASK_BUCKETS];
static int sun4c_lowbucket_avail;
#define BUCKET_EMPTY     ((union task_union *) 0)
#define BUCKET_SHIFT     (PAGE_SHIFT + 1)
#define BUCKET_SIZE      (1 << BUCKET_SHIFT)
#define BUCKET_NUM(addr) ((((addr) - SUN4C_LOCK_VADDR) >> BUCKET_SHIFT))
#define BUCKET_ADDR(num) (((num) << BUCKET_SHIFT) + SUN4C_LOCK_VADDR)
#define BUCKET_PTE(page)       \
((((page) - PAGE_OFFSET) >> PAGE_SHIFT) | pgprot_val(SUN4C_PAGE_KERNEL))
#define BUCKET_PTE_PAGE(pte)   \
(PAGE_OFFSET + (((pte) & SUN4C_PFN_MASK) << PAGE_SHIFT))
static void get_locked_segment(unsigned long addr)
static void free_locked_segment(unsigned long addr)
static inline void garbage_collect(int entry)
static struct thread_info *sun4c_alloc_thread_info_node(int node)
static void sun4c_free_thread_info(struct thread_info *ti)
static void __init sun4c_init_buckets(void)
static unsigned long sun4c_iobuffer_start;
static unsigned long sun4c_iobuffer_end;
static unsigned long sun4c_iobuffer_high;
static unsigned long *sun4c_iobuffer_map;
static int iobuffer_map_size;
static char *sun4c_lockarea(char *vaddr, unsigned long size)
static void sun4c_unlockarea(char *vaddr, unsigned long size)
static __u32 sun4c_get_scsi_one(struct device *dev, char *bufptr, unsigned long len)
static void sun4c_get_scsi_sgl(struct device *dev, struct scatterlist *sg, int sz)
static void sun4c_release_scsi_one(struct device *dev, __u32 bufptr, unsigned long len)
static void sun4c_release_scsi_sgl(struct device *dev, struct scatterlist *sg, int sz)
#define TASK_ENTRY_SIZE    BUCKET_SIZE
#define LONG_ALIGN(x) (((x)+(sizeof(long))-1)&~((sizeof(long))-1))
struct vm_area_struct sun4c_kstack_vma;
static void __init sun4c_init_lock_areas(void)
static void sun4c_flush_cache_all(void)
static void sun4c_flush_cache_mm(struct mm_struct *mm)
static void sun4c_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void sun4c_flush_cache_page(struct vm_area_struct *vma, unsigned long page)
static void sun4c_flush_page_to_ram(unsigned long page)
static void sun4c_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr)
static void sun4c_flush_tlb_all(void)
static void sun4c_flush_tlb_mm(struct mm_struct *mm)
static void sun4c_flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void sun4c_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
static inline void sun4c_mapioaddr(unsigned long physaddr, unsigned long virt_addr)
static void sun4c_mapiorange(unsigned int bus, unsigned long xpa,
unsigned long xva, unsigned int len)
static void sun4c_unmapiorange(unsigned long virt_addr, unsigned int len)
static void sun4c_alloc_context(struct mm_struct *old_mm, struct mm_struct *mm)
static void sun4c_switch_mm(struct mm_struct *old_mm, struct mm_struct *mm, struct task_struct *tsk, int cpu)
static void sun4c_destroy_context(struct mm_struct *mm)
static void sun4c_mmu_info(struct seq_file *m)
#define PGD_PRESENT  0x001
#define PGD_RW       0x002
#define PGD_USER     0x004
#define PGD_ACCESSED 0x020
#define PGD_DIRTY    0x040
#define PGD_TABLE    (PGD_PRESENT | PGD_RW | PGD_USER | PGD_ACCESSED | PGD_DIRTY)
static void sun4c_set_pte(pte_t *ptep, pte_t pte)
static void sun4c_pgd_set(pgd_t * pgdp, pmd_t * pmdp)
static void sun4c_pmd_set(pmd_t * pmdp, pte_t * ptep)
static void sun4c_pmd_populate(pmd_t * pmdp, struct page * ptep)
static int sun4c_pte_present(pte_t pte)
static void sun4c_pte_clear(pte_t *ptep)
static int sun4c_pmd_bad(pmd_t pmd)
static int sun4c_pmd_present(pmd_t pmd)
static int sun4c_pgd_none(pgd_t pgd)
static int sun4c_pgd_bad(pgd_t pgd)
static int sun4c_pgd_present(pgd_t pgd)
static void sun4c_pgd_clear(pgd_t * pgdp)
static pte_t sun4c_pte_mkwrite(pte_t pte)
static pte_t sun4c_pte_mkdirty(pte_t pte)
static pte_t sun4c_pte_mkyoung(pte_t pte)
static pte_t sun4c_mk_pte(struct page *page, pgprot_t pgprot)
static pte_t sun4c_mk_pte_phys(unsigned long phys_page, pgprot_t pgprot)
static pte_t sun4c_mk_pte_io(unsigned long page, pgprot_t pgprot, int space)
static unsigned long sun4c_pte_pfn(pte_t pte)
static pte_t sun4c_pgoff_to_pte(unsigned long pgoff)
static unsigned long sun4c_pte_to_pgoff(pte_t pte)
static inline unsigned long sun4c_pmd_page_v(pmd_t pmd)
static struct page *sun4c_pmd_page(pmd_t pmd)
static unsigned long sun4c_pgd_page(pgd_t pgd)
static inline pgd_t *sun4c_pgd_offset(struct mm_struct * mm, unsigned long address)
static pmd_t *sun4c_pmd_offset(pgd_t * dir, unsigned long address)
pte_t *sun4c_pte_offset_kernel(pmd_t * dir, unsigned long address)
static unsigned long sun4c_swp_type(swp_entry_t entry)
static unsigned long sun4c_swp_offset(swp_entry_t entry)
static swp_entry_t sun4c_swp_entry(unsigned long type, unsigned long offset)
static void sun4c_free_pte_slow(pte_t *pte)
static void sun4c_free_pgd_slow(pgd_t *pgd)
static pgd_t *sun4c_get_pgd_fast(void)
static void sun4c_free_pgd_fast(pgd_t *pgd)
static inline pte_t *
sun4c_pte_alloc_one_fast(struct mm_struct *mm, unsigned long address)
static pte_t *sun4c_pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
static pgtable_t sun4c_pte_alloc_one(struct mm_struct *mm, unsigned long address)
static inline void sun4c_free_pte_fast(pte_t *pte)
static void sun4c_pte_free(pgtable_t pte)
static pmd_t *sun4c_pmd_alloc_one(struct mm_struct *mm, unsigned long address)
static void sun4c_free_pmd_fast(pmd_t * pmd)
static void sun4c_check_pgt_cache(int low, int high)
#define SUN4C_PRELOAD_PSEG
void sun4c_update_mmu_cache(struct vm_area_struct *vma, unsigned long address, pte_t *ptep)
extern void sparc_context_init(int);
extern unsigned long bootmem_init(unsigned long *pages_avail);
extern unsigned long last_valid_pfn;
void __init sun4c_paging_init(void)
static pgprot_t sun4c_pgprot_noncached(pgprot_t prot)
void __init ld_mmu_sun4c(void)
