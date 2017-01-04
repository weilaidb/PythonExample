#define AVCODEC_AACPS_TABLEGEN_H
#if CONFIG_HARDCODED_TABLES
#define ps_tableinit()
#define TABLE_CONST const
#define NR_ALLPASS_BANDS20 30
#define NR_ALLPASS_BANDS34 50
#define PS_AP_LINKS 3
#define TABLE_CONST
static float pd_re_smooth[8*8*8];
static float pd_im_smooth[8*8*8];
static float HA[46][8][4];
static float HB[46][8][4];
static DECLARE_ALIGNED(16, float, f20_0_8) [ 8][8][2];
static DECLARE_ALIGNED(16, float, f34_0_12)[12][8][2];
static DECLARE_ALIGNED(16, float, f34_1_8) [ 8][8][2];
static DECLARE_ALIGNED(16, float, f34_2_4) [ 4][8][2];
static TABLE_CONST DECLARE_ALIGNED(16, float, Q_fract_allpass)[2][50][3][2];
static DECLARE_ALIGNED(16, float, phi_fract)[2][50][2];
static const float g0_Q8[] = ;
static const float g0_Q12[] = ;
static const float g1_Q8[] = ;
static const float g2_Q4[] = ;
static av_cold void make_filters_from_proto(float (*filter)[8][2], const float *proto, int bands)
static av_cold void ps_tableinit(void)
