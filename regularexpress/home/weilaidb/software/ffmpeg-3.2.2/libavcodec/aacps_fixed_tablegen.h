#define AVCODEC_AACPS_FIXED_TABLEGEN_H
#if CONFIG_HARDCODED_TABLES
ps_tableinit
#define TABLE_CONST const
#define NR_ALLPASS_BANDS20 30
#define NR_ALLPASS_BANDS34 50
#define PS_AP_LINKS 3
#define TABLE_CONST
static int pd_re_smooth[8*8*8];
static int pd_im_smooth[8*8*8];
static int HA[46][8][4];
static int HB[46][8][4];
DECLARE_ALIGNED [ 8][8][2];
DECLARE_ALIGNED[12][8][2];
DECLARE_ALIGNED [ 8][8][2];
DECLARE_ALIGNED [ 4][8][2];
DECLARE_ALIGNED[2][50][3][2];
DECLARE_ALIGNED[2][50][2];
static const int g0_Q8[] = ;
static const int g0_Q12[] = ;
static const int g1_Q8[] = ;
static const int g2_Q4[] = ;
static const int sintbl_4[4]   = ;
static const int costbl_4[4]   = ;
static const int sintbl_8[8]   = ;
static const int costbl_8[8]   = ;
static const int sintbl_12[12] = ;
static const int costbl_12[12] = ;
make_filters_from_proto[8][2], const int *proto, int bands)
ps_tableinit
