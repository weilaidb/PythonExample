#define _ASM_DSP_H
#define DSP_DEFAULT	0x00000000
#define DSP_MASK	0x3ff
#define __enable_dsp_hazard()						\
do  while (0)
static inline void __init_dsp(void)
static inline void init_dsp(void)
#define __save_dsp(tsk)							\
do  while (0)
#define save_dsp(tsk)							\
do  while (0)
#define __restore_dsp(tsk)						\
do  while (0)
#define restore_dsp(tsk)						\
do  while (0)
#define __get_dsp_regs(tsk)						\
()
