#define SHUTUP_SONIC
extern void via_register_interrupts(void);
extern void via_irq_enable(int);
extern void via_irq_disable(int);
extern void via_irq_clear(int);
extern int  via_irq_pending(int);
extern void oss_register_interrupts(void);
extern void oss_irq_enable(int);
extern void oss_irq_disable(int);
extern void oss_irq_clear(int);
extern int  oss_irq_pending(int);
extern void psc_register_interrupts(void);
extern void psc_irq_enable(int);
extern void psc_irq_disable(int);
extern void psc_irq_clear(int);
extern int  psc_irq_pending(int);
extern void iop_register_interrupts(void);
extern int baboon_present;
extern void baboon_register_interrupts(void);
extern void baboon_irq_enable(int);
extern void baboon_irq_disable(int);
extern void baboon_irq_clear(int);
irqreturn_t mac_nmi_handler(int, void *);
irqreturn_t mac_debug_handler(int, void *);
void mac_enable_irq(unsigned int irq);
void mac_disable_irq(unsigned int irq);
static struct irq_controller mac_irq_controller = ;
void __init mac_init_IRQ(void)
void mac_enable_irq(unsigned int irq)
void mac_disable_irq(unsigned int irq)
void mac_clear_irq(unsigned int irq)
int mac_irq_pending(unsigned int irq)
EXPORT_SYMBOL(mac_irq_pending);
static int num_debug[8];
irqreturn_t mac_debug_handler(int irq, void *dev_id)
static int in_nmi;
static volatile int nmi_hold;
irqreturn_t mac_nmi_handler(int irq, void *dev_id)
