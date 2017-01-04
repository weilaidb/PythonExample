#define MV64x60_MPP_CNTL_0	0x0000
#define MV64x60_MPP_CNTL_2	0x0008
#define MV64x60_GPP_IO_CNTL	0x0000
#define MV64x60_GPP_LEVEL_CNTL	0x0010
#define MV64x60_GPP_VALUE_SET	0x0018
#define PLATFORM_NAME_MAX	32
static char prpmc2800_platform_name[PLATFORM_NAME_MAX];
static void __iomem *mv64x60_mpp_reg_base;
static void __iomem *mv64x60_gpp_reg_base;
static void __init prpmc2800_setup_arch(void)
static void prpmc2800_reset_board(void)
static void prpmc2800_restart(char *cmd)
#define PPRPM2800_COHERENCY_SETTING "off"
#define PPRPM2800_COHERENCY_SETTING "on"
void prpmc2800_show_cpuinfo(struct seq_file *m)
static int __init prpmc2800_probe(void)
define_machine(prpmc2800);
