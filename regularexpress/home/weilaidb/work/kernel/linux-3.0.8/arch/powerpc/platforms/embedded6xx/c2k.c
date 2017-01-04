#define MV64x60_MPP_CNTL_0	0x0000
#define MV64x60_MPP_CNTL_2	0x0008
#define MV64x60_GPP_IO_CNTL	0x0000
#define MV64x60_GPP_LEVEL_CNTL	0x0010
#define MV64x60_GPP_VALUE_SET	0x0018
static void __iomem *mv64x60_mpp_reg_base;
static void __iomem *mv64x60_gpp_reg_base;
static void __init c2k_setup_arch(void)
static void c2k_reset_board(void)
static void c2k_restart(char *cmd)
#define COHERENCY_SETTING "off"
#define COHERENCY_SETTING "on"
void c2k_show_cpuinfo(struct seq_file *m)
static int __init c2k_probe(void)
define_machine(c2k) ;
