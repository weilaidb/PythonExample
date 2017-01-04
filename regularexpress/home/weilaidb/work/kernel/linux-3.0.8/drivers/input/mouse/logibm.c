MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Logitech busmouse driver");
MODULE_LICENSE("GPL");
#define	LOGIBM_BASE		0x23c
#define	LOGIBM_EXTENT		4
#define	LOGIBM_DATA_PORT	LOGIBM_BASE + 0
#define	LOGIBM_SIGNATURE_PORT	LOGIBM_BASE + 1
#define	LOGIBM_CONTROL_PORT	LOGIBM_BASE + 2
#define	LOGIBM_CONFIG_PORT	LOGIBM_BASE + 3
#define	LOGIBM_ENABLE_IRQ	0x00
#define	LOGIBM_DISABLE_IRQ	0x10
#define	LOGIBM_READ_X_LOW	0x80
#define	LOGIBM_READ_X_HIGH	0xa0
#define	LOGIBM_READ_Y_LOW	0xc0
#define	LOGIBM_READ_Y_HIGH	0xe0
#define LOGIBM_DEFAULT_MODE	0x90
#define LOGIBM_CONFIG_BYTE	0x91
#define LOGIBM_SIGNATURE_BYTE	0xa5
#define LOGIBM_IRQ		5
static int logibm_irq = LOGIBM_IRQ;
module_param_named(irq, logibm_irq, uint, 0);
MODULE_PARM_DESC(irq, "IRQ number (5=default)");
static struct input_dev *logibm_dev;
static irqreturn_t logibm_interrupt(int irq, void *dev_id)
static int logibm_open(struct input_dev *dev)
static void logibm_close(struct input_dev *dev)
static int __init logibm_init(void)
static void __exit logibm_exit(void)
module_init(logibm_init);
module_exit(logibm_exit);
