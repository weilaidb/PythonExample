#define __ASM_ARCH_HARDWARE_H
#define IOCLK (3686400L)
#define IO_VIRT			0xf0000000
#define IO_PHYS			0x80000000
#define IO_SIZE			0x00050000
#elif defined CONFIG_CPU_H7201
#error machine definition mismatch
#define CPU_IO(x) (*(volatile u32*)(x))
#define CPU_REG(x,y) CPU_IO(x+y)
#define IRQ_REG(x) CPU_REG(IRQC_VIRT,x)
#define GPIO_VIRT(x)		(IO_VIRT + 0x23000 + ((x)<<5))
#define GPIO_A_VIRT		(GPIO_VIRT(0))
#define GPIO_B_VIRT		(GPIO_VIRT(1))
#define GPIO_C_VIRT		(GPIO_VIRT(2))
#define GPIO_D_VIRT		(GPIO_VIRT(3))
#define GPIO_E_VIRT		(GPIO_VIRT(4))
#define GPIO_AMULSEL		(GPIO_VIRT(0) + 0xA4)
#define AMULSEL_USIN2	(1<<5)
#define AMULSEL_USOUT2	(1<<6)
#define AMULSEL_USIN3	(1<<13)
#define AMULSEL_USOUT3	(1<<14)
#define AMULSEL_IRDIN	(1<<15)
#define AMULSEL_IRDOUT	(1<<7)
#define GPIO_DATA		0x00
#define GPIO_DIR		0x04
#define GPIO_MASK		0x08
#define GPIO_STAT		0x0C
#define GPIO_EDGE		0x10
#define GPIO_CLR		0x14
#define GPIO_POL		0x18
#define GPIO_EN			0x1C
#define IRQC_VIRT		(IO_VIRT + 0x24000)
#define IRQC_IER		0x00
#define IRQC_ISR		0x04
#define TIMER_VIRT		(IO_VIRT + 0x25000)
#define TM0_PERIOD   		0x00
#define TM0_COUNT    		0x08
#define TM0_CTRL     		0x10
#define TM1_PERIOD   		0x20
#define TM1_COUNT    		0x28
#define TM1_CTRL     		0x30
#define TM2_PERIOD   		0x40
#define TM2_COUNT    		0x48
#define TM2_CTRL     		0x50
#define TIMER_TOPCTRL		0x60
#define TIMER_TOPSTAT		0x64
#define T64_COUNTL		0x80
#define T64_COUNTH		0x84
#define T64_CTRL		0x88
#define T64_BASEL		0x94
#define T64_BASEH		0x98
#define TSTAT_T0INT		0x1
#define TSTAT_T1INT		0x2
#define TSTAT_T2INT		0x4
#define TSTAT_T3INT		0x8
#define TM_START  		0x1
#define TM_REPEAT 		0x2
#define TM_RESET  		0x4
#define ENABLE_TM0_INTR  	0x1
#define ENABLE_TM1_INTR  	0x2
#define ENABLE_TM2_INTR  	0x4
#define TIMER_ENABLE_BIT 	0x8
#define ENABLE_TIMER64   	0x10
#define ENABLE_TIMER64_INT	0x20
#define PMU_BASE 		(IO_VIRT + 0x1000)
#define PMU_MODE		0x00
#define PMU_STAT   		0x20
#define PMU_PLL_CTRL 		0x28
#define PMU_MODE_SLOW		0x00
#define PMU_MODE_RUN		0x01
#define PMU_MODE_IDLE		0x02
#define PMU_MODE_SLEEP		0x03
#define PMU_MODE_INIT		0x04
#define PMU_MODE_DEEPSLEEP	0x07
#define PMU_MODE_WAKEUP		0x08
#define PLL_2_EN		0x8000
#define PLL_1_EN		0x4000
#define PLL_3_MUTE		0x0080
#define PMU_WARMRESET		0x00010000
#define PLL_CTRL_MASK23		0x000080ff
#define LCD_BASE 		(IO_VIRT + 0x10000)
#define LCD_CTRL 		0x00
#define LCD_STATUS		0x04
#define LCD_STATUS_M		0x08
#define LCD_INTERRUPT		0x0C
#define LCD_DBAR		0x10
#define LCD_DCAR		0x14
#define LCD_TIMING0 		0x20
#define LCD_TIMING1 		0x24
#define LCD_TIMING2 		0x28
#define LCD_TEST		0x40
#define LCD_CTRL_LCD_ENABLE   	0x00000001
#define LCD_CTRL_LCD_BPP_MASK 	0x00000006
#define LCD_CTRL_LCD_4BPP    	0x00000000
#define LCD_CTRL_LCD_8BPP    	0x00000002
#define LCD_CTRL_LCD_16BPP   	0x00000004
#define LCD_CTRL_LCD_BW		0x00000008
#define LCD_CTRL_LCD_TFT	0x00000010
#define LCD_CTRL_BGR		0x00001000
#define LCD_CTRL_LCD_VCOMP	0x00080000
#define LCD_CTRL_LCD_MONO8	0x00200000
#define LCD_CTRL_LCD_PWR	0x00400000
#define LCD_CTRL_LCD_BLE	0x00800000
#define LCD_CTRL_LDBUSEN	0x01000000
#define LCD_PALETTE_BASE 	(IO_VIRT + 0x10400)
#define SERIAL0_OFS		0x20000
#define SERIAL0_VIRT 		(IO_VIRT + SERIAL0_OFS)
#define SERIAL0_BASE		(IO_PHYS + SERIAL0_OFS)
#define SERIAL1_OFS		0x21000
#define SERIAL1_VIRT 		(IO_VIRT + SERIAL1_OFS)
#define SERIAL1_BASE		(IO_PHYS + SERIAL1_OFS)
#define SERIAL_ENABLE		0x30
#define SERIAL_ENABLE_EN	(1<<0)
#define __ASM_ARCH_HARDWARE_INCMACH_H
#undef __ASM_ARCH_HARDWARE_INCMACH_H
