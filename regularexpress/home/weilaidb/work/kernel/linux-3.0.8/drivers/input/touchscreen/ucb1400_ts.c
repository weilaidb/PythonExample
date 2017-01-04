static int adcsync;
static int ts_delay = 55;
static int ts_delay_pressure;
static inline void ucb1400_ts_mode_int(struct snd_ac97 *ac97)
static inline unsigned int ucb1400_ts_read_pressure(struct ucb1400_ts *ucb)
static inline unsigned int ucb1400_ts_read_xpos(struct ucb1400_ts *ucb)
static inline unsigned int ucb1400_ts_read_ypos(struct ucb1400_ts *ucb)
static inline unsigned int ucb1400_ts_read_xres(struct ucb1400_ts *ucb)
static inline unsigned int ucb1400_ts_read_yres(struct ucb1400_ts *ucb)
static inline int ucb1400_ts_pen_up(struct snd_ac97 *ac97)
static inline void ucb1400_ts_irq_enable(struct snd_ac97 *ac97)
static inline void ucb1400_ts_irq_disable(struct snd_ac97 *ac97)
static void ucb1400_ts_evt_add(struct input_dev *idev, u16 pressure, u16 x, u16 y)
static void ucb1400_ts_event_release(struct input_dev *idev)
static void ucb1400_handle_pending_irq(struct ucb1400_ts *ucb)
static int ucb1400_ts_thread(void *_ucb)
static irqreturn_t ucb1400_hard_irq(int irqnr, void *devid)
static int ucb1400_ts_open(struct input_dev *idev)
static void ucb1400_ts_close(struct input_dev *idev)
#define NO_IRQ	0
static int ucb1400_ts_detect_irq(struct ucb1400_ts *ucb)
static int ucb1400_ts_probe(struct platform_device *dev)
static int ucb1400_ts_remove(struct platform_device *dev)
static int ucb1400_ts_resume(struct platform_device *dev)
#define ucb1400_ts_resume NULL
static struct platform_driver ucb1400_ts_driver = ;
static int __init ucb1400_ts_init(void)
static void __exit ucb1400_ts_exit(void)
module_param(adcsync, bool, 0444);
MODULE_PARM_DESC(adcsync, "Synchronize touch readings with ADCSYNC pin.");
module_param(ts_delay, int, 0444);
MODULE_PARM_DESC(ts_delay, "Delay between panel setup and"
" position read. Default = 55us.");
module_param(ts_delay_pressure, int, 0444);
MODULE_PARM_DESC(ts_delay_pressure,
"delay between panel setup and pressure read."
"  Default = 0us.");
module_init(ucb1400_ts_init);
module_exit(ucb1400_ts_exit);
MODULE_DESCRIPTION("Philips UCB1400 touchscreen driver");
MODULE_LICENSE("GPL");
