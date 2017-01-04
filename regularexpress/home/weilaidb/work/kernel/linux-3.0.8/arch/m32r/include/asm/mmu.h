#define _ASM_M32R_MMU_H
#if !defined(CONFIG_MMU)
typedef struct  mm_context_t;
typedef unsigned long mm_context_t;
typedef unsigned long mm_context_t[NR_CPUS];
