#define CHROMA_MC8_ALTIVEC_CORE(BIAS1, BIAS2) \
vsrc2ssH = (vec_s16)VEC_MERGEH(zero_u8v,(vec_u8)vsrc2uc);\
vsrc3ssH = (vec_s16)VEC_MERGEH(zero_u8v,(vec_u8)vsrc3uc);\
\
psum = vec_mladd(vA, vsrc0ssH, BIAS1);\
psum = vec_mladd(vB, vsrc1ssH, psum);\
psum = vec_mladd(vC, vsrc2ssH, psum);\
psum = vec_mladd(vD, vsrc3ssH, psum);\
psum = BIAS2(psum);\
psum = vec_sr(psum, v6us);\
\
vdst = vec_ld(0, dst);\
ppsum = (vec_u8)vec_pack(psum, psum);\
vfdst = vec_perm(vdst, ppsum, fperm);\
\
OP_U8_ALTIVEC(fsum, vfdst, vdst);\
\
vec_st(fsum, 0, dst);\
\
vsrc0ssH = vsrc2ssH;\
vsrc1ssH = vsrc3ssH;\
\
dst += stride;\
src += stride;
#define CHROMA_MC8_ALTIVEC_CORE_SIMPLE \
\
vsrc0ssH = (vec_s16)VEC_MERGEH(zero_u8v,(vec_u8)vsrc0uc);\
vsrc1ssH = (vec_s16)VEC_MERGEH(zero_u8v,(vec_u8)vsrc1uc);\
\
psum = vec_mladd(vA, vsrc0ssH, v32ss);\
psum = vec_mladd(vE, vsrc1ssH, psum);\
psum = vec_sr(psum, v6us);\
\
vdst = vec_ld(0, dst);\
ppsum = (vec_u8)vec_pack(psum, psum);\
vfdst = vec_perm(vdst, ppsum, fperm);\
\
OP_U8_ALTIVEC(fsum, vfdst, vdst);\
\
vec_st(fsum, 0, dst);\
\
dst += stride;\
src += stride;
#define noop(a) a
#define add28(a) vec_add(v28ss, a)
#if HAVE_BIGENDIAN
#define GET_VSRC1(vs0, off, b, perm0, s)
#define GET_VSRC(vs0, vs1, off, b, perm0, perm1, s)
#define GET_VSRC1(vs0, off, b, perm0, s)
#define GET_VSRC(vs0, vs1, off, b, perm0, perm1, s)
static void PREFIX_h264_chroma_mc8_altivec(uint8_t * dst, uint8_t * src,
int stride, int h, int x, int y)
static void PREFIX_no_rnd_vc1_chroma_mc8_altivec(uint8_t * dst, uint8_t * src, int stride, int h, int x, int y)
#undef noop
#undef add28
#undef CHROMA_MC8_ALTIVEC_CORE
