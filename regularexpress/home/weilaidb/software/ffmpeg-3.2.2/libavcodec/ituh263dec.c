#define UNCHECKED_BITSTREAM_READER 1
#define MV_VLC_BITS 9
#define H263_MBTYPE_B_VLC_BITS 6
#define CBPC_B_VLC_BITS 3
static const int h263_mb_type_b_map[15]= ;
ff_h263_show_pict_info
VLC ff_h263_intra_MCBPC_vlc;
VLC ff_h263_inter_MCBPC_vlc;
VLC ff_h263_cbpy_vlc;
static VLC mv_vlc;
static VLC h263_mbtype_b_vlc;
static VLC cbpc_b_vlc;
ff_h263_decode_init_vlc
ff_h263_decode_mba
h263_decode_gob_header
ff_h263_resync
ff_h263_decode_motion
h263p_decode_umotion
preview_obmc
h263_decode_dquant
h263_decode_block
h263_skip_b_part
h263_get_modb
ff_h263_decode_mb
ff_h263_decode_picture_header
