#define _SPARC64_IRQ_H
#define IMAP_VALID		0x80000000UL
#define IMAP_TID_UPA		0x7c000000UL
#define IMAP_TID_JBUS		0x7c000000UL
#define IMAP_TID_SHIFT		26
#define IMAP_AID_SAFARI		0x7c000000UL
#define IMAP_AID_SHIFT		26
#define IMAP_NID_SAFARI		0x03e00000UL
#define IMAP_NID_SHIFT		21
#define IMAP_IGN		0x000007c0UL
#define IMAP_INO		0x0000003fUL
#define IMAP_INR		0x000007ffUL
#define ICLR_IDLE		0x00000000UL
#define ICLR_TRANSMIT		0x00000001UL
#define ICLR_PENDING		0x00000003UL
#define NR_IRQS    255
extern void irq_install_pre_handler(int irq,
void (*func)(unsigned int, void *, void *),
void *arg1, void *arg2);
#define irq_canonicalize(irq)	(irq)
extern unsigned int build_irq(int inofixup, unsigned long iclr, unsigned long imap);
extern unsigned int sun4v_build_irq(u32 devhandle, unsigned int devino);
extern unsigned int sun4v_build_virq(u32 devhandle, unsigned int devino);
extern unsigned int sun4v_build_msi(u32 devhandle, unsigned int *irq_p,
unsigned int msi_devino_start,
unsigned int msi_devino_end);
extern void sun4v_destroy_msi(unsigned int irq);
extern unsigned int sun4u_build_msi(u32 portid, unsigned int *irq_p,
unsigned int msi_devino_start,
unsigned int msi_devino_end,
unsigned long imap_base,
unsigned long iclr_base);
extern void sun4u_destroy_msi(unsigned int irq);
extern unsigned char irq_alloc(unsigned int dev_handle,
unsigned int dev_ino);
extern void irq_free(unsigned int irq);
extern void __init init_IRQ(void);
extern void fixup_irqs(void);
static inline void set_softint(unsigned long bits)
static inline void clear_softint(unsigned long bits)
static inline unsigned long get_softint(void)
void arch_trigger_all_cpu_backtrace(void);
#define arch_trigger_all_cpu_backtrace arch_trigger_all_cpu_backtrace
extern void *hardirq_stack[NR_CPUS];
extern void *softirq_stack[NR_CPUS];
#define __ARCH_HAS_DO_SOFTIRQ
#define ARCH_HAS_NMI_WATCHDOG
#define NO_IRQ		0xffffffff
