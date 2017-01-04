static const u8 raw_vbi_sav_rp[2] = ;
static const u8 sliced_vbi_eav_rp[2] = ;
static void copy_vbi_data(struct cx18 *cx, int lines, u32 pts_stamp)
static u32 compress_raw_buf(struct cx18 *cx, u8 *buf, u32 size, u32 hdr_size)
static u32 compress_sliced_buf(struct cx18 *cx, u8 *buf, u32 size,
const u32 hdr_size)
static void _cx18_process_vbi_data(struct cx18 *cx, struct cx18_buffer *buf)
void cx18_process_vbi_data(struct cx18 *cx, struct cx18_mdl *mdl,
int streamtype)
