#define H261_MBA_VLC_BITS 9
#define H261_MTYPE_VLC_BITS 6
#define H261_MV_VLC_BITS 7
#define H261_CBP_VLC_BITS 9
#define TCOEFF_VLC_BITS 9
#define MBA_STUFFING 33
#define MBA_STARTCODE 34
static VLC h261_mba_vlc;
static VLC h261_mtype_vlc;
static VLC h261_mv_vlc;
static VLC h261_cbp_vlc;
h261_decode_init_vlc
h261_decode_init
h261_decode_gob_header
h261_resync
h261_decode_mb_skipped
static const int mvmap[17] = ;
decode_mv_component
h261_decode_block
h261_decode_mb
h261_decode_picture_header
h261_decode_gob
get_consumed_bytes
h261_decode_frame
h261_decode_end
AVCodec ff_h261_decoder = ;
