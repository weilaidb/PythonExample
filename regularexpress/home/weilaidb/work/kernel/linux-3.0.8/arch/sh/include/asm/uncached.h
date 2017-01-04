#define __ASM_SH_UNCACHED_H
extern unsigned long cached_to_uncached;
extern unsigned long uncached_size;
extern unsigned long uncached_start, uncached_end;
extern int virt_addr_uncached(unsigned long kaddr);
extern void uncached_init(void);
extern void uncached_resize(unsigned long size);
#define jump_to_uncached()			\
do  while (0)
#define back_to_cached()				\
do  while (0)
#define virt_addr_uncached(kaddr)	(0)
#define uncached_init()			do  while (0)
#define uncached_resize(size)		BUG()
#define jump_to_uncached()		do  while (0)
#define back_to_cached()		do  while (0)
