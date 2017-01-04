#define __ARCH_ARM_MACH_OMAP2_L3_INTERCONNECT_3XXX_H
#define L3_MODULES			3
#define CLEAR_STDERR_LOG		(1 << 31)
#define CUSTOM_ERROR			0x2
#define STANDARD_ERROR			0x0
#define INBAND_ERROR			0x0
#define EMIF_KERRLOG_OFFSET		0x10
#define L3_SLAVE_ADDRESS_OFFSET		0x14
#define LOGICAL_ADDR_ERRORLOG		0x4
#define L3_APPLICATION_ERROR		0x0
#define L3_DEBUG_ERROR			0x1
u32 l3_flagmux[L3_MODULES] = ;
u32 l3_targ_stderrlog_main_clk1[] = ;
u32 l3_targ_stderrlog_main_clk2[] = ;
u32 l3_targ_stderrlog_main_clk3[] = ;
char *l3_targ_stderrlog_main_name[L3_MODULES][18] = ;
u32 *l3_targ[L3_MODULES] = ;
struct omap4_l3 ;
