static struct vfp_double vfp_double_default_qnan = ;
static void vfp_double_dump(const char *str, struct vfp_double *d)
static void vfp_double_normalise_denormal(struct vfp_double *vd)
u32 vfp_double_normaliseround(int dd, struct vfp_double *vd, u32 fpscr, u32 exceptions, const char *func)
static u32
vfp_propagate_nan(struct vfp_double *vdd, struct vfp_double *vdn,
struct vfp_double *vdm, u32 fpscr)
static u32 vfp_double_fabs(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fcpy(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fneg(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fsqrt(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_compare(int dd, int signal_on_qnan, int dm, u32 fpscr)
static u32 vfp_double_fcmp(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fcmpe(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fcmpz(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fcmpez(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fcvts(int sd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fuito(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_fsito(int dd, int unused, int dm, u32 fpscr)
static u32 vfp_double_ftoui(int sd, int unused, int dm, u32 fpscr)
static u32 vfp_double_ftouiz(int sd, int unused, int dm, u32 fpscr)
static u32 vfp_double_ftosi(int sd, int unused, int dm, u32 fpscr)
static u32 vfp_double_ftosiz(int dd, int unused, int dm, u32 fpscr)
static struct op fops_ext[32] = ;
static u32
vfp_double_fadd_nonnumber(struct vfp_double *vdd, struct vfp_double *vdn,
struct vfp_double *vdm, u32 fpscr)
static u32
vfp_double_add(struct vfp_double *vdd, struct vfp_double *vdn,
struct vfp_double *vdm, u32 fpscr)
static u32
vfp_double_multiply(struct vfp_double *vdd, struct vfp_double *vdn,
struct vfp_double *vdm, u32 fpscr)
#define NEG_MULTIPLY	(1 << 0)
#define NEG_SUBTRACT	(1 << 1)
static u32
vfp_double_multiply_accumulate(int dd, int dn, int dm, u32 fpscr, u32 negate, char *func)
static u32 vfp_double_fmac(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fnmac(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fmsc(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fnmsc(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fmul(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fnmul(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fadd(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fsub(int dd, int dn, int dm, u32 fpscr)
static u32 vfp_double_fdiv(int dd, int dn, int dm, u32 fpscr)
static struct op fops[16] = ;
#define FREG_BANK(x)	((x) & 0x0c)
#define FREG_IDX(x)	((x) & 3)
u32 vfp_double_cpdo(u32 inst, u32 fpscr)
