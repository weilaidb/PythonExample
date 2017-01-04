#define _ASMARM_PAGE_NOMMU_H
#if !defined(CONFIG_SMALL_TASKS) && PAGE_SHIFT < 13
#define KTHREAD_SIZE (8192)
#define KTHREAD_SIZE PAGE_SIZE
#define get_user_page(vaddr)		__get_free_page(GFP_KERNEL)
#define free_user_page(page, addr)	free_page(addr)
#define clear_page(page)	memset((page), 0, PAGE_SIZE)
#define copy_page(to,from)	memcpy((to), (from), PAGE_SIZE)
#define clear_user_page(page, vaddr, pg)	clear_page(page)
#define copy_user_page(to, from, vaddr, pg)	copy_page(to, from)
typedef unsigned long pte_t;
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
