const struct fp_ext fp_QNaN =
;
const struct fp_ext fp_Inf =
;
struct fp_ext *
fp_fabs(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fneg(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fadd(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fsub(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fcmp(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_ftst(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fmul(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fdiv(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fsglmul(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fsgldiv(struct fp_ext *dest, struct fp_ext *src)
static void fp_roundint(struct fp_ext *dest, int mode)
static struct fp_ext *
modrem_kernel(struct fp_ext *dest, struct fp_ext *src, int mode)
struct fp_ext *
fp_fmod(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_frem(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fint(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fintrz(struct fp_ext *dest, struct fp_ext *src)
struct fp_ext *
fp_fscale(struct fp_ext *dest, struct fp_ext *src)
