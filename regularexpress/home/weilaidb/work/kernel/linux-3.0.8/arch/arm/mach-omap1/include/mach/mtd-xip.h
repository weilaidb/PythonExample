#define __ARCH_OMAP_MTD_XIP_H__
#define OMAP_MPU_TIMER_BASE	(0xfffec500)
#define OMAP_MPU_TIMER_OFFSET	0x100
typedef struct  xip_omap_mpu_timer_regs_t;
#define xip_omap_mpu_timer_base(n)					\
((volatile xip_omap_mpu_timer_regs_t*)OMAP1_IO_ADDRESS(OMAP_MPU_TIMER_BASE +	\
(n)*OMAP_MPU_TIMER_OFFSET))
static inline unsigned long xip_omap_mpu_timer_read(int nr)
#define xip_irqpending()	\
(omap_readl(OMAP_IH1_ITR) & ~omap_readl(OMAP_IH1_MIR))
#define xip_currtime()		(~xip_omap_mpu_timer_read(0))
#define xip_elapsed_since(x)	(signed)((~xip_omap_mpu_timer_read(0) - (x)) / 7)
#define xip_elapsed_since(x)	(signed)((~xip_omap_mpu_timer_read(0) - (x)) / 6)
#define xip_cpu_idle()  asm volatile ("mcr p15, 0, %0, c7, c0, 4" :: "r" (1))
