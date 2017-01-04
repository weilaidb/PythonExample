#define DRV_NAME "bfin-jtag-comm"
#define DEV_NAME "ttyBFJC"
#define pr_fmt(fmt) DRV_NAME ": " fmt
#define pr_init(fmt, args...) ()
#define EMUDOF   0x00000001
#define EMUDIF   0x00000002
#define EMUDOOVF 0x00000004
#define EMUDIOVF 0x00000008
static inline uint32_t bfin_write_emudat(uint32_t emudat)
static inline uint32_t bfin_read_emudat(void)
static inline uint32_t bfin_write_emudat_chars(char a, char b, char c, char d)
#define CIRC_SIZE 2048
#define CIRC_MASK (CIRC_SIZE - 1)
#define circ_empty(circ)     ((circ)->head == (circ)->tail)
#define circ_free(circ)      CIRC_SPACE((circ)->head, (circ)->tail, CIRC_SIZE)
#define circ_cnt(circ)       CIRC_CNT((circ)->head, (circ)->tail, CIRC_SIZE)
#define circ_byte(circ, idx) ((circ)->buf[(idx) & CIRC_MASK])
static struct tty_driver *bfin_jc_driver;
static struct task_struct *bfin_jc_kthread;
static struct tty_struct * volatile bfin_jc_tty;
static unsigned long bfin_jc_count;
static DEFINE_MUTEX(bfin_jc_tty_mutex);
static volatile struct circ_buf bfin_jc_write_buf;
static int
bfin_jc_emudat_manager(void *arg)
static int
bfin_jc_open(struct tty_struct *tty, struct file *filp)
static void
bfin_jc_close(struct tty_struct *tty, struct file *filp)
static int
bfin_jc_circ_write(const unsigned char *buf, int count)
# define console_lock()
# define console_unlock()
static int
bfin_jc_write(struct tty_struct *tty, const unsigned char *buf, int count)
static void
bfin_jc_flush_chars(struct tty_struct *tty)
static int
bfin_jc_write_room(struct tty_struct *tty)
static int
bfin_jc_chars_in_buffer(struct tty_struct *tty)
static void
bfin_jc_wait_until_sent(struct tty_struct *tty, int timeout)
static const struct tty_operations bfin_jc_ops = ;
static int __init bfin_jc_init(void)
module_init(bfin_jc_init);
static void __exit bfin_jc_exit(void)
module_exit(bfin_jc_exit);
#if defined(CONFIG_BFIN_JTAG_COMM_CONSOLE) || defined(CONFIG_EARLY_PRINTK)
static void
bfin_jc_straight_buffer_write(const char *buf, unsigned count)
static void
bfin_jc_console_write(struct console *co, const char *buf, unsigned count)
static struct tty_driver *
bfin_jc_console_device(struct console *co, int *index)
static struct console bfin_jc_console = ;
static int __init bfin_jc_console_init(void)
console_initcall(bfin_jc_console_init);
static void __init
bfin_jc_early_write(struct console *co, const char *buf, unsigned int count)
static struct __initdata console bfin_jc_early_console = ;
struct console * __init
bfin_jc_early_init(unsigned int port, unsigned int cflag)
MODULE_AUTHOR("Mike Frysinger <vapier@gentoo.org>");
MODULE_DESCRIPTION("TTY over Blackfin JTAG Communication");
MODULE_LICENSE("GPL");
