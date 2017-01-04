#define F_LFTG_ALPHA  1.586134342059924f
#define F_LFTG_BETA   0.052980118572961f
#define F_LFTG_GAMMA  0.882911075530934f
#define F_LFTG_DELTA  0.443506852043971f
#define I_LFTG_ALPHA  103949ll
#define I_LFTG_BETA     3472ll
#define I_LFTG_GAMMA   57862ll
#define I_LFTG_DELTA   29066ll
#define I_LFTG_K       80621ll
#define I_LFTG_X       53274ll
#define I_PRESHIFT 8
static inline void extend53(int *p, int i0, int i1)
static inline void extend97_float(float *p, int i0, int i1)
static inline void extend97_int(int32_t *p, int i0, int i1)
static void sd_1d53(int *p, int i0, int i1)
static void dwt_encode53(DWTContext *s, int *t)
static void sd_1d97_float(float *p, int i0, int i1)
static void dwt_encode97_float(DWTContext *s, float *t)
static void sd_1d97_int(int *p, int i0, int i1)
static void dwt_encode97_int(DWTContext *s, int *t)
static void sr_1d53(int *p, int i0, int i1)
static void dwt_decode53(DWTContext *s, int *t)
static void sr_1d97_float(float *p, int i0, int i1)
static void dwt_decode97_float(DWTContext *s, float *t)
static void sr_1d97_int(int32_t *p, int i0, int i1)
static void dwt_decode97_int(DWTContext *s, int32_t *t)
int ff_jpeg2000_dwt_init(DWTContext *s, int border[2][2],
int decomp_levels, int type)
int ff_dwt_encode(DWTContext *s, void *t)
int ff_dwt_decode(DWTContext *s, void *t)
void ff_dwt_destroy(DWTContext *s)
