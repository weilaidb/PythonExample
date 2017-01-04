static struct viopathStatus  viopathStatus[HVMAXARCHITECTEDLPS];
static DEFINE_SPINLOCK(statuslock);
static unsigned char event_buffer[VIO_MAX_SUBTYPES * 256]
__attribute__((__aligned__(4096)));
static atomic_t event_buffer_available[VIO_MAX_SUBTYPES];
static int event_buffer_initialised;
static void handleMonitorEvent(struct HvLpEvent *event);
struct alloc_parms ;
static u8 viomonseq = 22;
HvLpIndex viopath_hostLp = HvLpIndexInvalid;
EXPORT_SYMBOL(viopath_hostLp);
HvLpIndex viopath_ourLp = HvLpIndexInvalid;
EXPORT_SYMBOL(viopath_ourLp);
static vio_event_handler_t *vio_handler[VIO_MAX_SUBTYPES];
#define VIOPATH_KERN_WARN	KERN_WARNING "viopath: "
#define VIOPATH_KERN_INFO	KERN_INFO "viopath: "
static int proc_viopath_show(struct seq_file *m, void *v)
static int proc_viopath_open(struct inode *inode, struct file *file)
static const struct file_operations proc_viopath_operations = ;
static int __init vio_proc_init(void)
__initcall(vio_proc_init);
int viopath_isactive(HvLpIndex lp)
EXPORT_SYMBOL(viopath_isactive);
HvLpInstanceId viopath_sourceinst(HvLpIndex lp)
EXPORT_SYMBOL(viopath_sourceinst);
HvLpInstanceId viopath_targetinst(HvLpIndex lp)
EXPORT_SYMBOL(viopath_targetinst);
static void sendMonMsg(HvLpIndex remoteLp)
static void handleMonitorEvent(struct HvLpEvent *event)
int vio_setHandler(int subtype, vio_event_handler_t *beh)
EXPORT_SYMBOL(vio_setHandler);
int vio_clearHandler(int subtype)
EXPORT_SYMBOL(vio_clearHandler);
static void handleConfig(struct HvLpEvent *event)
void vio_set_hostlp(void)
EXPORT_SYMBOL(vio_set_hostlp);
static void vio_handleEvent(struct HvLpEvent *event)
static void viopath_donealloc(void *parm, int number)
static int allocateEvents(HvLpIndex remoteLp, int numEvents)
int viopath_open(HvLpIndex remoteLp, int subtype, int numReq)
EXPORT_SYMBOL(viopath_open);
int viopath_close(HvLpIndex remoteLp, int subtype, int numReq)
EXPORT_SYMBOL(viopath_close);
void *vio_get_event_buffer(int subtype)
EXPORT_SYMBOL(vio_get_event_buffer);
void vio_free_event_buffer(int subtype, void *buffer)
EXPORT_SYMBOL(vio_free_event_buffer);
static const struct vio_error_entry vio_no_error =
;
static const struct vio_error_entry vio_unknown_error =
;
static const struct vio_error_entry vio_default_errors[] = ;
const struct vio_error_entry *vio_lookup_rc(
const struct vio_error_entry *local_table, u16 rc)
EXPORT_SYMBOL(vio_lookup_rc);
