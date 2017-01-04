static const char name_s5p6440[] = "S5P6440";
static const char name_s5p6450[] = "S5P6450";
static const char name_s5pc100[] = "S5PC100";
static const char name_s5pv210[] = "S5PV210/S5PC110";
static const char name_exynos4210[] = "EXYNOS4210";
static struct cpu_table cpu_ids[] __initdata = ;
static struct map_desc s5p_iodesc[] __initdata = ;
void __init s5p_init_io(struct map_desc *mach_desc,
int size, void __iomem *cpuid_addr)
