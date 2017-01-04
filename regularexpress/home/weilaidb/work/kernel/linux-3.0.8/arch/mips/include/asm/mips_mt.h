#define __ASM_MIPS_MT_H
extern int tclimit;
extern int vpelimit;
extern cpumask_t mt_fpu_cpumask;
extern unsigned long mt_fpemul_threshold;
extern void mips_mt_regdump(unsigned long previous_mvpcontrol_value);
extern void mips_mt_set_cpuoptions(void);
struct class;
extern struct class *mt_class;
