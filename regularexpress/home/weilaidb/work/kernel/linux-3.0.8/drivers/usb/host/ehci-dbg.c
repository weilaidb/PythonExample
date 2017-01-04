#define ehci_dbg(ehci, fmt, args...) \
dev_dbg (ehci_to_hcd(ehci)->self.controller , fmt , ## args )
#define ehci_err(ehci, fmt, args...) \
dev_err (ehci_to_hcd(ehci)->self.controller , fmt , ## args )
#define ehci_info(ehci, fmt, args...) \
dev_info (ehci_to_hcd(ehci)->self.controller , fmt , ## args )
#define ehci_warn(ehci, fmt, args...) \
dev_warn (ehci_to_hcd(ehci)->self.controller , fmt , ## args )
#	define ehci_vdbg ehci_dbg
static inline void ehci_vdbg(struct ehci_hcd *ehci, ...)
static void dbg_hcs_params (struct ehci_hcd *ehci, char *label)
static inline void dbg_hcs_params (struct ehci_hcd *ehci, char *label)
static void dbg_hcc_params (struct ehci_hcd *ehci, char *label)
static inline void dbg_hcc_params (struct ehci_hcd *ehci, char *label)
static void __maybe_unused
dbg_qtd (const char *label, struct ehci_hcd *ehci, struct ehci_qtd *qtd)
static void __maybe_unused
dbg_qh (const char *label, struct ehci_hcd *ehci, struct ehci_qh *qh)
static void __maybe_unused
dbg_itd (const char *label, struct ehci_hcd *ehci, struct ehci_itd *itd)
static void __maybe_unused
dbg_sitd (const char *label, struct ehci_hcd *ehci, struct ehci_sitd *sitd)
static int __maybe_unused
dbg_status_buf (char *buf, unsigned len, const char *label, u32 status)
static int __maybe_unused
dbg_intr_buf (char *buf, unsigned len, const char *label, u32 enable)
static const char *const fls_strings [] =
;
static int
dbg_command_buf (char *buf, unsigned len, const char *label, u32 command)
static int
dbg_port_buf (char *buf, unsigned len, const char *label, int port, u32 status)
static inline void __maybe_unused
dbg_qh (char *label, struct ehci_hcd *ehci, struct ehci_qh *qh)
static inline int __maybe_unused
dbg_status_buf (char *buf, unsigned len, const char *label, u32 status)
static inline int __maybe_unused
dbg_command_buf (char *buf, unsigned len, const char *label, u32 command)
static inline int __maybe_unused
dbg_intr_buf (char *buf, unsigned len, const char *label, u32 enable)
static inline int __maybe_unused
dbg_port_buf (char *buf, unsigned len, const char *label, int port, u32 status)
#define dbg_status(ehci, label, status)
#define dbg_cmd(ehci, label, command)
#define dbg_port(ehci, label, port, status)
static inline void create_debug_files (struct ehci_hcd *bus)
static inline void remove_debug_files (struct ehci_hcd *bus)
static int debug_async_open(struct inode *, struct file *);
static int debug_periodic_open(struct inode *, struct file *);
static int debug_registers_open(struct inode *, struct file *);
static int debug_async_open(struct inode *, struct file *);
static int debug_lpm_open(struct inode *, struct file *);
static ssize_t debug_lpm_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos);
static ssize_t debug_lpm_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos);
static int debug_lpm_close(struct inode *inode, struct file *file);
static ssize_t debug_output(struct file*, char __user*, size_t, loff_t*);
static int debug_close(struct inode *, struct file *);
static const struct file_operations debug_async_fops = ;
static const struct file_operations debug_periodic_fops = ;
static const struct file_operations debug_registers_fops = ;
static const struct file_operations debug_lpm_fops = ;
static struct dentry *ehci_debug_root;
struct debug_buffer ;
#define speed_char(info1) ()
static inline char token_mark(struct ehci_hcd *ehci, __hc32 token)
static void qh_lines (
struct ehci_hcd *ehci,
struct ehci_qh *qh,
char **nextp,
unsigned *sizep
)
static ssize_t fill_async_buffer(struct debug_buffer *buf)
#define DBG_SCHED_LIMIT 64
static ssize_t fill_periodic_buffer(struct debug_buffer *buf)
#undef DBG_SCHED_LIMIT
static ssize_t fill_registers_buffer(struct debug_buffer *buf)
static struct debug_buffer *alloc_buffer(struct usb_bus *bus,
ssize_t (*fill_func)(struct debug_buffer *))
static int fill_buffer(struct debug_buffer *buf)
static ssize_t debug_output(struct file *file, char __user *user_buf,
size_t len, loff_t *offset)
static int debug_close(struct inode *inode, struct file *file)
static int debug_async_open(struct inode *inode, struct file *file)
static int debug_periodic_open(struct inode *inode, struct file *file)
static int debug_registers_open(struct inode *inode, struct file *file)
static int debug_lpm_open(struct inode *inode, struct file *file)
static int debug_lpm_close(struct inode *inode, struct file *file)
static ssize_t debug_lpm_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t debug_lpm_write(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static inline void create_debug_files (struct ehci_hcd *ehci)
static inline void remove_debug_files (struct ehci_hcd *ehci)
