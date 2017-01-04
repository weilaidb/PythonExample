#define __ASM_SH_HW_IRQ_H
extern atomic_t irq_err_count;
struct ipr_data ;
struct ipr_desc ;
void register_ipr_controller(struct ipr_desc *);
void __init plat_irq_setup(void);
void __init plat_irq_setup_sh3(void);
void __init plat_irq_setup_pins(int mode);
enum ;
