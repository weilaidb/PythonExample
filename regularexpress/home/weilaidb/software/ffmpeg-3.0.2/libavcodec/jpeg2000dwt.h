#define AVCODEC_JPEG2000DWT_H
#define FF_DWT_MAX_DECLVLS 32
#define F_LFTG_K      1.230174104914001f
#define F_LFTG_X      0.812893066115961f
enum DWTType ;
typedef struct DWTContext  DWTContext;
int ff_jpeg2000_dwt_init(DWTContext *s, int border[2][2],
int decomp_levels, int type);
int ff_dwt_encode(DWTContext *s, void *t);
int ff_dwt_decode(DWTContext *s, void *t);
void ff_dwt_destroy(DWTContext *s);
