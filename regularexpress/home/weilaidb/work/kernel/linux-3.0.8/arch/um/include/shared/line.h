#define __LINE_H__
struct line_driver ;
struct line ;
#define LINE_INIT(str, d) \
extern void line_close(struct tty_struct *tty, struct file * filp);
extern int line_open(struct line *lines, struct tty_struct *tty);
extern int line_setup(struct line *lines, unsigned int sizeof_lines,
char *init, char **error_out);
extern int line_write(struct tty_struct *tty, const unsigned char *buf,
int len);
extern int line_put_char(struct tty_struct *tty, unsigned char ch);
extern void line_set_termios(struct tty_struct *tty, struct ktermios * old);
extern int line_chars_in_buffer(struct tty_struct *tty);
extern void line_flush_buffer(struct tty_struct *tty);
extern void line_flush_chars(struct tty_struct *tty);
extern int line_write_room(struct tty_struct *tty);
extern int line_ioctl(struct tty_struct *tty, unsigned int cmd,
unsigned long arg);
extern void line_throttle(struct tty_struct *tty);
extern void line_unthrottle(struct tty_struct *tty);
extern char *add_xterm_umid(char *base);
extern int line_setup_irq(int fd, int input, int output, struct line *line,
void *data);
extern void line_close_chan(struct line *line);
extern struct tty_driver *register_lines(struct line_driver *line_driver,
const struct tty_operations *driver,
struct line *lines, int nlines);
extern void lines_init(struct line *lines, int nlines, struct chan_opts *opts);
extern void close_lines(struct line *lines, int nlines);
extern int line_config(struct line *lines, unsigned int sizeof_lines,
char *str, const struct chan_opts *opts,
char **error_out);
extern int line_id(char **str, int *start_out, int *end_out);
extern int line_remove(struct line *lines, unsigned int sizeof_lines, int n,
char **error_out);
extern int line_get_config(char *dev, struct line *lines,
unsigned int sizeof_lines, char *str,
int size, char **error_out);
