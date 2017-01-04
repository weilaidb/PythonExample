#define BUTTONS_POLL_INTERVAL	30
#define BUTTONS_COUNT_THRESHOLD	3
#define BUTTONS_STATUS_MASK	0xfe000000
static const unsigned short cobalt_map[] = ;
struct buttons_dev ;
static void handle_buttons(struct input_polled_dev *dev)
static int __devinit cobalt_buttons_probe(struct platform_device *pdev)
static int __devexit cobalt_buttons_remove(struct platform_device *pdev)
MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_DESCRIPTION("Cobalt button interface driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:Cobalt buttons");
static struct platform_driver cobalt_buttons_driver = ;
static int __init cobalt_buttons_init(void)
static void __exit cobalt_buttons_exit(void)
module_init(cobalt_buttons_init);
module_exit(cobalt_buttons_exit);
