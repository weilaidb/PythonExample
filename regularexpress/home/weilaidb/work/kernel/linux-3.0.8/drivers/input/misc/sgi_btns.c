static inline u8 button_status(void)
static inline u8 button_status(void)
#define BUTTONS_POLL_INTERVAL	30
#define BUTTONS_COUNT_THRESHOLD	3
static const unsigned short sgi_map[] = ;
struct buttons_dev ;
static void handle_buttons(struct input_polled_dev *dev)
static int __devinit sgi_buttons_probe(struct platform_device *pdev)
static int __devexit sgi_buttons_remove(struct platform_device *pdev)
static struct platform_driver sgi_buttons_driver = ;
static int __init sgi_buttons_init(void)
static void __exit sgi_buttons_exit(void)
MODULE_LICENSE("GPL");
module_init(sgi_buttons_init);
module_exit(sgi_buttons_exit);
