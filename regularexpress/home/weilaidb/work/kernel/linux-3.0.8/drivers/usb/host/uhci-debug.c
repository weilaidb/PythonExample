static struct dentry *uhci_debugfs_root;
static void lprintk(char *buf)
static int uhci_show_td(struct uhci_hcd *uhci, struct uhci_td *td, char *buf,
int len, int space)
static int uhci_show_urbp(struct uhci_hcd *uhci, struct urb_priv *urbp,
char *buf, int len, int space)
static int uhci_show_qh(struct uhci_hcd *uhci,
struct uhci_qh *qh, char *buf, int len, int space)
static int uhci_show_sc(int port, unsigned short status, char *buf, int len)
static int uhci_show_root_hub_state(struct uhci_hcd *uhci, char *buf, int len)
static int uhci_show_status(struct uhci_hcd *uhci, char *buf, int len)
static int uhci_sprint_schedule(struct uhci_hcd *uhci, char *buf, int len)
#define MAX_OUTPUT	(64 * 1024)
struct uhci_debug ;
static int uhci_debug_open(struct inode *inode, struct file *file)
static loff_t uhci_debug_lseek(struct file *file, loff_t off, int whence)
static ssize_t uhci_debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int uhci_debug_release(struct inode *inode, struct file *file)
static const struct file_operations uhci_debug_operations = ;
#define UHCI_DEBUG_OPS
static inline void lprintk(char *buf)
static inline int uhci_show_qh(struct uhci_hcd *uhci,
struct uhci_qh *qh, char *buf, int len, int space)
static inline int uhci_sprint_schedule(struct uhci_hcd *uhci,
char *buf, int len)
