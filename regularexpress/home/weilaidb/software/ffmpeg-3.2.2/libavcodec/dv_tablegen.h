#define AVCODEC_DV_TABLEGEN_H
#if CONFIG_SMALL
#define DV_VLC_MAP_RUN_SIZE  15
#define DV_VLC_MAP_LEV_SIZE  23
#define DV_VLC_MAP_RUN_SIZE  64
#define DV_VLC_MAP_LEV_SIZE 512
typedef struct dv_vlc_pair  dv_vlc_pair;
#if CONFIG_HARDCODED_TABLES
dv_vlc_map_tableinit
static struct dv_vlc_pair dv_vlc_map[DV_VLC_MAP_RUN_SIZE][DV_VLC_MAP_LEV_SIZE];
dv_vlc_map_tableinit
