extern void msp_slp_irq_init(void);
extern void msp_slp_irq_dispatch(void);
extern void msp_cic_irq_init(void);
extern void msp_cic_irq_dispatch(void);
extern void msp_vsmp_int_init(void);
static inline void mac0_int_dispatch(void)
static inline void mac1_int_dispatch(void)
static inline void mac2_int_dispatch(void)
static inline void usb_int_dispatch(void)
static inline void sec_int_dispatch(void)
asmlinkage void plat_irq_dispatch(struct pt_regs *regs)
static struct irqaction cic_cascade_msp = ;
static struct irqaction per_cascade_msp = ;
void __init arch_init_irq(void)
