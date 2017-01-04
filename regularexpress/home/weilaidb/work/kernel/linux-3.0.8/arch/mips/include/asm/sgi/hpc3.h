#define _SGI_HPC3_H
struct hpc_dma_desc ;
struct hpc3_pbus_dmacregs ;
struct hpc3_scsiregs ;
struct hpc3_ethregs ;
struct hpc3_regs ;
extern struct hpc3_regs *hpc3c0, *hpc3c1;
#define HPC3_CHIP0_BASE		0x1fb80000
#define HPC3_CHIP1_BASE		0x1fb00000
extern void sgihpc_init(void);
