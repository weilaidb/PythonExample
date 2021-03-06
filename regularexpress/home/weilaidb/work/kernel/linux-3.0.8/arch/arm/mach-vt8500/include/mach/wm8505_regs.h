#define __ASM_ARM_ARCH_WM8505_REGS_H
#define WM8505_REGS_START_PHYS	0xd8000000
#define WM8505_REGS_START_VIRT	0xf8000000
#define WM8505_DDR_BASE		0xd8000400
#define WM8505_DMA_BASE		0xd8001800
#define WM8505_VDMA_BASE	0xd8001c00
#define WM8505_SFLASH_BASE	0xd8002000
#define WM8505_ETHER_BASE	0xd8004000
#define WM8505_CIPHER_BASE	0xd8006000
#define WM8505_USB_BASE		0xd8007000
# define WM8505_EHCI_BASE	0xd8007100
# define WM8505_UHCI_BASE	0xd8007301
#define WM8505_PS2_BASE		0xd8008800
#define WM8505_NAND_BASE	0xd8009000
#define WM8505_NOR_BASE		0xd8009400
#define WM8505_SDMMC_BASE	0xd800a000
#define WM8505_VPU_BASE		0xd8050000
#define WM8505_GOV_BASE		0xd8050300
#define WM8505_GEGEA_BASE	0xd8050400
#define WM8505_GOVR_BASE	0xd8050800
#define WM8505_VID_BASE		0xd8050a00
#define WM8505_SCL_BASE		0xd8050d00
#define WM8505_VPP_BASE		0xd8050f00
#define WM8505_JPEGDEC_BASE	0xd80fe000
#define WM8505_RTC_BASE		0xd8100000
#define WM8505_GPIO_BASE	0xd8110000
#define WM8505_SCC_BASE		0xd8120000
#define WM8505_PMC_BASE		0xd8130000
#define WM8505_IC_BASE		0xd8140000
#define WM8505_SIC_BASE		0xd8150000
#define WM8505_UART0_BASE	0xd8200000
#define WM8505_UART2_BASE	0xd8210000
#define WM8505_PWM_BASE		0xd8220000
#define WM8505_SPI0_BASE	0xd8240000
#define WM8505_SPI1_BASE	0xd8250000
#define WM8505_KEYPAD_BASE	0xd8260000
#define WM8505_CIR_BASE		0xd8270000
#define WM8505_I2C0_BASE	0xd8280000
#define WM8505_AC97_BASE	0xd8290000
#define WM8505_SPI2_BASE	0xd82a0000
#define WM8505_UART1_BASE	0xd82b0000
#define WM8505_UART3_BASE	0xd82c0000
#define WM8505_I2C1_BASE	0xd8320000
#define WM8505_I2S_BASE		0xd8330000
#define WM8505_UART4_BASE	0xd8370000
#define WM8505_UART5_BASE	0xd8380000
#define WM8505_REGS_END_PHYS	0xd838ffff
#define WM8505_REGS_LENGTH	(WM8505_REGS_END_PHYS \
- WM8505_REGS_START_PHYS + 1)
