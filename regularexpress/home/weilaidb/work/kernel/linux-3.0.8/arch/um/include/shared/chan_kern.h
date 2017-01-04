#define __CHAN_KERN_H__
struct chan ;
extern void chan_interrupt(struct list_head *chans, struct delayed_work *task,
struct tty_struct *tty, int irq);
extern int parse_chan_pair(char *str, struct line *line, int device,
const struct chan_opts *opts, char **error_out);
extern int write_chan(struct list_head *chans, const char *buf, int len,
int write_irq);
extern int console_write_chan(struct list_head *chans, const char *buf,
int len);
extern int console_open_chan(struct line *line, struct console *co);
extern void deactivate_chan(struct list_head *chans, int irq);
extern void reactivate_chan(struct list_head *chans, int irq);
extern void chan_enable_winch(struct list_head *chans, struct tty_struct *tty);
extern int enable_chan(struct line *line);
extern void close_chan(struct list_head *chans, int delay_free_irq);
extern int chan_window_size(struct list_head *chans,
unsigned short *rows_out,
unsigned short *cols_out);
extern int chan_config_string(struct list_head *chans, char *str, int size,
char **error_out);
