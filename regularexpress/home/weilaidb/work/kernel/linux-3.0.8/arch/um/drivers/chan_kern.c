static void *not_configged_init(char *str, int device,
const struct chan_opts *opts)
static int not_configged_open(int input, int output, int primary, void *data,
char **dev_out)
static void not_configged_close(int fd, void *data)
static int not_configged_read(int fd, char *c_out, void *data)
static int not_configged_write(int fd, const char *buf, int len, void *data)
static int not_configged_console_write(int fd, const char *buf, int len)
static int not_configged_window_size(int fd, void *data, unsigned short *rows,
unsigned short *cols)
static void not_configged_free(void *data)
static const struct chan_ops not_configged_ops = ;
static void tty_receive_char(struct tty_struct *tty, char ch)
static int open_one_chan(struct chan *chan)
static int open_chan(struct list_head *chans)
void chan_enable_winch(struct list_head *chans, struct tty_struct *tty)
int enable_chan(struct line *line)
static DEFINE_SPINLOCK(irqs_to_free_lock);
static LIST_HEAD(irqs_to_free);
void free_irqs(void)
static void close_one_chan(struct chan *chan, int delay_free_irq)
void close_chan(struct list_head *chans, int delay_free_irq)
void deactivate_chan(struct list_head *chans, int irq)
void reactivate_chan(struct list_head *chans, int irq)
int write_chan(struct list_head *chans, const char *buf, int len,
int write_irq)
int console_write_chan(struct list_head *chans, const char *buf, int len)
int console_open_chan(struct line *line, struct console *co)
int chan_window_size(struct list_head *chans, unsigned short *rows_out,
unsigned short *cols_out)
static void free_one_chan(struct chan *chan, int delay_free_irq)
static void free_chan(struct list_head *chans, int delay_free_irq)
static int one_chan_config_string(struct chan *chan, char *str, int size,
char **error_out)
static int chan_pair_config_string(struct chan *in, struct chan *out,
char *str, int size, char **error_out)
int chan_config_string(struct list_head *chans, char *str, int size,
char **error_out)
struct chan_type ;
static const struct chan_type chan_table[] = ;
static struct chan *parse_chan(struct line *line, char *str, int device,
const struct chan_opts *opts, char **error_out)
int parse_chan_pair(char *str, struct line *line, int device,
const struct chan_opts *opts, char **error_out)
void chan_interrupt(struct list_head *chans, struct delayed_work *task,
struct tty_struct *tty, int irq)
