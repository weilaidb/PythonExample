#define __UM_PAGE_H
#define PAGE_SHIFT	12
#define PAGE_SIZE	(_AC(1, UL) << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE-1))
struct page;
#define clear_page(page)	memset((void *)(page), 0, PAGE_SIZE)
#define copy_page(to,from)	memcpy((void *)(to), (void *)(from), PAGE_SIZE)
#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
#if defined(CONFIG_3_LEVEL_PGTABLES) && !defined(CONFIG_64BIT)
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pgd_t;
#define pte_val(x) ((x).pte_low | ((unsigned long long) (x).pte_high << 32))
#define pte_get_bits(pte, bits) ((pte).pte_low & (bits))
#define pte_set_bits(pte, bits) ((pte).pte_low |= (bits))
#define pte_clear_bits(pte, bits) ((pte).pte_low &= ~(bits))
#define pte_copy(to, from) ()
#define pte_is_zero(pte) (!((pte).pte_low & ~_PAGE_NEWPAGE) && !(pte).pte_high)
#define pte_set_val(pte, phys, prot) \
()
#define pmd_val(x)	((x).pmd)
#define __pmd(x) ((pmd_t)  )
typedef unsigned long long pfn_t;
typedef unsigned long long phys_t;
typedef struct  pte_t;
typedef struct  pgd_t;
typedef struct  pmd_t;
#define pmd_val(x)	((x).pmd)
#define __pmd(x) ((pmd_t)  )
#define pte_val(x)	((x).pte)
#define pte_get_bits(p, bits) ((p).pte & (bits))
#define pte_set_bits(p, bits) ((p).pte |= (bits))
#define pte_clear_bits(p, bits) ((p).pte &= ~(bits))
#define pte_copy(to, from) ((to).pte = (from).pte)
#define pte_is_zero(p) (!((p).pte & ~_PAGE_NEWPAGE))
#define pte_set_val(p, phys, prot) (p).pte = (phys | pgprot_val(prot))
typedef unsigned long pfn_t;
typedef unsigned long phys_t;
typedef struct  pgprot_t;
typedef struct page *pgtable_t;
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pte(x) ((pte_t)  )
#define __pgd(x) ((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
extern unsigned long uml_physmem;
#define PAGE_OFFSET (uml_physmem)
#define KERNELBASE PAGE_OFFSET
#define __va_space (8*1024*1024)
#define __pa(virt) to_phys((void *) (unsigned long) (virt))
#define __va(phys) to_virt((unsigned long) (phys))
#define phys_to_pfn(p) ((pfn_t) ((p) >> PAGE_SHIFT))
#define pfn_to_phys(pfn) ((phys_t) ((pfn) << PAGE_SHIFT))
#define pfn_valid(pfn) ((pfn) < max_mapnr)
#define virt_addr_valid(v) pfn_valid(phys_to_pfn(__pa(v)))
