#define LINE_BUFSIZE 4096
static irqreturn_t line_interrupt(int irq, void *data)
static void line_timer_cb(struct work_struct *work)
static int write_room(struct line *line)
int line_write_room(struct tty_struct *tty)
int line_chars_in_buffer(struct tty_struct *tty)
static int buffer_data(struct line *line, const char *buf, int len)
static int flush_buffer(struct line *line)
void line_flush_buffer(struct tty_struct *tty)
void line_flush_chars(struct tty_struct *tty)
int line_put_char(struct tty_struct *tty, unsigned char ch)
int line_write(struct tty_struct *tty, const unsigned char *buf, int len)
void line_set_termios(struct tty_struct *tty, struct ktermios * old)
static const struct  tty_ioctls[] = ;
int line_ioctl(struct tty_struct *tty, unsigned int cmd,
unsigned long arg)
void line_throttle(struct tty_struct *tty)
void line_unthrottle(struct tty_struct *tty)
static irqreturn_t line_write_interrupt(int irq, void *data)
int line_setup_irq(int fd, int input, int output, struct line *line, void *data)
int line_open(struct line *lines, struct tty_struct *tty)
static void unregister_winch(struct tty_struct *tty);
void line_close(struct tty_struct *tty, struct file * filp)
void close_lines(struct line *lines, int nlines)
static int setup_one_line(struct line *lines, int n, char *init, int init_prio,
char **error_out)
int line_setup(struct line *lines, unsigned int num, char *init,
char **error_out)
int line_config(struct line *lines, unsigned int num, char *str,
const struct chan_opts *opts, char **error_out)
int line_get_config(char *name, struct line *lines, unsigned int num, char *str,
int size, char **error_out)
int line_id(char **str, int *start_out, int *end_out)
int line_remove(struct line *lines, unsigned int num, int n, char **error_out)
struct tty_driver *register_lines(struct line_driver *line_driver,
const struct tty_operations *ops,
struct line *lines, int nlines)
static DEFINE_SPINLOCK(winch_handler_lock);
static LIST_HEAD(winch_handlers);
void lines_init(struct line *lines, int nlines, struct chan_opts *opts)
struct winch ;
static void free_winch(struct winch *winch, int free_irq_ok)
static irqreturn_t winch_interrupt(int irq, void *data)
void register_winch_irq(int fd, int tty_fd, int pid, struct tty_struct *tty,
unsigned long stack)
static void unregister_winch(struct tty_struct *tty)
static void winch_cleanup(void)
__uml_exitcall(winch_cleanup);
char *add_xterm_umid(char *base)
