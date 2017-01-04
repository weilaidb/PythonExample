static inline u32 vfp_shiftright32jamming(u32 val, unsigned int shift)
static inline u64 vfp_shiftright64jamming(u64 val, unsigned int shift)
static inline u32 vfp_hi64to32jamming(u64 val)
static inline void add128(u64 *resh, u64 *resl, u64 nh, u64 nl, u64 mh, u64 ml)
static inline void sub128(u64 *resh, u64 *resl, u64 nh, u64 nl, u64 mh, u64 ml)
static inline void mul64to128(u64 *resh, u64 *resl, u64 n, u64 m)
static inline void shift64left(u64 *resh, u64 *resl, u64 n)
static inline u64 vfp_hi64multiply64(u64 n, u64 m)
static inline u64 vfp_estimate_div128to64(u64 nh, u64 nl, u64 m)
#define vfp_sign_negate(sign)	(sign ^ 0x8000)
struct vfp_single ;
extern s32 vfp_get_float(unsigned int reg);
extern void vfp_put_float(s32 val, unsigned int reg);
#define VFP_SINGLE_MANTISSA_BITS	(23)
#define VFP_SINGLE_EXPONENT_BITS	(8)
#define VFP_SINGLE_LOW_BITS		(32 - VFP_SINGLE_MANTISSA_BITS - 2)
#define VFP_SINGLE_LOW_BITS_MASK	((1 << VFP_SINGLE_LOW_BITS) - 1)
#define VFP_SINGLE_SIGNIFICAND_QNAN	(1 << (VFP_SINGLE_MANTISSA_BITS - 1 + VFP_SINGLE_LOW_BITS))
#define vfp_single_packed_sign(v)	((v) & 0x80000000)
#define vfp_single_packed_negate(v)	((v) ^ 0x80000000)
#define vfp_single_packed_abs(v)	((v) & ~0x80000000)
#define vfp_single_packed_exponent(v)	(((v) >> VFP_SINGLE_MANTISSA_BITS) & ((1 << VFP_SINGLE_EXPONENT_BITS) - 1))
#define vfp_single_packed_mantissa(v)	((v) & ((1 << VFP_SINGLE_MANTISSA_BITS) - 1))
static inline void vfp_single_unpack(struct vfp_single *s, s32 val)
static inline s32 vfp_single_pack(struct vfp_single *s)
#define VFP_NUMBER		(1<<0)
#define VFP_ZERO		(1<<1)
#define VFP_DENORMAL		(1<<2)
#define VFP_INFINITY		(1<<3)
#define VFP_NAN			(1<<4)
#define VFP_NAN_SIGNAL		(1<<5)
#define VFP_QNAN		(VFP_NAN)
#define VFP_SNAN		(VFP_NAN|VFP_NAN_SIGNAL)
static inline int vfp_single_type(struct vfp_single *s)
#define vfp_single_normaliseround(sd,vsd,fpscr,except,func) __vfp_single_normaliseround(sd,vsd,fpscr,except)
u32 __vfp_single_normaliseround(int sd, struct vfp_single *vs, u32 fpscr, u32 exceptions);
u32 vfp_single_normaliseround(int sd, struct vfp_single *vs, u32 fpscr, u32 exceptions, const char *func);
struct vfp_double ;
#define VFP_REG_ZERO	32
#define VFP_REG_ZERO	16
extern u64 vfp_get_double(unsigned int reg);
extern void vfp_put_double(u64 val, unsigned int reg);
#define VFP_DOUBLE_MANTISSA_BITS	(52)
#define VFP_DOUBLE_EXPONENT_BITS	(11)
#define VFP_DOUBLE_LOW_BITS		(64 - VFP_DOUBLE_MANTISSA_BITS - 2)
#define VFP_DOUBLE_LOW_BITS_MASK	((1 << VFP_DOUBLE_LOW_BITS) - 1)
#define VFP_DOUBLE_SIGNIFICAND_QNAN	(1ULL << (VFP_DOUBLE_MANTISSA_BITS - 1 + VFP_DOUBLE_LOW_BITS))
#define vfp_double_packed_sign(v)	((v) & (1ULL << 63))
#define vfp_double_packed_negate(v)	((v) ^ (1ULL << 63))
#define vfp_double_packed_abs(v)	((v) & ~(1ULL << 63))
#define vfp_double_packed_exponent(v)	(((v) >> VFP_DOUBLE_MANTISSA_BITS) & ((1 << VFP_DOUBLE_EXPONENT_BITS) - 1))
#define vfp_double_packed_mantissa(v)	((v) & ((1ULL << VFP_DOUBLE_MANTISSA_BITS) - 1))
static inline void vfp_double_unpack(struct vfp_double *s, s64 val)
static inline s64 vfp_double_pack(struct vfp_double *s)
static inline int vfp_double_type(struct vfp_double *s)
u32 vfp_double_normaliseround(int dd, struct vfp_double *vd, u32 fpscr, u32 exceptions, const char *func);
u32 vfp_estimate_sqrt_significand(u32 exponent, u32 significand);
#define VFP_NAN_FLAG	0x100
#define VFP_EXCEPTION_ERROR	((u32)-1 & ~VFP_NAN_FLAG)
#define OP_SCALAR	(1 << 0)
#define OP_SD		(1 << 1)
#define OP_DD		(1 << 1)
#define OP_SM		(1 << 2)
struct op ;
extern void vfp_save_state(void *location, u32 fpexc);
