#define __ARCH_ARM_MACH_OMAP1_PM_H
#define CLKGEN_REG_ASM_BASE		OMAP1_IO_ADDRESS(0xfffece00)
#define ARM_IDLECT1_ASM_OFFSET		0x04
#define ARM_IDLECT2_ASM_OFFSET		0x08
#define TCMIF_ASM_BASE			OMAP1_IO_ADDRESS(0xfffecc00)
#define EMIFS_CONFIG_ASM_OFFSET		0x0c
#define EMIFF_SDRAM_CONFIG_ASM_OFFSET	0x20
#define IDLE_WAIT_CYCLES		0x00000fff
#define PERIPHERAL_ENABLE		0x2
#define SELF_REFRESH_MODE		0x0c000001
#define IDLE_EMIFS_REQUEST		0xc
#define MODEM_32K_EN			0x1
#define PER_EN				0x1
#define CPU_SUSPEND_SIZE		200
#define ULPD_LOW_PWR_EN			0x0001
#define ULPD_DEEP_SLEEP_TRANSITION_EN	0x0010
#define ULPD_SETUP_ANALOG_CELL_3_VAL	0
#define ULPD_POWER_CTRL_REG_VAL		0x0219
#define DSP_IDLE_DELAY			10
#define DSP_IDLE			0x0040
#define DSP_RST				0x0004
#define DSP_ENABLE			0x0002
#define SUFFICIENT_DSP_RESET_TIME	1000
#define DEFAULT_MPUI_CONFIG		0x05cf
#define ENABLE_XORCLK			0x2
#define DSP_CLOCK_ENABLE		0x2000
#define DSP_IDLE_MODE			0x2
#define TC_IDLE_REQUEST			(0x0000000c)
#define IRQ_LEVEL2			(1<<0)
#define IRQ_KEYBOARD			(1<<1)
#define IRQ_UART2			(1<<15)
#define PDE_BIT				0x08
#define PWD_EN_BIT			0x04
#define EN_PERCK_BIT			0x04
#define OMAP1510_DEEP_SLEEP_REQUEST	0x0ec7
#define OMAP1510_BIG_SLEEP_REQUEST	0x0cc5
#define OMAP1510_IDLE_LOOP_REQUEST	0x0c00
#define OMAP1510_IDLE_CLOCK_DOMAINS	0x2
#define OMAP1610_IDLECT1_SLEEP_VAL	0x13c7
#define OMAP1610_IDLECT2_SLEEP_VAL	0x09c7
#define OMAP1610_IDLECT3_VAL		0x3f
#define OMAP1610_IDLECT3_SLEEP_ORMASK	0x2c
#define OMAP1610_IDLECT3		0xfffece24
#define OMAP1610_IDLE_LOOP_REQUEST	0x0400
#define OMAP7XX_IDLECT1_SLEEP_VAL	0x16c7
#define OMAP7XX_IDLECT2_SLEEP_VAL	0x09c7
#define OMAP7XX_IDLECT3_VAL		0x3f
#define OMAP7XX_IDLECT3		0xfffece24
#define OMAP7XX_IDLE_LOOP_REQUEST	0x0C00
#if     !defined(CONFIG_ARCH_OMAP730) && \
!defined(CONFIG_ARCH_OMAP850) && \
!defined(CONFIG_ARCH_OMAP15XX) && \
!defined(CONFIG_ARCH_OMAP16XX)
#warning "Power management for this processor not implemented yet"
extern struct kset power_subsys;
extern void prevent_idle_sleep(void);
extern void allow_idle_sleep(void);
extern void omap1_pm_idle(void);
extern void omap1_pm_suspend(void);
extern void omap7xx_cpu_suspend(unsigned long, unsigned long);
extern void omap1510_cpu_suspend(unsigned long, unsigned long);
extern void omap1610_cpu_suspend(unsigned long, unsigned long);
extern void omap7xx_idle_loop_suspend(void);
extern void omap1510_idle_loop_suspend(void);
extern void omap1610_idle_loop_suspend(void);
extern unsigned int omap7xx_cpu_suspend_sz;
extern unsigned int omap1510_cpu_suspend_sz;
extern unsigned int omap1610_cpu_suspend_sz;
extern unsigned int omap7xx_idle_loop_suspend_sz;
extern unsigned int omap1510_idle_loop_suspend_sz;
extern unsigned int omap1610_idle_loop_suspend_sz;
extern void omap_serial_wake_trigger(int enable);
#define omap_serial_wakeup_init()
#define omap_serial_wake_trigger(x)
#define ARM_SAVE(x) arm_sleep_save[ARM_SLEEP_SAVE_##x] = omap_readl(x)
#define ARM_RESTORE(x) omap_writel((arm_sleep_save[ARM_SLEEP_SAVE_##x]), (x))
#define ARM_SHOW(x) arm_sleep_save[ARM_SLEEP_SAVE_##x]
#define DSP_SAVE(x) dsp_sleep_save[DSP_SLEEP_SAVE_##x] = __raw_readw(x)
#define DSP_RESTORE(x) __raw_writew((dsp_sleep_save[DSP_SLEEP_SAVE_##x]), (x))
#define DSP_SHOW(x) dsp_sleep_save[DSP_SLEEP_SAVE_##x]
#define ULPD_SAVE(x) ulpd_sleep_save[ULPD_SLEEP_SAVE_##x] = omap_readw(x)
#define ULPD_RESTORE(x) omap_writew((ulpd_sleep_save[ULPD_SLEEP_SAVE_##x]), (x))
#define ULPD_SHOW(x) ulpd_sleep_save[ULPD_SLEEP_SAVE_##x]
#define MPUI7XX_SAVE(x) mpui7xx_sleep_save[MPUI7XX_SLEEP_SAVE_##x] = omap_readl(x)
#define MPUI7XX_RESTORE(x) omap_writel((mpui7xx_sleep_save[MPUI7XX_SLEEP_SAVE_##x]), (x))
#define MPUI7XX_SHOW(x) mpui7xx_sleep_save[MPUI7XX_SLEEP_SAVE_##x]
#define MPUI1510_SAVE(x) mpui1510_sleep_save[MPUI1510_SLEEP_SAVE_##x] = omap_readl(x)
#define MPUI1510_RESTORE(x) omap_writel((mpui1510_sleep_save[MPUI1510_SLEEP_SAVE_##x]), (x))
#define MPUI1510_SHOW(x) mpui1510_sleep_save[MPUI1510_SLEEP_SAVE_##x]
#define MPUI1610_SAVE(x) mpui1610_sleep_save[MPUI1610_SLEEP_SAVE_##x] = omap_readl(x)
#define MPUI1610_RESTORE(x) omap_writel((mpui1610_sleep_save[MPUI1610_SLEEP_SAVE_##x]), (x))
#define MPUI1610_SHOW(x) mpui1610_sleep_save[MPUI1610_SLEEP_SAVE_##x]
enum arm_save_state ;
enum dsp_save_state ;
enum ulpd_save_state ;
enum mpui1510_save_state ;
enum mpui7xx_save_state ;
enum mpui1610_save_state ;
