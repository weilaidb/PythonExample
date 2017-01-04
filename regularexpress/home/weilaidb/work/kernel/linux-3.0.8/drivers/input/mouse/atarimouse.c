MODULE_AUTHOR("Michael Schmitz <schmitz@biophys.uni-duesseldorf.de>");
MODULE_DESCRIPTION("Atari mouse driver");
MODULE_LICENSE("GPL");
static int mouse_threshold[2] = ;
module_param_array(mouse_threshold, int, NULL, 0);
extern int atari_mouse_buttons;
static struct input_dev *atamouse_dev;
static void atamouse_interrupt(char *buf)
static int atamouse_open(struct input_dev *dev)
static void atamouse_close(struct input_dev *dev)
static int __init atamouse_init(void)
static void __exit atamouse_exit(void)
module_init(atamouse_init);
module_exit(atamouse_exit);
