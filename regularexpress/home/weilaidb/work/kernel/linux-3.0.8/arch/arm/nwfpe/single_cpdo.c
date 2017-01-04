float32 float32_exp(float32 Fm);
float32 float32_ln(float32 Fm);
float32 float32_sin(float32 rFm);
float32 float32_cos(float32 rFm);
float32 float32_arcsin(float32 rFm);
float32 float32_arctan(float32 rFm);
float32 float32_log(float32 rFm);
float32 float32_tan(float32 rFm);
float32 float32_arccos(float32 rFm);
float32 float32_pow(float32 rFn, float32 rFm);
float32 float32_pol(float32 rFn, float32 rFm);
static float32 float32_rsf(struct roundingData *roundData, float32 rFn, float32 rFm)
static float32 float32_rdv(struct roundingData *roundData, float32 rFn, float32 rFm)
static float32 (*const dyadic_single[16])(struct roundingData *, float32 rFn, float32 rFm) = ;
static float32 float32_mvf(struct roundingData *roundData, float32 rFm)
static float32 float32_mnf(struct roundingData *roundData, float32 rFm)
static float32 float32_abs(struct roundingData *roundData, float32 rFm)
static float32 (*const monadic_single[16])(struct roundingData*, float32 rFm) = ;
unsigned int SingleCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd)
