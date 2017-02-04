#define AVCODEC_DV_H
typedef struct DVwork_chunk  DVwork_chunk;
typedef struct DVVideoContext  DVVideoContext;
enum dv_section_type ;
enum dv_pack_type ;
DV_PROFILE_IS_HD ((p)->video_stype & 0x10)
DV_PROFILE_IS_1080i50 (((p)->video_stype == 0x14) && ((p)->dsf == 1))
DV_PROFILE_IS_720p50  (((p)->video_stype == 0x18) && ((p)->dsf == 1))
#define DV_MAX_FRAME_SIZE 576000
#define DV_MAX_BPM 8
#define TEX_VLC_BITS 10
extern RL_VLC_ELEM ff_dv_rl_vlc[1664];
ff_dv_init_dynamic_tables;
ff_dvvideo_init;
dv_work_pool_size
dv_calculate_mb_xy
