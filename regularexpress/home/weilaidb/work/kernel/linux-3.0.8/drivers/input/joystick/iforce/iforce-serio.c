void iforce_serial_xmit(struct iforce *iforce)
static void iforce_serio_write_wakeup(struct serio *serio)
static irqreturn_t iforce_serio_irq(struct serio *serio,
unsigned char data, unsigned int flags)
static int iforce_serio_connect(struct serio *serio, struct serio_driver *drv)
static void iforce_serio_disconnect(struct serio *serio)
static struct serio_device_id iforce_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, iforce_serio_ids);
struct serio_driver iforce_serio_drv = ;
