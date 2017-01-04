#undef __mips
#define __mips 4
struct emuframe ;
int mips_dsemul(struct pt_regs *regs, mips_instruction ir, unsigned long cpc)
int do_dsemulret(struct pt_regs *xcp)
