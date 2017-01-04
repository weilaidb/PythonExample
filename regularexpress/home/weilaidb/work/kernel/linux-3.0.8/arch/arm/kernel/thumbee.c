static inline unsigned long teehbr_read(void)
static inline void teehbr_write(unsigned long v)
static int thumbee_notifier(struct notifier_block *self, unsigned long cmd, void *t)
static struct notifier_block thumbee_notifier_block = ;
static int __init thumbee_init(void)
late_initcall(thumbee_init);
