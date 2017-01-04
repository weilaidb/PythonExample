struct continuous ;
#define WM_READS(sp) ((sp / HZ) + 1)
static const struct continuous cinfo[] = ;
static int sp_idx;
static int cont_rate = 200;
module_param(cont_rate, int, 0);
MODULE_PARM_DESC(cont_rate, "Sampling rate in continuous mode (Hz)");
static int pressure;
module_param(pressure, int, 0);
MODULE_PARM_DESC(pressure, "Pressure readback (1 = pressure, 0 = no pressure)");
static int ac97_touch_slot = 5;
module_param(ac97_touch_slot, int, 0);
MODULE_PARM_DESC(ac97_touch_slot, "Touch screen data slot AC97 number");
static void wm97xx_acc_pen_up(struct wm97xx *wm)
static int wm97xx_acc_pen_down(struct wm97xx *wm)
static int wm97xx_acc_startup(struct wm97xx *wm)
static void wm97xx_irq_enable(struct wm97xx *wm, int enable)
static struct wm97xx_mach_ops zylonite_mach_ops = ;
static int zylonite_wm97xx_probe(struct platform_device *pdev)
static int zylonite_wm97xx_remove(struct platform_device *pdev)
static struct platform_driver zylonite_wm97xx_driver = ;
static int __init zylonite_wm97xx_init(void)
static void __exit zylonite_wm97xx_exit(void)
module_init(zylonite_wm97xx_init);
module_exit(zylonite_wm97xx_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("wm97xx continuous touch driver for Zylonite");
MODULE_LICENSE("GPL");
