#define __SOUND_FSI_H
#define FSI_PORT_A	0
#define FSI_PORT_B	1
#define SH_FSI_INVERSION_MASK	0x0000000F
#define SH_FSI_LRM_INV		(1 << 0)
#define SH_FSI_BRM_INV		(1 << 1)
#define SH_FSI_LRS_INV		(1 << 2)
#define SH_FSI_BRS_INV		(1 << 3)
#define SH_FSI_FMT_MASK		0x000000F0
#define SH_FSI_FMT_DAI		(0 << 4)
#define SH_FSI_FMT_SPDIF	(1 << 4)
#define SH_FSI_ACKMD_MASK	(0xF << 0)
#define SH_FSI_ACKMD_512	(1 << 0)
#define SH_FSI_ACKMD_256	(2 << 0)
#define SH_FSI_ACKMD_128	(3 << 0)
#define SH_FSI_ACKMD_64		(4 << 0)
#define SH_FSI_ACKMD_32		(5 << 0)
#define SH_FSI_BPFMD_MASK	(0xF << 4)
#define SH_FSI_BPFMD_512	(1 << 4)
#define SH_FSI_BPFMD_256	(2 << 4)
#define SH_FSI_BPFMD_128	(3 << 4)
#define SH_FSI_BPFMD_64		(4 << 4)
#define SH_FSI_BPFMD_32		(5 << 4)
#define SH_FSI_BPFMD_16		(6 << 4)
struct sh_fsi_platform_info ;
