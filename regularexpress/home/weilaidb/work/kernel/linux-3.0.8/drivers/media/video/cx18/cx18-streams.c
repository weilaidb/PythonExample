#define CX18_DSP0_INTERRUPT_MASK     	0xd0004C
static struct v4l2_file_operations cx18_v4l2_enc_fops = ;
#define CX18_V4L2_ENC_TS_OFFSET   16
#define CX18_V4L2_ENC_PCM_OFFSET  24
#define CX18_V4L2_ENC_YUV_OFFSET  32
static struct  cx18_stream_info[] = ;
void cx18_dma_free(struct videobuf_queue *q,
struct cx18_stream *s, struct cx18_videobuf_buffer *buf)
static int cx18_prepare_buffer(struct videobuf_queue *q,
struct cx18_stream *s,
struct cx18_videobuf_buffer *buf,
u32 pixelformat,
unsigned int width, unsigned int height,
enum v4l2_field field)
#define VB_MIN_BUFFERS 32
#define VB_MIN_BUFSIZE 4147200
static int buffer_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops cx18_videobuf_qops = ;
static void cx18_stream_init(struct cx18 *cx, int type)
static int cx18_prep_dev(struct cx18 *cx, int type)
int cx18_streams_setup(struct cx18 *cx)
static int cx18_reg_dev(struct cx18 *cx, int type)
int cx18_streams_register(struct cx18 *cx)
void cx18_streams_cleanup(struct cx18 *cx, int unregister)
static void cx18_vbi_setup(struct cx18_stream *s)
void cx18_stream_rotate_idx_mdls(struct cx18 *cx)
static
struct cx18_queue *_cx18_stream_put_mdl_fw(struct cx18_stream *s,
struct cx18_mdl *mdl)
static
void _cx18_stream_load_fw_queue(struct cx18_stream *s)
void cx18_out_work_handler(struct work_struct *work)
static void cx18_stream_configure_mdls(struct cx18_stream *s)
int cx18_start_v4l2_encode_stream(struct cx18_stream *s)
EXPORT_SYMBOL(cx18_start_v4l2_encode_stream);
void cx18_stop_all_captures(struct cx18 *cx)
int cx18_stop_v4l2_encode_stream(struct cx18_stream *s, int gop_end)
EXPORT_SYMBOL(cx18_stop_v4l2_encode_stream);
u32 cx18_find_handle(struct cx18 *cx)
struct cx18_stream *cx18_handle_to_stream(struct cx18 *cx, u32 handle)
