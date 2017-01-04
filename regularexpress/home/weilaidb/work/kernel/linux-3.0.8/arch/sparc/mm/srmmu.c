enum mbus_module srmmu_modtype;
static unsigned int hwbug_bitmask;
int vac_cache_size;
int vac_line_size;
extern struct resource sparc_iomap;
extern unsigned long last_valid_pfn;
extern unsigned long page_kernel;
static pgd_t *srmmu_swapper_pg_dir;
#define FLUSH_BEGIN(mm)
#define FLUSH_END
#define FLUSH_BEGIN(mm) if((mm)->context != NO_CONTEXT)
BTFIXUPDEF_CALL(void, flush_page_for_dma, unsigned long)
#define flush_page_for_dma(page) BTFIXUP_CALL(flush_page_for_dma)(page)
int flush_page_for_dma_global = 1;
BTFIXUPDEF_CALL(void, local_flush_page_for_dma, unsigned long)
#define local_flush_page_for_dma(page) BTFIXUP_CALL(local_flush_page_for_dma)(page)
char *srmmu_name;
ctxd_t *srmmu_ctx_table_phys;
static ctxd_t *srmmu_context_table;
int viking_mxcc_present;
static DEFINE_SPINLOCK(srmmu_context_spinlock);
static int is_hypersparc;
static inline unsigned long srmmu_swap(unsigned long *addr, unsigned long value)
static inline void srmmu_set_pte(pte_t *ptep, pte_t pteval)
static inline int srmmu_device_memory(unsigned long x)
static int srmmu_cache_pagetables;
static unsigned long srmmu_nocache_size;
static unsigned long srmmu_nocache_end;
#define SRMMU_NOCACHE_BITMAP_SHIFT (PAGE_SHIFT - 4)
#define SRMMU_NOCACHE_ALIGN_MAX (sizeof(ctxd_t)*SRMMU_MAX_CONTEXTS)
void *srmmu_nocache_pool;
void *srmmu_nocache_bitmap;
static struct bit_map srmmu_nocache_map;
static unsigned long srmmu_pte_pfn(pte_t pte)
static struct page *srmmu_pmd_page(pmd_t pmd)
static inline unsigned long srmmu_pgd_page(pgd_t pgd)
static inline int srmmu_pte_none(pte_t pte)
static inline int srmmu_pte_present(pte_t pte)
static inline void srmmu_pte_clear(pte_t *ptep)
static inline int srmmu_pmd_none(pmd_t pmd)
static inline int srmmu_pmd_bad(pmd_t pmd)
static inline int srmmu_pmd_present(pmd_t pmd)
static inline void srmmu_pmd_clear(pmd_t *pmdp)
static inline int srmmu_pgd_none(pgd_t pgd)
static inline int srmmu_pgd_bad(pgd_t pgd)
static inline int srmmu_pgd_present(pgd_t pgd)
static inline void srmmu_pgd_clear(pgd_t * pgdp)
static inline pte_t srmmu_pte_wrprotect(pte_t pte)
static inline pte_t srmmu_pte_mkclean(pte_t pte)
static inline pte_t srmmu_pte_mkold(pte_t pte)
static inline pte_t srmmu_pte_mkwrite(pte_t pte)
static inline pte_t srmmu_pte_mkdirty(pte_t pte)
static inline pte_t srmmu_pte_mkyoung(pte_t pte)
static pte_t srmmu_mk_pte(struct page *page, pgprot_t pgprot)
static pte_t srmmu_mk_pte_phys(unsigned long page, pgprot_t pgprot)
static pte_t srmmu_mk_pte_io(unsigned long page, pgprot_t pgprot, int space)
static inline void srmmu_ctxd_set(ctxd_t *ctxp, pgd_t *pgdp)
static inline void srmmu_pgd_set(pgd_t * pgdp, pmd_t * pmdp)
static void srmmu_pmd_set(pmd_t *pmdp, pte_t *ptep)
static void srmmu_pmd_populate(pmd_t *pmdp, struct page *ptep)
static inline pte_t srmmu_pte_modify(pte_t pte, pgprot_t newprot)
static inline pgd_t *srmmu_pgd_offset(struct mm_struct * mm, unsigned long address)
static inline pmd_t *srmmu_pmd_offset(pgd_t * dir, unsigned long address)
static inline pte_t *srmmu_pte_offset(pmd_t * dir, unsigned long address)
static unsigned long srmmu_swp_type(swp_entry_t entry)
static unsigned long srmmu_swp_offset(swp_entry_t entry)
static swp_entry_t srmmu_swp_entry(unsigned long type, unsigned long offset)
static unsigned long __srmmu_get_nocache(int size, int align)
static unsigned long srmmu_get_nocache(int size, int align)
static void srmmu_free_nocache(unsigned long vaddr, int size)
static void srmmu_early_allocate_ptable_skeleton(unsigned long start,
unsigned long end);
extern unsigned long probe_memory(void);
static void srmmu_nocache_calcsize(void)
static void __init srmmu_nocache_init(void)
static inline pgd_t *srmmu_get_pgd_fast(void)
static void srmmu_free_pgd_fast(pgd_t *pgd)
static pmd_t *srmmu_pmd_alloc_one(struct mm_struct *mm, unsigned long address)
static void srmmu_pmd_free(pmd_t * pmd)
static pte_t *
srmmu_pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
static pgtable_t
srmmu_pte_alloc_one(struct mm_struct *mm, unsigned long address)
static void srmmu_free_pte_fast(pte_t *pte)
static void srmmu_pte_free(pgtable_t pte)
static inline void alloc_context(struct mm_struct *old_mm, struct mm_struct *mm)
static inline void free_context(int context)
static void srmmu_switch_mm(struct mm_struct *old_mm, struct mm_struct *mm,
struct task_struct *tsk, int cpu)
static inline void srmmu_mapioaddr(unsigned long physaddr,
unsigned long virt_addr, int bus_type)
static void srmmu_mapiorange(unsigned int bus, unsigned long xpa,
unsigned long xva, unsigned int len)
static inline void srmmu_unmapioaddr(unsigned long virt_addr)
static void srmmu_unmapiorange(unsigned long virt_addr, unsigned int len)
static struct thread_info *srmmu_alloc_thread_info_node(int node)
static void srmmu_free_thread_info(struct thread_info *ti)
extern void tsunami_flush_cache_all(void);
extern void tsunami_flush_cache_mm(struct mm_struct *mm);
extern void tsunami_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void tsunami_flush_cache_page(struct vm_area_struct *vma, unsigned long page);
extern void tsunami_flush_page_to_ram(unsigned long page);
extern void tsunami_flush_page_for_dma(unsigned long page);
extern void tsunami_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr);
extern void tsunami_flush_tlb_all(void);
extern void tsunami_flush_tlb_mm(struct mm_struct *mm);
extern void tsunami_flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void tsunami_flush_tlb_page(struct vm_area_struct *vma, unsigned long page);
extern void tsunami_setup_blockops(void);
static void swift_update_mmu_cache(struct vm_area_struct * vma, unsigned long address, pte_t *ptep)
extern void swift_flush_cache_all(void);
extern void swift_flush_cache_mm(struct mm_struct *mm);
extern void swift_flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void swift_flush_cache_page(struct vm_area_struct *vma, unsigned long page);
extern void swift_flush_page_to_ram(unsigned long page);
extern void swift_flush_page_for_dma(unsigned long page);
extern void swift_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr);
extern void swift_flush_tlb_all(void);
extern void swift_flush_tlb_mm(struct mm_struct *mm);
extern void swift_flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void swift_flush_tlb_page(struct vm_area_struct *vma, unsigned long page);
static void cypress_flush_cache_all(void)
static void cypress_flush_cache_mm(struct mm_struct *mm)
static void cypress_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void cypress_flush_cache_page(struct vm_area_struct *vma, unsigned long page)
static void cypress_flush_page_to_ram(unsigned long page)
static void cypress_flush_page_for_dma(unsigned long page)
static void cypress_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr)
static void cypress_flush_tlb_all(void)
static void cypress_flush_tlb_mm(struct mm_struct *mm)
static void cypress_flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void cypress_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
extern void viking_flush_cache_all(void);
extern void viking_flush_cache_mm(struct mm_struct *mm);
extern void viking_flush_cache_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
extern void viking_flush_cache_page(struct vm_area_struct *vma, unsigned long page);
extern void viking_flush_page_to_ram(unsigned long page);
extern void viking_flush_page_for_dma(unsigned long page);
extern void viking_flush_sig_insns(struct mm_struct *mm, unsigned long addr);
extern void viking_flush_page(unsigned long page);
extern void viking_mxcc_flush_page(unsigned long page);
extern void viking_flush_tlb_all(void);
extern void viking_flush_tlb_mm(struct mm_struct *mm);
extern void viking_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
extern void viking_flush_tlb_page(struct vm_area_struct *vma,
unsigned long page);
extern void sun4dsmp_flush_tlb_all(void);
extern void sun4dsmp_flush_tlb_mm(struct mm_struct *mm);
extern void sun4dsmp_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
extern void sun4dsmp_flush_tlb_page(struct vm_area_struct *vma,
unsigned long page);
extern void hypersparc_flush_cache_all(void);
extern void hypersparc_flush_cache_mm(struct mm_struct *mm);
extern void hypersparc_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void hypersparc_flush_cache_page(struct vm_area_struct *vma, unsigned long page);
extern void hypersparc_flush_page_to_ram(unsigned long page);
extern void hypersparc_flush_page_for_dma(unsigned long page);
extern void hypersparc_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr);
extern void hypersparc_flush_tlb_all(void);
extern void hypersparc_flush_tlb_mm(struct mm_struct *mm);
extern void hypersparc_flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void hypersparc_flush_tlb_page(struct vm_area_struct *vma, unsigned long page);
extern void hypersparc_setup_blockops(void);
static void __init early_pgtable_allocfail(char *type)
static void __init srmmu_early_allocate_ptable_skeleton(unsigned long start,
unsigned long end)
static void __init srmmu_allocate_ptable_skeleton(unsigned long start,
unsigned long end)
static void __init srmmu_inherit_prom_mappings(unsigned long start,
unsigned long end)
#define KERNEL_PTE(page_shifted) ((page_shifted)|SRMMU_CACHE|SRMMU_PRIV|SRMMU_VALID)
static void __init do_large_mapping(unsigned long vaddr, unsigned long phys_base)
static unsigned long __init map_spbank(unsigned long vbase, int sp_entry)
static inline void memprobe_error(char *msg)
static inline void map_kernel(void)
extern void sparc_context_init(int);
void (*poke_srmmu)(void) __cpuinitdata = NULL;
extern unsigned long bootmem_init(unsigned long *pages_avail);
void __init srmmu_paging_init(void)
static void srmmu_mmu_info(struct seq_file *m)
static void srmmu_update_mmu_cache(struct vm_area_struct * vma, unsigned long address, pte_t pte)
static void srmmu_destroy_context(struct mm_struct *mm)
static void __init srmmu_is_bad(void)
static void __init init_vac_layout(void)
static void __cpuinit poke_hypersparc(void)
static void __init init_hypersparc(void)
static void __cpuinit poke_cypress(void)
static void __init init_cypress_common(void)
static void __init init_cypress_604(void)
static void __init init_cypress_605(unsigned long mrev)
static void __cpuinit poke_swift(void)
#define SWIFT_MASKID_ADDR  0x10003018
static void __init init_swift(void)
static void turbosparc_flush_cache_all(void)
static void turbosparc_flush_cache_mm(struct mm_struct *mm)
static void turbosparc_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void turbosparc_flush_cache_page(struct vm_area_struct *vma, unsigned long page)
static void turbosparc_flush_page_to_ram(unsigned long page)
static void turbosparc_flush_sig_insns(struct mm_struct *mm, unsigned long insn_addr)
static void turbosparc_flush_page_for_dma(unsigned long page)
static void turbosparc_flush_tlb_all(void)
static void turbosparc_flush_tlb_mm(struct mm_struct *mm)
static void turbosparc_flush_tlb_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static void turbosparc_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
static void __cpuinit poke_turbosparc(void)
static void __init init_turbosparc(void)
static void __cpuinit poke_tsunami(void)
static void __init init_tsunami(void)
static void __cpuinit poke_viking(void)
static void __init init_viking(void)
void __init poke_leonsparc(void)
void __init init_leon(void)
static void __init get_srmmu_type(void)
static void srmmu_check_pgt_cache(int low, int high)
extern unsigned long spwin_mmu_patchme, fwin_mmu_patchme,
tsetup_mmu_patchme, rtrap_mmu_patchme;
extern unsigned long spwin_srmmu_stackchk, srmmu_fwin_stackchk,
tsetup_srmmu_stackchk, srmmu_rett_stackchk;
extern unsigned long srmmu_fault;
#define PATCH_BRANCH(insn, dest) do  while(0)
static void __init patch_window_trap_handlers(void)
static void smp_flush_page_for_dma(unsigned long page)
static pte_t srmmu_pgoff_to_pte(unsigned long pgoff)
static unsigned long srmmu_pte_to_pgoff(pte_t pte)
static pgprot_t srmmu_pgprot_noncached(pgprot_t prot)
void __init ld_mmu_srmmu(void)
