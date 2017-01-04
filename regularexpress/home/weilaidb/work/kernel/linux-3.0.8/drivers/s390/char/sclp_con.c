#define sclp_console_major 4
#define sclp_console_minor 64
#define sclp_console_name  "ttyS"
static spinlock_t sclp_con_lock;
static struct list_head sclp_con_pages;
static struct list_head sclp_con_outqueue;
static struct sclp_buffer *sclp_conbuf;
static struct timer_list sclp_con_timer;
static int sclp_con_suspended;
static int sclp_con_queue_running;
static unsigned short sclp_con_columns;
static unsigned short sclp_con_width_htab;
static void
sclp_conbuf_callback(struct sclp_buffer *buffer, int rc)
static void sclp_conbuf_emit(void)
static void sclp_console_sync_queue(void)
static void
sclp_console_timeout(unsigned long data)
static void
sclp_console_write(struct console *console, const char *message,
unsigned int count)
static struct tty_driver *
sclp_console_device(struct console *c, int *index)
static void
sclp_console_flush(void)
static void sclp_console_resume(void)
static void sclp_console_suspend(void)
static int sclp_console_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block on_panic_nb = ;
static struct notifier_block on_reboot_nb = ;
static struct console sclp_console =
;
void sclp_console_pm_event(enum sclp_pm_event sclp_pm_event)
static int __init
sclp_console_init(void)
console_initcall(sclp_console_init);
