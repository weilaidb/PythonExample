#define __ASM_POWERPC_MPC52xx_H__
#define MPC5200_SVR		0x80110010
#define MPC5200_SVR_MASK	0xfffffff0
#define MPC5200B_SVR		0x80110020
#define MPC5200B_SVR_MASK	0xfffffff0
struct mpc52xx_mmap_ctl ;
struct mpc52xx_sdram ;
struct mpc52xx_sdma ;
struct mpc52xx_gpt ;
struct mpc52xx_gpio ;
#define MPC52xx_GPIO_PSC_CONFIG_UART_WITHOUT_CD	4
#define MPC52xx_GPIO_PSC_CONFIG_UART_WITH_CD	5
#define MPC52xx_GPIO_PCI_DIS			(1<<15)
struct mpc52xx_gpio_wkup ;
struct mpc52xx_xlb ;
#define MPC52xx_XLB_CFG_PLDIS		(1 << 31)
#define MPC52xx_XLB_CFG_SNOOP		(1 << 15)
struct mpc52xx_cdm ;
struct mpc52xx_intr ;
extern void mpc5200_setup_xlb_arbiter(void);
extern void mpc52xx_declare_of_platform_devices(void);
extern int mpc5200_psc_ac97_gpio_reset(int psc_number);
extern void mpc52xx_map_common_devices(void);
extern int mpc52xx_set_psc_clkdiv(int psc_id, int clkdiv);
extern unsigned int mpc52xx_get_xtal_freq(struct device_node *node);
extern void mpc52xx_restart(char *cmd);
struct mpc52xx_gpt_priv;
extern struct mpc52xx_gpt_priv *mpc52xx_gpt_from_irq(int irq);
extern int mpc52xx_gpt_start_timer(struct mpc52xx_gpt_priv *gpt, u64 period,
int continuous);
extern u64 mpc52xx_gpt_timer_period(struct mpc52xx_gpt_priv *gpt);
extern int mpc52xx_gpt_stop_timer(struct mpc52xx_gpt_priv *gpt);
#define MPC52XX_LPBFIFO_FLAG_READ		(0)
#define MPC52XX_LPBFIFO_FLAG_WRITE		(1<<0)
#define MPC52XX_LPBFIFO_FLAG_NO_INCREMENT	(1<<1)
#define MPC52XX_LPBFIFO_FLAG_NO_DMA		(1<<2)
#define MPC52XX_LPBFIFO_FLAG_POLL_DMA		(1<<3)
struct mpc52xx_lpbfifo_request ;
extern int mpc52xx_lpbfifo_submit(struct mpc52xx_lpbfifo_request *req);
extern void mpc52xx_lpbfifo_abort(struct mpc52xx_lpbfifo_request *req);
extern void mpc52xx_lpbfifo_poll(void);
extern void mpc52xx_init_irq(void);
extern unsigned int mpc52xx_get_irq(void);
extern int __init mpc52xx_add_bridge(struct device_node *node);
extern void __init mpc52xx_setup_pci(void);
static inline void mpc52xx_setup_pci(void)
struct mpc52xx_suspend ;
extern struct mpc52xx_suspend mpc52xx_suspend;
extern int __init mpc52xx_pm_init(void);
extern int mpc52xx_set_wakeup_gpio(u8 pin, u8 level);
extern int __init lite5200_pm_init(void);
extern int mpc52xx_pm_prepare(void);
extern int mpc52xx_pm_enter(suspend_state_t);
extern void mpc52xx_pm_finish(void);
extern char saved_sram[0x4000];
