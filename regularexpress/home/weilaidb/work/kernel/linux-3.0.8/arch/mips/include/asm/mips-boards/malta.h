#define __ASM_MIPS_BOARDS_MALTA_H
#define MIPS_MSC01_IC_REG_BASE		0x1bc40000
#define MIPS_SOCITSC_IC_REG_BASE	0x1ffa0000
#define MALTA_GT_PORT_BASE      get_gt_port_base(GT_PCI0IOLD_OFS)
#define MALTA_BONITO_PORT_BASE  ((unsigned long)ioremap (0x1fd00000, 0x10000))
#define MALTA_MSC_PORT_BASE     get_msc_port_base(MSC01_PCI_SC2PIOBASL)
static inline unsigned long get_gt_port_base(unsigned long reg)
static inline unsigned long get_msc_port_base(unsigned long reg)
#define GCMP_BASE_ADDR			0x1fbf8000
#define GCMP_ADDRSPACE_SZ		(256 * 1024)
#define GIC_BASE_ADDR			0x1bdc0000
#define GIC_ADDRSPACE_SZ		(128 * 1024)
#define MSC01_BIU_REG_BASE		0x1bc80000
#define MSC01_BIU_ADDRSPACE_SZ		(256 * 1024)
#define MSC01_SC_CFG_OFS		0x0110
#define MSC01_SC_CFG_GICPRES_MSK	0x00000004
#define MSC01_SC_CFG_GICPRES_SHF	2
#define MSC01_SC_CFG_GICENA_SHF		3
#define MALTA_RTC_ADR_REG       0x70
#define MALTA_RTC_DAT_REG       0x71
#define SMSC_CONFIG_REG		0x3f0
#define SMSC_DATA_REG		0x3f1
#define SMSC_CONFIG_DEVNUM	0x7
#define SMSC_CONFIG_ACTIVATE	0x30
#define SMSC_CONFIG_ENTER	0x55
#define SMSC_CONFIG_EXIT	0xaa
#define SMSC_CONFIG_DEVNUM_FLOPPY     0
#define SMSC_CONFIG_ACTIVATE_ENABLE   1
#define SMSC_WRITE(x, a)     outb(x, a)
#define MALTA_JMPRS_REG		0x1f000210
