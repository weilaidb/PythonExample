static struct vfp_single vfp_single_default_qnan = ;
static void vfp_single_dump(const char *str, struct vfp_single *s)
static void vfp_single_normalise_denormal(struct vfp_single *vs)
#define vfp_single_normaliseround(sd,vsd,fpscr,except,func) __vfp_single_normaliseround(sd,vsd,fpscr,except)
u32 __vfp_single_normaliseround(int sd, struct vfp_single *vs, u32 fpscr, u32 exceptions)
u32 vfp_single_normaliseround(int sd, struct vfp_single *vs, u32 fpscr, u32 exceptions, const char *func)
static u32
vfp_propagate_nan(struct vfp_single *vsd, struct vfp_single *vsn,
struct vfp_single *vsm, u32 fpscr)
static u32 vfp_single_fabs(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fcpy(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fneg(int sd, int unused, s32 m, u32 fpscr)
static const u16 sqrt_oddadjust[] = ;
static const u16 sqrt_evenadjust[] = ;
u32 vfp_estimate_sqrt_significand(u32 exponent, u32 significand)
static u32 vfp_single_fsqrt(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_compare(int sd, int signal_on_qnan, s32 m, u32 fpscr)
static u32 vfp_single_fcmp(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fcmpe(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fcmpz(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fcmpez(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fcvtd(int dd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fuito(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_fsito(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_ftoui(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_ftouiz(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_ftosi(int sd, int unused, s32 m, u32 fpscr)
static u32 vfp_single_ftosiz(int sd, int unused, s32 m, u32 fpscr)
static struct op fops_ext[32] = ;
static u32
vfp_single_fadd_nonnumber(struct vfp_single *vsd, struct vfp_single *vsn,
struct vfp_single *vsm, u32 fpscr)
static u32
vfp_single_add(struct vfp_single *vsd, struct vfp_single *vsn,
struct vfp_single *vsm, u32 fpscr)
static u32
vfp_single_multiply(struct vfp_single *vsd, struct vfp_single *vsn, struct vfp_single *vsm, u32 fpscr)
#define NEG_MULTIPLY	(1 << 0)
#define NEG_SUBTRACT	(1 << 1)
static u32
vfp_single_multiply_accumulate(int sd, int sn, s32 m, u32 fpscr, u32 negate, char *func)
static u32 vfp_single_fmac(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fnmac(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fmsc(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fnmsc(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fmul(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fnmul(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fadd(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fsub(int sd, int sn, s32 m, u32 fpscr)
static u32 vfp_single_fdiv(int sd, int sn, s32 m, u32 fpscr)
static struct op fops[16] = ;
#define FREG_BANK(x)	((x) & 0x18)
#define FREG_IDX(x)	((x) & 7)
u32 vfp_single_cpdo(u32 inst, u32 fpscr)
