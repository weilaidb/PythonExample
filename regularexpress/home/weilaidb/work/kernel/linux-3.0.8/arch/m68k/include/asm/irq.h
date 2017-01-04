#define _M68K_IRQ_H_
#if defined(CONFIG_COLDFIRE)
#define NR_IRQS 256
#elif defined(CONFIG_VME) || defined(CONFIG_SUN3) || defined(CONFIG_SUN3X)
#define NR_IRQS 200
#elif defined(CONFIG_ATARI) || defined(CONFIG_MAC)
#define NR_IRQS 72
#elif defined(CONFIG_Q40)
#define NR_IRQS	43
#elif defined(CONFIG_AMIGA) || !defined(CONFIG_MMU)
#define NR_IRQS	32
#elif defined(CONFIG_APOLLO)
#define NR_IRQS	24
#elif defined(CONFIG_HP300)
#define NR_IRQS	8
#define NR_IRQS	0
#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
#define IRQ_SPURIOUS	0
#define IRQ_AUTO_1	1
#define IRQ_AUTO_2	2
#define IRQ_AUTO_3	3
#define IRQ_AUTO_4	4
#define IRQ_AUTO_5	5
#define IRQ_AUTO_6	6
#define IRQ_AUTO_7	7
#define IRQ_USER	8
extern unsigned int irq_canonicalize(unsigned int irq);
struct pt_regs;
#define IRQ_FLG_LOCK	(0x0001)
#define IRQ_FLG_REPLACE	(0x0002)
#define IRQ_FLG_FAST	(0x0004)
#define IRQ_FLG_SLOW	(0x0008)
#define IRQ_FLG_STD	(0x8000)
typedef struct irq_node  irq_node_t;
struct irq_handler ;
struct irq_controller ;
extern int m68k_irq_startup(unsigned int);
extern void m68k_irq_shutdown(unsigned int);
extern irq_node_t *new_irq_node(void);
extern void m68k_setup_auto_interrupt(void (*handler)(unsigned int, struct pt_regs *));
extern void m68k_setup_user_interrupt(unsigned int vec, unsigned int cnt,
void (*handler)(unsigned int, struct pt_regs *));
extern void m68k_setup_irq_controller(struct irq_controller *, unsigned int, unsigned int);
asmlinkage void m68k_handle_int(unsigned int);
asmlinkage void __m68k_handle_int(unsigned int, struct pt_regs *);
#define irq_canonicalize(irq)  (irq)
