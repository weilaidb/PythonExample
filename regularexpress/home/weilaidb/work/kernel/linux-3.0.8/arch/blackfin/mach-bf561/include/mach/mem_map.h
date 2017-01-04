#define __BFIN_MACH_MEM_MAP_H__
# error "do not include mach/mem_map.h directly -- use asm/mem_map.h"
#define ASYNC_BANK3_BASE	0x2C000000
#define ASYNC_BANK3_SIZE	0x04000000
#define ASYNC_BANK2_BASE	0x28000000
#define ASYNC_BANK2_SIZE	0x04000000
#define ASYNC_BANK1_BASE	0x24000000
#define ASYNC_BANK1_SIZE	0x04000000
#define ASYNC_BANK0_BASE	0x20000000
#define ASYNC_BANK0_SIZE	0x04000000
#define BOOT_ROM_START		0xEF000000
#define BOOT_ROM_LENGTH		0x800
#define BFIN_ICACHESIZE	(16*1024)
#define BFIN_ICACHESIZE	(0*1024)
#define COREA_L1_CODE_START       0xFFA00000
#define COREA_L1_DATA_A_START     0xFF800000
#define COREA_L1_DATA_B_START     0xFF900000
#define COREB_L1_CODE_START       0xFF600000
#define COREB_L1_DATA_A_START     0xFF400000
#define COREB_L1_DATA_B_START     0xFF500000
#define L1_CODE_START       COREA_L1_CODE_START
#define L1_DATA_A_START     COREA_L1_DATA_A_START
#define L1_DATA_B_START     COREA_L1_DATA_B_START
#define L1_CODE_LENGTH      0x4000
#define DMEM_CNTR (ACACHE_BSRAM | ENDCPLB | PORT_PREF0)
#define L1_DATA_A_LENGTH      (0x8000 - 0x4000)
#define L1_DATA_B_LENGTH      0x8000
#define BFIN_DCACHESIZE	(16*1024)
#define BFIN_DSUPBANKS	1
#define DMEM_CNTR (ACACHE_BCACHE | ENDCPLB | PORT_PREF0)
#define L1_DATA_A_LENGTH      (0x8000 - 0x4000)
#define L1_DATA_B_LENGTH      (0x8000 - 0x4000)
#define BFIN_DCACHESIZE	(32*1024)
#define BFIN_DSUPBANKS	2
#define DMEM_CNTR (ASRAM_BSRAM | ENDCPLB | PORT_PREF0)
#define L1_DATA_A_LENGTH      0x8000
#define L1_DATA_B_LENGTH      0x8000
#define BFIN_DCACHESIZE	(0*1024)
#define BFIN_DSUPBANKS	0
# define COREB_L1_CODE_LENGTH     L1_CODE_LENGTH
# define COREB_L1_DATA_A_LENGTH   L1_DATA_A_LENGTH
# define COREB_L1_DATA_B_LENGTH   L1_DATA_B_LENGTH
# define COREB_L1_CODE_LENGTH     0x14000
# define COREB_L1_DATA_A_LENGTH   0x8000
# define COREB_L1_DATA_B_LENGTH   0x8000
#define L2_START		0xFEB00000
#define L2_LENGTH		0x20000
#define COREA_L1_SCRATCH_START	0xFFB00000
#define COREB_L1_SCRATCH_START	0xFF700000
# define GET_PDA_SAFE(preg)		\
preg.l = lo(DSPID);		\
preg.h = hi(DSPID);		\
preg = [preg];			\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
preg = preg << 2;		\
if cc jump 2f;			\
cc = preg == 0x0;		\
preg.l = _cpu_pda;		\
preg.h = _cpu_pda;		\
if !cc jump 3f;			\
1:					\		\
cc = !cc;	\
jump 4f;			\
2:					\
cc = preg == 0x0;		\
preg.l = _cpu_pda;		\
preg.h = _cpu_pda;		\
if cc jump 4f;			\		\
cc = !cc;	\
3:					\
preg = [preg];			\
4:
# define GET_PDA(preg, dreg)		\
preg.l = lo(DSPID);		\
preg.h = hi(DSPID);		\
dreg = [preg];			\
preg.l = _cpu_pda;		\
preg.h = _cpu_pda;		\
cc = bittst(dreg, 0);		\
if !cc jump 1f;			\
preg = [preg];			\
1:					\
# define GET_CPUID(preg, dreg)		\
preg.l = lo(DSPID);		\
preg.h = hi(DSPID);		\
dreg = [preg];			\
dreg = ROT dreg BY -1;		\
dreg = CC;
# ifndef __ASSEMBLY__
#  include <asm/processor.h>
static inline unsigned long get_l1_scratch_start_cpu(int cpu)
static inline unsigned long get_l1_code_start_cpu(int cpu)
static inline unsigned long get_l1_data_a_start_cpu(int cpu)
static inline unsigned long get_l1_data_b_start_cpu(int cpu)
static inline unsigned long get_l1_scratch_start(void)
static inline unsigned long get_l1_code_start(void)
static inline unsigned long get_l1_data_a_start(void)
static inline unsigned long get_l1_data_b_start(void)
# endif