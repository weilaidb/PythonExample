int wm831x_isinkv_values[WM831X_ISINK_MAX_ISEL + 1] = ;
EXPORT_SYMBOL_GPL(wm831x_isinkv_values);
static int wm831x_reg_locked(struct wm831x *wm831x, unsigned short reg)
void wm831x_reg_lock(struct wm831x *wm831x)
EXPORT_SYMBOL_GPL(wm831x_reg_lock);
int wm831x_reg_unlock(struct wm831x *wm831x)
EXPORT_SYMBOL_GPL(wm831x_reg_unlock);
static int wm831x_read(struct wm831x *wm831x, unsigned short reg,
int bytes, void *dest)
int wm831x_reg_read(struct wm831x *wm831x, unsigned short reg)
EXPORT_SYMBOL_GPL(wm831x_reg_read);
int wm831x_bulk_read(struct wm831x *wm831x, unsigned short reg,
int count, u16 *buf)
EXPORT_SYMBOL_GPL(wm831x_bulk_read);
static int wm831x_write(struct wm831x *wm831x, unsigned short reg,
int bytes, void *src)
int wm831x_reg_write(struct wm831x *wm831x, unsigned short reg,
unsigned short val)
EXPORT_SYMBOL_GPL(wm831x_reg_write);
int wm831x_set_bits(struct wm831x *wm831x, unsigned short reg,
unsigned short mask, unsigned short val)
EXPORT_SYMBOL_GPL(wm831x_set_bits);
int wm831x_auxadc_read(struct wm831x *wm831x, enum wm831x_auxadc input)
EXPORT_SYMBOL_GPL(wm831x_auxadc_read);
static irqreturn_t wm831x_auxadc_irq(int irq, void *irq_data)
int wm831x_auxadc_read_uv(struct wm831x *wm831x, enum wm831x_auxadc input)
EXPORT_SYMBOL_GPL(wm831x_auxadc_read_uv);
static struct resource wm831x_dcdc1_resources[] = ;
static struct resource wm831x_dcdc2_resources[] = ;
static struct resource wm831x_dcdc3_resources[] = ;
static struct resource wm831x_dcdc4_resources[] = ;
static struct resource wm8320_dcdc4_buck_resources[] = ;
static struct resource wm831x_gpio_resources[] = ;
static struct resource wm831x_isink1_resources[] = ;
static struct resource wm831x_isink2_resources[] = ;
static struct resource wm831x_ldo1_resources[] = ;
static struct resource wm831x_ldo2_resources[] = ;
static struct resource wm831x_ldo3_resources[] = ;
static struct resource wm831x_ldo4_resources[] = ;
static struct resource wm831x_ldo5_resources[] = ;
static struct resource wm831x_ldo6_resources[] = ;
static struct resource wm831x_ldo7_resources[] = ;
static struct resource wm831x_ldo8_resources[] = ;
static struct resource wm831x_ldo9_resources[] = ;
static struct resource wm831x_ldo10_resources[] = ;
static struct resource wm831x_ldo11_resources[] = ;
static struct resource wm831x_on_resources[] = ;
static struct resource wm831x_power_resources[] = ;
static struct resource wm831x_rtc_resources[] = ;
static struct resource wm831x_status1_resources[] = ;
static struct resource wm831x_status2_resources[] = ;
static struct resource wm831x_touch_resources[] = ;
static struct resource wm831x_wdt_resources[] = ;
static struct mfd_cell wm8310_devs[] = ;
static struct mfd_cell wm8311_devs[] = ;
static struct mfd_cell wm8312_devs[] = ;
static struct mfd_cell wm8320_devs[] = ;
static struct mfd_cell backlight_devs[] = ;
int wm831x_device_init(struct wm831x *wm831x, unsigned long id, int irq)
void wm831x_device_exit(struct wm831x *wm831x)
int wm831x_device_suspend(struct wm831x *wm831x)
MODULE_DESCRIPTION("Core support for the WM831X AudioPlus PMIC");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Brown");
