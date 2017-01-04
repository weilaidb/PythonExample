#define __NEC_VR41XX_GIU_H
enum ;
typedef enum  irq_trigger_t;
typedef enum  irq_signal_t;
extern void vr41xx_set_irq_trigger(unsigned int pin, irq_trigger_t trigger,
irq_signal_t signal);
typedef enum  irq_level_t;
extern void vr41xx_set_irq_level(unsigned int pin, irq_level_t level);
typedef enum  gpio_pull_t;
extern int vr41xx_gpio_pullupdown(unsigned int pin, gpio_pull_t pull);
