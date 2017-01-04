#define AVFILTER_HQDN3D_H
typedef struct HQDN3DContext  HQDN3DContext;
#define LUMA_SPATIAL   0
#define LUMA_TMP       1
#define CHROMA_SPATIAL 2
#define CHROMA_TMP     3
void ff_hqdn3d_init_x86(HQDN3DContext *hqdn3d);
