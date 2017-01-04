#define __ASM_ARCH_HARDWARE_H
#define pcibios_assign_all_busses() 1
extern unsigned long iop13xx_pcibios_min_io;
extern unsigned long iop13xx_pcibios_min_mem;
extern u16 iop13xx_dev_id(void);
extern void iop13xx_set_atu_mmr_bases(void);
#define PCIBIOS_MIN_IO      (iop13xx_pcibios_min_io)
#define PCIBIOS_MIN_MEM     (iop13xx_pcibios_min_mem)
