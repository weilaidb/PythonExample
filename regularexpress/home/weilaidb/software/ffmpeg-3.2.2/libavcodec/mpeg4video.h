#define AVCODEC_MPEG4VIDEO_H
#define RECT_SHAPE       0
#define BIN_SHAPE        1
#define BIN_ONLY_SHAPE   2
#define GRAY_SHAPE       3
#define SIMPLE_VO_TYPE           1
#define CORE_VO_TYPE             3
#define MAIN_VO_TYPE             4
#define NBIT_VO_TYPE             5
#define ARTS_VO_TYPE            10
#define ACE_VO_TYPE             12
#define ADV_SIMPLE_VO_TYPE      17
#define EXTENDED_PAR 15
#define STATIC_SPRITE 1
#define GMC_SPRITE 2
#define MOTION_MARKER 0x1F001
#define DC_MARKER     0x6B001
#define VOS_STARTCODE        0x1B0
#define USER_DATA_STARTCODE  0x1B2
#define GOP_STARTCODE        0x1B3
#define VISUAL_OBJ_STARTCODE 0x1B5
#define VOP_STARTCODE        0x1B6
#define MAX_NVOP_SIZE 19
typedef struct Mpeg4DecContext  Mpeg4DecContext;
extern const uint8_t ff_mpeg4_DCtab_lum[13][2];
extern const uint8_t ff_mpeg4_DCtab_chrom[13][2];
extern const uint16_t ff_mpeg4_intra_vlc[103][2];
extern const int8_t ff_mpeg4_intra_level[102];
extern const int8_t ff_mpeg4_intra_run[102];
extern RLTable ff_mpeg4_rl_intra;
extern RLTable ff_rvlc_rl_inter;
extern RLTable ff_rvlc_rl_intra;
extern const uint16_t ff_sprite_trajectory_tab[15][2];
extern const uint8_t ff_mb_type_b_tab[4][2];
extern const int16_t ff_mpeg4_default_intra_matrix[64];
extern const int16_t ff_mpeg4_default_non_intra_matrix[64];
extern const uint8_t ff_mpeg4_y_dc_scale_table[32];
extern const uint8_t ff_mpeg4_c_dc_scale_table[32];
extern const uint16_t ff_mpeg4_resync_prefix[8];
extern const uint8_t ff_mpeg4_dc_threshold[8];
ff_mpeg4_encode_mb;
ff_mpeg4_pred_ac;
ff_set_mpeg4_time;
ff_mpeg4_encode_picture_header;
ff_mpeg4_decode_picture_header;
ff_mpeg4_encode_video_packet_header;
ff_mpeg4_clean_buffers;
ff_mpeg4_stuffing;
ff_mpeg4_init_partitions;
ff_mpeg4_merge_partitions;
ff_clean_mpeg4_qscales;
ff_mpeg4_decode_partitions;
ff_mpeg4_get_video_packet_prefix_length;
ff_mpeg4_decode_video_packet_header;
ff_mpeg4_init_direct_mv;
ff_mpeg4videodec_static_init;
ff_mpeg4_workaround_bugs;
ff_mpeg4_frame_end;
ff_mpeg4_set_direct_mv;
extern uint8_t ff_mpeg4_static_rl_table_store[3][2][2 * MAX_RUN + MAX_LEVEL + 3];
ff_mpeg4_pred_dc
