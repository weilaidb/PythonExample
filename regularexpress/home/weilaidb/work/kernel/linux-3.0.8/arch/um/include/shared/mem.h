#define __MEM_H__
extern int phys_mapping(unsigned long phys, unsigned long long *offset_out);
extern unsigned long uml_physmem;
static inline unsigned long to_phys(void *virt)
static inline void *to_virt(unsigned long phys)
