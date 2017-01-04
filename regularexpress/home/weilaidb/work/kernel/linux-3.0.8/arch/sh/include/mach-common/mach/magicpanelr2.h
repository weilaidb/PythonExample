#define __ASM_SH_MAGICPANELR2_H
#define __IO_PREFIX mpr2
#define SETBITS_OUTB(mask, reg)   __raw_writeb(__raw_readb(reg) | mask, reg)
#define SETBITS_OUTW(mask, reg)   __raw_writew(__raw_readw(reg) | mask, reg)
#define SETBITS_OUTL(mask, reg)   __raw_writel(__raw_readl(reg) | mask, reg)
#define CLRBITS_OUTB(mask, reg)   __raw_writeb(__raw_readb(reg) & ~mask, reg)
#define CLRBITS_OUTW(mask, reg)   __raw_writew(__raw_readw(reg) & ~mask, reg)
#define CLRBITS_OUTL(mask, reg)   __raw_writel(__raw_readl(reg) & ~mask, reg)
#define PA_LED          PORT_PADR
#define CMNCR           0xA4FD0000UL
#define CS0BCR          0xA4FD0004UL
#define CS2BCR          0xA4FD0008UL
#define CS3BCR          0xA4FD000CUL
#define CS4BCR          0xA4FD0010UL
#define CS5ABCR         0xA4FD0014UL
#define CS5BBCR         0xA4FD0018UL
#define CS6ABCR         0xA4FD001CUL
#define CS6BBCR         0xA4FD0020UL
#define CS0WCR          0xA4FD0024UL
#define CS2WCR          0xA4FD0028UL
#define CS3WCR          0xA4FD002CUL
#define CS4WCR          0xA4FD0030UL
#define CS5AWCR         0xA4FD0034UL
#define CS5BWCR         0xA4FD0038UL
#define CS6AWCR         0xA4FD003CUL
#define CS6BWCR         0xA4FD0040UL
#define PORT_UTRCTL		0xA405012CUL
#define PORT_UCLKCR_W		0xA40A0008UL
#define INTC_ICR0		0xA414FEE0UL
#define INTC_ICR1		0xA4140010UL
#define INTC_ICR2		0xA4140012UL
#define MPR2_MTD_BOOTLOADER_SIZE	0x00060000UL
#define MPR2_MTD_KERNEL_SIZE		0x00200000UL
