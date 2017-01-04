#define _ASM_FPU_EMULATOR_H
struct mips_fpu_emulator_stats ;
DECLARE_PER_CPU(struct mips_fpu_emulator_stats, fpuemustats);
#define MIPS_FPU_EMU_INC_STATS(M)					\
do  while (0)
#define MIPS_FPU_EMU_INC_STATS(M) do  while (0)
extern int mips_dsemul(struct pt_regs *regs, mips_instruction ir,
unsigned long cpc);
extern int do_dsemulret(struct pt_regs *xcp);
#define BD_COOKIE 0x0000bd36
#define BREAK_MATH (0x0000000d | (BRK_MEMU << 16))
