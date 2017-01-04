#define AVCODEC_H263_H
#if !FF_API_ASPECT_EXTENDED
#define FF_ASPECT_EXTENDED 15
#define INT_BIT (CHAR_BIT * sizeof(int))
#define INTRA_MCBPC_VLC_BITS 6
#define INTER_MCBPC_VLC_BITS 7
#define CBPY_VLC_BITS 6
#define TEX_VLC_BITS 9
#define H263_GOB_HEIGHT(h) ((h) <= 400 ? 1 : (h) <= 800 ? 2 : 4)
extern VLC ff_h263_intra_MCBPC_vlc;
extern VLC ff_h263_inter_MCBPC_vlc;
extern VLC ff_h263_cbpy_vlc;
extern const enum AVPixelFormat ff_h263_hwaccel_pixfmt_list_420[];
int ff_h263_decode_motion(MpegEncContext * s, int pred, int f_code);
av_const int ff_h263_aspect_to_info(AVRational aspect);
int ff_h263_decode_init(AVCodecContext *avctx);
int ff_h263_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt);
int ff_h263_decode_end(AVCodecContext *avctx);
void ff_h263_encode_mb(MpegEncContext *s,
int16_t block[6][64],
int motion_x, int motion_y);
void ff_h263_encode_picture_header(MpegEncContext *s, int picture_number);
void ff_h263_encode_gob_header(MpegEncContext * s, int mb_line);
int16_t *ff_h263_pred_motion(MpegEncContext * s, int block, int dir,
int *px, int *py);
void ff_h263_encode_init(MpegEncContext *s);
void ff_h263_decode_init_vlc(void);
int ff_h263_decode_picture_header(MpegEncContext *s);
int ff_h263_decode_gob_header(MpegEncContext *s);
void ff_h263_update_motion_val(MpegEncContext * s);
void ff_h263_loop_filter(MpegEncContext * s);
int ff_h263_decode_mba(MpegEncContext *s);
void ff_h263_encode_mba(MpegEncContext *s);
void ff_init_qscale_tab(MpegEncContext *s);
int ff_h263_pred_dc(MpegEncContext * s, int n, int16_t **dc_val_ptr);
void ff_h263_pred_acdc(MpegEncContext * s, int16_t *block, int n);
void ff_h263_show_pict_info(MpegEncContext *s);
int ff_intel_h263_decode_picture_header(MpegEncContext *s);
int ff_h263_decode_mb(MpegEncContext *s,
int16_t block[6][64]);
int av_const h263_get_picture_format(int width, int height);
void ff_clean_h263_qscales(MpegEncContext *s);
int ff_h263_resync(MpegEncContext *s);
void ff_h263_encode_motion(PutBitContext *pb, int val, int f_code);
static inline int h263_get_motion_length(int val, int f_code)
static inline void ff_h263_encode_motion_vector(MpegEncContext * s, int x, int y, int f_code)
static inline int get_p_cbp(MpegEncContext * s,
int16_t block[6][64],
int motion_x, int motion_y)
