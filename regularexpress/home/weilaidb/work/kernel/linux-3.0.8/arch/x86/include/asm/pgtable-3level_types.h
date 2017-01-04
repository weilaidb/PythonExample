#define _ASM_X86_PGTABLE_3LEVEL_DEFS_H
typedef u64	pteval_t;
typedef u64	pmdval_t;
typedef u64	pudval_t;
typedef u64	pgdval_t;
typedef u64	pgprotval_t;
typedef union  pte_t;
#define SHARED_KERNEL_PMD	(pv_info.shared_kernel_pmd)
#define SHARED_KERNEL_PMD	1
#define PAGETABLE_LEVELS	3
#define PGDIR_SHIFT	30
#define PTRS_PER_PGD	4
#define PMD_SHIFT	21
#define PTRS_PER_PMD	512
#define PTRS_PER_PTE	512
