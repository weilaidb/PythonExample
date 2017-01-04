#define __CNS3XXX_CORE_H
extern struct sys_timer cns3xxx_timer;
void __init cns3xxx_map_io(void);
void __init cns3xxx_init_irq(void);
void cns3xxx_power_off(void);
