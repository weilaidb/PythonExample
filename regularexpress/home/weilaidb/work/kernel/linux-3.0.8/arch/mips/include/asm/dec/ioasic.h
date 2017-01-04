#define __ASM_DEC_IOASIC_H
extern spinlock_t ioasic_ssr_lock;
extern volatile u32 *ioasic_base;
static inline void ioasic_write(unsigned int reg, u32 v)
static inline u32 ioasic_read(unsigned int reg)
extern void init_ioasic_irqs(int base);
extern void dec_ioasic_clocksource_init(void);
