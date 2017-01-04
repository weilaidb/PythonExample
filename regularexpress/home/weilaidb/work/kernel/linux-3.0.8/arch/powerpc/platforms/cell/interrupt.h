#define ASM_CELL_PIC_H
enum ;
extern void iic_init_IRQ(void);
extern void iic_message_pass(int cpu, int msg);
extern void iic_request_IPIs(void);
extern void iic_setup_cpu(void);
extern u8 iic_get_target_id(int cpu);
extern void spider_init_IRQ(void);
extern void iic_set_interrupt_routing(int cpu, int thread, int priority);
