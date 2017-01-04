static void ivtv_set_vps(struct ivtv *itv, int enabled)
static void ivtv_set_cc(struct ivtv *itv, int mode, const struct vbi_cc *cc)
static void ivtv_set_wss(struct ivtv *itv, int enabled, int mode)
static int odd_parity(u8 c)
static void ivtv_write_vbi_line(struct ivtv *itv,
const struct v4l2_sliced_vbi_data *d,
struct vbi_cc *cc, int *found_cc)
static void ivtv_write_vbi_cc_lines(struct ivtv *itv, const struct vbi_cc *cc)
static void ivtv_write_vbi(struct ivtv *itv,
const struct v4l2_sliced_vbi_data *sliced,
size_t cnt)
ssize_t
ivtv_write_vbi_from_user(struct ivtv *itv,
const struct v4l2_sliced_vbi_data __user *sliced,
size_t cnt)
static void copy_vbi_data(struct ivtv *itv, int lines, u32 pts_stamp)
static int ivtv_convert_ivtv_vbi(struct ivtv *itv, u8 *p)
static u32 compress_raw_buf(struct ivtv *itv, u8 *buf, u32 size)
static u32 compress_sliced_buf(struct ivtv *itv, u32 line, u8 *buf, u32 size, u8 sav)
void ivtv_process_vbi_data(struct ivtv *itv, struct ivtv_buffer *buf,
u64 pts_stamp, int streamtype)
void ivtv_disable_cc(struct ivtv *itv)
void ivtv_vbi_work_handler(struct ivtv *itv)
