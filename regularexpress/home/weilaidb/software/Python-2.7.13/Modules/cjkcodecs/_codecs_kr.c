#define EUCKR_JAMO_FIRSTBYTE    0xA4
#define EUCKR_JAMO_FILLER       0xD4
static const unsigned char u2cgk_choseong[19] = ;
static const unsigned char u2cgk_jungseong[21] = ;
static const unsigned char u2cgk_jongseong[28] = ;
ENCODER(euc_kr)
#define NONE    127
static const unsigned char cgk2u_choseong[] = ;
static const unsigned char cgk2u_jongseong[] = ;
DECODER(euc_kr)
#undef NONE
ENCODER(cp949)
DECODER(cp949)
static const unsigned char u2johabidx_choseong[32] = ;
static const unsigned char u2johabidx_jungseong[32] = ;
static const unsigned char u2johabidx_jongseong[32] = ;
static const DBCHAR u2johabjamo[] = ;
ENCODER(johab)
#define FILL 0xfd
#define NONE 0xff
static const unsigned char johabidx_choseong[32] = ;
static const unsigned char johabidx_jungseong[32] = ;
static const unsigned char johabidx_jongseong[32] = ;
static const unsigned char johabjamo_choseong[32] = ;
static const unsigned char johabjamo_jungseong[32] = ;
static const unsigned char johabjamo_jongseong[32] = ;
DECODER(johab)
#undef NONE
#undef FILL
BEGIN_MAPPINGS_LIST
MAPPING_DECONLY(ksx1001)
MAPPING_ENCONLY(cp949)
MAPPING_DECONLY(cp949ext)
END_MAPPINGS_LIST
BEGIN_CODECS_LIST
CODEC_STATELESS(euc_kr)
CODEC_STATELESS(cp949)
CODEC_STATELESS(johab)
END_CODECS_LIST
I_AM_A_MODULE_FOR(kr)
