#define AVUTIL_MIPS_GENERIC_MACROS_MSA_H
#define ALIGNMENT           16
#define ALLOC_ALIGNED(align) __attribute__ ((aligned((align) << 1)))
#define LD_B(RTYPE, psrc) *((RTYPE *)(psrc))
#define LD_UB(...) LD_B(v16u8, __VA_ARGS__)
#define LD_SB(...) LD_B(v16i8, __VA_ARGS__)
#define LD_H(RTYPE, psrc) *((RTYPE *)(psrc))
#define LD_UH(...) LD_H(v8u16, __VA_ARGS__)
#define LD_SH(...) LD_H(v8i16, __VA_ARGS__)
#define LD_W(RTYPE, psrc) *((RTYPE *)(psrc))
#define LD_UW(...) LD_W(v4u32, __VA_ARGS__)
#define LD_SW(...) LD_W(v4i32, __VA_ARGS__)
#define ST_B(RTYPE, in, pdst) *((RTYPE *)(pdst)) = (in)
#define ST_UB(...) ST_B(v16u8, __VA_ARGS__)
#define ST_SB(...) ST_B(v16i8, __VA_ARGS__)
#define ST_H(RTYPE, in, pdst) *((RTYPE *)(pdst)) = (in)
#define ST_UH(...) ST_H(v8u16, __VA_ARGS__)
#define ST_SH(...) ST_H(v8i16, __VA_ARGS__)
#define ST_W(RTYPE, in, pdst) *((RTYPE *)(pdst)) = (in)
#define ST_UW(...) ST_W(v4u32, __VA_ARGS__)
#define ST_SW(...) ST_W(v4i32, __VA_ARGS__)
#if (__mips_isa_rev >= 6)
#define LW(psrc)                           \
(  )
#if (__mips == 64)
#define LD(psrc)                           \
(  )
#define LD(psrc)                                              \
(  )
#define SH(val, pdst)                      \
#define SW(val, pdst)                      \
#define SD(val, pdst)                      \
#define LW(psrc)                           \
(  )
#if (__mips == 64)
#define LD(psrc)                           \
(  )
#define LD(psrc)                                              \
(  )
#define SH(val, pdst)                      \
#define SW(val, pdst)                      \
#define SD(val, pdst)                                          \
#define LW4(psrc, stride, out0, out1, out2, out3)  \
#define LD2(psrc, stride, out0, out1)  \
#define LD4(psrc, stride, out0, out1, out2, out3)  \
#define SW4(in0, in1, in2, in3, pdst, stride)  \
#define SD4(in0, in1, in2, in3, pdst, stride)  \
#define LD_B2(RTYPE, psrc, stride, out0, out1)  \
#define LD_UB2(...) LD_B2(v16u8, __VA_ARGS__)
#define LD_SB2(...) LD_B2(v16i8, __VA_ARGS__)
#define LD_B3(RTYPE, psrc, stride, out0, out1, out2)  \
#define LD_UB3(...) LD_B3(v16u8, __VA_ARGS__)
#define LD_SB3(...) LD_B3(v16i8, __VA_ARGS__)
#define LD_B4(RTYPE, psrc, stride, out0, out1, out2, out3)   \
#define LD_UB4(...) LD_B4(v16u8, __VA_ARGS__)
#define LD_SB4(...) LD_B4(v16i8, __VA_ARGS__)
#define LD_B5(RTYPE, psrc, stride, out0, out1, out2, out3, out4)  \
#define LD_UB5(...) LD_B5(v16u8, __VA_ARGS__)
#define LD_SB5(...) LD_B5(v16i8, __VA_ARGS__)
#define LD_B6(RTYPE, psrc, stride, out0, out1, out2, out3, out4, out5)  \
#define LD_UB6(...) LD_B6(v16u8, __VA_ARGS__)
#define LD_SB6(...) LD_B6(v16i8, __VA_ARGS__)
#define LD_B7(RTYPE, psrc, stride,                               \
out0, out1, out2, out3, out4, out5, out6)          \
#define LD_UB7(...) LD_B7(v16u8, __VA_ARGS__)
#define LD_SB7(...) LD_B7(v16i8, __VA_ARGS__)
#define LD_B8(RTYPE, psrc, stride,                                      \
out0, out1, out2, out3, out4, out5, out6, out7)           \
#define LD_UB8(...) LD_B8(v16u8, __VA_ARGS__)
#define LD_SB8(...) LD_B8(v16i8, __VA_ARGS__)
#define LD_H2(RTYPE, psrc, stride, out0, out1)  \
#define LD_UH2(...) LD_H2(v8u16, __VA_ARGS__)
#define LD_SH2(...) LD_H2(v8i16, __VA_ARGS__)
#define LD_H4(RTYPE, psrc, stride, out0, out1, out2, out3)  \
#define LD_UH4(...) LD_H4(v8u16, __VA_ARGS__)
#define LD_SH4(...) LD_H4(v8i16, __VA_ARGS__)
#define LD_H6(RTYPE, psrc, stride, out0, out1, out2, out3, out4, out5)  \
#define LD_UH6(...) LD_H6(v8u16, __VA_ARGS__)
#define LD_SH6(...) LD_H6(v8i16, __VA_ARGS__)
#define LD_H8(RTYPE, psrc, stride,                                      \
out0, out1, out2, out3, out4, out5, out6, out7)           \
#define LD_UH8(...) LD_H8(v8u16, __VA_ARGS__)
#define LD_SH8(...) LD_H8(v8i16, __VA_ARGS__)
#define LD_H16(RTYPE, psrc, stride,                                   \
out0, out1, out2, out3, out4, out5, out6, out7,        \
out8, out9, out10, out11, out12, out13, out14, out15)  \
#define LD_SH16(...) LD_H16(v8i16, __VA_ARGS__)
#define LD4x4_SH(psrc, out0, out1, out2, out3)                \
#define LD_SW2(psrc, stride, out0, out1)  \
#define ST_B2(RTYPE, in0, in1, pdst, stride)  \
#define ST_UB2(...) ST_B2(v16u8, __VA_ARGS__)
#define ST_SB2(...) ST_B2(v16i8, __VA_ARGS__)
#define ST_B4(RTYPE, in0, in1, in2, in3, pdst, stride)    \
#define ST_UB4(...) ST_B4(v16u8, __VA_ARGS__)
#define ST_SB4(...) ST_B4(v16i8, __VA_ARGS__)
#define ST_B8(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,        \
pdst, stride)                                         \
#define ST_UB8(...) ST_B8(v16u8, __VA_ARGS__)
#define ST_H2(RTYPE, in0, in1, pdst, stride)  \
#define ST_UH2(...) ST_H2(v8u16, __VA_ARGS__)
#define ST_SH2(...) ST_H2(v8i16, __VA_ARGS__)
#define ST_H4(RTYPE, in0, in1, in2, in3, pdst, stride)    \
#define ST_SH4(...) ST_H4(v8i16, __VA_ARGS__)
#define ST_H6(RTYPE, in0, in1, in2, in3, in4, in5, pdst, stride)  \
#define ST_SH6(...) ST_H6(v8i16, __VA_ARGS__)
#define ST_H8(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define ST_SH8(...) ST_H8(v8i16, __VA_ARGS__)
#define ST_SW2(in0, in1, pdst, stride)  \
#define ST_SW8(in0, in1, in2, in3, in4, in5, in6, in7,  \
pdst, stride)                            \
#define ST2x4_UB(in, stidx, pdst, stride)              \
#define ST4x2_UB(in, pdst, stride)             \
#define ST4x4_UB(in0, in1, idx0, idx1, idx2, idx3, pdst, stride)  \
#define ST4x8_UB(in0, in1, pdst, stride)                            \
#define ST6x4_UB(in0, in1, pdst, stride)       \
#define ST8x1_UB(in, pdst)                   \
#define ST8x2_UB(in, pdst, stride)             \
#define ST8x4_UB(in0, in1, pdst, stride)                      \
#define ST8x8_UB(in0, in1, in2, in3, pdst, stride)        \
#define ST12x4_UB(in0, in1, in2, pdst, stride)                \
#define ST12x8_UB(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define AVER_UB2(RTYPE, in0, in1, in2, in3, out0, out1)       \
#define AVER_UB2_UB(...) AVER_UB2(v16u8, __VA_ARGS__)
#define AVER_UB4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7, \
out0, out1, out2, out3)                        \
#define AVER_UB4_UB(...) AVER_UB4(v16u8, __VA_ARGS__)
#define SLDI_B2_0(RTYPE, in0, in1, out0, out1, slide_val)                 \
#define SLDI_B2_0_UB(...) SLDI_B2_0(v16u8, __VA_ARGS__)
#define SLDI_B2_0_SB(...) SLDI_B2_0(v16i8, __VA_ARGS__)
#define SLDI_B2_0_SW(...) SLDI_B2_0(v4i32, __VA_ARGS__)
#define SLDI_B3_0(RTYPE, in0, in1, in2, out0, out1, out2,  slide_val)     \
#define SLDI_B3_0_UB(...) SLDI_B3_0(v16u8, __VA_ARGS__)
#define SLDI_B3_0_SB(...) SLDI_B3_0(v16i8, __VA_ARGS__)
#define SLDI_B4_0(RTYPE, in0, in1, in2, in3,            \
out0, out1, out2, out3, slide_val)    \
#define SLDI_B4_0_UB(...) SLDI_B4_0(v16u8, __VA_ARGS__)
#define SLDI_B4_0_SB(...) SLDI_B4_0(v16i8, __VA_ARGS__)
#define SLDI_B4_0_SH(...) SLDI_B4_0(v8i16, __VA_ARGS__)
#define SLDI_B2(RTYPE, in0_0, in0_1, in1_0, in1_1, out0, out1, slide_val)  \
#define SLDI_B2_UB(...) SLDI_B2(v16u8, __VA_ARGS__)
#define SLDI_B2_SB(...) SLDI_B2(v16i8, __VA_ARGS__)
#define SLDI_B2_SH(...) SLDI_B2(v8i16, __VA_ARGS__)
#define SLDI_B3(RTYPE, in0_0, in0_1, in0_2, in1_0, in1_1, in1_2,           \
out0, out1, out2, slide_val)                               \
#define SLDI_B3_SB(...) SLDI_B3(v16i8, __VA_ARGS__)
#define SLDI_B3_UH(...) SLDI_B3(v8u16, __VA_ARGS__)
#define VSHF_B2(RTYPE, in0, in1, in2, in3, mask0, mask1, out0, out1)       \
#define VSHF_B2_UB(...) VSHF_B2(v16u8, __VA_ARGS__)
#define VSHF_B2_SB(...) VSHF_B2(v16i8, __VA_ARGS__)
#define VSHF_B2_UH(...) VSHF_B2(v8u16, __VA_ARGS__)
#define VSHF_B2_SH(...) VSHF_B2(v8i16, __VA_ARGS__)
#define VSHF_B3(RTYPE, in0, in1, in2, in3, in4, in5, mask0, mask1, mask2,  \
out0, out1, out2)                                          \
#define VSHF_B3_SB(...) VSHF_B3(v16i8, __VA_ARGS__)
#define VSHF_B4(RTYPE, in0, in1, mask0, mask1, mask2, mask3,       \
out0, out1, out2, out3)                            \
#define VSHF_B4_SB(...) VSHF_B4(v16i8, __VA_ARGS__)
#define VSHF_B4_SH(...) VSHF_B4(v8i16, __VA_ARGS__)
#define VSHF_H2(RTYPE, in0, in1, in2, in3, mask0, mask1, out0, out1)       \
#define VSHF_H2_SH(...) VSHF_H2(v8i16, __VA_ARGS__)
#define VSHF_H3(RTYPE, in0, in1, in2, in3, in4, in5, mask0, mask1, mask2,  \
out0, out1, out2)                                          \
#define VSHF_H3_SH(...) VSHF_H3(v8i16, __VA_ARGS__)
#define VSHF_W2(RTYPE, in0, in1, in2, in3, mask0, mask1, out0, out1)      \
#define VSHF_W2_SB(...) VSHF_W2(v16i8, __VA_ARGS__)
#define DOTP_UB2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DOTP_UB2_UH(...) DOTP_UB2(v8u16, __VA_ARGS__)
#define DOTP_UB4(RTYPE, mult0, mult1, mult2, mult3,           \
cnst0, cnst1, cnst2, cnst3,                  \
out0, out1, out2, out3)                      \
#define DOTP_UB4_UH(...) DOTP_UB4(v8u16, __VA_ARGS__)
#define DOTP_SB2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DOTP_SB2_SH(...) DOTP_SB2(v8i16, __VA_ARGS__)
#define DOTP_SB3(RTYPE, mult0, mult1, mult2, cnst0, cnst1, cnst2,  \
out0, out1, out2)                                 \
#define DOTP_SB3_SH(...) DOTP_SB3(v8i16, __VA_ARGS__)
#define DOTP_SB4(RTYPE, mult0, mult1, mult2, mult3,                   \
cnst0, cnst1, cnst2, cnst3, out0, out1, out2, out3)  \
#define DOTP_SB4_SH(...) DOTP_SB4(v8i16, __VA_ARGS__)
#define DOTP_SH2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DOTP_SH2_SW(...) DOTP_SH2(v4i32, __VA_ARGS__)
#define DOTP_SH4(RTYPE, mult0, mult1, mult2, mult3,           \
cnst0, cnst1, cnst2, cnst3,                  \
out0, out1, out2, out3)                      \
#define DOTP_SH4_SW(...) DOTP_SH4(v4i32, __VA_ARGS__)
#define DPADD_SB2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DPADD_SB2_SH(...) DPADD_SB2(v8i16, __VA_ARGS__)
#define DPADD_SB4(RTYPE, mult0, mult1, mult2, mult3,                   \
cnst0, cnst1, cnst2, cnst3, out0, out1, out2, out3)  \
#define DPADD_SB4_SH(...) DPADD_SB4(v8i16, __VA_ARGS__)
#define DPADD_UB2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DPADD_UB2_UH(...) DPADD_UB2(v8u16, __VA_ARGS__)
#define DPADD_SH2(RTYPE, mult0, mult1, cnst0, cnst1, out0, out1)   \
#define DPADD_SH2_SW(...) DPADD_SH2(v4i32, __VA_ARGS__)
#define DPADD_SH4(RTYPE, mult0, mult1, mult2, mult3,                   \
cnst0, cnst1, cnst2, cnst3, out0, out1, out2, out3)  \
#define DPADD_SH4_SW(...) DPADD_SH4(v4i32, __VA_ARGS__)
#define MIN_UH2(RTYPE, in0, in1, min_vec)               \
#define MIN_UH2_UH(...) MIN_UH2(v8u16, __VA_ARGS__)
#define MIN_UH4(RTYPE, in0, in1, in2, in3, min_vec)  \
#define MIN_UH4_UH(...) MIN_UH4(v8u16, __VA_ARGS__)
#define CLIP_SH(in, min, max)                           \
(  )
#define CLIP_SH_0_255(in)                                 \
(  )
#define CLIP_SH2_0_255(in0, in1)  \
#define CLIP_SH4_0_255(in0, in1, in2, in3)  \
#define CLIP_SW_0_255(in)                                 \
(  )
#define HADD_SW_S32(in)                               \
(  )
#define HADD_UH_U32(in)                                  \
(  )
#define HADD_SB2(RTYPE, in0, in1, out0, out1)                 \
#define HADD_SB2_SH(...) HADD_SB2(v8i16, __VA_ARGS__)
#define HADD_SB4(RTYPE, in0, in1, in2, in3, out0, out1, out2, out3)  \
#define HADD_SB4_UH(...) HADD_SB4(v8u16, __VA_ARGS__)
#define HADD_SB4_SH(...) HADD_SB4(v8i16, __VA_ARGS__)
#define HADD_UB2(RTYPE, in0, in1, out0, out1)                 \
#define HADD_UB2_UH(...) HADD_UB2(v8u16, __VA_ARGS__)
#define HADD_UB3(RTYPE, in0, in1, in2, out0, out1, out2)      \
#define HADD_UB3_UH(...) HADD_UB3(v8u16, __VA_ARGS__)
#define HADD_UB4(RTYPE, in0, in1, in2, in3, out0, out1, out2, out3)  \
#define HADD_UB4_UB(...) HADD_UB4(v16u8, __VA_ARGS__)
#define HADD_UB4_UH(...) HADD_UB4(v8u16, __VA_ARGS__)
#define HADD_UB4_SH(...) HADD_UB4(v8i16, __VA_ARGS__)
#define HSUB_UB2(RTYPE, in0, in1, out0, out1)                 \
#define HSUB_UB2_UH(...) HSUB_UB2(v8u16, __VA_ARGS__)
#define HSUB_UB2_SH(...) HSUB_UB2(v8i16, __VA_ARGS__)
#define HSUB_UB4(RTYPE, in0, in1, in2, in3, out0, out1, out2, out3)  \
#define HSUB_UB4_UH(...) HSUB_UB4(v8u16, __VA_ARGS__)
#define HSUB_UB4_SH(...) HSUB_UB4(v8i16, __VA_ARGS__)
#define SAD_UB2_UH(in0, in1, ref0, ref1)                        \
(  )
#define INSERT_W2(RTYPE, in0, in1, out)                 \
#define INSERT_W2_UB(...) INSERT_W2(v16u8, __VA_ARGS__)
#define INSERT_W2_SB(...) INSERT_W2(v16i8, __VA_ARGS__)
#define INSERT_W4(RTYPE, in0, in1, in2, in3, out)       \
#define INSERT_W4_UB(...) INSERT_W4(v16u8, __VA_ARGS__)
#define INSERT_W4_SB(...) INSERT_W4(v16i8, __VA_ARGS__)
#define INSERT_W4_SW(...) INSERT_W4(v4i32, __VA_ARGS__)
#define INSERT_D2(RTYPE, in0, in1, out)                 \
#define INSERT_D2_UB(...) INSERT_D2(v16u8, __VA_ARGS__)
#define INSERT_D2_SB(...) INSERT_D2(v16i8, __VA_ARGS__)
#define INSERT_D2_SD(...) INSERT_D2(v2i64, __VA_ARGS__)
#define ILVEV_B2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVEV_B2_UB(...) ILVEV_B2(v16u8, __VA_ARGS__)
#define ILVEV_B2_SB(...) ILVEV_B2(v16i8, __VA_ARGS__)
#define ILVEV_B2_SH(...) ILVEV_B2(v8i16, __VA_ARGS__)
#define ILVEV_B2_SD(...) ILVEV_B2(v2i64, __VA_ARGS__)
#define ILVEV_H2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVEV_H2_UB(...) ILVEV_H2(v16u8, __VA_ARGS__)
#define ILVEV_H2_SH(...) ILVEV_H2(v8i16, __VA_ARGS__)
#define ILVEV_H2_SW(...) ILVEV_H2(v4i32, __VA_ARGS__)
#define ILVEV_W2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVEV_W2_UB(...) ILVEV_W2(v16u8, __VA_ARGS__)
#define ILVEV_W2_SB(...) ILVEV_W2(v16i8, __VA_ARGS__)
#define ILVEV_W2_UH(...) ILVEV_W2(v8u16, __VA_ARGS__)
#define ILVEV_W2_SD(...) ILVEV_W2(v2i64, __VA_ARGS__)
#define ILVEV_D2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVEV_D2_UB(...) ILVEV_D2(v16u8, __VA_ARGS__)
#define ILVEV_D2_SB(...) ILVEV_D2(v16i8, __VA_ARGS__)
#define ILVEV_D2_SW(...) ILVEV_D2(v4i32, __VA_ARGS__)
#define ILVL_B2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVL_B2_UB(...) ILVL_B2(v16u8, __VA_ARGS__)
#define ILVL_B2_SB(...) ILVL_B2(v16i8, __VA_ARGS__)
#define ILVL_B2_UH(...) ILVL_B2(v8u16, __VA_ARGS__)
#define ILVL_B2_SH(...) ILVL_B2(v8i16, __VA_ARGS__)
#define ILVL_B4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVL_B4_UB(...) ILVL_B4(v16u8, __VA_ARGS__)
#define ILVL_B4_SB(...) ILVL_B4(v16i8, __VA_ARGS__)
#define ILVL_B4_UH(...) ILVL_B4(v8u16, __VA_ARGS__)
#define ILVL_B4_SH(...) ILVL_B4(v8i16, __VA_ARGS__)
#define ILVL_H2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVL_H2_SH(...) ILVL_H2(v8i16, __VA_ARGS__)
#define ILVL_H2_SW(...) ILVL_H2(v4i32, __VA_ARGS__)
#define ILVL_H4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVL_H4_SH(...) ILVL_H4(v8i16, __VA_ARGS__)
#define ILVL_H4_SW(...) ILVL_H4(v4i32, __VA_ARGS__)
#define ILVL_W2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVL_W2_UB(...) ILVL_W2(v16u8, __VA_ARGS__)
#define ILVL_W2_SB(...) ILVL_W2(v16i8, __VA_ARGS__)
#define ILVL_W2_SH(...) ILVL_W2(v8i16, __VA_ARGS__)
#define ILVR_B2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVR_B2_UB(...) ILVR_B2(v16u8, __VA_ARGS__)
#define ILVR_B2_SB(...) ILVR_B2(v16i8, __VA_ARGS__)
#define ILVR_B2_UH(...) ILVR_B2(v8u16, __VA_ARGS__)
#define ILVR_B2_SH(...) ILVR_B2(v8i16, __VA_ARGS__)
#define ILVR_B2_SW(...) ILVR_B2(v4i32, __VA_ARGS__)
#define ILVR_B3(RTYPE, in0, in1, in2, in3, in4, in5, out0, out1, out2)  \
#define ILVR_B3_UB(...) ILVR_B3(v16u8, __VA_ARGS__)
#define ILVR_B3_UH(...) ILVR_B3(v8u16, __VA_ARGS__)
#define ILVR_B3_SH(...) ILVR_B3(v8i16, __VA_ARGS__)
#define ILVR_B4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVR_B4_UB(...) ILVR_B4(v16u8, __VA_ARGS__)
#define ILVR_B4_SB(...) ILVR_B4(v16i8, __VA_ARGS__)
#define ILVR_B4_UH(...) ILVR_B4(v8u16, __VA_ARGS__)
#define ILVR_B4_SH(...) ILVR_B4(v8i16, __VA_ARGS__)
#define ILVR_B4_SW(...) ILVR_B4(v4i32, __VA_ARGS__)
#define ILVR_B8(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,    \
in8, in9, in10, in11, in12, in13, in14, in15,     \
out0, out1, out2, out3, out4, out5, out6, out7)   \
#define ILVR_B8_UH(...) ILVR_B8(v8u16, __VA_ARGS__)
#define ILVR_H2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVR_H2_SH(...) ILVR_H2(v8i16, __VA_ARGS__)
#define ILVR_H2_SW(...) ILVR_H2(v4i32, __VA_ARGS__)
#define ILVR_H3(RTYPE, in0, in1, in2, in3, in4, in5, out0, out1, out2)  \
#define ILVR_H3_SH(...) ILVR_H3(v8i16, __VA_ARGS__)
#define ILVR_H4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVR_H4_SH(...) ILVR_H4(v8i16, __VA_ARGS__)
#define ILVR_H4_SW(...) ILVR_H4(v4i32, __VA_ARGS__)
#define ILVR_W2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define ILVR_W2_UB(...) ILVR_W2(v16u8, __VA_ARGS__)
#define ILVR_W2_SB(...) ILVR_W2(v16i8, __VA_ARGS__)
#define ILVR_W2_SH(...) ILVR_W2(v8i16, __VA_ARGS__)
#define ILVR_W4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVR_W4_SB(...) ILVR_W4(v16i8, __VA_ARGS__)
#define ILVR_W4_UB(...) ILVR_W4(v16u8, __VA_ARGS__)
#define ILVR_D2(RTYPE, in0, in1, in2, in3, out0, out1)          \
#define ILVR_D2_UB(...) ILVR_D2(v16u8, __VA_ARGS__)
#define ILVR_D2_SB(...) ILVR_D2(v16i8, __VA_ARGS__)
#define ILVR_D2_SH(...) ILVR_D2(v8i16, __VA_ARGS__)
#define ILVR_D3(RTYPE, in0, in1, in2, in3, in4, in5, out0, out1, out2)  \
#define ILVR_D3_SB(...) ILVR_D3(v16i8, __VA_ARGS__)
#define ILVR_D4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ILVR_D4_SB(...) ILVR_D4(v16i8, __VA_ARGS__)
#define ILVR_D4_UB(...) ILVR_D4(v16u8, __VA_ARGS__)
#define ILVRL_B2(RTYPE, in0, in1, out0, out1)               \
#define ILVRL_B2_UB(...) ILVRL_B2(v16u8, __VA_ARGS__)
#define ILVRL_B2_SB(...) ILVRL_B2(v16i8, __VA_ARGS__)
#define ILVRL_B2_UH(...) ILVRL_B2(v8u16, __VA_ARGS__)
#define ILVRL_B2_SH(...) ILVRL_B2(v8i16, __VA_ARGS__)
#define ILVRL_B2_SW(...) ILVRL_B2(v4i32, __VA_ARGS__)
#define ILVRL_H2(RTYPE, in0, in1, out0, out1)               \
#define ILVRL_H2_SB(...) ILVRL_H2(v16i8, __VA_ARGS__)
#define ILVRL_H2_SH(...) ILVRL_H2(v8i16, __VA_ARGS__)
#define ILVRL_H2_SW(...) ILVRL_H2(v4i32, __VA_ARGS__)
#define ILVRL_W2(RTYPE, in0, in1, out0, out1)               \
#define ILVRL_W2_UB(...) ILVRL_W2(v16u8, __VA_ARGS__)
#define ILVRL_W2_SH(...) ILVRL_W2(v8i16, __VA_ARGS__)
#define ILVRL_W2_SW(...) ILVRL_W2(v4i32, __VA_ARGS__)
#define MAXI_SH2(RTYPE, in0, in1, max_val)                 \
#define MAXI_SH2_UH(...) MAXI_SH2(v8u16, __VA_ARGS__)
#define MAXI_SH2_SH(...) MAXI_SH2(v8i16, __VA_ARGS__)
#define MAXI_SH4(RTYPE, in0, in1, in2, in3, max_val)  \
#define MAXI_SH4_UH(...) MAXI_SH4(v8u16, __VA_ARGS__)
#define SAT_UH2(RTYPE, in0, in1, sat_val)               \
#define SAT_UH2_UH(...) SAT_UH2(v8u16, __VA_ARGS__)
#define SAT_UH2_SH(...) SAT_UH2(v8i16, __VA_ARGS__)
#define SAT_UH4(RTYPE, in0, in1, in2, in3, sat_val)  \
#define SAT_UH4_UH(...) SAT_UH4(v8u16, __VA_ARGS__)
#define SAT_SH2(RTYPE, in0, in1, sat_val)               \
#define SAT_SH2_SH(...) SAT_SH2(v8i16, __VA_ARGS__)
#define SAT_SH3(RTYPE, in0, in1, in2, sat_val)          \
#define SAT_SH3_SH(...) SAT_SH3(v8i16, __VA_ARGS__)
#define SAT_SH4(RTYPE, in0, in1, in2, in3, sat_val)  \
#define SAT_SH4_SH(...) SAT_SH4(v8i16, __VA_ARGS__)
#define SAT_SW2(RTYPE, in0, in1, sat_val)               \
#define SAT_SW2_SW(...) SAT_SW2(v4i32, __VA_ARGS__)
#define SAT_SW4(RTYPE, in0, in1, in2, in3, sat_val)  \
#define SAT_SW4_SW(...) SAT_SW4(v4i32, __VA_ARGS__)
#define SPLATI_H2(RTYPE, in, idx0, idx1, out0, out1)  \
#define SPLATI_H2_SB(...) SPLATI_H2(v16i8, __VA_ARGS__)
#define SPLATI_H2_SH(...) SPLATI_H2(v8i16, __VA_ARGS__)
#define SPLATI_H3(RTYPE, in, idx0, idx1, idx2,        \
out0, out1, out2)                   \
#define SPLATI_H3_SB(...) SPLATI_H3(v16i8, __VA_ARGS__)
#define SPLATI_H3_SH(...) SPLATI_H3(v8i16, __VA_ARGS__)
#define SPLATI_H4(RTYPE, in, idx0, idx1, idx2, idx3,  \
out0, out1, out2, out3)             \
#define SPLATI_H4_SB(...) SPLATI_H4(v16i8, __VA_ARGS__)
#define SPLATI_H4_SH(...) SPLATI_H4(v8i16, __VA_ARGS__)
#define SPLATI_W2(RTYPE, in, stidx, out0, out1)            \
#define SPLATI_W2_SH(...) SPLATI_W2(v8i16, __VA_ARGS__)
#define SPLATI_W2_SW(...) SPLATI_W2(v4i32, __VA_ARGS__)
#define SPLATI_W4(RTYPE, in, out0, out1, out2, out3)  \
#define SPLATI_W4_SH(...) SPLATI_W4(v8i16, __VA_ARGS__)
#define SPLATI_W4_SW(...) SPLATI_W4(v4i32, __VA_ARGS__)
#define PCKEV_B2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define PCKEV_B2_SB(...) PCKEV_B2(v16i8, __VA_ARGS__)
#define PCKEV_B2_UB(...) PCKEV_B2(v16u8, __VA_ARGS__)
#define PCKEV_B2_SH(...) PCKEV_B2(v8i16, __VA_ARGS__)
#define PCKEV_B2_SW(...) PCKEV_B2(v4i32, __VA_ARGS__)
#define PCKEV_B3(RTYPE, in0, in1, in2, in3, in4, in5, out0, out1, out2)  \
#define PCKEV_B3_UB(...) PCKEV_B3(v16u8, __VA_ARGS__)
#define PCKEV_B3_SB(...) PCKEV_B3(v16i8, __VA_ARGS__)
#define PCKEV_B4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define PCKEV_B4_SB(...) PCKEV_B4(v16i8, __VA_ARGS__)
#define PCKEV_B4_UB(...) PCKEV_B4(v16u8, __VA_ARGS__)
#define PCKEV_B4_SH(...) PCKEV_B4(v8i16, __VA_ARGS__)
#define PCKEV_B4_SW(...) PCKEV_B4(v4i32, __VA_ARGS__)
#define PCKEV_H2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define PCKEV_H2_SH(...) PCKEV_H2(v8i16, __VA_ARGS__)
#define PCKEV_H2_SW(...) PCKEV_H2(v4i32, __VA_ARGS__)
#define PCKEV_H4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define PCKEV_H4_SH(...) PCKEV_H4(v8i16, __VA_ARGS__)
#define PCKEV_H4_SW(...) PCKEV_H4(v4i32, __VA_ARGS__)
#define PCKEV_D2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define PCKEV_D2_UB(...) PCKEV_D2(v16u8, __VA_ARGS__)
#define PCKEV_D2_SB(...) PCKEV_D2(v16i8, __VA_ARGS__)
#define PCKEV_D2_SH(...) PCKEV_D2(v8i16, __VA_ARGS__)
#define PCKEV_D4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define PCKEV_D4_UB(...) PCKEV_D4(v16u8, __VA_ARGS__)
#define PCKOD_D2(RTYPE, in0, in1, in2, in3, out0, out1)      \
#define PCKOD_D2_UB(...) PCKOD_D2(v16u8, __VA_ARGS__)
#define PCKOD_D2_SH(...) PCKOD_D2(v8i16, __VA_ARGS__)
#define PCKOD_D2_SD(...) PCKOD_D2(v2i64, __VA_ARGS__)
#define XORI_B2_128(RTYPE, in0, in1)               \
#define XORI_B2_128_UB(...) XORI_B2_128(v16u8, __VA_ARGS__)
#define XORI_B2_128_SB(...) XORI_B2_128(v16i8, __VA_ARGS__)
#define XORI_B2_128_SH(...) XORI_B2_128(v8i16, __VA_ARGS__)
#define XORI_B3_128(RTYPE, in0, in1, in2)          \
#define XORI_B3_128_SB(...) XORI_B3_128(v16i8, __VA_ARGS__)
#define XORI_B4_128(RTYPE, in0, in1, in2, in3)  \
#define XORI_B4_128_UB(...) XORI_B4_128(v16u8, __VA_ARGS__)
#define XORI_B4_128_SB(...) XORI_B4_128(v16i8, __VA_ARGS__)
#define XORI_B4_128_SH(...) XORI_B4_128(v8i16, __VA_ARGS__)
#define XORI_B5_128(RTYPE, in0, in1, in2, in3, in4)  \
#define XORI_B5_128_SB(...) XORI_B5_128(v16i8, __VA_ARGS__)
#define XORI_B6_128(RTYPE, in0, in1, in2, in3, in4, in5)  \
#define XORI_B6_128_SB(...) XORI_B6_128(v16i8, __VA_ARGS__)
#define XORI_B7_128(RTYPE, in0, in1, in2, in3, in4, in5, in6)  \
#define XORI_B7_128_SB(...) XORI_B7_128(v16i8, __VA_ARGS__)
#define XORI_B8_128(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7)  \
#define XORI_B8_128_SB(...) XORI_B8_128(v16i8, __VA_ARGS__)
#define ADDS_SH2(RTYPE, in0, in1, in2, in3, out0, out1)       \
#define ADDS_SH2_SH(...) ADDS_SH2(v8i16, __VA_ARGS__)
#define ADDS_SH4(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define ADDS_SH4_UH(...) ADDS_SH4(v8u16, __VA_ARGS__)
#define ADDS_SH4_SH(...) ADDS_SH4(v8i16, __VA_ARGS__)
#define SLLI_4V(in0, in1, in2, in3, shift)  \
#define SRA_4V(in0, in1, in2, in3, shift)  \
#define SRL_H4(RTYPE, in0, in1, in2, in3, shift)            \
#define SRL_H4_UH(...) SRL_H4(v8u16, __VA_ARGS__)
#define SRAR_H2(RTYPE, in0, in1, shift)                      \
#define SRAR_H2_UH(...) SRAR_H2(v8u16, __VA_ARGS__)
#define SRAR_H2_SH(...) SRAR_H2(v8i16, __VA_ARGS__)
#define SRAR_H3(RTYPE, in0, in1, in2, shift)                 \
#define SRAR_H3_SH(...) SRAR_H3(v8i16, __VA_ARGS__)
#define SRAR_H4(RTYPE, in0, in1, in2, in3, shift)  \
#define SRAR_H4_UH(...) SRAR_H4(v8u16, __VA_ARGS__)
#define SRAR_H4_SH(...) SRAR_H4(v8i16, __VA_ARGS__)
#define SRAR_W2(RTYPE, in0, in1, shift)                      \
#define SRAR_W2_SW(...) SRAR_W2(v4i32, __VA_ARGS__)
#define SRAR_W4(RTYPE, in0, in1, in2, in3, shift)  \
#define SRAR_W4_SW(...) SRAR_W4(v4i32, __VA_ARGS__)
#define SRARI_H2(RTYPE, in0, in1, shift)              \
#define SRARI_H2_UH(...) SRARI_H2(v8u16, __VA_ARGS__)
#define SRARI_H2_SH(...) SRARI_H2(v8i16, __VA_ARGS__)
#define SRARI_H4(RTYPE, in0, in1, in2, in3, shift)    \
#define SRARI_H4_UH(...) SRARI_H4(v8u16, __VA_ARGS__)
#define SRARI_H4_SH(...) SRARI_H4(v8i16, __VA_ARGS__)
#define SRARI_W2(RTYPE, in0, in1, shift)              \
#define SRARI_W2_SW(...) SRARI_W2(v4i32, __VA_ARGS__)
#define SRARI_W4(RTYPE, in0, in1, in2, in3, shift)  \
#define SRARI_W4_SH(...) SRARI_W4(v8i16, __VA_ARGS__)
#define SRARI_W4_SW(...) SRARI_W4(v4i32, __VA_ARGS__)
#define MUL2(in0, in1, in2, in3, out0, out1)  \
#define MUL4(in0, in1, in2, in3, in4, in5, in6, in7, out0, out1, out2, out3)  \
#define ADD2(in0, in1, in2, in3, out0, out1)  \
#define ADD4(in0, in1, in2, in3, in4, in5, in6, in7, out0, out1, out2, out3)  \
#define SUB2(in0, in1, in2, in3, out0, out1)  \
#define SUB4(in0, in1, in2, in3, in4, in5, in6, in7, out0, out1, out2, out3)  \
#define UNPCK_R_SH_SW(in, out)                       \
#define UNPCK_SB_SH(in, out0, out1)                  \
#define UNPCK_UB_SH(in, out0, out1)                   \
#define UNPCK_SH_SW(in, out0, out1)                  \
#define SWAP(in0, in1)  \
#define BUTTERFLY_4(in0, in1, in2, in3, out0, out1, out2, out3)  \
#define BUTTERFLY_8(in0, in1, in2, in3, in4, in5, in6, in7,          \
out0, out1, out2, out3, out4, out5, out6, out7)  \
#define BUTTERFLY_16(in0, in1, in2, in3, in4, in5, in6, in7,                \
in8, in9,  in10, in11, in12, in13, in14, in15,         \
out0, out1, out2, out3, out4, out5, out6, out7,        \
out8, out9, out10, out11, out12, out13, out14, out15)  \
#define TRANSPOSE4x4_UB_UB(in0, in1, in2, in3, out0, out1, out2, out3)  \
#define TRANSPOSE8x4_UB(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3)                         \
#define TRANSPOSE8x4_UB_UB(...) TRANSPOSE8x4_UB(v16u8, __VA_ARGS__)
#define TRANSPOSE8x4_UB_UH(...) TRANSPOSE8x4_UB(v8u16, __VA_ARGS__)
#define TRANSPOSE8x8_UB(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,   \
out0, out1, out2, out3, out4, out5, out6, out7)  \
#define TRANSPOSE8x8_UB_UB(...) TRANSPOSE8x8_UB(v16u8, __VA_ARGS__)
#define TRANSPOSE8x8_UB_UH(...) TRANSPOSE8x8_UB(v8u16, __VA_ARGS__)
#define TRANSPOSE16x4_UB_UB(in0, in1, in2, in3, in4, in5, in6, in7,        \
in8, in9, in10, in11, in12, in13, in14, in15,  \
out0, out1, out2, out3)                        \
#define TRANSPOSE16x8_UB_UB(in0, in1, in2, in3, in4, in5, in6, in7,          \
in8, in9, in10, in11, in12, in13, in14, in15,    \
out0, out1, out2, out3, out4, out5, out6, out7)  \
#define TRANSPOSE4x4_SH_SH(in0, in1, in2, in3, out0, out1, out2, out3)  \
#define TRANSPOSE8x8_H(RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,   \
out0, out1, out2, out3, out4, out5, out6, out7)  \
#define TRANSPOSE8x8_UH_UH(...) TRANSPOSE8x8_H(v8u16, __VA_ARGS__)
#define TRANSPOSE8x8_SH_SH(...) TRANSPOSE8x8_H(v8i16, __VA_ARGS__)
#define TRANSPOSE4x4_SW_SW(in0, in1, in2, in3, out0, out1, out2, out3)  \
#define AVE_ST8x4_UB(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define AVE_ST16x4_UB(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define AVER_ST8x4_UB(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define AVER_ST16x4_UB(in0, in1, in2, in3, in4, in5, in6, in7, pdst, stride)  \
#define AVER_DST_ST8x4_UB(in0, in1, in2, in3, in4, in5, in6, in7,  \
pdst, stride)                            \
#define AVER_DST_ST16x4_UB(in0, in1, in2, in3, in4, in5, in6, in7,  \
pdst, stride)                            \
#define ADDBLK_ST4x4_UB(in0, in1, in2, in3, pdst, stride)         \
#define DPADD_SH3_SH(in0, in1, in2, coeff0, coeff1, coeff2)         \
(  )
#define PCKEV_XORI128_UB(in0, in1)                            \
(  )
#define CONVERT_UB_AVG_ST8x4_UB(in0, in1, in2, in3,                    \
dst0, dst1, dst2, dst3, pdst, stride)  \
#define PCKEV_ST4x4_UB(in0, in1, in2, in3, pdst, stride)  \
#define PCKEV_ST_SB(in0, in1, pdst)                   \
#define HORIZ_2TAP_FILT_UH(in0, in1, mask, coeff, shift)            \
(  )
