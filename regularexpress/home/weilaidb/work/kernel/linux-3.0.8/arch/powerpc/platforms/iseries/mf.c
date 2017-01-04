static int mf_initialized;
struct vsp_cmd_data ;
struct vsp_rsp_data ;
struct alloc_data ;
struct ce_msg_data;
typedef void (*ce_msg_comp_hdlr)(void *token, struct ce_msg_data *vsp_cmd_rsp);
struct ce_msg_comp_data ;
struct ce_msg_data ;
struct io_mf_lp_event ;
#define subtype_data(a, b, c, d)	\
(((a) << 24) + ((b) << 16) + ((c) << 8) + (d))
struct pending_event ;
static spinlock_t pending_event_spinlock;
static struct pending_event *pending_event_head;
static struct pending_event *pending_event_tail;
static struct pending_event *pending_event_avail;
#define PENDING_EVENT_PREALLOC_LEN 16
static struct pending_event pending_event_prealloc[PENDING_EVENT_PREALLOC_LEN];
static void free_pending_event(struct pending_event *ev)
static int signal_event(struct pending_event *ev)
static struct pending_event *new_pending_event(void)
static int __maybe_unused
signal_vsp_instruction(struct vsp_cmd_data *vsp_cmd)
static int signal_ce_msg(char *ce_msg, struct ce_msg_comp_data *completion)
static int signal_ce_msg_simple(u8 ce_op, struct ce_msg_comp_data *completion)
static int dma_and_signal_ce_msg(char *ce_msg,
struct ce_msg_comp_data *completion, void *dma_data,
unsigned dma_data_length, unsigned remote_address)
static int shutdown(void)
static void handle_int(struct io_mf_lp_event *event)
static void handle_ack(struct io_mf_lp_event *event)
static void hv_handler(struct HvLpEvent *event)
void mf_allocate_lp_events(HvLpIndex target_lp, HvLpEvent_Type type,
unsigned size, unsigned count, MFCompleteHandler hdlr,
void *user_token)
EXPORT_SYMBOL(mf_allocate_lp_events);
void mf_deallocate_lp_events(HvLpIndex target_lp, HvLpEvent_Type type,
unsigned count, MFCompleteHandler hdlr, void *user_token)
EXPORT_SYMBOL(mf_deallocate_lp_events);
void mf_power_off(void)
void mf_reboot(char *cmd)
void mf_display_src(u32 word)
static __init void mf_display_progress_src(u16 value)
static void mf_clear_src(void)
void __init mf_display_progress(u16 value)
void __init mf_init(void)
struct rtc_time_data ;
static void get_rtc_time_complete(void *token, struct ce_msg_data *ce_msg)
static int mf_set_rtc(struct rtc_time *tm)
static int rtc_set_tm(int rc, u8 *ce_msg, struct rtc_time *tm)
static int mf_get_rtc(struct rtc_time *tm)
struct boot_rtc_time_data ;
static void get_boot_rtc_time_complete(void *token, struct ce_msg_data *ce_msg)
static int mf_get_boot_rtc(struct rtc_time *tm)
static int mf_cmdline_proc_show(struct seq_file *m, void *v)
static int mf_cmdline_proc_open(struct inode *inode, struct file *file)
static int mf_side_proc_show(struct seq_file *m, void *v)
static int mf_side_proc_open(struct inode *inode, struct file *file)
static ssize_t mf_side_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations mf_side_proc_fops = ;
static int mf_src_proc_show(struct seq_file *m, void *v)
static int mf_src_proc_open(struct inode *inode, struct file *file)
static ssize_t mf_src_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations mf_src_proc_fops = ;
static ssize_t mf_cmdline_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations mf_cmdline_proc_fops = ;
static ssize_t proc_mf_change_vmlinux(struct file *file,
const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_vmlinux_operations = ;
static int __init mf_proc_init(void)
__initcall(mf_proc_init);
void iSeries_get_rtc_time(struct rtc_time *rtc_tm)
int iSeries_set_rtc_time(struct rtc_time *tm)
unsigned long iSeries_get_boot_time(void)
