static const u8 sliced_vbi_did[2] = ;
struct vbi_anc_data ;
static int odd_parity(u8 c)
static int decode_vps(u8 *dst, u8 *p)
int cx18_av_g_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *svbi)
int cx18_av_s_raw_fmt(struct v4l2_subdev *sd, struct v4l2_vbi_format *fmt)
int cx18_av_s_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *svbi)
int cx18_av_decode_vbi_line(struct v4l2_subdev *sd,
struct v4l2_decode_vbi_line *vbi)
