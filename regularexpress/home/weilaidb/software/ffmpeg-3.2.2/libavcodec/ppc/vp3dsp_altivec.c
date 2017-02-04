#if HAVE_ALTIVEC
static const vec_s16 constants =
;
#if HAVE_BIGENDIAN
static const vec_u8 interleave_high =
;
static const vec_u8 interleave_high =
;
#define IDCT_START \
vec_s16 A, B, C, D, Ad, Bd, Cd, Dd, E, F, G, H;\
vec_s16 Ed, Gd, Add, Bdd, Fd, Hd;\
vec_s16 eight = vec_splat_s16(8);\
vec_u16 four = vec_splat_u16(4);\
\
vec_s16 C1 = vec_splat(constants, 1);\
vec_s16 C2 = vec_splat(constants, 2);\
vec_s16 C3 = vec_splat(constants, 3);\
vec_s16 C4 = vec_splat(constants, 4);\
vec_s16 C5 = vec_splat(constants, 5);\
vec_s16 C6 = vec_splat(constants, 6);\
vec_s16 C7 = vec_splat(constants, 7);\
\
vec_s16 b0 = vec_ld(0x00, block);\
vec_s16 b1 = vec_ld(0x10, block);\
vec_s16 b2 = vec_ld(0x20, block);\
vec_s16 b3 = vec_ld(0x30, block);\
vec_s16 b4 = vec_ld(0x40, block);\
vec_s16 b5 = vec_ld(0x50, block);\
vec_s16 b6 = vec_ld(0x60, block);\
vec_s16 b7 = vec_ld(0x70, block);
M15
M16
IDCT_1D\
A = vec_add(M16(b1, C1), M15(b7, C7));\
B = vec_sub(M15(b1, C7), M16(b7, C1));\
C = vec_add(M16(b3, C3), M16(b5, C5));\
D = vec_sub(M16(b5, C3), M16(b3, C5));\
\
Ad = M16(vec_sub(A, C), C4);\
Bd = M16(vec_sub(B, D), C4);\
\
Cd = vec_add(A, C);\
Dd = vec_add(B, D);\
\
E = ADD(M16(vec_add(b0, b4), C4));\
F = ADD(M16(vec_sub(b0, b4), C4));\
\
G = vec_add(M16(b2, C2), M15(b6, C6));\
H = vec_sub(M15(b2, C6), M16(b6, C2));\
\
Ed = vec_sub(E, G);\
Gd = vec_add(E, G);\
\
Add = vec_add(F, Ad);\
Bdd = vec_sub(Bd, H);\
\
Fd = vec_sub(F, Ad);\
Hd = vec_add(Bd, H);\
\
b0 = SHIFT(vec_add(Gd, Cd));\
b7 = SHIFT(vec_sub(Gd, Cd));\
\
b1 = SHIFT(vec_add(Add, Hd));\
b2 = SHIFT(vec_sub(Add, Hd));\
\
b3 = SHIFT(vec_add(Ed, Dd));\
b4 = SHIFT(vec_sub(Ed, Dd));\
\
b5 = SHIFT(vec_add(Fd, Bdd));\
b6 = SHIFT(vec_sub(Fd, Bdd));
NOP a
ADD8 vec_add(a, eight)
SHIFT4 vec_sra(a, four)
vp3_idct_put_altivec
vp3_idct_add_altivec
ff_vp3dsp_init_ppc
