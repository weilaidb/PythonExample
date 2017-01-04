#define _ASM_POWERPC_LPPACA_H
#if NR_CPUS < 64
#define NR_LPPACAS	NR_CPUS
#define NR_LPPACAS	64
#define NR_LPPACAS	1
struct lppaca  __attribute__((__aligned__(0x400)));
extern struct lppaca lppaca[];
#define lppaca_of(cpu)	(*paca[cpu].lppaca_ptr)
struct slb_shadow  ____cacheline_aligned;
extern struct slb_shadow slb_shadow[];
struct dtl_entry ;
#define DISPATCH_LOG_BYTES	4096
#define N_DISPATCH_LOG		(DISPATCH_LOG_BYTES / sizeof(struct dtl_entry))
extern struct kmem_cache *dtl_cache;
extern void (*dtl_consumer)(struct dtl_entry *entry, u64 index);
