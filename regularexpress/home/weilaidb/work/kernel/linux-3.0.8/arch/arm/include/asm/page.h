#define _ASMARM_PAGE_H
#define PAGE_SHIFT		12
#define PAGE_SIZE		(_AC(1,UL) << PAGE_SHIFT)
#define PAGE_MASK		(~(PAGE_SIZE-1))
#undef _USER
#undef MULTI_USER
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER v3
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER v4wt
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER v4wb
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER feroceon
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER fa
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER v4_mc
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER xscale_mc
# endif
# ifdef _USER
#  define MULTI_USER 1
# else
#  define _USER xsc3_mc
# endif
# define MULTI_USER 1
#if !defined(_USER) && !defined(MULTI_USER)
#error Unknown user operations model
struct page;
struct vm_area_struct;
struct cpu_user_fns ;
extern struct cpu_user_fns cpu_user;
#define __cpu_clear_user_highpage	cpu_user.cpu_clear_user_highpage
#define __cpu_copy_user_highpage	cpu_user.cpu_copy_user_highpage
#define __cpu_clear_user_highpage	__glue(_USER,_clear_user_highpage)
#define __cpu_copy_user_highpage	__glue(_USER,_copy_user_highpage)
extern void __cpu_clear_user_highpage(struct page *page, unsigned long vaddr);
extern void __cpu_copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma);
#define clear_user_highpage(page,vaddr)		\
__cpu_clear_user_highpage(page, vaddr)
#define __HAVE_ARCH_COPY_USER_HIGHPAGE
#define copy_user_highpage(to,from,vaddr,vma)	\
__cpu_copy_user_highpage(to, from, vaddr, vma)
#define clear_page(page)	memset((void *)(page), 0, PAGE_SIZE)
extern void copy_page(void *to, const void *from);
typedef unsigned long pteval_t;
#undef STRICT_MM_TYPECHECKS
typedef struct  pte_t;
typedef struct  pmd_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
#define pte_val(x)      ((x).pte)
#define pmd_val(x)      ((x).pmd)
#define pgd_val(x)	((x).pgd[0])
#define pgprot_val(x)   ((x).pgprot)
#define __pte(x)        ((pte_t)  )
#define __pmd(x)        ((pmd_t)  )
#define __pgprot(x)     ((pgprot_t)  )
typedef pteval_t pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t[2];
typedef unsigned long pgprot_t;
#define pte_val(x)      (x)
#define pmd_val(x)      (x)
#define pgd_val(x)	((x)[0])
#define pgprot_val(x)   (x)
#define __pte(x)        (x)
#define __pmd(x)        (x)
#define __pgprot(x)     (x)
typedef struct page *pgtable_t;
extern int pfn_valid(unsigned long);
#define VM_DATA_DEFAULT_FLAGS \
(((current->personality & READ_IMPLIES_EXEC) ? VM_EXEC : 0) | \
VM_READ | VM_WRITE | VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
