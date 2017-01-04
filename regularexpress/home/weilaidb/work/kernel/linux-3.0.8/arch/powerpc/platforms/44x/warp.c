static __initdata struct of_device_id warp_of_bus[] = ;
static int __init warp_device_probe(void)
machine_device_initcall(warp, warp_device_probe);
static int __init warp_probe(void)
define_machine(warp) ;
static int __init warp_post_info(void)
static LIST_HEAD(dtm_shutdown_list);
static void __iomem *dtm_fpga;
static unsigned green_led, red_led;
struct dtm_shutdown ;
int pika_dtm_register_shutdown(void (*func)(void *arg), void *arg)
int pika_dtm_unregister_shutdown(void (*func)(void *arg), void *arg)
static irqreturn_t temp_isr(int irq, void *context)
static int pika_setup_leds(void)
static void pika_setup_critical_temp(struct device_node *np,
struct i2c_client *client)
static inline void pika_dtm_check_fan(void __iomem *fpga)
static int pika_dtm_thread(void __iomem *fpga)
static int __init pika_dtm_start(void)
machine_late_initcall(warp, pika_dtm_start);
int pika_dtm_register_shutdown(void (*func)(void *arg), void *arg)
int pika_dtm_unregister_shutdown(void (*func)(void *arg), void *arg)
machine_late_initcall(warp, warp_post_info);
EXPORT_SYMBOL(pika_dtm_register_shutdown);
EXPORT_SYMBOL(pika_dtm_unregister_shutdown);
