#define AVCODEC_MPEG12VLC_H
#define DC_VLC_BITS 9
#define MV_VLC_BITS 9
#define TEX_VLC_BITS 9
#define MBINCR_VLC_BITS 9
#define MB_PAT_VLC_BITS 9
#define MB_PTYPE_VLC_BITS 6
#define MB_BTYPE_VLC_BITS 6
extern VLC ff_dc_lum_vlc;
extern VLC ff_dc_chroma_vlc;
extern VLC ff_mbincr_vlc;
extern VLC ff_mb_ptype_vlc;
extern VLC ff_mb_btype_vlc;
extern VLC ff_mb_pat_vlc;
extern VLC ff_mv_vlc;
void ff_mpeg12_init_vlcs(void);
