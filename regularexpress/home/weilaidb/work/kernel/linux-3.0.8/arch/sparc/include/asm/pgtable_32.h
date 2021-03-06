#define _SPARC_PGTABLE_H
struct vm_area_struct;
struct page;
extern void load_mmu(void);
extern unsigned long calc_highpages(void);
BTFIXUPDEF_SIMM13(pgdir_shift)
BTFIXUPDEF_SETHI(pgdir_size)
BTFIXUPDEF_SETHI(pgdir_mask)
BTFIXUPDEF_SIMM13(ptrs_per_pmd)
BTFIXUPDEF_SIMM13(ptrs_per_pgd)
BTFIXUPDEF_SIMM13(user_ptrs_per_pgd)
#define pte_ERROR(e)   __builtin_trap()
#define pmd_ERROR(e)   __builtin_trap()
#define pgd_ERROR(e)   __builtin_trap()
BTFIXUPDEF_INT(page_none)
BTFIXUPDEF_INT(page_copy)
BTFIXUPDEF_INT(page_readonly)
BTFIXUPDEF_INT(page_kernel)
#define PMD_SHIFT		SUN4C_PMD_SHIFT
#define PMD_SIZE        	(1UL << PMD_SHIFT)
#define PMD_MASK        	(~(PMD_SIZE-1))
#define PMD_ALIGN(__addr) 	(((__addr) + ~PMD_MASK) & PMD_MASK)
#define PGDIR_SHIFT     	BTFIXUP_SIMM13(pgdir_shift)
#define PGDIR_SIZE      	BTFIXUP_SETHI(pgdir_size)
#define PGDIR_MASK      	BTFIXUP_SETHI(pgdir_mask)
#define PTRS_PER_PTE    	1024
#define PTRS_PER_PMD    	BTFIXUP_SIMM13(ptrs_per_pmd)
#define PTRS_PER_PGD    	BTFIXUP_SIMM13(ptrs_per_pgd)
#define USER_PTRS_PER_PGD	BTFIXUP_SIMM13(user_ptrs_per_pgd)
#define FIRST_USER_ADDRESS	0
#define PTE_SIZE		(PTRS_PER_PTE*4)
#define PAGE_NONE      __pgprot(BTFIXUP_INT(page_none))
extern pgprot_t PAGE_SHARED;
#define PAGE_COPY      __pgprot(BTFIXUP_INT(page_copy))
#define PAGE_READONLY  __pgprot(BTFIXUP_INT(page_readonly))
extern unsigned long page_kernel;
#define PAGE_KERNEL	page_kernel
#define PAGE_KERNEL    __pgprot(BTFIXUP_INT(page_kernel))
extern pgd_t swapper_pg_dir[1024];
extern void paging_init(void);
extern pte_t pg0[1024];
extern pte_t pg1[1024];
extern pte_t pg2[1024];
extern pte_t pg3[1024];
extern unsigned long ptr_in_current_pgd;
#define __P000  __pgprot(0)
#define __P001  __pgprot(0)
#define __P010  __pgprot(0)
#define __P011  __pgprot(0)
#define __P100  __pgprot(0)
#define __P101  __pgprot(0)
#define __P110  __pgprot(0)
#define __P111  __pgprot(0)
#define __S000	__pgprot(0)
#define __S001	__pgprot(0)
#define __S010	__pgprot(0)
#define __S011	__pgprot(0)
#define __S100	__pgprot(0)
#define __S101	__pgprot(0)
#define __S110	__pgprot(0)
#define __S111	__pgprot(0)
extern int num_contexts;
extern unsigned long phys_base;
extern unsigned long pfn_base;
extern pte_t * __bad_pagetable(void);
extern pte_t __bad_page(void);
extern unsigned long empty_zero_page;
#define BAD_PAGETABLE __bad_pagetable()
#define BAD_PAGE __bad_page()
#define ZERO_PAGE(vaddr) (virt_to_page(&empty_zero_page))
BTFIXUPDEF_CALL_CONST(struct page *, pmd_page, pmd_t)
BTFIXUPDEF_CALL_CONST(unsigned long, pgd_page_vaddr, pgd_t)
#define pmd_page(pmd) BTFIXUP_CALL(pmd_page)(pmd)
#define pgd_page_vaddr(pgd) BTFIXUP_CALL(pgd_page_vaddr)(pgd)
BTFIXUPDEF_CALL_CONST(int, pte_present, pte_t)
BTFIXUPDEF_CALL(void, pte_clear, pte_t *)
static inline int pte_none(pte_t pte)
#define pte_present(pte) BTFIXUP_CALL(pte_present)(pte)
#define pte_clear(mm,addr,pte) BTFIXUP_CALL(pte_clear)(pte)
BTFIXUPDEF_CALL_CONST(int, pmd_bad, pmd_t)
BTFIXUPDEF_CALL_CONST(int, pmd_present, pmd_t)
BTFIXUPDEF_CALL(void, pmd_clear, pmd_t *)
static inline int pmd_none(pmd_t pmd)
#define pmd_bad(pmd) BTFIXUP_CALL(pmd_bad)(pmd)
#define pmd_present(pmd) BTFIXUP_CALL(pmd_present)(pmd)
#define pmd_clear(pmd) BTFIXUP_CALL(pmd_clear)(pmd)
BTFIXUPDEF_CALL_CONST(int, pgd_none, pgd_t)
BTFIXUPDEF_CALL_CONST(int, pgd_bad, pgd_t)
BTFIXUPDEF_CALL_CONST(int, pgd_present, pgd_t)
BTFIXUPDEF_CALL(void, pgd_clear, pgd_t *)
#define pgd_none(pgd) BTFIXUP_CALL(pgd_none)(pgd)
#define pgd_bad(pgd) BTFIXUP_CALL(pgd_bad)(pgd)
#define pgd_present(pgd) BTFIXUP_CALL(pgd_present)(pgd)
#define pgd_clear(pgd) BTFIXUP_CALL(pgd_clear)(pgd)
BTFIXUPDEF_HALF(pte_writei)
BTFIXUPDEF_HALF(pte_dirtyi)
BTFIXUPDEF_HALF(pte_youngi)
static int pte_write(pte_t pte) __attribute_const__;
static inline int pte_write(pte_t pte)
static int pte_dirty(pte_t pte) __attribute_const__;
static inline int pte_dirty(pte_t pte)
static int pte_young(pte_t pte) __attribute_const__;
static inline int pte_young(pte_t pte)
BTFIXUPDEF_HALF(pte_filei)
static int pte_file(pte_t pte) __attribute_const__;
static inline int pte_file(pte_t pte)
static inline int pte_special(pte_t pte)
BTFIXUPDEF_HALF(pte_wrprotecti)
BTFIXUPDEF_HALF(pte_mkcleani)
BTFIXUPDEF_HALF(pte_mkoldi)
static pte_t pte_wrprotect(pte_t pte) __attribute_const__;
static inline pte_t pte_wrprotect(pte_t pte)
static pte_t pte_mkclean(pte_t pte) __attribute_const__;
static inline pte_t pte_mkclean(pte_t pte)
static pte_t pte_mkold(pte_t pte) __attribute_const__;
static inline pte_t pte_mkold(pte_t pte)
BTFIXUPDEF_CALL_CONST(pte_t, pte_mkwrite, pte_t)
BTFIXUPDEF_CALL_CONST(pte_t, pte_mkdirty, pte_t)
BTFIXUPDEF_CALL_CONST(pte_t, pte_mkyoung, pte_t)
#define pte_mkwrite(pte) BTFIXUP_CALL(pte_mkwrite)(pte)
#define pte_mkdirty(pte) BTFIXUP_CALL(pte_mkdirty)(pte)
#define pte_mkyoung(pte) BTFIXUP_CALL(pte_mkyoung)(pte)
#define pte_mkspecial(pte)    (pte)
#define pfn_pte(pfn, prot)		mk_pte(pfn_to_page(pfn), prot)
BTFIXUPDEF_CALL(unsigned long,	 pte_pfn, pte_t)
#define pte_pfn(pte) BTFIXUP_CALL(pte_pfn)(pte)
#define pte_page(pte)	pfn_to_page(pte_pfn(pte))
BTFIXUPDEF_CALL_CONST(pte_t, mk_pte, struct page *, pgprot_t)
BTFIXUPDEF_CALL_CONST(pte_t, mk_pte_phys, unsigned long, pgprot_t)
BTFIXUPDEF_CALL_CONST(pte_t, mk_pte_io, unsigned long, pgprot_t, int)
BTFIXUPDEF_CALL_CONST(pgprot_t, pgprot_noncached, pgprot_t)
#define mk_pte(page,pgprot) BTFIXUP_CALL(mk_pte)(page,pgprot)
#define mk_pte_phys(page,pgprot) BTFIXUP_CALL(mk_pte_phys)(page,pgprot)
#define mk_pte_io(page,pgprot,space) BTFIXUP_CALL(mk_pte_io)(page,pgprot,space)
#define pgprot_noncached(pgprot) BTFIXUP_CALL(pgprot_noncached)(pgprot)
BTFIXUPDEF_INT(pte_modify_mask)
static pte_t pte_modify(pte_t pte, pgprot_t newprot) __attribute_const__;
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
#define pgd_index(address) ((address) >> PGDIR_SHIFT)
#define pgd_offset(mm, address) ((mm)->pgd + pgd_index(address))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
BTFIXUPDEF_CALL(pmd_t *, pmd_offset, pgd_t *, unsigned long)
#define pmd_offset(dir,addr) BTFIXUP_CALL(pmd_offset)(dir,addr)
BTFIXUPDEF_CALL(pte_t *, pte_offset_kernel, pmd_t *, unsigned long)
#define pte_offset_kernel(dir,addr) BTFIXUP_CALL(pte_offset_kernel)(dir,addr)
#define pte_offset_map(d, a)		pte_offset_kernel(d,a)
#define pte_unmap(pte)		dowhile(0)
BTFIXUPDEF_CALL(void, set_pte, pte_t *, pte_t)
#define set_pte(ptep,pteval) BTFIXUP_CALL(set_pte)(ptep,pteval)
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep,pteval)
struct seq_file;
BTFIXUPDEF_CALL(void, mmu_info, struct seq_file *)
#define mmu_info(p) BTFIXUP_CALL(mmu_info)(p)
#define FAULT_CODE_PROT     0x1
#define FAULT_CODE_WRITE    0x2
#define FAULT_CODE_USER     0x4
BTFIXUPDEF_CALL(void, update_mmu_cache, struct vm_area_struct *, unsigned long, pte_t *)
#define update_mmu_cache(vma,addr,ptep) BTFIXUP_CALL(update_mmu_cache)(vma,addr,ptep)
BTFIXUPDEF_CALL(void, sparc_mapiorange, unsigned int, unsigned long,
unsigned long, unsigned int)
BTFIXUPDEF_CALL(void, sparc_unmapiorange, unsigned long, unsigned int)
#define sparc_mapiorange(bus,pa,va,len) BTFIXUP_CALL(sparc_mapiorange)(bus,pa,va,len)
#define sparc_unmapiorange(va,len) BTFIXUP_CALL(sparc_unmapiorange)(va,len)
extern int invalid_segment;
BTFIXUPDEF_CALL(unsigned long, __swp_type, swp_entry_t)
BTFIXUPDEF_CALL(unsigned long, __swp_offset, swp_entry_t)
BTFIXUPDEF_CALL(swp_entry_t, __swp_entry, unsigned long, unsigned long)
#define __swp_type(__x)			BTFIXUP_CALL(__swp_type)(__x)
#define __swp_offset(__x)		BTFIXUP_CALL(__swp_offset)(__x)
#define __swp_entry(__type,__off)	BTFIXUP_CALL(__swp_entry)(__type,__off)
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
BTFIXUPDEF_CALL(unsigned long, pte_to_pgoff, pte_t pte);
BTFIXUPDEF_CALL(pte_t, pgoff_to_pte, unsigned long pgoff);
#define pte_to_pgoff(pte) BTFIXUP_CALL(pte_to_pgoff)(pte)
#define pgoff_to_pte(off) BTFIXUP_CALL(pgoff_to_pte)(off)
#define PTE_FILE_MAX_BITS 24
struct ctx_list ;
extern struct ctx_list *ctx_list_pool;
extern struct ctx_list ctx_free;
extern struct ctx_list ctx_used;
#define NO_CONTEXT     -1
static inline void remove_from_ctx_list(struct ctx_list *entry)
static inline void add_to_ctx_list(struct ctx_list *head, struct ctx_list *entry)
#define add_to_free_ctxlist(entry) add_to_ctx_list(&ctx_free, entry)
#define add_to_used_ctxlist(entry) add_to_ctx_list(&ctx_used, entry)
static inline unsigned long
__get_phys (unsigned long addr)
static inline int
__get_iospace (unsigned long addr)
extern unsigned long *sparc_valid_addr_bitmap;
#define kern_addr_valid(addr) \
(test_bit(__pa((unsigned long)(addr))>>20, sparc_valid_addr_bitmap))
extern int io_remap_pfn_range(struct vm_area_struct *vma,
unsigned long from, unsigned long pfn,
unsigned long size, pgprot_t prot);
#define MK_IOSPACE_PFN(space, pfn)	(pfn | (space << (BITS_PER_LONG - 4)))
#define GET_IOSPACE(pfn)		(pfn >> (BITS_PER_LONG - 4))
#define GET_PFN(pfn)			(pfn & 0x0fffffffUL)
#define __HAVE_ARCH_PTEP_SET_ACCESS_FLAGS
#define ptep_set_access_flags(__vma, __address, __ptep, __entry, __dirty) \
()
#define VMALLOC_START           _AC(0xfe600000,UL)
#define VMALLOC_END             _AC(0xffc00000,UL)
#define HAVE_ARCH_UNMAPPED_AREA
#define pgtable_cache_init()	do  while (0)
