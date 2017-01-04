#define WAKEUP_CHARS 256
#define TTY_THRESHOLD_THROTTLE		128
#define TTY_THRESHOLD_UNTHROTTLE 	128
#define ECHO_OP_START 0xff
#define ECHO_OP_MOVE_BACK_COL 0x80
#define ECHO_OP_SET_CANON_COL 0x81
#define ECHO_OP_ERASE_TAB 0x82
static inline int tty_put_user(struct tty_struct *tty, unsigned char x,
unsigned char __user *ptr)
static void n_tty_set_room(struct tty_struct *tty)
static void put_tty_queue_nolock(unsigned char c, struct tty_struct *tty)
static void put_tty_queue(unsigned char c, struct tty_struct *tty)
static void check_unthrottle(struct tty_struct *tty)
static void reset_buffer_flags(struct tty_struct *tty)
static void n_tty_flush_buffer(struct tty_struct *tty)
static ssize_t n_tty_chars_in_buffer(struct tty_struct *tty)
static inline int is_utf8_continuation(unsigned char c)
static inline int is_continuation(unsigned char c, struct tty_struct *tty)
static int do_output_char(unsigned char c, struct tty_struct *tty, int space)
static int process_output(unsigned char c, struct tty_struct *tty)
static ssize_t process_output_block(struct tty_struct *tty,
const unsigned char *buf, unsigned int nr)
static void process_echoes(struct tty_struct *tty)
static void add_echo_byte(unsigned char c, struct tty_struct *tty)
static void echo_move_back_col(struct tty_struct *tty)
static void echo_set_canon_col(struct tty_struct *tty)
static void echo_erase_tab(unsigned int num_chars, int after_tab,
struct tty_struct *tty)
static void echo_char_raw(unsigned char c, struct tty_struct *tty)
static void echo_char(unsigned char c, struct tty_struct *tty)
static inline void finish_erasing(struct tty_struct *tty)
static void eraser(unsigned char c, struct tty_struct *tty)
static inline void isig(int sig, struct tty_struct *tty, int flush)
static inline void n_tty_receive_break(struct tty_struct *tty)
static inline void n_tty_receive_overrun(struct tty_struct *tty)
static inline void n_tty_receive_parity_error(struct tty_struct *tty,
unsigned char c)
static inline void n_tty_receive_char(struct tty_struct *tty, unsigned char c)
static void n_tty_write_wakeup(struct tty_struct *tty)
static void n_tty_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
int is_ignored(int sig)
static void n_tty_set_termios(struct tty_struct *tty, struct ktermios *old)
static void n_tty_close(struct tty_struct *tty)
static int n_tty_open(struct tty_struct *tty)
static inline int input_available_p(struct tty_struct *tty, int amt)
static int copy_from_read_buf(struct tty_struct *tty,
unsigned char __user **b,
size_t *nr)
extern ssize_t redirected_tty_write(struct file *, const char __user *,
size_t, loff_t *);
static int job_control(struct tty_struct *tty, struct file *file)
static ssize_t n_tty_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t nr)
static ssize_t n_tty_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr)
static unsigned int n_tty_poll(struct tty_struct *tty, struct file *file,
poll_table *wait)
static unsigned long inq_canon(struct tty_struct *tty)
static int n_tty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
struct tty_ldisc_ops tty_ldisc_N_TTY = ;
void n_tty_inherit_ops(struct tty_ldisc_ops *ops)
EXPORT_SYMBOL_GPL(n_tty_inherit_ops);
