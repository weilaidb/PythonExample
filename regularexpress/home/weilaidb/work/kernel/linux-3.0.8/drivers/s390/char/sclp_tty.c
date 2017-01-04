#define SCLP_TTY_BUF_SIZE 512
static spinlock_t sclp_tty_lock;
static struct list_head sclp_tty_pages;
static struct list_head sclp_tty_outqueue;
static int sclp_tty_buffer_count;
static struct sclp_buffer *sclp_ttybuf;
static struct timer_list sclp_tty_timer;
static struct tty_struct *sclp_tty;
static unsigned char sclp_tty_chars[SCLP_TTY_BUF_SIZE];
static unsigned short int sclp_tty_chars_count;
struct tty_driver *sclp_tty_driver;
static int sclp_tty_tolower;
static int sclp_tty_columns = 80;
#define SPACES_PER_TAB 8
#define CASE_DELIMITER 0x6c
static int
sclp_tty_open(struct tty_struct *tty, struct file *filp)
static void
sclp_tty_close(struct tty_struct *tty, struct file *filp)
static int
sclp_tty_write_room (struct tty_struct *tty)
static void
sclp_ttybuf_callback(struct sclp_buffer *buffer, int rc)
static inline void
__sclp_ttybuf_emit(struct sclp_buffer *buffer)
static void
sclp_tty_timeout(unsigned long data)
static int sclp_tty_write_string(const unsigned char *str, int count, int may_fail)
static int
sclp_tty_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int
sclp_tty_put_char(struct tty_struct *tty, unsigned char ch)
static void
sclp_tty_flush_chars(struct tty_struct *tty)
static int
sclp_tty_chars_in_buffer(struct tty_struct *tty)
static void
sclp_tty_flush_buffer(struct tty_struct *tty)
static void
sclp_tty_input(unsigned char* buf, unsigned int count)
static int sclp_switch_cases(unsigned char *buf, int count)
static void sclp_get_input(struct gds_subvector *sv)
static inline void sclp_eval_selfdeftextmsg(struct gds_subvector *sv)
static inline void sclp_eval_textcmd(struct gds_vector *v)
static inline void sclp_eval_cpmsu(struct gds_vector *v)
static inline void sclp_eval_mdsmu(struct gds_vector *v)
static void sclp_tty_receiver(struct evbuf_header *evbuf)
static void
sclp_tty_state_change(struct sclp_register *reg)
static struct sclp_register sclp_input_event =
;
static const struct tty_operations sclp_ops = ;
static int __init
sclp_tty_init(void)
module_init(sclp_tty_init);
