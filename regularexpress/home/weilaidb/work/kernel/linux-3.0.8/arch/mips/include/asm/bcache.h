#define _ASM_BCACHE_H
struct bcache_ops ;
extern void indy_sc_init(void);
extern struct bcache_ops *bcops;
static inline void bc_enable(void)
static inline void bc_disable(void)
static inline void bc_wback_inv(unsigned long page, unsigned long size)
static inline void bc_inv(unsigned long page, unsigned long size)
#define bc_enable() do  while (0)
#define bc_disable() do  while (0)
#define bc_wback_inv(page, size) do  while (0)
#define bc_inv(page, size) do  while (0)
