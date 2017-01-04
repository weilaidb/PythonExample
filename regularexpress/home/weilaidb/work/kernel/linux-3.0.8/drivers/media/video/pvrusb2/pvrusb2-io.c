static const char *pvr2_buffer_state_decode(enum pvr2_buffer_state);
#define BUFFER_SIG 0x47653271
#define BUFFER_CHECK(bp) do  while (0)
#define BUFFER_CHECK(bp) do  while(0)
struct pvr2_stream ;
struct pvr2_buffer ;
static const char *pvr2_buffer_state_decode(enum pvr2_buffer_state st)
static void pvr2_buffer_describe(struct pvr2_buffer *bp,const char *msg)
static void pvr2_buffer_remove(struct pvr2_buffer *bp)
static void pvr2_buffer_set_none(struct pvr2_buffer *bp)
static int pvr2_buffer_set_ready(struct pvr2_buffer *bp)
static void pvr2_buffer_set_idle(struct pvr2_buffer *bp)
static void pvr2_buffer_set_queued(struct pvr2_buffer *bp)
static void pvr2_buffer_wipe(struct pvr2_buffer *bp)
static int pvr2_buffer_init(struct pvr2_buffer *bp,
struct pvr2_stream *sp,
unsigned int id)
static void pvr2_buffer_done(struct pvr2_buffer *bp)
static int pvr2_stream_buffer_count(struct pvr2_stream *sp,unsigned int cnt)
static int pvr2_stream_achieve_buffer_count(struct pvr2_stream *sp)
static void pvr2_stream_internal_flush(struct pvr2_stream *sp)
static void pvr2_stream_init(struct pvr2_stream *sp)
static void pvr2_stream_done(struct pvr2_stream *sp)
static void buffer_complete(struct urb *urb)
struct pvr2_stream *pvr2_stream_create(void)
void pvr2_stream_destroy(struct pvr2_stream *sp)
void pvr2_stream_setup(struct pvr2_stream *sp,
struct usb_device *dev,
int endpoint,
unsigned int tolerance)
void pvr2_stream_set_callback(struct pvr2_stream *sp,
pvr2_stream_callback func,
void *data)
void pvr2_stream_get_stats(struct pvr2_stream *sp,
struct pvr2_stream_stats *stats,
int zero_counts)
int pvr2_stream_get_buffer_count(struct pvr2_stream *sp)
int pvr2_stream_set_buffer_count(struct pvr2_stream *sp,unsigned int cnt)
struct pvr2_buffer *pvr2_stream_get_idle_buffer(struct pvr2_stream *sp)
struct pvr2_buffer *pvr2_stream_get_ready_buffer(struct pvr2_stream *sp)
struct pvr2_buffer *pvr2_stream_get_buffer(struct pvr2_stream *sp,int id)
int pvr2_stream_get_ready_count(struct pvr2_stream *sp)
void pvr2_stream_kill(struct pvr2_stream *sp)
int pvr2_buffer_queue(struct pvr2_buffer *bp)
int pvr2_buffer_set_buffer(struct pvr2_buffer *bp,void *ptr,unsigned int cnt)
unsigned int pvr2_buffer_get_count(struct pvr2_buffer *bp)
int pvr2_buffer_get_status(struct pvr2_buffer *bp)
int pvr2_buffer_get_id(struct pvr2_buffer *bp)
