#define _ASM_EXCEPTIONS_H
#define GDBSTUB_BKPT		0xFF
enum exception_code ;
extern void __set_intr_stub(enum exception_code code, void *handler);
extern void set_intr_stub(enum exception_code code, void *handler);
struct pt_regs;
extern asmlinkage void __common_exception(void);
extern asmlinkage void itlb_miss(void);
extern asmlinkage void dtlb_miss(void);
extern asmlinkage void itlb_aerror(void);
extern asmlinkage void dtlb_aerror(void);
extern asmlinkage void raw_bus_error(void);
extern asmlinkage void double_fault(void);
extern asmlinkage int  system_call(struct pt_regs *);
extern asmlinkage void nmi(struct pt_regs *, enum exception_code);
extern asmlinkage void uninitialised_exception(struct pt_regs *,
enum exception_code);
extern asmlinkage void irq_handler(void);
extern asmlinkage void profile_handler(void);
extern asmlinkage void nmi_handler(void);
extern asmlinkage void misalignment(struct pt_regs *, enum exception_code);
extern void die(const char *, struct pt_regs *, enum exception_code)
ATTRIB_NORET;
extern int die_if_no_fixup(const char *, struct pt_regs *, enum exception_code);
#define NUM2EXCEP_IRQ_LEVEL(num)	(EXCEP_IRQ_LEVEL0 + (num) * 8)
