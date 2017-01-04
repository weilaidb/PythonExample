#define __ASM_MIPS_PROM_H
extern int early_init_dt_scan_memory_arch(unsigned long node,
const char *uname, int depth, void *data);
extern int reserve_mem_mach(unsigned long addr, unsigned long size);
extern void free_mem_mach(unsigned long addr, unsigned long size);
extern void device_tree_init(void);
static inline void device_tree_init(void)
