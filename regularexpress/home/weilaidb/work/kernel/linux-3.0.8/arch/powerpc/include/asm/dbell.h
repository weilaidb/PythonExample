#define _ASM_POWERPC_DBELL_H
#define PPC_DBELL_MSG_BRDCAST	(0x04000000)
#define PPC_DBELL_TYPE(x)	(((x) & 0xf) << 28)
enum ppc_dbell ;
extern void doorbell_cause_ipi(int cpu, unsigned long data);
extern void doorbell_exception(struct pt_regs *regs);
extern void doorbell_setup_this_cpu(void);
static inline void ppc_msgsnd(enum ppc_dbell type, u32 flags, u32 tag)
