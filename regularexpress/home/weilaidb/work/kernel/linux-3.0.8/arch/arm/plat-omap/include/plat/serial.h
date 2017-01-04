#define __ASM_ARCH_SERIAL_H
#define OMAP_UART_INFO		(PLAT_PHYS_OFFSET + 0x3ffc)
#define OMAP1_UART1_BASE	0xfffb0000
#define OMAP1_UART2_BASE	0xfffb0800
#define OMAP1_UART3_BASE	0xfffb9800
#define OMAP2_UART1_BASE	0x4806a000
#define OMAP2_UART2_BASE	0x4806c000
#define OMAP2_UART3_BASE	0x4806e000
#define OMAP3_UART1_BASE	OMAP2_UART1_BASE
#define OMAP3_UART2_BASE	OMAP2_UART2_BASE
#define OMAP3_UART3_BASE	0x49020000
#define OMAP3_UART4_BASE	0x49042000
#define OMAP4_UART1_BASE	OMAP2_UART1_BASE
#define OMAP4_UART2_BASE	OMAP2_UART2_BASE
#define OMAP4_UART3_BASE	0x48020000
#define OMAP4_UART4_BASE	0x4806e000
#define TI816X_UART1_BASE	0x48020000
#define TI816X_UART2_BASE	0x48022000
#define TI816X_UART3_BASE	0x48024000
#define ZOOM_UART_BASE		0x10000000
#define ZOOM_UART_VIRT		0xfa400000
#define OMAP_PORT_SHIFT		2
#define OMAP7XX_PORT_SHIFT	0
#define ZOOM_PORT_SHIFT		1
#define OMAP1510_BASE_BAUD	(12000000/16)
#define OMAP16XX_BASE_BAUD	(48000000/16)
#define OMAP24XX_BASE_BAUD	(48000000/16)
#define OMAP1UART1		11
#define OMAP1UART2		12
#define OMAP1UART3		13
#define OMAP2UART1		21
#define OMAP2UART2		22
#define OMAP2UART3		23
#define OMAP3UART1		OMAP2UART1
#define OMAP3UART2		OMAP2UART2
#define OMAP3UART3		33
#define OMAP3UART4		34
#define OMAP4UART1		OMAP2UART1
#define OMAP4UART2		OMAP2UART2
#define OMAP4UART3		43
#define OMAP4UART4		44
#define TI816XUART1		81
#define TI816XUART2		82
#define TI816XUART3		83
#define ZOOM_UART		95
#define is_omap_port(pt)	()
struct omap_board_data;
extern void omap_serial_init(void);
extern void omap_serial_init_port(struct omap_board_data *bdata);
extern int omap_uart_can_sleep(void);
extern void omap_uart_check_wakeup(void);
extern void omap_uart_prepare_suspend(void);
extern void omap_uart_prepare_idle(int num);
extern void omap_uart_resume_idle(int num);
extern void omap_uart_enable_irqs(int enable);
