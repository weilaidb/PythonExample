static const struct v4l2_file_operations ivtv_v4l2_enc_fops = ;
static const struct v4l2_file_operations ivtv_v4l2_dec_fops = ;
#define IVTV_V4L2_DEC_MPG_OFFSET  16
#define IVTV_V4L2_ENC_PCM_OFFSET  24
#define IVTV_V4L2_ENC_YUV_OFFSET  32
#define IVTV_V4L2_DEC_YUV_OFFSET  48
#define IVTV_V4L2_DEC_VBI_OFFSET   8
#define IVTV_V4L2_DEC_VOUT_OFFSET 16
static struct  ivtv_stream_info[] = ;
static void ivtv_stream_init(struct ivtv *itv, int type)
static int ivtv_prep_dev(struct ivtv *itv, int type)
int ivtv_streams_setup(struct ivtv *itv)
static int ivtv_reg_dev(struct ivtv *itv, int type)
int ivtv_streams_register(struct ivtv *itv)
void ivtv_streams_cleanup(struct ivtv *itv, int unregister)
static void ivtv_vbi_setup(struct ivtv *itv)
int ivtv_start_v4l2_encode_stream(struct ivtv_stream *s)
static int ivtv_setup_v4l2_decode_stream(struct ivtv_stream *s)
int ivtv_start_v4l2_decode_stream(struct ivtv_stream *s, int gop_offset)
void ivtv_stop_all_captures(struct ivtv *itv)
int ivtv_stop_v4l2_encode_stream(struct ivtv_stream *s, int gop_end)
int ivtv_stop_v4l2_decode_stream(struct ivtv_stream *s, int flags, u64 pts)
int ivtv_passthrough_mode(struct ivtv *itv, int enable)
