#define __ASM_ARCH_LOKI_H
#define LOKI_REGS_PHYS_BASE		0xd0000000
#define LOKI_REGS_VIRT_BASE		0xfed00000
#define LOKI_REGS_SIZE			SZ_1M
#define LOKI_PCIE0_IO_PHYS_BASE		0xf0000000
#define LOKI_PCIE0_IO_VIRT_BASE		0xfee00000
#define LOKI_PCIE0_IO_BUS_BASE		0x00000000
#define LOKI_PCIE0_IO_SIZE		SZ_64K
#define LOKI_PCIE1_IO_PHYS_BASE		0xf0100000
#define LOKI_PCIE1_IO_VIRT_BASE		0xfef00000
#define LOKI_PCIE1_IO_BUS_BASE		0x00000000
#define LOKI_PCIE1_IO_SIZE		SZ_64K
#define LOKI_PCIE0_MEM_PHYS_BASE	0xe0000000
#define LOKI_PCIE0_MEM_SIZE		SZ_128M
#define LOKI_PCIE1_MEM_PHYS_BASE	0xe8000000
#define LOKI_PCIE1_MEM_SIZE		SZ_128M
#define DEV_BUS_PHYS_BASE	(LOKI_REGS_PHYS_BASE | 0x10000)
#define DEV_BUS_VIRT_BASE	(LOKI_REGS_VIRT_BASE | 0x10000)
#define  UART0_PHYS_BASE	(DEV_BUS_PHYS_BASE | 0x2000)
#define  UART0_VIRT_BASE	(DEV_BUS_VIRT_BASE | 0x2000)
#define  UART1_PHYS_BASE	(DEV_BUS_PHYS_BASE | 0x2100)
#define  UART1_VIRT_BASE	(DEV_BUS_VIRT_BASE | 0x2100)
#define BRIDGE_VIRT_BASE	(LOKI_REGS_VIRT_BASE | 0x20000)
#define PCIE0_VIRT_BASE		(LOKI_REGS_VIRT_BASE | 0x30000)
#define PCIE1_VIRT_BASE		(LOKI_REGS_VIRT_BASE | 0x40000)
#define SAS0_PHYS_BASE		(LOKI_REGS_PHYS_BASE | 0x80000)
#define SAS1_PHYS_BASE		(LOKI_REGS_PHYS_BASE | 0x90000)
#define GE0_PHYS_BASE		(LOKI_REGS_PHYS_BASE | 0xa0000)
#define GE0_VIRT_BASE		(LOKI_REGS_VIRT_BASE | 0xa0000)
#define GE1_PHYS_BASE		(LOKI_REGS_PHYS_BASE | 0xb0000)
#define GE1_VIRT_BASE		(LOKI_REGS_VIRT_BASE | 0xb0000)
#define DDR_VIRT_BASE		(LOKI_REGS_VIRT_BASE | 0xf0000)
#define DDR_REG(x)		(DDR_VIRT_BASE | (x))
#define GPIO_MAX		8