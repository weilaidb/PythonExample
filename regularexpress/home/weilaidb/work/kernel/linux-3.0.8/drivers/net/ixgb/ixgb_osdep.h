#define _IXGB_OSDEP_H_
#undef ASSERT
#define ASSERT(x)	BUG_ON(!(x))
#define ENTER() pr_debug("%s\n", __func__);
#define IXGB_WRITE_REG(a, reg, value) ( \
writel((value), ((a)->hw_addr + IXGB_##reg)))
#define IXGB_READ_REG(a, reg) ( \
readl((a)->hw_addr + IXGB_##reg))
#define IXGB_WRITE_REG_ARRAY(a, reg, offset, value) ( \
writel((value), ((a)->hw_addr + IXGB_##reg + ((offset) << 2))))
#define IXGB_READ_REG_ARRAY(a, reg, offset) ( \
readl((a)->hw_addr + IXGB_##reg + ((offset) << 2)))
#define IXGB_WRITE_FLUSH(a) IXGB_READ_REG(a, STATUS)
#define IXGB_MEMCPY memcpy
