#define _ASM_CRIS_ELF_H
#define ELF_CORE_EFLAGS EF_CRIS_VARIANT_V32
#define elf_check_arch(x)			\
((x)->e_machine == EM_CRIS			\
&& ((((x)->e_flags & EF_CRIS_VARIANT_MASK) == EF_CRIS_VARIANT_V32	\
|| (((x)->e_flags & EF_CRIS_VARIANT_MASK) == EF_CRIS_VARIANT_COMMON_V10_V32))))
#define ELF_PLAT_INIT(_r, load_addr)    do  while (0)
#define elf_read_implies_exec_binary(ex, have_pt_gnu_stack)	(!(have_pt_gnu_stack))
#define ELF_CORE_COPY_REGS(pr_reg, regs)                   \
pr_reg[0] = regs->r0;                              \
pr_reg[1] = regs->r1;                              \
pr_reg[2] = regs->r2;                              \
pr_reg[3] = regs->r3;                              \
pr_reg[4] = regs->r4;                              \
pr_reg[5] = regs->r5;                              \
pr_reg[6] = regs->r6;                              \
pr_reg[7] = regs->r7;                              \
pr_reg[8] = regs->r8;                              \
pr_reg[9] = regs->r9;                              \
pr_reg[10] = regs->r10;                            \
pr_reg[11] = regs->r11;                            \
pr_reg[12] = regs->r12;                            \
pr_reg[13] = regs->r13;                            \
pr_reg[14] = rdusp();       \
pr_reg[15] = regs->acr;      \
pr_reg[16] = 0;       \
pr_reg[17] = rdvr();       \
pr_reg[18] = 0;      \
pr_reg[19] = regs->srs;      \
pr_reg[20] = 0;       \
pr_reg[21] = regs->exs;      \
pr_reg[22] = regs->eda;      \
pr_reg[23] = regs->mof;      \
pr_reg[24] = 0;       \
pr_reg[25] = 0;      \
pr_reg[26] = regs->erp;      \
pr_reg[27] = regs->srp;      \
pr_reg[28] = 0;      \
pr_reg[29] = regs->ccs;      \
pr_reg[30] = rdusp();      \
pr_reg[31] = regs->spc;      \
