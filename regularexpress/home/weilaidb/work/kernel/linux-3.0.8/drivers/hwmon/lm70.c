#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME		"lm70"
#define LM70_CHIP_LM70		0
#define LM70_CHIP_TMP121	1
struct lm70 ;
static ssize_t lm70_sense_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO, lm70_sense_temp, NULL);
static ssize_t lm70_show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, lm70_show_name, NULL);
static int __devinit lm70_probe(struct spi_device *spi)
static int __devexit lm70_remove(struct spi_device *spi)
static const struct spi_device_id lm70_ids[] = ;
MODULE_DEVICE_TABLE(spi, lm70_ids);
static struct spi_driver lm70_driver = ;
static int __init init_lm70(void)
static void __exit cleanup_lm70(void)
module_init(init_lm70);
module_exit(cleanup_lm70);
MODULE_AUTHOR("Kaiwan N Billimoria");
MODULE_DESCRIPTION("NS LM70 / TI TMP121/TMP123 Linux driver");
MODULE_LICENSE("GPL");
