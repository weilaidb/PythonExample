#define __ASM_ARCH_HARDWARE_H
#define pcibios_assign_all_busses()	1
#define PCIBIOS_MIN_IO			0x1000
#define PCIBIOS_MIN_MEM			0x01000000
#define PCIMEM_BASE			DOVE_PCIE0_MEM_PHYS_BASE
#define __REG(x)	(*((volatile u32 *)((x) - DOVE_SB_REGS_PHYS_BASE + \
DOVE_SB_REGS_VIRT_BASE)))
#define __PREG(x)	(((u32)&(x)) - DOVE_SB_REGS_VIRT_BASE + \
DOVE_SB_REGS_PHYS_BASE)
