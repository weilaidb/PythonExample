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
DCT_8_INV_ROW_MMI                                      \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
DCT_8_INV_COL                                                \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
ff_xvid_idct_mmi
ff_xvid_idct_put_mmi
ff_xvid_idct_add_mmi
