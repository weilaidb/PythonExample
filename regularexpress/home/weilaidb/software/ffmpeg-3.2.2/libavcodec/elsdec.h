#define AVCODEC_ELSDEC_H
#define ELS_EXPGOLOMB_LEN   10
typedef struct ElsDecCtx  ElsDecCtx;
typedef struct ElsRungNode  ElsRungNode;
typedef struct ElsUnsignedRung  ElsUnsignedRung;
ff_els_decoder_init;
ff_els_decoder_uninit;
ff_els_decode_bit;
ff_els_decode_unsigned;
