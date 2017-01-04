#define DRIVER_NAME "gptimer_example"
struct gptimer_data ;
static struct gptimer_data data;
static irqreturn_t gptimer_example_irq(int irq, void *dev_id)
static int __init gptimer_example_init(void)
module_init(gptimer_example_init);
static void __exit gptimer_example_exit(void)
module_exit(gptimer_example_exit);
MODULE_LICENSE("BSD");
