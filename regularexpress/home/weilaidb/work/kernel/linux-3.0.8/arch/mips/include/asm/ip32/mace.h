#define __ASM_MACE_H__
#define MACE_BASE	0x1f000000
struct mace_pci ;
#define MACEPCI_LOW_MEMORY		0x1a000000
#define MACEPCI_LOW_IO			0x18000000
#define MACEPCI_SWAPPED_VIEW		0
#define MACEPCI_NATIVE_VIEW		0x40000000
#define MACEPCI_IO			0x80000000
#define MACEPCI_HI_MEMORY		0x280000000
#define MACEPCI_HI_IO			0x100000000
struct mace_video ;
struct mace_ethernet ;
struct mace_audio ;
struct mace_parport ;
struct mace_isactrl ;
struct mace_ps2port ;
struct mace_ps2 ;
struct mace_i2c ;
typedef union  timer_reg;
struct mace_timers ;
struct mace_perif ;
struct mace_parallel ;
struct mace_ecp1284 ;
struct mace_serial ;
struct mace_isa ;
struct sgi_mace ;
extern struct sgi_mace __iomem *mace;
