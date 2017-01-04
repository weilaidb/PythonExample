struct ucb1x00_ts ;
static int adcsync;
static inline void ucb1x00_ts_evt_add(struct ucb1x00_ts *ts, u16 pressure, u16 x, u16 y)
static inline void ucb1x00_ts_event_release(struct ucb1x00_ts *ts)
static inline void ucb1x00_ts_mode_int(struct ucb1x00_ts *ts)
static inline unsigned int ucb1x00_ts_read_pressure(struct ucb1x00_ts *ts)
static inline unsigned int ucb1x00_ts_read_xpos(struct ucb1x00_ts *ts)
static inline unsigned int ucb1x00_ts_read_ypos(struct ucb1x00_ts *ts)
static inline unsigned int ucb1x00_ts_read_xres(struct ucb1x00_ts *ts)
static inline unsigned int ucb1x00_ts_read_yres(struct ucb1x00_ts *ts)
static inline int ucb1x00_ts_pen_down(struct ucb1x00_ts *ts)
static int ucb1x00_thread(void *_ts)
static void ucb1x00_ts_irq(int idx, void *id)
static int ucb1x00_ts_open(struct input_dev *idev)
static void ucb1x00_ts_close(struct input_dev *idev)
static int ucb1x00_ts_resume(struct ucb1x00_dev *dev)
#define ucb1x00_ts_resume NULL
static int ucb1x00_ts_add(struct ucb1x00_dev *dev)
static void ucb1x00_ts_remove(struct ucb1x00_dev *dev)
static struct ucb1x00_driver ucb1x00_ts_driver = ;
static int __init ucb1x00_ts_init(void)
static void __exit ucb1x00_ts_exit(void)
module_param(adcsync, int, 0444);
module_init(ucb1x00_ts_init);
module_exit(ucb1x00_ts_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("UCB1x00 touchscreen driver");
MODULE_LICENSE("GPL");
