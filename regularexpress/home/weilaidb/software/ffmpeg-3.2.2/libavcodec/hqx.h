#define AVCODEC_HQX_H
enum HQXACMode ;
typedef struct HQXLUT  HQXLUT;
typedef struct HQXAC  HQXAC;
struct HQXContext;
typedef int (*mb_decode_func)(struct HQXContext *ctx,
int slice_no, int x, int y);
typedef struct HQXSlice  HQXSlice;
typedef struct HQXContext  HQXContext;
#define HQX_DC_VLC_BITS 9
extern const HQXAC ff_hqx_ac[NUM_HQX_AC];
ff_hqx_init_vlcs;
