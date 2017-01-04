#define _ASM_POWERPC_EMULATED_OPS_H
struct ppc_emulated_entry ;
extern struct ppc_emulated  ppc_emulated;
extern u32 ppc_warn_emulated;
extern void ppc_warn_emulated_print(const char *type);
#define __PPC_WARN_EMULATED(type)					 \
do  while (0)
#define __PPC_WARN_EMULATED(type)	do  while (0)
#define PPC_WARN_EMULATED(type, regs)					\
do  while (0)
#define PPC_WARN_ALIGNMENT(type, regs)					\
do  while (0)
