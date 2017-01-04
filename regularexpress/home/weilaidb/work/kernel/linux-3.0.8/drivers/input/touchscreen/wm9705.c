#define TS_NAME			"wm97xx"
#define WM9705_VERSION		"1.00"
#define DEFAULT_PRESSURE	0xb0c0
static int pil;
module_param(pil, int, 0);
MODULE_PARM_DESC(pil, "Set current used for pressure measurement.");
static int pressure = DEFAULT_PRESSURE & 0xfff;
module_param(pressure, int, 0);
MODULE_PARM_DESC(pressure, "Set threshold for pressure measurement.");
static int delay = 4;
module_param(delay, int, 0);
MODULE_PARM_DESC(delay, "Set adc sample delay.");
static int pdd = 8;
module_param(pdd, int, 0);
MODULE_PARM_DESC(pdd, "Set pen detect comparator threshold");
static int mask;
module_param(mask, int, 0);
MODULE_PARM_DESC(mask, "Set adc mask function.");
static const int delay_table[] = ;
static inline void poll_delay(int d)
static void wm9705_phy_init(struct wm97xx *wm)
static void wm9705_dig_enable(struct wm97xx *wm, int enable)
static void wm9705_aux_prepare(struct wm97xx *wm)
static void wm9705_dig_restore(struct wm97xx *wm)
static inline int is_pden(struct wm97xx *wm)
static int wm9705_poll_sample(struct wm97xx *wm, int adcsel, int *sample)
static int wm9705_poll_touch(struct wm97xx *wm, struct wm97xx_data *data)
static int wm9705_acc_enable(struct wm97xx *wm, int enable)
struct wm97xx_codec_drv wm9705_codec = ;
EXPORT_SYMBOL_GPL(wm9705_codec);
MODULE_AUTHOR("Liam Girdwood <lrg@slimlogic.co.uk>");
MODULE_DESCRIPTION("WM9705 Touch Screen Driver");
MODULE_LICENSE("GPL");
