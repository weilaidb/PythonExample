#define _SGI_MC_H
struct sgimc_regs ;
extern struct sgimc_regs *sgimc;
#define SGIMC_BASE		0x1fa00000
#define SGIMC_SEG0_BADDR	0x08000000
#define SGIMC_SEG1_BADDR	0x20000000
#define SGIMC_SEG0_SIZE_ALL		0x10000000
#define SGIMC_SEG1_SIZE_IP20_IP22	0x08000000
#define SGIMC_SEG1_SIZE_IP26_IP28	0x20000000
extern void sgimc_init(void);
