static void __cpuinit __do_cyrix_devid(unsigned char *dir0, unsigned char *dir1)
static void __cpuinit do_cyrix_devid(unsigned char *dir0, unsigned char *dir1)
static unsigned char Cx86_dir0_msb __cpuinitdata = 0;
static const char __cpuinitconst Cx86_model[][9] = ;
static const char __cpuinitconst Cx486_name[][5] = ;
static const char __cpuinitconst Cx486S_name[][4] = ;
static const char __cpuinitconst Cx486D_name[][4] = ;
static char Cx86_cb[] __cpuinitdata = "?.5x Core/Bus Clock";
static const char __cpuinitconst cyrix_model_mult1[] = "12??43";
static const char __cpuinitconst cyrix_model_mult2[] = "12233445";
static void __cpuinit check_cx686_slop(struct cpuinfo_x86 *c)
static void __cpuinit set_cx86_reorder(void)
static void __cpuinit set_cx86_memwb(void)
static void __cpuinit geode_configure(void)
static void __cpuinit early_init_cyrix(struct cpuinfo_x86 *c)
static void __cpuinit init_cyrix(struct cpuinfo_x86 *c)
static void __cpuinit init_nsc(struct cpuinfo_x86 *c)
static inline int test_cyrix_52div(void)
static void __cpuinit cyrix_identify(struct cpuinfo_x86 *c)
static const struct cpu_dev __cpuinitconst cyrix_cpu_dev = ;
cpu_dev_register(cyrix_cpu_dev);
static const struct cpu_dev __cpuinitconst nsc_cpu_dev = ;
cpu_dev_register(nsc_cpu_dev);
