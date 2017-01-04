char vt_dont_switch;
extern struct tty_driver *console_driver;
#define VT_IS_IN_USE(i)	(console_driver->ttys[i] && console_driver->ttys[i]->count)
#define VT_BUSY(i)	(VT_IS_IN_USE(i) || i == fg_console || vc_cons[i].d == sel_cons)
static void complete_change_console(struct vc_data *vc);
struct vt_event_wait ;
static LIST_HEAD(vt_events);
static DEFINE_SPINLOCK(vt_event_lock);
static DECLARE_WAIT_QUEUE_HEAD(vt_event_waitqueue);
void vt_event_post(unsigned int event, unsigned int old, unsigned int new)
static void vt_event_wait(struct vt_event_wait *vw)
static int vt_event_wait_ioctl(struct vt_event __user *event)
int vt_waitactive(int n)
#define GPFIRST 0x3b4
#define GPLAST 0x3df
#define GPNUM (GPLAST - GPFIRST + 1)
#define i (tmp.kb_index)
#define s (tmp.kb_table)
#define v (tmp.kb_value)
static inline int
do_kdsk_ioctl(int cmd, struct kbentry __user *user_kbe, int perm, struct kbd_struct *kbd)
#undef i
#undef s
#undef v
static inline int
do_kbkeycode_ioctl(int cmd, struct kbkeycode __user *user_kbkc, int perm)
static inline int
do_kdgkb_ioctl(int cmd, struct kbsentry __user *user_kdgkb, int perm)
static inline int
do_fontx_ioctl(int cmd, struct consolefontdesc __user *user_cfd, int perm, struct console_font_op *op)
static inline int
do_unimap_ioctl(int cmd, struct unimapdesc __user *user_ud, int perm, struct vc_data *vc)
int vt_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
void reset_vc(struct vc_data *vc)
void vc_SAK(struct work_struct *work)
struct compat_consolefontdesc ;
static inline int
compat_fontx_ioctl(int cmd, struct compat_consolefontdesc __user *user_cfd,
int perm, struct console_font_op *op)
struct compat_console_font_op ;
static inline int
compat_kdfontop_ioctl(struct compat_console_font_op __user *fontop,
int perm, struct console_font_op *op, struct vc_data *vc)
struct compat_unimapdesc ;
static inline int
compat_unimap_ioctl(unsigned int cmd, struct compat_unimapdesc __user *user_ud,
int perm, struct vc_data *vc)
long vt_compat_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void complete_change_console(struct vc_data *vc)
void change_console(struct vc_data *new_vc)
static int disable_vt_switch;
int vt_move_to_console(unsigned int vt, int alloc)
void pm_set_vt_switch(int do_switch)
EXPORT_SYMBOL(pm_set_vt_switch);
