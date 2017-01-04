#define __ASM_ARCH_UNCOMPRESS_H
#undef S3C2410_GPIOREG
#define S3C2410_GPIOREG(x) ((S3C24XX_PA_GPIO + (x)))
static inline int is_arm926(void)
static void arch_detect_cpu(void)
