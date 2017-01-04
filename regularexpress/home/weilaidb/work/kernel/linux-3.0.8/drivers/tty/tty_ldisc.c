static DEFINE_SPINLOCK(tty_ldisc_lock);
static DECLARE_WAIT_QUEUE_HEAD(tty_ldisc_wait);
static DECLARE_WAIT_QUEUE_HEAD(tty_ldisc_idle);
static struct tty_ldisc_ops *tty_ldiscs[NR_LDISCS];
static inline struct tty_ldisc *get_ldisc(struct tty_ldisc *ld)
static void put_ldisc(struct tty_ldisc *ld)
int tty_register_ldisc(int disc, struct tty_ldisc_ops *new_ldisc)
EXPORT_SYMBOL(tty_register_ldisc);
int tty_unregister_ldisc(int disc)
EXPORT_SYMBOL(tty_unregister_ldisc);
static struct tty_ldisc_ops *get_ldops(int disc)
static void put_ldops(struct tty_ldisc_ops *ldops)
static struct tty_ldisc *tty_ldisc_get(int disc)
static void *tty_ldiscs_seq_start(struct seq_file *m, loff_t *pos)
static void *tty_ldiscs_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void tty_ldiscs_seq_stop(struct seq_file *m, void *v)
static int tty_ldiscs_seq_show(struct seq_file *m, void *v)
static const struct seq_operations tty_ldiscs_seq_ops = ;
static int proc_tty_ldiscs_open(struct inode *inode, struct file *file)
const struct file_operations tty_ldiscs_proc_fops = ;
static void tty_ldisc_assign(struct tty_struct *tty, struct tty_ldisc *ld)
static struct tty_ldisc *tty_ldisc_try(struct tty_struct *tty)
struct tty_ldisc *tty_ldisc_ref_wait(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_ldisc_ref_wait);
struct tty_ldisc *tty_ldisc_ref(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_ldisc_ref);
void tty_ldisc_deref(struct tty_ldisc *ld)
EXPORT_SYMBOL_GPL(tty_ldisc_deref);
static inline void tty_ldisc_put(struct tty_ldisc *ld)
void tty_ldisc_enable(struct tty_struct *tty)
void tty_ldisc_flush(struct tty_struct *tty)
EXPORT_SYMBOL_GPL(tty_ldisc_flush);
static void tty_set_termios_ldisc(struct tty_struct *tty, int num)
static int tty_ldisc_open(struct tty_struct *tty, struct tty_ldisc *ld)
static void tty_ldisc_close(struct tty_struct *tty, struct tty_ldisc *ld)
static void tty_ldisc_restore(struct tty_struct *tty, struct tty_ldisc *old)
static int tty_ldisc_halt(struct tty_struct *tty)
static void tty_ldisc_flush_works(struct tty_struct *tty)
static int tty_ldisc_wait_idle(struct tty_struct *tty)
int tty_set_ldisc(struct tty_struct *tty, int ldisc)
static void tty_reset_termios(struct tty_struct *tty)
static int tty_ldisc_reinit(struct tty_struct *tty, int ldisc)
void tty_ldisc_hangup(struct tty_struct *tty)
int tty_ldisc_setup(struct tty_struct *tty, struct tty_struct *o_tty)
void tty_ldisc_release(struct tty_struct *tty, struct tty_struct *o_tty)
void tty_ldisc_init(struct tty_struct *tty)
void tty_ldisc_deinit(struct tty_struct *tty)
void tty_ldisc_begin(void)
