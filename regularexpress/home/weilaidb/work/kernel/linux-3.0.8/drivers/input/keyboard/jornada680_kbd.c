#define PCCR 0xa4000104
#define PDCR 0xa4000106
#define PECR 0xa4000108
#define PFCR 0xa400010a
#define PCDR 0xa4000124
#define PDDR 0xa4000126
#define PEDR 0xa4000128
#define PFDR 0xa400012a
#define PGDR 0xa400012c
#define PHDR 0xa400012e
#define PJDR 0xa4000130
#define PKDR 0xa4000132
#define PLDR 0xa4000134
static const unsigned short jornada_scancodes[] = ;
#define JORNADA_SCAN_SIZE	18
struct jornadakbd ;
static void jornada_parse_kbd(struct jornadakbd *jornadakbd)
static void jornada_scan_keyb(unsigned char *s)
static void jornadakbd680_poll(struct input_polled_dev *dev)
static int __devinit jornada680kbd_probe(struct platform_device *pdev)
static int __devexit jornada680kbd_remove(struct platform_device *pdev)
static struct platform_driver jornada680kbd_driver = ;
static int __init jornada680kbd_init(void)
static void __exit jornada680kbd_exit(void)
module_init(jornada680kbd_init);
module_exit(jornada680kbd_exit);
MODULE_AUTHOR("Kristoffer Ericson <kristoffer.ericson@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 620/660/680/690 Keyboard Driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:jornada680_kbd");
