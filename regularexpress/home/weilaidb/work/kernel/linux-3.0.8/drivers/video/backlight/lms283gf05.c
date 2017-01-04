struct lms283gf05_state ;
struct lms283gf05_seq ;
static struct lms283gf05_seq disp_initseq[] = ;
static struct lms283gf05_seq disp_pdwnseq[] = ;
static void lms283gf05_reset(unsigned long gpio, bool inverted)
static void lms283gf05_toggle(struct spi_device *spi,
struct lms283gf05_seq *seq, int sz)
static int lms283gf05_power_set(struct lcd_device *ld, int power)
static struct lcd_ops lms_ops = ;
static int __devinit lms283gf05_probe(struct spi_device *spi)
static int __devexit lms283gf05_remove(struct spi_device *spi)
static struct spi_driver lms283gf05_driver = ;
static __init int lms283gf05_init(void)
static __exit void lms283gf05_exit(void)
module_init(lms283gf05_init);
module_exit(lms283gf05_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("LCD283GF05 LCD");
MODULE_LICENSE("GPL v2");
