#define __SEP_DEV_H__
struct sep_device ;
static inline void sep_write_reg(struct sep_device *dev, int reg, u32 value)
static inline u32 sep_read_reg(struct sep_device *dev, int reg)
static inline void sep_wait_sram_write(struct sep_device *dev)
