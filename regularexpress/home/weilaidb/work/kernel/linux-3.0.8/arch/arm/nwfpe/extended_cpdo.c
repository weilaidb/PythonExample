floatx80 floatx80_exp(floatx80 Fm);
floatx80 floatx80_ln(floatx80 Fm);
floatx80 floatx80_sin(floatx80 rFm);
floatx80 floatx80_cos(floatx80 rFm);
floatx80 floatx80_arcsin(floatx80 rFm);
floatx80 floatx80_arctan(floatx80 rFm);
floatx80 floatx80_log(floatx80 rFm);
floatx80 floatx80_tan(floatx80 rFm);
floatx80 floatx80_arccos(floatx80 rFm);
floatx80 floatx80_pow(floatx80 rFn, floatx80 rFm);
floatx80 floatx80_pol(floatx80 rFn, floatx80 rFm);
static floatx80 floatx80_rsf(struct roundingData *roundData, floatx80 rFn, floatx80 rFm)
static floatx80 floatx80_rdv(struct roundingData *roundData, floatx80 rFn, floatx80 rFm)
static floatx80 (*const dyadic_extended[16])(struct roundingData*, floatx80 rFn, floatx80 rFm) = ;
static floatx80 floatx80_mvf(struct roundingData *roundData, floatx80 rFm)
static floatx80 floatx80_mnf(struct roundingData *roundData, floatx80 rFm)
static floatx80 floatx80_abs(struct roundingData *roundData, floatx80 rFm)
static floatx80 (*const monadic_extended[16])(struct roundingData*, floatx80 rFm) = ;
unsigned int ExtendedCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd)
