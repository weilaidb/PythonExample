#define edstring(ed_type) ()
#define pipestring(pipe) edstring(usb_pipetype(pipe))
static void __maybe_unused
urb_print(struct urb * urb, char * str, int small, int status)
#define ohci_dbg_sw(ohci, next, size, format, arg...) \
do  while (0);
static void ohci_dump_intr_mask (
struct ohci_hcd *ohci,
char *label,
u32 mask,
char **next,
unsigned *size)
static void maybe_print_eds (
struct ohci_hcd *ohci,
char *label,
u32 value,
char **next,
unsigned *size)
static char *hcfs2string (int state)
static void
ohci_dump_status (struct ohci_hcd *controller, char **next, unsigned *size)
#define dbg_port_sw(hc,num,value,next,size) \
ohci_dbg_sw (hc, next, size, \
"roothub.portstatus [%d] " \
"0x%08x%s%s%s%s%s%s%s%s%s%s%s%s\n", \
num, temp, \
(temp & RH_PS_PRSC) ? " PRSC" : "", \
(temp & RH_PS_OCIC) ? " OCIC" : "", \
(temp & RH_PS_PSSC) ? " PSSC" : "", \
(temp & RH_PS_PESC) ? " PESC" : "", \
(temp & RH_PS_CSC) ? " CSC" : "", \
\
(temp & RH_PS_LSDA) ? " LSDA" : "", \
(temp & RH_PS_PPS) ? " PPS" : "", \
(temp & RH_PS_PRS) ? " PRS" : "", \
(temp & RH_PS_POCI) ? " POCI" : "", \
(temp & RH_PS_PSS) ? " PSS" : "", \
\
(temp & RH_PS_PES) ? " PES" : "", \
(temp & RH_PS_CCS) ? " CCS" : "" \
);
static void
ohci_dump_roothub (
struct ohci_hcd *controller,
int verbose,
char **next,
unsigned *size)
static void ohci_dump (struct ohci_hcd *controller, int verbose)
static const char data0 [] = "DATA0";
static const char data1 [] = "DATA1";
static void ohci_dump_td (const struct ohci_hcd *ohci, const char *label,
const struct td *td)
static void __maybe_unused
ohci_dump_ed (const struct ohci_hcd *ohci, const char *label,
const struct ed *ed, int verbose)
static inline void ohci_dump (struct ohci_hcd *controller, int verbose)
#undef OHCI_VERBOSE_DEBUG
static inline void create_debug_files (struct ohci_hcd *bus)
static inline void remove_debug_files (struct ohci_hcd *bus)
static int debug_async_open(struct inode *, struct file *);
static int debug_periodic_open(struct inode *, struct file *);
static int debug_registers_open(struct inode *, struct file *);
static int debug_async_open(struct inode *, struct file *);
static ssize_t debug_output(struct file*, char __user*, size_t, loff_t*);
static int debug_close(struct inode *, struct file *);
static const struct file_operations debug_async_fops = ;
static const struct file_operations debug_periodic_fops = ;
static const struct file_operations debug_registers_fops = ;
static struct dentry *ohci_debug_root;
struct debug_buffer ;
static ssize_t
show_list (struct ohci_hcd *ohci, char *buf, size_t count, struct ed *ed)
static ssize_t fill_async_buffer(struct debug_buffer *buf)
#define DBG_SCHED_LIMIT 64
static ssize_t fill_periodic_buffer(struct debug_buffer *buf)
#undef DBG_SCHED_LIMIT
static ssize_t fill_registers_buffer(struct debug_buffer *buf)
static struct debug_buffer *alloc_buffer(struct ohci_hcd *ohci,
ssize_t (*fill_func)(struct debug_buffer *))
static int fill_buffer(struct debug_buffer *buf)
static ssize_t debug_output(struct file *file, char __user *user_buf,
size_t len, loff_t *offset)
static int debug_close(struct inode *inode, struct file *file)
static int debug_async_open(struct inode *inode, struct file *file)
static int debug_periodic_open(struct inode *inode, struct file *file)
static int debug_registers_open(struct inode *inode, struct file *file)
static inline void create_debug_files (struct ohci_hcd *ohci)
static inline void remove_debug_files (struct ohci_hcd *ohci)
