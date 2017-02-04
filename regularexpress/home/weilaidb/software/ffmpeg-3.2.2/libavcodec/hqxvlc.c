static const uint8_t cbp_vlc_bits[16] = ;
static const uint8_t cbp_vlc_lens[16] = ;
static const uint16_t dc9_vlc_bits[512] = ;
static const uint8_t dc9_vlc_lens[512] = ;
static const uint16_t dc10_vlc_bits[1024] = ;
static const uint8_t dc10_vlc_lens[1024] = ;
static const uint16_t dc11_vlc_bits[2048] = ;
static const uint8_t dc11_vlc_lens[2048] = ;
RPT_2    ,
RPT_4    RPT_2(  a, b, c), RPT_2(  a, b, c)
RPT_8    RPT_4(  a, b, c), RPT_4(  a, b, c)
RPT_16   RPT_8(  a, b, c), RPT_8(  a, b, c)
RPT_32   RPT_16( a, b, c), RPT_16( a, b, c)
RPT_64   RPT_32( a, b, c), RPT_32( a, b, c)
RPT_128  RPT_64( a, b, c), RPT_64( a, b, c)
RPT_256  RPT_128(a, b, c), RPT_128(a, b, c)
RPT_512  RPT_256(a, b, c), RPT_256(a, b, c)
RPT_1024 RPT_512(a, b, c), RPT_512(a, b, c)
static const HQXLUT ac0_lut[] = ;
static const HQXLUT ac8_lut[] = ;
static const HQXLUT ac16_lut[] = ;
static const HQXLUT ac32_lut[] = ;
static const HQXLUT ac64_lut[] = ;
static const HQXLUT ac128_lut[] = ;
const HQXAC ff_hqx_ac[NUM_HQX_AC] = ;
INIT_DC_TABLE                                              \
do  while (0)
ff_hqx_init_vlcs
