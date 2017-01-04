#define DATA_MAX  32
#define SETUP_MAX  8
#define EVENT_MAX  (4*PAGE_SIZE / sizeof(struct mon_event_text))
#define ISODESC_MAX   5
#define PRINTF_DFL  250
struct mon_iso_desc ;
struct mon_event_text ;
#define SLAB_NAME_SZ  30
struct mon_reader_text ;
static struct dentry *mon_dir;
static void mon_text_ctor(void *);
struct mon_text_ptr ;
static struct mon_event_text *
mon_text_read_wait(struct mon_reader_text *rp, struct file *file);
static void mon_text_read_head_t(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_head_u(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_statset(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_intstat(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_isostat(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_isodesc(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static void mon_text_read_data(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep);
static inline char mon_text_get_setup(struct mon_event_text *ep,
struct urb *urb, char ev_type, struct mon_bus *mbus)
static inline char mon_text_get_data(struct mon_event_text *ep, struct urb *urb,
int len, char ev_type, struct mon_bus *mbus)
static inline unsigned int mon_get_timestamp(void)
static void mon_text_event(struct mon_reader_text *rp, struct urb *urb,
char ev_type, int status)
static void mon_text_submit(void *data, struct urb *urb)
static void mon_text_complete(void *data, struct urb *urb, int status)
static void mon_text_error(void *data, struct urb *urb, int error)
static struct mon_event_text *mon_text_fetch(struct mon_reader_text *rp,
struct mon_bus *mbus)
static int mon_text_open(struct inode *inode, struct file *file)
static ssize_t mon_text_read_t(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static ssize_t mon_text_read_u(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static struct mon_event_text *mon_text_read_wait(struct mon_reader_text *rp,
struct file *file)
static void mon_text_read_head_t(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_head_u(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_statset(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_intstat(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_isostat(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_isodesc(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static void mon_text_read_data(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
static int mon_text_release(struct inode *inode, struct file *file)
static const struct file_operations mon_fops_text_t = ;
static const struct file_operations mon_fops_text_u = ;
int mon_text_add(struct mon_bus *mbus, const struct usb_bus *ubus)
void mon_text_del(struct mon_bus *mbus)
static void mon_text_ctor(void *mem)
int __init mon_text_init(void)
void mon_text_exit(void)
