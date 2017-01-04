static const uint8_t cbp_vlc_bits[16] = ;
static const uint8_t cbp_vlc_lens[16] = ;
static const uint16_t dc9_vlc_bits[512] = ;
static const uint8_t dc9_vlc_lens[512] = ;
static const uint16_t dc10_vlc_bits[1024] = ;
static const uint8_t dc10_vlc_lens[1024] = ;
static const uint16_t dc11_vlc_bits[2048] = ;
static const uint8_t dc11_vlc_lens[2048] = ;
#define RPT_2(a, b, c)    ,
#define RPT_4(a, b, c)    RPT_2(  a, b, c), RPT_2(  a, b, c)
#define RPT_8(a, b, c)    RPT_4(  a, b, c), RPT_4(  a, b, c)
#define RPT_16(a, b, c)   RPT_8(  a, b, c), RPT_8(  a, b, c)
#define RPT_32(a, b, c)   RPT_16( a, b, c), RPT_16( a, b, c)
#define RPT_64(a, b, c)   RPT_32( a, b, c), RPT_32( a, b, c)
#define RPT_128(a, b, c)  RPT_64( a, b, c), RPT_64( a, b, c)
#define RPT_256(a, b, c)  RPT_128(a, b, c), RPT_128(a, b, c)
#define RPT_512(a, b, c)  RPT_256(a, b, c), RPT_256(a, b, c)
#define RPT_1024(a, b, c) RPT_512(a, b, c), RPT_512(a, b, c)
static const HQXLUT ac0_lut[] = ;
static const HQXLUT ac8_lut[] = ;
static const HQXLUT ac16_lut[] = ;
static const HQXLUT ac32_lut[] = ;
static const HQXLUT ac64_lut[] = ;
static const HQXLUT ac128_lut[] = ;
const HQXAC ff_hqx_ac[NUM_HQX_AC] = ;
#define INIT_DC_TABLE(idx, name)                                              \
do  while (0)
av_cold int ff_hqx_init_vlcs(HQXContext *ctx)
