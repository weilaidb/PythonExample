#define _ASM_POWERPC_PAGE_H
#if defined(CONFIG_PPC_256K_PAGES)
#define PAGE_SHIFT		18
#elif defined(CONFIG_PPC_64K_PAGES)
#define PAGE_SHIFT		16
#elif defined(CONFIG_PPC_16K_PAGES)
#define PAGE_SHIFT		14
#define PAGE_SHIFT		12
#define PAGE_SIZE		(ASM_CONST(1) << PAGE_SHIFT)
#define __HAVE_ARCH_GATE_AREA		1
#define PAGE_MASK      (~((1 << PAGE_SHIFT) - 1))
#define KERNELBASE      ASM_CONST(CONFIG_KERNEL_START)
#define PAGE_OFFSET	ASM_CONST(CONFIG_PAGE_OFFSET)
#define LOAD_OFFSET	ASM_CONST((CONFIG_KERNEL_START-CONFIG_PHYSICAL_START))
#if defined(CONFIG_RELOCATABLE)
extern phys_addr_t memstart_addr;
extern phys_addr_t kernstart_addr;
#define PHYSICAL_START	kernstart_addr
#define PHYSICAL_START	ASM_CONST(CONFIG_PHYSICAL_START)
#define MEMORY_START	0UL
#elif defined(CONFIG_RELOCATABLE)
#define MEMORY_START	memstart_addr
#define MEMORY_START	(PHYSICAL_START + PAGE_OFFSET - KERNELBASE)
#define ARCH_PFN_OFFSET		((unsigned long)(MEMORY_START >> PAGE_SHIFT))
#define pfn_valid(pfn)		((pfn) >= ARCH_PFN_OFFSET && (pfn) < max_mapnr)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define __va(x) ((void *)(unsigned long)((phys_addr_t)(x) - PHYSICAL_START + KERNELBASE))
#define __pa(x) ((unsigned long)(x) + PHYSICAL_START - KERNELBASE)
#define __va(x) ((void *)(unsigned long)((phys_addr_t)(x) + PAGE_OFFSET - MEMORY_START))
#define __pa(x) ((unsigned long)(x) - PAGE_OFFSET + MEMORY_START)
#define VM_DATA_DEFAULT_FLAGS32	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define VM_DATA_DEFAULT_FLAGS64	(VM_READ | VM_WRITE | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
#define _ALIGN_UP(addr,size)	(((addr)+((size)-1))&(~((size)-1)))
#define _ALIGN_DOWN(addr,size)	((addr)&(~((size)-1)))
#define _ALIGN(addr,size)     _ALIGN_UP(addr,size)
#define is_kernel_addr(x)	((x) >= 0x8000000000000000ul)
#define is_kernel_addr(x)	((x) >= PAGE_OFFSET)
#undef STRICT_MM_TYPECHECKS
typedef struct  pte_t;
#define pte_val(x)	((x).pte)
#define __pte(x)	((pte_t) )
#if defined(CONFIG_PPC_64K_PAGES) && defined(CONFIG_PPC_STD_MMU_64)
typedef struct  real_pte_t;
typedef struct  real_pte_t;
typedef struct  pmd_t;
#define pmd_val(x)	((x).pmd)
#define __pmd(x)	((pmd_t) )
typedef struct  pud_t;
#define pud_val(x)	((x).pud)
#define __pud(x)	((pud_t) )
typedef struct  pgd_t;
#define pgd_val(x)	((x).pgd)
#define __pgd(x)	((pgd_t) )
typedef struct  pgprot_t;
#define pgprot_val(x)	((x).pgprot)
#define __pgprot(x)	((pgprot_t) )
typedef pte_basic_t pte_t;
#define pte_val(x)	(x)
#define __pte(x)	(x)
#if defined(CONFIG_PPC_64K_PAGES) && defined(CONFIG_PPC_STD_MMU_64)
typedef struct  real_pte_t;
typedef pte_t real_pte_t;
typedef unsigned long pmd_t;
#define pmd_val(x)	(x)
#define __pmd(x)	(x)
typedef unsigned long pud_t;
#define pud_val(x)	(x)
#define __pud(x)	(x)
typedef unsigned long pgd_t;
#define pgd_val(x)	(x)
#define pgprot_val(x)	(x)
typedef unsigned long pgprot_t;
#define __pgd(x)	(x)
#define __pgprot(x)	(x)
typedef struct  hugepd_t;
#define HUGEPD_SHIFT_MASK     0x3f
static inline int hugepd_ok(hugepd_t hpd)
#define is_hugepd(pdep)               (hugepd_ok(*((hugepd_t *)(pdep))))
#define is_hugepd(pdep)			0
struct page;
extern void clear_user_page(void *page, unsigned long vaddr, struct page *pg);
extern void copy_user_page(void *to, void *from, unsigned long vaddr,
struct page *p);
extern int page_is_ram(unsigned long pfn);
void arch_free_page(struct page *page, int order);
#define HAVE_ARCH_FREE_PAGE
struct vm_area_struct;
typedef struct page *pgtable_t;
