#define __PPC_FSL_SOC_H
struct spi_device;
extern phys_addr_t get_immrbase(void);
#if defined(CONFIG_CPM2) || defined(CONFIG_QUICC_ENGINE) || defined(CONFIG_8xx)
extern u32 get_brgfreq(void);
extern u32 get_baudrate(void);
static inline u32 get_brgfreq(void)
static inline u32 get_baudrate(void)
extern u32 fsl_get_sys_freq(void);
struct spi_board_info;
struct device_node;
extern void fsl_rstcr_restart(char *cmd);
#if defined(CONFIG_FB_FSL_DIU) || defined(CONFIG_FB_FSL_DIU_MODULE)
struct platform_diu_data_ops ;
extern struct platform_diu_data_ops diu_ops;
