#define __SYS_SIGCONTEXT_PPC_H
#define DSISR_WRITE 0x02000000
#define SC_FAULT_ADDR(sc) ()
#define SC_FAULT_WRITE(sc) ()
#define SC_IP(sc) ((sc)->regs->nip)
#define SC_SP(sc) ((sc)->regs->gpr[1])
#define SEGV_IS_FIXABLE(sc) (1)
