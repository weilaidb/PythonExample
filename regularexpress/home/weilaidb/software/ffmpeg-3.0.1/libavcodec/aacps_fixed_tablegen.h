#define AVCODEC_AACPS_FIXED_TABLEGEN_H
#if CONFIG_HARDCODED_TABLES
#define ps_tableinit()
#define TABLE_CONST const
#define NR_ALLPASS_BANDS20 30
#define NR_ALLPASS_BANDS34 50
#define PS_AP_LINKS 3
#define TABLE_CONST
static int pd_re_smooth[8*8*8];
static int pd_im_smooth[8*8*8];
static int HA[46][8][4];
static int HB[46][8][4];
static DECLARE_ALIGNED(16, int, f20_0_8) [ 8][8][2];
static DECLARE_ALIGNED(16, int, f34_0_12)[12][8][2];
static DECLARE_ALIGNED(16, int, f34_1_8) [ 8][8][2];
static DECLARE_ALIGNED(16, int, f34_2_4) [ 4][8][2];
static TABLE_CONST DECLARE_ALIGNED(16, int, Q_fract_allpass)[2][50][3][2];
static DECLARE_ALIGNED(16, int, phi_fract)[2][50][2];
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
static void make_filters_from_proto(int (*filter)[8][2], const int *proto, int bands)
static void ps_tableinit(void)
