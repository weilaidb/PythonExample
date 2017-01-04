MODULE_AUTHOR("Kristoffer Ericson <Kristoffer.Ericson@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 710/720/728 keyboard driver");
MODULE_LICENSE("GPL v2");
static unsigned short jornada_std_keymap[128] = ;
struct jornadakbd ;
static irqreturn_t jornada720_kbd_interrupt(int irq, void *dev_id)
;
static int __devinit jornada720_kbd_probe(struct platform_device *pdev)
;
static int __devexit jornada720_kbd_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:jornada720_kbd");
static struct platform_driver jornada720_kbd_driver = ;
static int __init jornada720_kbd_init(void)
static void __exit jornada720_kbd_exit(void)
module_init(jornada720_kbd_init);
module_exit(jornada720_kbd_exit);
