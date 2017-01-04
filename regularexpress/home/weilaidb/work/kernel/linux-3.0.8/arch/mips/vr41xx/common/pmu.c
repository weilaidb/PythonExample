#define PMU_TYPE1_BASE	0x0b0000a0UL
#define PMU_TYPE1_SIZE	0x0eUL
#define PMU_TYPE2_BASE	0x0f0000c0UL
#define PMU_TYPE2_SIZE	0x10UL
#define PMUCNT2REG	0x06
#define SOFTRST	0x0010
static void __iomem *pmu_base;
#define pmu_read(offset)		readw(pmu_base + (offset))
#define pmu_write(offset, value)	writew((value), pmu_base + (offset))
static void vr41xx_cpu_wait(void)
static inline void software_reset(void)
static void vr41xx_restart(char *command)
static void vr41xx_halt(void)
static int __init vr41xx_pmu_init(void)
core_initcall(vr41xx_pmu_init);
