#define TTY3270_CHAR_BUF_SIZE 256
#define TTY3270_OUTPUT_BUFFER_SIZE 1024
#define TTY3270_STRING_PAGES 5
struct tty_driver *tty3270_driver;
static int tty3270_max_index;
static struct raw3270_fn tty3270_fn;
struct tty3270_cell ;
struct tty3270_line ;
#define ESCAPE_NPAR 8
struct tty3270 ;
#define TTY_UPDATE_ERASE	1
#define TTY_UPDATE_LIST		2
#define TTY_UPDATE_INPUT	4
#define TTY_UPDATE_STATUS	8
#define TTY_UPDATE_ALL		16
static void tty3270_update(struct tty3270 *);
static void tty3270_set_timer(struct tty3270 *tp, int expires)
static void
tty3270_update_prompt(struct tty3270 *tp, char *input, int count)
static void
tty3270_create_prompt(struct tty3270 *tp)
static void
tty3270_update_status(struct tty3270 * tp)
static void
tty3270_create_status(struct tty3270 * tp)
static void
tty3270_update_string(struct tty3270 *tp, struct string *line, int nr)
static void
tty3270_rebuild_update(struct tty3270 *tp)
static struct string *
tty3270_alloc_string(struct tty3270 *tp, size_t size)
static void
tty3270_blank_line(struct tty3270 *tp)
static void
tty3270_write_callback(struct raw3270_request *rq, void *data)
static void
tty3270_update(struct tty3270 *tp)
static void
tty3270_rcl_add(struct tty3270 *tp, char *input, int len)
static void
tty3270_rcl_backward(struct kbd_data *kbd)
static void
tty3270_exit_tty(struct kbd_data *kbd)
static void
tty3270_scroll_forward(struct kbd_data *kbd)
static void
tty3270_scroll_backward(struct kbd_data *kbd)
static void
tty3270_read_tasklet(struct raw3270_request *rrq)
static void
tty3270_read_callback(struct raw3270_request *rq, void *data)
static void
tty3270_issue_read(struct tty3270 *tp, int lock)
static int
tty3270_activate(struct raw3270_view *view)
static void
tty3270_deactivate(struct raw3270_view *view)
static int
tty3270_irq(struct tty3270 *tp, struct raw3270_request *rq, struct irb *irb)
static struct tty3270 *
tty3270_alloc_view(void)
static void
tty3270_free_view(struct tty3270 *tp)
static int
tty3270_alloc_screen(struct tty3270 *tp)
static void
tty3270_free_screen(struct tty3270 *tp)
static void
tty3270_release(struct raw3270_view *view)
static void
tty3270_free(struct raw3270_view *view)
static void
tty3270_del_views(void)
static struct raw3270_fn tty3270_fn = ;
static int
tty3270_open(struct tty_struct *tty, struct file * filp)
static void
tty3270_close(struct tty_struct *tty, struct file * filp)
static int
tty3270_write_room(struct tty_struct *tty)
static void tty3270_put_character(struct tty3270 *tp, char ch)
static void
tty3270_convert_line(struct tty3270 *tp, int line_nr)
static void
tty3270_cr(struct tty3270 *tp)
static void
tty3270_lf(struct tty3270 *tp)
static void
tty3270_ri(struct tty3270 *tp)
static void
tty3270_insert_characters(struct tty3270 *tp, int n)
static void
tty3270_delete_characters(struct tty3270 *tp, int n)
static void
tty3270_erase_characters(struct tty3270 *tp, int n)
static void
tty3270_erase_line(struct tty3270 *tp, int mode)
static void
tty3270_erase_display(struct tty3270 *tp, int mode)
static void
tty3270_set_attributes(struct tty3270 *tp)
static inline int
tty3270_getpar(struct tty3270 *tp, int ix)
static void
tty3270_goto_xy(struct tty3270 *tp, int cx, int cy)
static void
tty3270_escape_sequence(struct tty3270 *tp, char ch)
static void
tty3270_do_write(struct tty3270 *tp, const unsigned char *buf, int count)
static int
tty3270_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int tty3270_put_char(struct tty_struct *tty, unsigned char ch)
static void
tty3270_flush_chars(struct tty_struct *tty)
static int
tty3270_chars_in_buffer(struct tty_struct *tty)
static void
tty3270_flush_buffer(struct tty_struct *tty)
static void
tty3270_set_termios(struct tty_struct *tty, struct ktermios *old)
static void
tty3270_throttle(struct tty_struct * tty)
static void
tty3270_unthrottle(struct tty_struct * tty)
static void
tty3270_hangup(struct tty_struct *tty)
static void
tty3270_wait_until_sent(struct tty_struct *tty, int timeout)
static int tty3270_ioctl(struct tty_struct *tty, unsigned int cmd,
unsigned long arg)
static long tty3270_compat_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static const struct tty_operations tty3270_ops = ;
static int __init tty3270_init(void)
static void __exit
tty3270_exit(void)
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(IBM_TTY3270_MAJOR);
module_init(tty3270_init);
module_exit(tty3270_exit);
