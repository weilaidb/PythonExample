#define _MSP_PCI_H_
#define MSP_HAS_PCI(ID)	(((u32)(ID) <= 0x4236) && ((u32)(ID) >= 0x4220))
#define MSP_PCI_OATRAN		0xB8000000UL
#define MSP_PCI_SPACE_BASE	(MSP_PCI_OATRAN + 0x1002000UL)
#define MSP_PCI_SPACE_SIZE	(0x3000000UL - 0x2000)
#define MSP_PCI_SPACE_END \
(MSP_PCI_SPACE_BASE + MSP_PCI_SPACE_SIZE - 1)
#define MSP_PCI_IOSPACE_BASE	(MSP_PCI_OATRAN + 0x1001000UL)
#define MSP_PCI_IOSPACE_SIZE	0x1000
#define MSP_PCI_IOSPACE_END  \
(MSP_PCI_IOSPACE_BASE + MSP_PCI_IOSPACE_SIZE - 1)
#define PCI_STAT_IRQ	20
#define QFLUSH_REG_1	0xB7F40000
typedef volatile unsigned int pcireg;
typedef void * volatile ppcireg;
struct pci_block_copy
;
enum
;
struct msp_pci_regs
;
#define BPCI_CFGADDR_BUSNUM_SHF 16
#define BPCI_CFGADDR_FUNCTNUM_SHF 8
#define BPCI_CFGADDR_REGNUM_SHF 2
#define BPCI_CFGADDR_ENABLE (1<<31)
#define BPCI_IFCONTROL_RTO (1<<20)
#define BPCI_IFCONTROL_HCE (1<<16)
#define BPCI_IFCONTROL_CTO_SHF 12
#define BPCI_IFCONTROL_SE  (1<<5)
#define BPCI_IFCONTROL_BIST (1<<4)
#define BPCI_IFCONTROL_CAP (1<<3)
#define BPCI_IFCONTROL_MMC_SHF 0
#define BPCI_IFSTATUS_MGT  (1<<8)
#define BPCI_IFSTATUS_MTT  (1<<9)
#define BPCI_IFSTATUS_MRT  (1<<10)
#define BPCI_IFSTATUS_BC0F (1<<13)
#define BPCI_IFSTATUS_BC1F (1<<14)
#define BPCI_IFSTATUS_PCIU (1<<15)
#define BPCI_IFSTATUS_BSIZ (1<<16)
#define BPCI_IFSTATUS_BADD (1<<17)
#define BPCI_IFSTATUS_RTO  (1<<18)
#define BPCI_IFSTATUS_SER  (1<<19)
#define BPCI_IFSTATUS_PER  (1<<20)
#define BPCI_IFSTATUS_LCA  (1<<21)
#define BPCI_IFSTATUS_MEM  (1<<22)
#define BPCI_IFSTATUS_ARB  (1<<23)
#define BPCI_IFSTATUS_STA  (1<<27)
#define BPCI_IFSTATUS_TA   (1<<28)
#define BPCI_IFSTATUS_MA   (1<<29)
#define BPCI_IFSTATUS_PEI  (1<<30)
#define BPCI_IFSTATUS_PET  (1<<31)
#define BPCI_RESETCTL_PR (1<<0)
#define BPCI_RESETCTL_RT (1<<4)
#define BPCI_RESETCTL_CT (1<<8)
#define BPCI_RESETCTL_PE (1<<12)
#define BPCI_RESETCTL_HM (1<<13)
#define BPCI_RESETCTL_RI (1<<14)
extern struct msp_pci_regs msp_pci_regs
__attribute__((section(".register")));
extern unsigned long msp_pci_config_space
__attribute__((section(".register")));
