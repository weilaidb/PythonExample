#define __CHAN_USER_H__
struct chan_opts ;
enum chan_init_pri ;
struct chan_ops ;
extern const struct chan_ops fd_ops, null_ops, port_ops, pts_ops, pty_ops,
tty_ops, xterm_ops;
extern void generic_close(int fd, void *unused);
extern int generic_read(int fd, char *c_out, void *unused);
extern int generic_write(int fd, const char *buf, int n, void *unused);
extern int generic_console_write(int fd, const char *buf, int n);
extern int generic_window_size(int fd, void *unused, unsigned short *rows_out,
unsigned short *cols_out);
extern void generic_free(void *data);
struct tty_struct;
extern void register_winch(int fd,  struct tty_struct *tty);
extern void register_winch_irq(int fd, int tty_fd, int pid,
struct tty_struct *tty, unsigned long stack);
#define __channel_help(fn, prefix) \
__uml_help(fn, prefix "[0-9]*=<channel description>\n" \
"    Attach a console or serial line to a host channel.  See\n" \
"    http:
"    description of this switch.\n\n" \
);
