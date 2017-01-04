#define WM8350_UNLOCK_KEY		0x0013
#define WM8350_LOCK_KEY			0x0000
#define WM8350_CLOCK_CONTROL_1		0x28
#define WM8350_AIF_TEST			0x74
#define WM8350_BUS_DEBUG 0
#if WM8350_BUS_DEBUG
#define dump(regs, src) do  while (0);
#define dump(bytes, src)
#define WM8350_LOCK_DEBUG 0
#if WM8350_LOCK_DEBUG
#define ldbg(format, arg...) printk(format, ## arg)
#define ldbg(format, arg...)
static DEFINE_MUTEX(io_mutex);
static DEFINE_MUTEX(reg_lock_mutex);
static int wm8350_phys_read(struct wm8350 *wm8350, u8 reg, int num_regs,
u16 *dest)
static int wm8350_read(struct wm8350 *wm8350, u8 reg, int num_regs, u16 *dest)
static inline int is_reg_locked(struct wm8350 *wm8350, u8 reg)
static int wm8350_write(struct wm8350 *wm8350, u8 reg, int num_regs, u16 *src)
int wm8350_clear_bits(struct wm8350 *wm8350, u16 reg, u16 mask)
EXPORT_SYMBOL_GPL(wm8350_clear_bits);
int wm8350_set_bits(struct wm8350 *wm8350, u16 reg, u16 mask)
EXPORT_SYMBOL_GPL(wm8350_set_bits);
u16 wm8350_reg_read(struct wm8350 *wm8350, int reg)
EXPORT_SYMBOL_GPL(wm8350_reg_read);
int wm8350_reg_write(struct wm8350 *wm8350, int reg, u16 val)
EXPORT_SYMBOL_GPL(wm8350_reg_write);
int wm8350_block_read(struct wm8350 *wm8350, int start_reg, int regs,
u16 *dest)
EXPORT_SYMBOL_GPL(wm8350_block_read);
int wm8350_block_write(struct wm8350 *wm8350, int start_reg, int regs,
u16 *src)
EXPORT_SYMBOL_GPL(wm8350_block_write);
int wm8350_reg_lock(struct wm8350 *wm8350)
EXPORT_SYMBOL_GPL(wm8350_reg_lock);
int wm8350_reg_unlock(struct wm8350 *wm8350)
EXPORT_SYMBOL_GPL(wm8350_reg_unlock);
int wm8350_read_auxadc(struct wm8350 *wm8350, int channel, int scale, int vref)
EXPORT_SYMBOL_GPL(wm8350_read_auxadc);
static irqreturn_t wm8350_auxadc_irq(int irq, void *irq_data)
static int wm8350_create_cache(struct wm8350 *wm8350, int type, int mode)
static void wm8350_client_dev_register(struct wm8350 *wm8350,
const char *name,
struct platform_device **pdev)
int wm8350_device_init(struct wm8350 *wm8350, int irq,
struct wm8350_platform_data *pdata)
EXPORT_SYMBOL_GPL(wm8350_device_init);
void wm8350_device_exit(struct wm8350 *wm8350)
EXPORT_SYMBOL_GPL(wm8350_device_exit);
MODULE_DESCRIPTION("WM8350 AudioPlus PMIC core driver");
MODULE_LICENSE("GPL");
