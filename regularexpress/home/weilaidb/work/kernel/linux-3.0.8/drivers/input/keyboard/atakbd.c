MODULE_AUTHOR("Michael Schmitz <schmitz@biophys.uni-duesseldorf.de>");
MODULE_DESCRIPTION("Atari keyboard driver");
MODULE_LICENSE("GPL");
static unsigned char atakbd_keycode[0x72] = ;
static struct input_dev *atakbd_dev;
static void atakbd_interrupt(unsigned char scancode, char down)
static int __init atakbd_init(void)
static void __exit atakbd_exit(void)
module_init(atakbd_init);
module_exit(atakbd_exit);
