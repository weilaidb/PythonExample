#define UNCHECKED_BITSTREAM_READER 1
#define MV_VLC_BITS 9
#define H263_MBTYPE_B_VLC_BITS 6
#define CBPC_B_VLC_BITS 3
static const int h263_mb_type_b_map[15]= ;
void ff_h263_show_pict_info(MpegEncContext *s)
VLC ff_h263_intra_MCBPC_vlc;
VLC ff_h263_inter_MCBPC_vlc;
VLC ff_h263_cbpy_vlc;
static VLC mv_vlc;
static VLC h263_mbtype_b_vlc;
static VLC cbpc_b_vlc;
av_cold void ff_h263_decode_init_vlc(void)
int ff_h263_decode_mba(MpegEncContext *s)
static int h263_decode_gob_header(MpegEncContext *s)
int ff_h263_resync(MpegEncContext *s)
int ff_h263_decode_motion(MpegEncContext * s, int pred, int f_code)
static int h263p_decode_umotion(MpegEncContext * s, int pred)
static void preview_obmc(MpegEncContext *s)
static void h263_decode_dquant(MpegEncContext *s)
static int h263_decode_block(MpegEncContext * s, int16_t * block,
int n, int coded)
static int h263_skip_b_part(MpegEncContext *s, int cbp)
static int h263_get_modb(GetBitContext *gb, int pb_frame, int *cbpb)
int ff_h263_decode_mb(MpegEncContext *s,
int16_t block[6][64])
int ff_h263_decode_picture_header(MpegEncContext *s)
