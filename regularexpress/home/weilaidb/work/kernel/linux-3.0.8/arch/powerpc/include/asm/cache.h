#define _ASM_POWERPC_CACHE_H
#if defined(CONFIG_8xx) || defined(CONFIG_403GCX)
#define L1_CACHE_SHIFT		4
#define MAX_COPY_PREFETCH	1
#elif defined(CONFIG_PPC_E500MC)
#define L1_CACHE_SHIFT		6
#define MAX_COPY_PREFETCH	4
#elif defined(CONFIG_PPC32)
#define MAX_COPY_PREFETCH	4
#if defined(CONFIG_PPC_47x)
#define L1_CACHE_SHIFT		7
#define L1_CACHE_SHIFT		5
#define L1_CACHE_SHIFT		7
#define	L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)
#define	SMP_CACHE_BYTES		L1_CACHE_BYTES
#if defined(__powerpc64__) && !defined(__ASSEMBLY__)
struct ppc64_caches ;
extern struct ppc64_caches ppc64_caches;
#if !defined(__ASSEMBLY__)
#define __read_mostly __attribute__((__section__(".data..read_mostly")))
