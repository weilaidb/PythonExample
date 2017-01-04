#define CSP_REG_H
#define __REG32(x)      (*((volatile uint32_t *)(x)))
#define __REG16(x)      (*((volatile uint16_t *)(x)))
#define __REG8(x)       (*((volatile uint8_t *) (x)))
#define REG8_RSVD(start, end)   uint8_t rsvd_##start[(end - start) / sizeof(uint8_t)]
#define REG16_RSVD(start, end)  uint16_t rsvd_##start[(end - start) / sizeof(uint16_t)]
#define REG32_RSVD(start, end)  uint32_t rsvd_##start[(end - start) / sizeof(uint32_t)]
#if defined(__KERNEL__) && !defined(STANDALONE)
#define REG_LOCAL_IRQ_SAVE      HW_DECLARE_SPINLOCK(reg32) \
unsigned long flags; HW_IRQ_SAVE(reg32, flags)
#define REG_LOCAL_IRQ_RESTORE   HW_IRQ_RESTORE(reg32, flags)
#define REG_LOCAL_IRQ_SAVE
#define REG_LOCAL_IRQ_RESTORE
static inline void reg32_modify_and(volatile uint32_t *reg, uint32_t value)
static inline void reg32_modify_or(volatile uint32_t *reg, uint32_t value)
static inline void reg32_modify_mask(volatile uint32_t *reg, uint32_t mask,
uint32_t value)
static inline void reg32_write(volatile uint32_t *reg, uint32_t value)
