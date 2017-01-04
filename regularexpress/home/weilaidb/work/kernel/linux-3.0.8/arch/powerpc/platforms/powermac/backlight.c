#define OLD_BACKLIGHT_MAX 15
static void pmac_backlight_key_worker(struct work_struct *work);
static void pmac_backlight_set_legacy_worker(struct work_struct *work);
static DECLARE_WORK(pmac_backlight_key_work, pmac_backlight_key_worker);
static DECLARE_WORK(pmac_backlight_set_legacy_work, pmac_backlight_set_legacy_worker);
static int pmac_backlight_key_queued;
static int pmac_backlight_set_legacy_queued;
static atomic_t kernel_backlight_disabled = ATOMIC_INIT(0);
DEFINE_MUTEX(pmac_backlight_mutex);
struct backlight_device *pmac_backlight;
int pmac_has_backlight_type(const char *type)
int pmac_backlight_curve_lookup(struct fb_info *info, int value)
static void pmac_backlight_key_worker(struct work_struct *work)
void pmac_backlight_key(int direction)
static int __pmac_backlight_set_legacy_brightness(int brightness)
static void pmac_backlight_set_legacy_worker(struct work_struct *work)
void pmac_backlight_set_legacy_brightness_pmu(int brightness)
int pmac_backlight_set_legacy_brightness(int brightness)
int pmac_backlight_get_legacy_brightness()
void pmac_backlight_disable()
void pmac_backlight_enable()
EXPORT_SYMBOL_GPL(pmac_backlight);
EXPORT_SYMBOL_GPL(pmac_backlight_mutex);
EXPORT_SYMBOL_GPL(pmac_has_backlight_type);
