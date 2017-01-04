#define BITS_INV_ACC    5
#define SHIFT_INV_ROW   (16 - BITS_INV_ACC)
#define SHIFT_INV_COL   (1 + BITS_INV_ACC)
#define RND_INV_ROW     (1024 * (6 - BITS_INV_ACC))
#define RND_INV_COL     (16 * (BITS_INV_ACC - 3))
#define RND_INV_CORR    (RND_INV_COL - 1)
#define BITS_FRW_ACC    3
#define SHIFT_FRW_COL   BITS_FRW_ACC
#define SHIFT_FRW_ROW   (BITS_FRW_ACC + 17)
#define RND_FRW_ROW     (262144*(BITS_FRW_ACC - 1))
DECLARE_ALIGNED(8, static const int16_t, tg_1_16)[4*4] = ;
DECLARE_ALIGNED(8, static const int32_t, rounder_0)[2*8] = ;
DECLARE_ALIGNED(8, static const int16_t, tab_i_04_mmi)[32*4] = ;
#define DCT_8_INV_ROW_MMI(A1,A2,A3,A4)                                      \
"dli $10, 0x88              \n\t"                                       \
"ldc1 $f4, "#A1"            \n\t"\
"dmtc1 $10, $f16            \n\t"                                       \
"ldc1 $f10, 8+"#A1"         \n\t"\
"ldc1 $f6, "#A3"            \n\t"\
"pshufh $f0, $f4, $f16      \n\t"\
"ldc1 $f8, 8+"#A3"          \n\t"\
"ldc1 $f12, 32+"#A3"        \n\t"\
"pmaddhw $f6, $f6, $f0      \n\t"\
"dli $10, 0xdd              \n\t"                                       \
"pshufh $f2, $f10, $f16     \n\t"\
"dmtc1 $10, $f16            \n\t"                                       \
"pmaddhw $f8, $f8, $f2      \n\t"\
"ldc1 $f14, 40+"#A3"        \n\t"\
"pshufh $f4, $f4, $f16      \n\t"\
"pmaddhw $f12, $f12, $f4    \n\t"\
"pshufh $f10, $f10, $f16    \n\t"\
"ldc1 $f18, "#A4"           \n\t"                                       \
"pmaddhw $f14, $f14, $f10   \n\t"\
"paddw $f6, $f6, $f18       \n\t"\
"ldc1 $f16, 16+"#A3"        \n\t"                                       \
"pmaddhw $f0, $f0, $f16     \n\t"\
"ldc1 $f16, 24+"#A3"        \n\t"                                       \
"paddw $f6, $f6, $f8        \n\t"\
"pmaddhw $f2, $f2, $f16     \n\t"\
"ldc1 $f16, 48+"#A3"        \n\t"                                       \
"pmaddhw $f4, $f4, $f16     \n\t"\
"ldc1 $f16, 56+"#A3"        \n\t"                                       \
"paddw $f12, $f12, $f14     \n\t"\
"dli $10, 11                \n\t"                                       \
"pmaddhw $f10, $f10, $f16   \n\t"\
"dmtc1 $10, $f16            \n\t"                                       \
"psubw $f8, $f6, $f12       \n\t"\
"paddw $f6, $f6, $f12       \n\t"\
"paddw $f0, $f0, $f18       \n\t"\
"psraw $f6, $f6, $f16       \n\t"\
"paddw $f0, $f0, $f2        \n\t"\
"paddw $f4, $f4, $f10       \n\t"\
"psraw $f8, $f8, $f16       \n\t"\
"psubw $f14, $f0, $f4       \n\t"\
"paddw $f0, $f0, $f4        \n\t"\
"psraw $f0, $f0, $f16       \n\t"\
"psraw $f14, $f14, $f16     \n\t"\
"dli $10, 0xb1              \n\t"                                       \
"packsswh $f6, $f6, $f0     \n\t"\
"dmtc1 $10, $f16            \n\t"                                       \
"packsswh $f14, $f14, $f8   \n\t"\
"sdc1 $f6, "#A2"            \n\t"\
"pshufh $f14, $f14, $f16    \n\t"\
"sdc1 $f14, 8+"#A2"         \n\t"\
#define DCT_8_INV_COL(A1,A2)                                                \
"ldc1 $f2, 2*8(%3)          \n\t"                                       \
"ldc1 $f6, 16*3+"#A1"       \n\t"                                       \
"ldc1 $f10, 16*5+"#A1"      \n\t"                                       \
"pmulhh $f0, $f2, $f6       \n\t"\
"ldc1 $f4, 0(%3)            \n\t"                                       \
"pmulhh $f2, $f2, $f10      \n\t"\
"ldc1 $f14, 16*7+"#A1"      \n\t"                                       \
"ldc1 $f12, 16*1+"#A1"      \n\t"                                       \
"pmulhh $f8, $f4, $f14      \n\t"\
"paddsh $f0, $f0, $f6       \n\t"\
"pmulhh $f4, $f4, $f12      \n\t"\
"paddsh $f2, $f2, $f6       \n\t"\
"psubsh $f0, $f0, $f10      \n\t"\
"ldc1 $f6, 3*8(%3)          \n\t"                                       \
"paddsh $f2, $f2, $f10      \n\t"\
"paddsh $f8, $f8, $f12      \n\t"\
"psubsh $f4, $f4, $f14      \n\t"\
"paddsh $f10, $f8, $f2      \n\t"\
"psubsh $f12, $f4, $f0      \n\t"\
"psubsh $f8, $f8, $f2       \n\t"\
"paddsh $f4, $f4, $f0       \n\t"\
"ldc1 $f14, 1*8(%3)         \n\t"                                       \
"sdc1 $f10, 3*16+"#A2"      \n\t"\
"paddsh $f2, $f8, $f4       \n\t"\
"sdc1 $f12, 5*16+"#A2"      \n\t"\
"psubsh $f8, $f8, $f4       \n\t"\
"ldc1 $f10, 2*16+"#A1"      \n\t"                                       \
"ldc1 $f12, 6*16+"#A1"      \n\t"                                       \
"pmulhh $f0, $f14, $f10     \n\t"\
"pmulhh $f14, $f14, $f12    \n\t"\
"pmulhh $f2, $f2, $f6       \n\t"\
"ldc1 $f4, 0*16+"#A1"       \n\t"                                       \
"pmulhh $f8, $f8, $f6       \n\t"\
"psubsh $f0, $f0, $f12      \n\t"\
"ldc1 $f12, 4*16+"#A1"      \n\t"                                       \
"paddsh $f14, $f14, $f10    \n\t"\
"psubsh $f6, $f4, $f12      \n\t"\
"paddsh $f4, $f4, $f12      \n\t"\
"paddsh $f10, $f4, $f14     \n\t"\
"psubsh $f12, $f6, $f0      \n\t"\
"psubsh $f4, $f4, $f14      \n\t"\
"paddsh $f6, $f6, $f0       \n\t"\
"paddsh $f2, $f2, $f2       \n\t"\
"paddsh $f8, $f8, $f8       \n\t"\
"psubsh $f14, $f6, $f2      \n\t"\
"dli $10, 6                 \n\t"                                       \
"paddsh $f6, $f6, $f2       \n\t"\
"dmtc1 $10, $f16            \n\t"                                       \
"psubsh $f0, $f12, $f8      \n\t"\
"paddsh $f12, $f12, $f8     \n\t"\
"psrah $f6, $f6, $f16       \n\t"\
"psrah $f12, $f12, $f16     \n\t"\
"ldc1 $f2, 3*16+"#A2"       \n\t"\
"psrah $f14, $f14, $f16     \n\t"\
"psrah $f0, $f0, $f16       \n\t"\
"sdc1 $f6, 1*16+"#A2"       \n\t"                                       \
"psubsh $f8, $f10, $f2      \n\t"\
"paddsh $f10, $f10, $f2     \n\t"\
"sdc1 $f12, 2*16+"#A2"      \n\t"                                       \
"ldc1 $f6, 5*16+"#A2"       \n\t"\
"psrah $f10, $f10, $f16     \n\t"\
"psrah $f8, $f8, $f16       \n\t"\
"sdc1 $f0, 5*16+"#A2"       \n\t"                                       \
"psubsh $f12, $f4, $f6      \n\t"\
"paddsh $f4, $f4, $f6       \n\t"\
"sdc1 $f14, 6*16+"#A2"      \n\t"                                       \
"sdc1 $f10, 0*16+"#A2"      \n\t"                                       \
"psrah $f4, $f4, $f16       \n\t"\
"sdc1 $f8, 7*16+"#A2"       \n\t"                                       \
"psrah $f12, $f12, $f16     \n\t"\
"sdc1 $f4, 3*16+"#A2"       \n\t"                                       \
"sdc1 $f12, 4*16+"#A2"      \n\t"                                       \
void ff_xvid_idct_mmi(int16_t *block)
void ff_xvid_idct_put_mmi(uint8_t *dest, int32_t line_size, int16_t *block)
void ff_xvid_idct_add_mmi(uint8_t *dest, int32_t line_size, int16_t *block)
