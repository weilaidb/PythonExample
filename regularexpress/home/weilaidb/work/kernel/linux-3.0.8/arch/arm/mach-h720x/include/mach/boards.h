#error Do not include this file directly. Include asm/hardware.h instead !
#define H720X_FLASH_VIRT	0xd0000000
#define H720X_FLASH_PHYS	0x00000000
#define H720X_FLASH_SIZE	0x02000000
# define ETH0_PHYS		0x08000000
#define PEN_GPIO		GPIO_B_VIRT
#define PEN_INT_BIT		(1<<7)
#define PEN_ENA_BIT		(1<<6)
#define IRQ_PEN			IRQ_MUX_GPIOB(7)
#if defined (CONFIG_ARCH_H7201)
#define ROM_DISK_BASE           0xc1800000
#define ROM_DISK_START          0x41800000
#define ROM_DISK_SIZE           0x00700000
#define SRAM_DISK_BASE          0xf1000000
#define SRAM_DISK_START         0x04000000
#define SRAM_DISK_SIZE          0x00400000
