#define __ARCH_LOKI_COMMON_H
struct mv643xx_eth_platform_data;
void loki_map_io(void);
void loki_init(void);
void loki_init_early(void);
void loki_init_irq(void);
extern struct mbus_dram_target_info loki_mbus_dram_info;
void loki_setup_cpu_mbus(void);
void loki_setup_dev_boot_win(u32 base, u32 size);
void loki_ge0_init(struct mv643xx_eth_platform_data *eth_data);
void loki_ge1_init(struct mv643xx_eth_platform_data *eth_data);
void loki_sas_init(void);
void loki_uart0_init(void);
void loki_uart1_init(void);
extern struct sys_timer loki_timer;
