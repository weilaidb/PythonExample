#define _ASM_NLM_MIPS_EXTS_H
#define read_c0_eirr()		__read_64bit_c0_register($9, 6)
#define read_c0_eimr()		__read_64bit_c0_register($9, 7)
#define write_c0_eirr(val)	__write_64bit_c0_register($9, 6, val)
#define write_c0_eimr(val)						\
do  while (0)
static inline int hard_smp_processor_id(void)
