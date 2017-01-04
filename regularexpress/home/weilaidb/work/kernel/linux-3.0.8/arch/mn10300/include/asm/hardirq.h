#define _ASM_HARDIRQ_H
typedef struct  ____cacheline_aligned irq_cpustat_t;
extern void ack_bad_irq(int irq);
typedef void (*intr_stub_fnx)(struct pt_regs *regs,
enum exception_code intcode);
extern asmlinkage void set_excp_vector(enum exception_code code,
intr_stub_fnx handler);
