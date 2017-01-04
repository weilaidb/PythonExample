int cx18_claim_stream(struct cx18_open_id *id, int type)
EXPORT_SYMBOL(cx18_claim_stream);
void cx18_release_stream(struct cx18_stream *s)
EXPORT_SYMBOL(cx18_release_stream);
static void cx18_dualwatch(struct cx18 *cx)
static struct cx18_mdl *cx18_get_mdl(struct cx18_stream *s, int non_block,
int *err)
static void cx18_setup_sliced_vbi_mdl(struct cx18 *cx)
static size_t cx18_copy_buf_to_user(struct cx18_stream *s,
struct cx18_buffer *buf, char __user *ubuf, size_t ucount, bool *stop)
static size_t cx18_copy_mdl_to_user(struct cx18_stream *s,
struct cx18_mdl *mdl, char __user *ubuf, size_t ucount)
static ssize_t cx18_read(struct cx18_stream *s, char __user *ubuf,
size_t tot_count, int non_block)
static ssize_t cx18_read_pos(struct cx18_stream *s, char __user *ubuf,
size_t count, loff_t *pos, int non_block)
int cx18_start_capture(struct cx18_open_id *id)
ssize_t cx18_v4l2_read(struct file *filp, char __user *buf, size_t count,
loff_t *pos)
unsigned int cx18_v4l2_enc_poll(struct file *filp, poll_table *wait)
int cx18_v4l2_mmap(struct file *file, struct vm_area_struct *vma)
void cx18_vb_timeout(unsigned long data)
void cx18_stop_capture(struct cx18_open_id *id, int gop_end)
int cx18_v4l2_close(struct file *filp)
static int cx18_serialized_open(struct cx18_stream *s, struct file *filp)
int cx18_v4l2_open(struct file *filp)
void cx18_mute(struct cx18 *cx)
void cx18_unmute(struct cx18 *cx)
