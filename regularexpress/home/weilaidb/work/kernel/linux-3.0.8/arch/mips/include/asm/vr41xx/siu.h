#define __NEC_VR41XX_SIU_H
#define SIU_PORTS_MAX 2
typedef enum  siu_interface_t;
extern void vr41xx_select_siu_interface(siu_interface_t interface);
typedef enum  irda_use_t;
extern void vr41xx_use_irda(irda_use_t use);
typedef enum  irda_module_t;
typedef enum  irda_speed_t;
extern void vr41xx_select_irda_module(irda_module_t module, irda_speed_t speed);
extern void vr41xx_siu_early_setup(struct uart_port *port);
static inline void vr41xx_siu_early_setup(struct uart_port *port)
