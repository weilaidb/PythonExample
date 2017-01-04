#define __ASM_ARCH_MSM_BOARD_H
struct msm_acpu_clock_platform_data
;
struct clk_lookup;
extern struct sys_timer msm_timer;
void __init msm_add_devices(void);
void __init msm_map_common_io(void);
void __init msm_init_irq(void);
void __init msm_init_gpio(void);
void __init msm_clock_init(struct clk_lookup *clock_tbl, unsigned num_clocks);
void __init msm_acpu_clock_init(struct msm_acpu_clock_platform_data *);
int __init msm_add_sdcc(unsigned int controller,
struct msm_mmc_platform_data *plat,
unsigned int stat_irq, unsigned long stat_irq_flags);
