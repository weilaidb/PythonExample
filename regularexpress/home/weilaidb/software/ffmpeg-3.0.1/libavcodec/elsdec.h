#define AVCODEC_ELSDEC_H
#define ELS_EXPGOLOMB_LEN   10
typedef struct ElsDecCtx  ElsDecCtx;
typedef struct ElsRungNode  ElsRungNode;
typedef struct ElsUnsignedRung  ElsUnsignedRung;
void ff_els_decoder_init(ElsDecCtx *ctx, const uint8_t *in, size_t data_size);
void ff_els_decoder_uninit(ElsUnsignedRung *rung);
int  ff_els_decode_bit(ElsDecCtx *ctx, unsigned char *rung);
unsigned ff_els_decode_unsigned(ElsDecCtx *ctx, ElsUnsignedRung *ur);
