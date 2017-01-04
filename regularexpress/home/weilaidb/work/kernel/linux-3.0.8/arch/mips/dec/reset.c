typedef void __noreturn (* noret_func_t)(void);
static inline void __noreturn back_to_prom(void)
void __noreturn dec_machine_restart(char *command)
void __noreturn dec_machine_halt(void)
void __noreturn dec_machine_power_off(void)
irqreturn_t dec_intr_halt(int irq, void *dev_id)
