#define SHIFT(x,s) ((s)<=0 ? (x)<<-(s) : ((x)+(1<<((s)-1)))>>(s))
#define DIV(n,d) (((n) + ((d)>>1)) / (d))
static const uint8_t dequant4_scale[6][3] =
;
static const uint16_t quant4_scale[6][3] =
;
static const uint8_t quant8_scan[16] =
;
static const uint8_t dequant8_scale[6][6] =
;
static const uint16_t quant8_scale[6][6] =
;
int x264_cqm_init( x264_t *h )
#define CQM_DELETE( n, max )\
for( int i = 0; i < (max); i++ )\
void x264_cqm_delete( x264_t *h )
static int x264_cqm_parse_jmlist( x264_t *h, const char *buf, const char *name,
uint8_t *cqm, const uint8_t *jvt, int length )
int x264_cqm_parse_file( x264_t *h, const char *filename )
