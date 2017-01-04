#if defined(CONFIG_PMC_MSP7120_GW)
#define MSP_BOARD_RESET_GPIO	9
extern void msp_serial_setup(void);
extern void pmctwiled_setup(void);
#if defined(CONFIG_PMC_MSP7120_EVAL) || \
defined(CONFIG_PMC_MSP7120_GW) || \
defined(CONFIG_PMC_MSP7120_FPGA)
void msp7120_reset(void)
void msp_restart(char *command)
void msp_halt(void)
void msp_power_off(void)
void __init plat_mem_setup(void)
extern struct plat_smp_ops msp_smtc_smp_ops;
void __init prom_init(void)
