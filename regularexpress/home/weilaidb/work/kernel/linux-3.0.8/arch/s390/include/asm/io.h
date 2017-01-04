#define _S390_IO_H
#define IO_SPACE_LIMIT 0xffffffff
static inline unsigned long virt_to_phys(volatile void * address)
static inline void * phys_to_virt(unsigned long address)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
