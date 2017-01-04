static struct pvr2_context *pvr2_context_exist_first;
static struct pvr2_context *pvr2_context_exist_last;
static struct pvr2_context *pvr2_context_notify_first;
static struct pvr2_context *pvr2_context_notify_last;
static DEFINE_MUTEX(pvr2_context_mutex);
static DECLARE_WAIT_QUEUE_HEAD(pvr2_context_sync_data);
static DECLARE_WAIT_QUEUE_HEAD(pvr2_context_cleanup_data);
static int pvr2_context_cleanup_flag;
static int pvr2_context_cleaned_flag;
static struct task_struct *pvr2_context_thread_ptr;
static void pvr2_context_set_notify(struct pvr2_context *mp, int fl)
static void pvr2_context_destroy(struct pvr2_context *mp)
static void pvr2_context_notify(struct pvr2_context *mp)
static void pvr2_context_check(struct pvr2_context *mp)
static int pvr2_context_shutok(void)
static int pvr2_context_thread_func(void *foo)
int pvr2_context_global_init(void)
void pvr2_context_global_done(void)
struct pvr2_context *pvr2_context_create(
struct usb_interface *intf,
const struct usb_device_id *devid,
void (*setup_func)(struct pvr2_context *))
static void pvr2_context_reset_input_limits(struct pvr2_context *mp)
static void pvr2_context_enter(struct pvr2_context *mp)
static void pvr2_context_exit(struct pvr2_context *mp)
void pvr2_context_disconnect(struct pvr2_context *mp)
void pvr2_channel_init(struct pvr2_channel *cp,struct pvr2_context *mp)
static void pvr2_channel_disclaim_stream(struct pvr2_channel *cp)
void pvr2_channel_done(struct pvr2_channel *cp)
int pvr2_channel_limit_inputs(struct pvr2_channel *cp,unsigned int cmsk)
unsigned int pvr2_channel_get_limited_inputs(struct pvr2_channel *cp)
int pvr2_channel_claim_stream(struct pvr2_channel *cp,
struct pvr2_context_stream *sp)
static char stream_sync_key[] = ;
struct pvr2_ioread *pvr2_channel_create_mpeg_stream(
struct pvr2_context_stream *sp)
