#define AVCODEC_AACPS_TABLEGEN_H
#if CONFIG_HARDCODED_TABLES
ps_tableinit
#define TABLE_CONST const
#define NR_ALLPASS_BANDS20 30
#define NR_ALLPASS_BANDS34 50
#define PS_AP_LINKS 3
#define TABLE_CONST
static float pd_re_smooth[8*8*8];
static float pd_im_smooth[8*8*8];
static float HA[46][8][4];
static float HB[46][8][4];
DECLARE_ALIGNED [ 8][8][2];
DECLARE_ALIGNED[12][8][2];
DECLARE_ALIGNED [ 8][8][2];
DECLARE_ALIGNED [ 4][8][2];
DECLARE_ALIGNED[2][50][3][2];
DECLARE_ALIGNED[2][50][2];
static const float g0_Q8[] = ;
static const float g0_Q12[] = ;
static const float g1_Q8[] = ;
static const float g2_Q4[] = ;
make_filters_from_proto[8][2], const float *proto, int bands)
ps_tableinit
