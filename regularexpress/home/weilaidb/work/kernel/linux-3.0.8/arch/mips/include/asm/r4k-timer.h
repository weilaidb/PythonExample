#define __ASM_R4K_TYPES_H
extern void synchronise_count_master(void);
extern void synchronise_count_slave(void);
static inline void synchronise_count_master(void)
static inline void synchronise_count_slave(void)
