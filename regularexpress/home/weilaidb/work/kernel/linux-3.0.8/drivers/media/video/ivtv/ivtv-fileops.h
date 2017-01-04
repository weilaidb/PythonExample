#define IVTV_FILEOPS_H
int ivtv_v4l2_open(struct file *filp);
ssize_t ivtv_v4l2_read(struct file *filp, char __user *buf, size_t count,
loff_t * pos);
ssize_t ivtv_v4l2_write(struct file *filp, const char __user *buf, size_t count,
loff_t * pos);
int ivtv_v4l2_close(struct file *filp);
unsigned int ivtv_v4l2_enc_poll(struct file *filp, poll_table * wait);
unsigned int ivtv_v4l2_dec_poll(struct file *filp, poll_table * wait);
int ivtv_start_capture(struct ivtv_open_id *id);
void ivtv_stop_capture(struct ivtv_open_id *id, int gop_end);
int ivtv_start_decoding(struct ivtv_open_id *id, int speed);
void ivtv_mute(struct ivtv *itv);
void ivtv_unmute(struct ivtv *itv);
void ivtv_release_stream(struct ivtv_stream *s);
