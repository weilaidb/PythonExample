#define DRV_NAME	"bf54x-keys"
#define TIME_SCALE	100
#define	MAX_MULT	(0xFF * TIME_SCALE)
#define MAX_RC		8
static const u16 per_rows[] = ;
static const u16 per_cols[] = ;
struct bf54x_kpad ;
static inline int bfin_kpad_find_key(struct bf54x_kpad *bf54x_kpad,
struct input_dev *input, u16 keyident)
static inline void bfin_keycodecpy(unsigned short *keycode,
const unsigned int *pdata_kc,
unsigned short keymapsize)
static inline u16 bfin_kpad_get_prescale(u32 timescale)
static inline u16 bfin_kpad_get_keypressed(struct bf54x_kpad *bf54x_kpad)
static inline void bfin_kpad_clear_irq(void)
static void bfin_kpad_timer(unsigned long data)
static irqreturn_t bfin_kpad_isr(int irq, void *dev_id)
static int __devinit bfin_kpad_probe(struct platform_device *pdev)
static int __devexit bfin_kpad_remove(struct platform_device *pdev)
static int bfin_kpad_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_kpad_resume(struct platform_device *pdev)
# define bfin_kpad_suspend NULL
# define bfin_kpad_resume  NULL
struct platform_driver bfin_kpad_device_driver = ;
static int __init bfin_kpad_init(void)
static void __exit bfin_kpad_exit(void)
module_init(bfin_kpad_init);
module_exit(bfin_kpad_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Keypad driver for BF54x Processors");
MODULE_ALIAS("platform:bf54x-keys");
