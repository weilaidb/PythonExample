union float64_components ;
float64 float64_exp(float64 Fm);
float64 float64_ln(float64 Fm);
float64 float64_sin(float64 rFm);
float64 float64_cos(float64 rFm);
float64 float64_arcsin(float64 rFm);
float64 float64_arctan(float64 rFm);
float64 float64_log(float64 rFm);
float64 float64_tan(float64 rFm);
float64 float64_arccos(float64 rFm);
float64 float64_pow(float64 rFn, float64 rFm);
float64 float64_pol(float64 rFn, float64 rFm);
static float64 float64_rsf(struct roundingData *roundData, float64 rFn, float64 rFm)
static float64 float64_rdv(struct roundingData *roundData, float64 rFn, float64 rFm)
static float64 (*const dyadic_double[16])(struct roundingData*, float64 rFn, float64 rFm) = ;
static float64 float64_mvf(struct roundingData *roundData,float64 rFm)
static float64 float64_mnf(struct roundingData *roundData,float64 rFm)
static float64 float64_abs(struct roundingData *roundData,float64 rFm)
static float64 (*const monadic_double[16])(struct roundingData *, float64 rFm) = ;
unsigned int DoubleCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd)
