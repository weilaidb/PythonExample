#define __ASMARM_PROM_H
static inline void irq_dispose_mapping(unsigned int virq)
extern struct machine_desc *setup_machine_fdt(unsigned int dt_phys);
extern void arm_dt_memblock_reserve(void);
static inline struct machine_desc *setup_machine_fdt(unsigned int dt_phys)
static inline void arm_dt_memblock_reserve(void)
