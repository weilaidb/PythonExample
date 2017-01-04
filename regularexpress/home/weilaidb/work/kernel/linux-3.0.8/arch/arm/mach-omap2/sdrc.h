#define __ARCH_ARM_MACH_OMAP2_SDRC_H
#undef DEBUG
extern void __iomem *omap2_sdrc_base;
extern void __iomem *omap2_sms_base;
#define OMAP_SDRC_REGADDR(reg)			(omap2_sdrc_base + (reg))
#define OMAP_SMS_REGADDR(reg)			(omap2_sms_base + (reg))
static inline void sdrc_write_reg(u32 val, u16 reg)
static inline u32 sdrc_read_reg(u16 reg)
static inline void sms_write_reg(u32 val, u16 reg)
static inline u32 sms_read_reg(u16 reg)
#define OMAP242X_SDRC_REGADDR(reg)					\
OMAP2_L3_IO_ADDRESS(OMAP2420_SDRC_BASE + (reg))
#define OMAP243X_SDRC_REGADDR(reg)					\
OMAP2_L3_IO_ADDRESS(OMAP243X_SDRC_BASE + (reg))
#define OMAP34XX_SDRC_REGADDR(reg)					\
OMAP2_L3_IO_ADDRESS(OMAP343X_SDRC_BASE + (reg))
#define MIN_SDRC_DLL_LOCK_FREQ		83000000
#define SDRC_MPURATE_SCALE		8
#define SDRC_MPURATE_BASE_SHIFT		9
#define SDRC_MPURATE_LOOPS		96
