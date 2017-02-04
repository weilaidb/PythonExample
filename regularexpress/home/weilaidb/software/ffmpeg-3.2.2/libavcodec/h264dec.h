#define AVCODEC_H264DEC_H
#define H264_MAX_PICTURE_COUNT 36
#define MAX_MMCO_COUNT         66
#define MAX_DELAYED_PIC_COUNT  16
#define ALLOW_INTERLACE
#define FMO 0
#define MAX_SLICES 32
MB_MBAFF    (h)->mb_mbaff
MB_FIELD  (sl)->mb_field_decoding_flag
FRAME_MBAFF (h)->mb_aff_frame
FIELD_PICTURE ((h)->picture_structure != PICT_FRAME)
#define LEFT_MBS 2
#define LTOP     0
#define LBOT     1
LEFT  (i)
MB_MBAFF      0
MB_FIELD     0
FRAME_MBAFF   0
FIELD_PICTURE 0
#undef  IS_INTERLACED
IS_INTERLACED 0
#define LEFT_MBS 1
#define LTOP     0
#define LBOT     0
LEFT  0
FIELD_OR_MBAFF_PICTURE (FRAME_MBAFF(h) || FIELD_PICTURE(h))
CABAC (h)->ps.pps->cabac
CHROMA    ((h)->ps.sps->chroma_format_idc)
CHROMA422 ((h)->ps.sps->chroma_format_idc == 2)
CHROMA444 ((h)->ps.sps->chroma_format_idc == 3)
#define MB_TYPE_REF0       MB_TYPE_ACPRED
#define MB_TYPE_8x8DCT     0x01000000
IS_REF0         ((a) & MB_TYPE_REF0)
IS_8x8DCT       ((a) & MB_TYPE_8x8DCT)
typedef enum MMCOOpcode  MMCOOpcode;
typedef struct MMCO  MMCO;
typedef struct H264Picture  H264Picture;
typedef struct H264Ref  H264Ref;
typedef struct H264SliceContext  H264SliceContext;
typedef struct H264Context  H264Context;
extern const uint16_t ff_h264_mb_sizes[4];
ff_h264_get_slice_type;
ff_h264_alloc_tables;
ff_h264_decode_ref_pic_list_reordering;
ff_h264_build_ref_list;
ff_h264_remove_all_refs;
ff_h264_execute_ref_pic_marking;
ff_h264_decode_ref_pic_marking;
ff_h264_hl_decode_mb;
ff_h264_decode_init;
ff_h264_decode_init_vlc;
ff_h264_decode_mb_cavlc;
ff_h264_decode_mb_cabac;
ff_h264_init_cabac_states;
ff_h264_direct_dist_scale_factor;
ff_h264_direct_ref_list_init;
ff_h264_pred_direct_motion;
ff_h264_filter_mb_fast;
ff_h264_filter_mb;
#define LUMA_DC_BLOCK_INDEX   48
#define CHROMA_DC_BLOCK_INDEX 49
static const uint8_t scan8[16 * 3 + 3] = ;
pack16to32
pack8to16
get_chroma_qp
pred_intra_mode
write_back_intra_pred_mode
write_back_non_zero_count
write_back_motion_list
write_back_motion
get_dct8x8_allowed
find_start_code
ff_h264_field_end;
ff_h264_ref_picture;
ff_h264_unref_picture;
ff_h264_slice_context_init;
ff_h264_draw_horiz_band;
ff_h264_decode_slice_header;
#define SLICE_SINGLETHREAD 1
#define SLICE_SKIPED 2
ff_h264_execute_decode_slices;
ff_h264_update_thread_context;
ff_h264_flush_change;
ff_h264_free_tables;
ff_h264_set_erpic;
