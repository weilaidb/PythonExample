#define _ASM_X86_PGTABLE_2LEVEL_DEFS_H
typedef unsigned long	pteval_t;
typedef unsigned long	pmdval_t;
typedef unsigned long	pudval_t;
typedef unsigned long	pgdval_t;
typedef unsigned long	pgprotval_t;
typedef union  pte_t;
#define SHARED_KERNEL_PMD	0
#define PAGETABLE_LEVELS	2
#define PGDIR_SHIFT	22
#define PTRS_PER_PGD	1024
#define PTRS_PER_PTE	1024
