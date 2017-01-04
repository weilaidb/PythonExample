#define AVCODEC_H264DATA_H
static const uint8_t golomb_to_pict_type[5] = ;
static const uint8_t golomb_to_intra4x4_cbp[48] = ;
static const uint8_t golomb_to_inter_cbp[48] = ;
static const uint8_t zigzag_scan[16+1] = ;
static const uint8_t chroma_dc_scan[4] = ;
static const uint8_t chroma422_dc_scan[8] = ;
typedef struct IMbInfo  IMbInfo;
static const IMbInfo i_mb_type_info[26] = ;
typedef struct PMbInfo  PMbInfo;
static const PMbInfo p_mb_type_info[5] = ;
static const PMbInfo p_sub_mb_type_info[4] = ;
static const PMbInfo b_mb_type_info[23] = ;
static const PMbInfo b_sub_mb_type_info[13] = ;
static const AVRational ff_h264_pixel_aspect[17] = ;
