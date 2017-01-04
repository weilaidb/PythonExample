static inline void create_debug_files(struct imx21 *imx21)
static inline void remove_debug_files(struct imx21 *imx21)
static inline void debug_urb_submitted(struct imx21 *imx21, struct urb *urb)
static inline void debug_urb_completed(struct imx21 *imx21, struct urb *urb,
int status)
static inline void debug_urb_unlinked(struct imx21 *imx21, struct urb *urb)
static inline void debug_urb_queued_for_etd(struct imx21 *imx21,
struct urb *urb)
static inline void debug_urb_queued_for_dmem(struct imx21 *imx21,
struct urb *urb)
static inline void debug_etd_allocated(struct imx21 *imx21)
static inline void debug_etd_freed(struct imx21 *imx21)
static inline void debug_dmem_allocated(struct imx21 *imx21, int size)
static inline void debug_dmem_freed(struct imx21 *imx21, int size)
static inline void debug_isoc_submitted(struct imx21 *imx21,
int frame, struct td *td)
static inline void debug_isoc_completed(struct imx21 *imx21,
int frame, struct td *td, int cc, int len)
static const char *dir_labels[] = ;
static const char *speed_labels[] = ;
static const char *format_labels[] = ;
static inline struct debug_stats *stats_for_urb(struct imx21 *imx21,
struct urb *urb)
static void debug_urb_submitted(struct imx21 *imx21, struct urb *urb)
static void debug_urb_completed(struct imx21 *imx21, struct urb *urb, int st)
static void debug_urb_unlinked(struct imx21 *imx21, struct urb *urb)
static void debug_urb_queued_for_etd(struct imx21 *imx21, struct urb *urb)
static void debug_urb_queued_for_dmem(struct imx21 *imx21, struct urb *urb)
static inline void debug_etd_allocated(struct imx21 *imx21)
static inline void debug_etd_freed(struct imx21 *imx21)
static inline void debug_dmem_allocated(struct imx21 *imx21, int size)
static inline void debug_dmem_freed(struct imx21 *imx21, int size)
static void debug_isoc_submitted(struct imx21 *imx21,
int frame, struct td *td)
static inline void debug_isoc_completed(struct imx21 *imx21,
int frame, struct td *td, int cc, int len)
static char *format_ep(struct usb_host_endpoint *ep, char *buf, int bufsize)
static char *format_etd_dword0(u32 value, char *buf, int bufsize)
static int debug_status_show(struct seq_file *s, void *v)
static int debug_dmem_show(struct seq_file *s, void *v)
static int debug_etd_show(struct seq_file *s, void *v)
static void debug_statistics_show_one(struct seq_file *s,
const char *name, struct debug_stats *stats)
static int debug_statistics_show(struct seq_file *s, void *v)
static void debug_isoc_show_one(struct seq_file *s,
const char *name, int index, 	struct debug_isoc_trace *trace)
static int debug_isoc_show(struct seq_file *s, void *v)
static int debug_status_open(struct inode *inode, struct file *file)
static int debug_dmem_open(struct inode *inode, struct file *file)
static int debug_etd_open(struct inode *inode, struct file *file)
static int debug_statistics_open(struct inode *inode, struct file *file)
static int debug_isoc_open(struct inode *inode, struct file *file)
static const struct file_operations debug_status_fops = ;
static const struct file_operations debug_dmem_fops = ;
static const struct file_operations debug_etd_fops = ;
static const struct file_operations debug_statistics_fops = ;
static const struct file_operations debug_isoc_fops = ;
static void create_debug_files(struct imx21 *imx21)
static void remove_debug_files(struct imx21 *imx21)
