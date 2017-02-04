#define AVCODEC_JPEG2000DWT_H
#define FF_DWT_MAX_DECLVLS 32
#define F_LFTG_K      1.230174104914001f
#define F_LFTG_X      0.812893066115961f
enum DWTType ;
typedef struct DWTContext  DWTContext;
ff_jpeg2000_dwt_init;
ff_dwt_encode;
ff_dwt_decode;
ff_dwt_destroy;
