#define ASM_PPC_RIO_H
extern void platform_rio_init(void);
extern int fsl_rio_mcheck_exception(struct pt_regs *);
static inline int fsl_rio_mcheck_exception(struct pt_regs *regs)
