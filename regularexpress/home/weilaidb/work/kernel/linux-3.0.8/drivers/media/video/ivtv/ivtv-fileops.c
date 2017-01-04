static int ivtv_claim_stream(struct ivtv_open_id *id, int type)
void ivtv_release_stream(struct ivtv_stream *s)
static void ivtv_dualwatch(struct ivtv *itv)
static void ivtv_update_pgm_info(struct ivtv *itv)
static struct ivtv_buffer *ivtv_get_buffer(struct ivtv_stream *s, int non_block, int *err)
static void ivtv_setup_sliced_vbi_buf(struct ivtv *itv)
static size_t ivtv_copy_buf_to_user(struct ivtv_stream *s, struct ivtv_buffer *buf,
char __user *ubuf, size_t ucount)
static ssize_t ivtv_read(struct ivtv_stream *s, char __user *ubuf, size_t tot_count, int non_block)
static ssize_t ivtv_read_pos(struct ivtv_stream *s, char __user *ubuf, size_t count,
loff_t *pos, int non_block)
int ivtv_start_capture(struct ivtv_open_id *id)
ssize_t ivtv_v4l2_read(struct file * filp, char __user *buf, size_t count, loff_t * pos)
int ivtv_start_decoding(struct ivtv_open_id *id, int speed)
ssize_t ivtv_v4l2_write(struct file *filp, const char __user *user_buf, size_t count, loff_t *pos)
unsigned int ivtv_v4l2_dec_poll(struct file *filp, poll_table *wait)
unsigned int ivtv_v4l2_enc_poll(struct file *filp, poll_table * wait)
void ivtv_stop_capture(struct ivtv_open_id *id, int gop_end)
static void ivtv_stop_decoding(struct ivtv_open_id *id, int flags, u64 pts)
int ivtv_v4l2_close(struct file *filp)
static int ivtv_serialized_open(struct ivtv_stream *s, struct file *filp)
{
struct video_device *vdev = video_devdata(filp);
struct ivtv *itv = s->itv;
struct ivtv_open_id *item;
int res = 0;
IVTV_DEBUG_FILE("open %s\n", s->name);
if (ivtv_fw_debug)  else
int ivtv_v4l2_open(struct file *filp)
void ivtv_mute(struct ivtv *itv)
void ivtv_unmute(struct ivtv *itv)
