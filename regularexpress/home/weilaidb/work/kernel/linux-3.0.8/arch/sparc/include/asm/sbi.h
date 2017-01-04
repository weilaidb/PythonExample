#define _SPARC_SBI_H
struct sbi_regs ;
#define SBI_CID			0x02800000
#define SBI_CTL			0x02800004
#define SBI_STATUS		0x02800008
#define SBI_CFG0		0x02800010
#define SBI_CFG1		0x02800014
#define SBI_CFG2		0x02800018
#define SBI_CFG3		0x0280001c
#define SBI_STB0		0x02800020
#define SBI_STB1		0x02800024
#define SBI_STB2		0x02800028
#define SBI_STB3		0x0280002c
#define SBI_INTR_STATE		0x02800030
#define SBI_INTR_TID		0x02800034
#define SBI_INTR_DIAG		0x02800038
#define SBI_CFG_BURST_MASK	0x0000001e
#define SBI2DEVID(sbino) ((sbino<<4)|2)
static inline int acquire_sbi(int devid, int mask)
static inline void release_sbi(int devid, int mask)
static inline void set_sbi_tid(int devid, int targetid)
static inline int get_sbi_ctl(int devid, int cfgno)
static inline void set_sbi_ctl(int devid, int cfgno, int cfg)
