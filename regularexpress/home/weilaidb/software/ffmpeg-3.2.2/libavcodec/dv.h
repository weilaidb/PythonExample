#define AVCODEC_DV_H
typedef struct DVwork_chunk  DVwork_chunk;
typedef struct DVVideoContext  DVVideoContext;
enum dv_section_type ;
enum dv_pack_type ;
#define DV_PROFILE_IS_HD(p) ((p)->video_stype & 0x10)
#define DV_PROFILE_IS_1080i50(p) (((p)->video_stype == 0x14) && ((p)->dsf == 1))
#define DV_PROFILE_IS_720p50(p)  (((p)->video_stype == 0x18) && ((p)->dsf == 1))
#define DV_MAX_FRAME_SIZE 576000
#define DV_MAX_BPM 8
#define TEX_VLC_BITS 10
extern RL_VLC_ELEM ff_dv_rl_vlc[1664];
int ff_dv_init_dynamic_tables(DVVideoContext *s, const AVDVProfile *d);
int ff_dvvideo_init(AVCodecContext *avctx);
static inline int dv_work_pool_size(const AVDVProfile *d)
static inline void dv_calculate_mb_xy(DVVideoContext *s,
DVwork_chunk *work_chunk,
int m, int *mb_x, int *mb_y)
