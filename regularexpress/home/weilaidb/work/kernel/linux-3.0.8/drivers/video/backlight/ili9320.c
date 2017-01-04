static inline int ili9320_write_spi(struct ili9320 *ili,
unsigned int reg,
unsigned int value)
int ili9320_write(struct ili9320 *ili, unsigned int reg, unsigned int value)
EXPORT_SYMBOL_GPL(ili9320_write);
int ili9320_write_regs(struct ili9320 *ili,
struct ili9320_reg *values,
int nr_values)
EXPORT_SYMBOL_GPL(ili9320_write_regs);
static void ili9320_reset(struct ili9320 *lcd)
static inline int ili9320_init_chip(struct ili9320 *lcd)
static inline int ili9320_power_on(struct ili9320 *lcd)
static inline int ili9320_power_off(struct ili9320 *lcd)
#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
static int ili9320_power(struct ili9320 *lcd, int power)
static inline struct ili9320 *to_our_lcd(struct lcd_device *lcd)
static int ili9320_set_power(struct lcd_device *ld, int power)
static int ili9320_get_power(struct lcd_device *ld)
static struct lcd_ops ili9320_ops = ;
static void __devinit ili9320_setup_spi(struct ili9320 *ili,
struct spi_device *dev)
int __devinit ili9320_probe_spi(struct spi_device *spi,
struct ili9320_client *client)
EXPORT_SYMBOL_GPL(ili9320_probe_spi);
int __devexit ili9320_remove(struct ili9320 *ili)
EXPORT_SYMBOL_GPL(ili9320_remove);
int ili9320_suspend(struct ili9320 *lcd, pm_message_t state)
EXPORT_SYMBOL_GPL(ili9320_suspend);
int ili9320_resume(struct ili9320 *lcd)
EXPORT_SYMBOL_GPL(ili9320_resume);
void ili9320_shutdown(struct ili9320 *lcd)
EXPORT_SYMBOL_GPL(ili9320_shutdown);
MODULE_AUTHOR("Ben Dooks <ben-linux@fluff.org>");
MODULE_DESCRIPTION("ILI9320 LCD Driver");
MODULE_LICENSE("GPL v2");
