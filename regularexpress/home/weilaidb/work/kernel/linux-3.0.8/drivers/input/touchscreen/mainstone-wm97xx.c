struct continuous ;
#define WM_READS(sp) ((sp / HZ) + 1)
static const struct continuous cinfo[] = ;
static int sp_idx;
static u16 last, tries;
static int irq;
static int cont_rate = 200;
module_param(cont_rate, int, 0);
MODULE_PARM_DESC(cont_rate, "Sampling rate in continuous mode (Hz)");
static int pen_int;
module_param(pen_int, int, 0);
MODULE_PARM_DESC(pen_int, "Pen down detection (1 = interrupt, 0 = polling)");
static int pressure;
module_param(pressure, int, 0);
MODULE_PARM_DESC(pressure, "Pressure readback (1 = pressure, 0 = no pressure)");
static int ac97_touch_slot = 5;
module_param(ac97_touch_slot, int, 0);
MODULE_PARM_DESC(ac97_touch_slot, "Touch screen data slot AC97 number");
static void wm97xx_acc_pen_up(struct wm97xx *wm)
static void wm97xx_acc_pen_up(struct wm97xx *wm)
static int wm97xx_acc_pen_down(struct wm97xx *wm)
static int wm97xx_acc_startup(struct wm97xx *wm)
static void wm97xx_acc_shutdown(struct wm97xx *wm)
static void wm97xx_irq_enable(struct wm97xx *wm, int enable)
static struct wm97xx_mach_ops mainstone_mach_ops = ;
static int mainstone_wm97xx_probe(struct platform_device *pdev)
static int mainstone_wm97xx_remove(struct platform_device *pdev)
static struct platform_driver mainstone_wm97xx_driver = ;
static int __init mainstone_wm97xx_init(void)
static void __exit mainstone_wm97xx_exit(void)
module_init(mainstone_wm97xx_init);
module_exit(mainstone_wm97xx_exit);
MODULE_AUTHOR("Liam Girdwood <lrg@slimlogic.co.uk>");
MODULE_DESCRIPTION("wm97xx continuous touch driver for mainstone");
MODULE_LICENSE("GPL");
