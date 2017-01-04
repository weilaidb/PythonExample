MODULE_AUTHOR("Matt Callow");
MODULE_DESCRIPTION("AMS Delta (E3) keyboard port driver");
MODULE_LICENSE("GPL");
static struct serio *ams_delta_serio;
static int check_data(int data)
static irqreturn_t ams_delta_serio_interrupt(int irq, void *dev_id)
static int ams_delta_serio_open(struct serio *serio)
static void ams_delta_serio_close(struct serio *serio)
static int __init ams_delta_serio_init(void)
module_init(ams_delta_serio_init);
static void __exit ams_delta_serio_exit(void)
module_exit(ams_delta_serio_exit);
