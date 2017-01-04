#define _SPARC64_PGTABLE_H
#define	TLBTEMP_BASE		_AC(0x0000000006000000,UL)
#define	TSBMAP_BASE		_AC(0x0000000008000000,UL)
#define MODULES_VADDR		_AC(0x0000000010000000,UL)
#define MODULES_LEN		_AC(0x00000000e0000000,UL)
#define MODULES_END		_AC(0x00000000f0000000,UL)
#define LOW_OBP_ADDRESS		_AC(0x00000000f0000000,UL)
#define HI_OBP_ADDRESS		_AC(0x0000000100000000,UL)
#define VMALLOC_START		_AC(0x0000000100000000,UL)
#define VMALLOC_END		_AC(0x0000010000000000,UL)
#define VMEMMAP_BASE		_AC(0x0000010000000000,UL)
#define vmemmap			((struct page *)VMEMMAP_BASE)
#define PMD_SHIFT	(PAGE_SHIFT + (PAGE_SHIFT-3))
#define PMD_SIZE	(_AC(1,UL) << PMD_SHIFT)
#define PMD_MASK	(~(PMD_SIZE-1))
#define PMD_BITS	(PAGE_SHIFT - 2)
#define PGDIR_SHIFT	(PAGE_SHIFT + (PAGE_SHIFT-3) + PMD_BITS)
#define PGDIR_SIZE	(_AC(1,UL) << PGDIR_SHIFT)
#define PGDIR_MASK	(~(PGDIR_SIZE-1))
#define PGDIR_BITS	(PAGE_SHIFT - 2)
#define PTRS_PER_PTE	(1UL << (PAGE_SHIFT-3))
#define PTRS_PER_PMD	(1UL << PMD_BITS)
#define PTRS_PER_PGD	(1UL << PGDIR_BITS)
#define FIRST_USER_ADDRESS	0
#define pte_ERROR(e)	__builtin_trap()
#define pmd_ERROR(e)	__builtin_trap()
#define pgd_ERROR(e)	__builtin_trap()
#define _PAGE_VALID	  _AC(0x8000000000000000,UL)
#define _PAGE_R	  	  _AC(0x8000000000000000,UL)
#define _PAGE_SZ4MB_4U	  _AC(0x6000000000000000,UL)
#define _PAGE_SZ512K_4U	  _AC(0x4000000000000000,UL)
#define _PAGE_SZ64K_4U	  _AC(0x2000000000000000,UL)
#define _PAGE_SZ8K_4U	  _AC(0x0000000000000000,UL)
#define _PAGE_NFO_4U	  _AC(0x1000000000000000,UL)
#define _PAGE_IE_4U	  _AC(0x0800000000000000,UL)
#define _PAGE_SOFT2_4U	  _AC(0x07FC000000000000,UL)
#define _PAGE_RES1_4U	  _AC(0x0002000000000000,UL)
#define _PAGE_SZ32MB_4U	  _AC(0x0001000000000000,UL)
#define _PAGE_SZ256MB_4U  _AC(0x2001000000000000,UL)
#define _PAGE_SZALL_4U	  _AC(0x6001000000000000,UL)
#define _PAGE_SN_4U	  _AC(0x0000800000000000,UL)
#define _PAGE_RES2_4U	  _AC(0x0000780000000000,UL)
#define _PAGE_PADDR_4U	  _AC(0x000007FFFFFFE000,UL)
#define _PAGE_SOFT_4U	  _AC(0x0000000000001F80,UL)
#define _PAGE_EXEC_4U	  _AC(0x0000000000001000,UL)
#define _PAGE_MODIFIED_4U _AC(0x0000000000000800,UL)
#define _PAGE_FILE_4U	  _AC(0x0000000000000800,UL)
#define _PAGE_ACCESSED_4U _AC(0x0000000000000400,UL)
#define _PAGE_READ_4U	  _AC(0x0000000000000200,UL)
#define _PAGE_WRITE_4U	  _AC(0x0000000000000100,UL)
#define _PAGE_PRESENT_4U  _AC(0x0000000000000080,UL)
#define _PAGE_L_4U	  _AC(0x0000000000000040,UL)
#define _PAGE_CP_4U	  _AC(0x0000000000000020,UL)
#define _PAGE_CV_4U	  _AC(0x0000000000000010,UL)
#define _PAGE_E_4U	  _AC(0x0000000000000008,UL)
#define _PAGE_P_4U	  _AC(0x0000000000000004,UL)
#define _PAGE_W_4U	  _AC(0x0000000000000002,UL)
#define _PAGE_NFO_4V	  _AC(0x4000000000000000,UL)
#define _PAGE_SOFT2_4V	  _AC(0x3F00000000000000,UL)
#define _PAGE_MODIFIED_4V _AC(0x2000000000000000,UL)
#define _PAGE_ACCESSED_4V _AC(0x1000000000000000,UL)
#define _PAGE_READ_4V	  _AC(0x0800000000000000,UL)
#define _PAGE_WRITE_4V	  _AC(0x0400000000000000,UL)
#define _PAGE_PADDR_4V	  _AC(0x00FFFFFFFFFFE000,UL)
#define _PAGE_IE_4V	  _AC(0x0000000000001000,UL)
#define _PAGE_E_4V	  _AC(0x0000000000000800,UL)
#define _PAGE_CP_4V	  _AC(0x0000000000000400,UL)
#define _PAGE_CV_4V	  _AC(0x0000000000000200,UL)
#define _PAGE_P_4V	  _AC(0x0000000000000100,UL)
#define _PAGE_EXEC_4V	  _AC(0x0000000000000080,UL)
#define _PAGE_W_4V	  _AC(0x0000000000000040,UL)
#define _PAGE_SOFT_4V	  _AC(0x0000000000000030,UL)
#define _PAGE_FILE_4V	  _AC(0x0000000000000020,UL)
#define _PAGE_PRESENT_4V  _AC(0x0000000000000010,UL)
#define _PAGE_RESV_4V	  _AC(0x0000000000000008,UL)
#define _PAGE_SZ16GB_4V	  _AC(0x0000000000000007,UL)
#define _PAGE_SZ2GB_4V	  _AC(0x0000000000000006,UL)
#define _PAGE_SZ256MB_4V  _AC(0x0000000000000005,UL)
#define _PAGE_SZ32MB_4V	  _AC(0x0000000000000004,UL)
#define _PAGE_SZ4MB_4V	  _AC(0x0000000000000003,UL)
#define _PAGE_SZ512K_4V	  _AC(0x0000000000000002,UL)
#define _PAGE_SZ64K_4V	  _AC(0x0000000000000001,UL)
#define _PAGE_SZ8K_4V	  _AC(0x0000000000000000,UL)
#define _PAGE_SZALL_4V	  _AC(0x0000000000000007,UL)
#if PAGE_SHIFT == 13
#define _PAGE_SZBITS_4U	_PAGE_SZ8K_4U
#define _PAGE_SZBITS_4V	_PAGE_SZ8K_4V
#elif PAGE_SHIFT == 16
#define _PAGE_SZBITS_4U	_PAGE_SZ64K_4U
#define _PAGE_SZBITS_4V	_PAGE_SZ64K_4V
#error Wrong PAGE_SHIFT specified
#if defined(CONFIG_HUGETLB_PAGE_SIZE_4MB)
#define _PAGE_SZHUGE_4U	_PAGE_SZ4MB_4U
#define _PAGE_SZHUGE_4V	_PAGE_SZ4MB_4V
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_512K)
#define _PAGE_SZHUGE_4U	_PAGE_SZ512K_4U
#define _PAGE_SZHUGE_4V	_PAGE_SZ512K_4V
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_64K)
#define _PAGE_SZHUGE_4U	_PAGE_SZ64K_4U
#define _PAGE_SZHUGE_4V	_PAGE_SZ64K_4V
#define __P000	__pgprot(0)
#define __P001	__pgprot(0)
#define __P010	__pgprot(0)
#define __P011	__pgprot(0)
#define __P100	__pgprot(0)
#define __P101	__pgprot(0)
#define __P110	__pgprot(0)
#define __P111	__pgprot(0)
#define __S000	__pgprot(0)
#define __S001	__pgprot(0)
#define __S010	__pgprot(0)
#define __S011	__pgprot(0)
#define __S100	__pgprot(0)
#define __S101	__pgprot(0)
#define __S110	__pgprot(0)
#define __S111	__pgprot(0)
extern pte_t mk_pte_io(unsigned long, pgprot_t, int, unsigned long);
extern unsigned long pte_sz_bits(unsigned long size);
extern pgprot_t PAGE_KERNEL;
extern pgprot_t PAGE_KERNEL_LOCKED;
extern pgprot_t PAGE_COPY;
extern pgprot_t PAGE_SHARED;
extern unsigned long _PAGE_IE;
extern unsigned long _PAGE_E;
extern unsigned long _PAGE_CACHE;
extern unsigned long pg_iobits;
extern unsigned long _PAGE_ALL_SZ_BITS;
extern unsigned long _PAGE_SZBITS;
extern struct page *mem_map_zero;
#define ZERO_PAGE(vaddr)	(mem_map_zero)
static inline pte_t pfn_pte(unsigned long pfn, pgprot_t prot)
#define mk_pte(page, pgprot)	pfn_pte(page_to_pfn(page), (pgprot))
static inline unsigned long pte_pfn(pte_t pte)
#define pte_page(x) pfn_to_page(pte_pfn(x))
static inline pte_t pte_modify(pte_t pte, pgprot_t prot)
static inline pte_t pgoff_to_pte(unsigned long off)
static inline pgprot_t pgprot_noncached(pgprot_t prot)
#define pgprot_noncached pgprot_noncached
static inline pte_t pte_mkhuge(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
static inline unsigned long pte_young(pte_t pte)
static inline unsigned long pte_dirty(pte_t pte)
static inline unsigned long pte_write(pte_t pte)
static inline unsigned long pte_exec(pte_t pte)
static inline unsigned long pte_file(pte_t pte)
static inline unsigned long pte_present(pte_t pte)
static inline int pte_special(pte_t pte)
#define pmd_set(pmdp, ptep)	\
(pmd_val(*(pmdp)) = (__pa((unsigned long) (ptep)) >> 11UL))
#define pud_set(pudp, pmdp)	\
(pud_val(*(pudp)) = (__pa((unsigned long) (pmdp)) >> 11UL))
#define __pmd_page(pmd)		\
((unsigned long) __va((((unsigned long)pmd_val(pmd))<<11UL)))
#define pmd_page(pmd) 			virt_to_page((void *)__pmd_page(pmd))
#define pud_page_vaddr(pud)		\
((unsigned long) __va((((unsigned long)pud_val(pud))<<11UL)))
#define pud_page(pud) 			virt_to_page((void *)pud_page_vaddr(pud))
#define pmd_none(pmd)			(!pmd_val(pmd))
#define pmd_bad(pmd)			(0)
#define pmd_present(pmd)		(pmd_val(pmd) != 0U)
#define pmd_clear(pmdp)			(pmd_val(*(pmdp)) = 0U)
#define pud_none(pud)			(!pud_val(pud))
#define pud_bad(pud)			(0)
#define pud_present(pud)		(pud_val(pud) != 0U)
#define pud_clear(pudp)			(pud_val(*(pudp)) = 0U)
#define pte_none(pte) 			(!pte_val(pte))
#define pgd_index(address)	(((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD - 1))
#define pgd_offset(mm, address)	((mm)->pgd + pgd_index(address))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define pmd_offset(pudp, address)	\
((pmd_t *) pud_page_vaddr(*(pudp)) + \
(((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1)))
#define pte_index(dir, address)	\
((pte_t *) __pmd_page(*(dir)) + \
((address >> PAGE_SHIFT) & (PTRS_PER_PTE - 1)))
#define pte_offset_kernel		pte_index
#define pte_offset_map			pte_index
#define pte_unmap(pte)			do  while (0)
extern void tlb_batch_add(struct mm_struct *mm, unsigned long vaddr,
pte_t *ptep, pte_t orig, int fullmm);
static inline void __set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte, int fullmm)
#define set_pte_at(mm,addr,ptep,pte)	\
__set_pte_at((mm), (addr), (ptep), (pte), 0)
#define pte_clear(mm,addr,ptep)		\
set_pte_at((mm), (addr), (ptep), __pte(0UL))
#define __HAVE_ARCH_PTE_CLEAR_NOT_PRESENT_FULL
#define pte_clear_not_present_full(mm,addr,ptep,fullmm)	\
__set_pte_at((mm), (addr), (ptep), __pte(0UL), (fullmm))
#define __HAVE_ARCH_MOVE_PTE
#define move_pte(pte, prot, old_addr, new_addr)				\
()
extern pgd_t swapper_pg_dir[2048];
extern pmd_t swapper_low_pmd_dir[2048];
extern void paging_init(void);
extern unsigned long find_ecache_flush_span(unsigned long size);
struct seq_file;
extern void mmu_info(struct seq_file *);
#define mmu_lockarea(vaddr, len)		(vaddr)
#define mmu_unlockarea(vaddr, len)		do  while(0)
struct vm_area_struct;
extern void update_mmu_cache(struct vm_area_struct *, unsigned long, pte_t *);
#define __swp_type(entry)	(((entry).val >> PAGE_SHIFT) & 0xffUL)
#define __swp_offset(entry)	((entry).val >> (PAGE_SHIFT + 8UL))
#define __swp_entry(type, offset)	\
( (swp_entry_t) \
)
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
extern unsigned long pte_file(pte_t);
#define pte_to_pgoff(pte)	(pte_val(pte) >> PAGE_SHIFT)
extern pte_t pgoff_to_pte(unsigned long);
#define PTE_FILE_MAX_BITS	(64UL - PAGE_SHIFT - 1UL)
extern unsigned long sparc64_valid_addr_bitmap[];
static inline bool kern_addr_valid(unsigned long addr)
extern int page_in_phys_avail(unsigned long paddr);
extern int io_remap_pfn_range(struct vm_area_struct *vma, unsigned long from,
unsigned long pfn,
unsigned long size, pgprot_t prot);
#define MK_IOSPACE_PFN(space, pfn)	(pfn | (space << (BITS_PER_LONG - 4)))
#define GET_IOSPACE(pfn)		(pfn >> (BITS_PER_LONG - 4))
#define GET_PFN(pfn)			(pfn & 0x0fffffffffffffffUL)
#define HAVE_ARCH_UNMAPPED_AREA
#define HAVE_ARCH_UNMAPPED_AREA_TOPDOWN
extern unsigned long get_fb_unmapped_area(struct file *filp, unsigned long,
unsigned long, unsigned long,
unsigned long);
#define HAVE_ARCH_FB_UNMAPPED_AREA
extern void pgtable_cache_init(void);
extern void sun4v_register_fault_status(void);
extern void sun4v_ktsb_register(void);
extern void __init cheetah_ecache_flush_init(void);
extern void sun4v_patch_tlb_handlers(void);
extern unsigned long cmdline_memory_size;
extern asmlinkage void do_sparc64_fault(struct pt_regs *regs);
