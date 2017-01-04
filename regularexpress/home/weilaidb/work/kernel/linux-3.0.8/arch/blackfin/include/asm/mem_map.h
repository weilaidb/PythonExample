#define __BFIN_MEM_MAP_H__
# define COREMMR_BASE 0xFFE00000
# define SYSMMR_BASE  0xFFC00000
# define L1_SCRATCH_START  0xFFB00000
# define L1_SCRATCH_LENGTH 0x1000
# define L2_START  0
# define L2_LENGTH 0
# define L1_ROM_START  0
# define L1_ROM_LENGTH 0
# define GET_PDA_SAFE(preg) \
preg.l = _cpu_pda; \
preg.h = _cpu_pda;
# define GET_PDA(preg, dreg) GET_PDA_SAFE(preg)
# ifndef __ASSEMBLY__
static inline unsigned long get_l1_scratch_start_cpu(int cpu)
static inline unsigned long get_l1_code_start_cpu(int cpu)
static inline unsigned long get_l1_data_a_start_cpu(int cpu)
static inline unsigned long get_l1_data_b_start_cpu(int cpu)
static inline unsigned long get_l1_scratch_start(void)
static inline unsigned long get_l1_code_start(void)
static inline unsigned long get_l1_data_a_start(void)
static inline unsigned long get_l1_data_b_start(void)
# endif
