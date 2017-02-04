pcm_encode_init
ENCODE                \
samples_ ## type = (const type *) src;                              \
for (; n > 0; n--)
ENCODE_PLANAR              \
n /= avctx->channels;                                               \
for (c = 0; c < avctx->channels; c++)
pcm_encode_frame
typedef struct PCMDecode  PCMDecode;
pcm_decode_init
DECODE                \
for (; n > 0; n--)
DECODE_PLANAR         \
n /= avctx->channels;                                               \
for (c = 0; c < avctx->channels; c++)
pcm_decode_frame
PCM_ENCODER_0
PCM_ENCODER_1                  \
AVCodec ff_ ## name_ ## _encoder =
PCM_ENCODER_2                  \
PCM_ENCODER_ ## cf(id, sample_fmt, name, long_name)
PCM_ENCODER_3                  \
PCM_ENCODER_2(cf, id, sample_fmt, name, long_name)
PCM_ENCODER                        \
PCM_ENCODER_3(CONFIG_ ## id ## _ENCODER, id, sample_fmt, name, long_name)
PCM_DECODER_0
PCM_DECODER_1                  \
AVCodec ff_ ## name_ ## _decoder =
PCM_DECODER_2                  \
PCM_DECODER_ ## cf(id, sample_fmt, name, long_name)
PCM_DECODER_3                  \
PCM_DECODER_2(cf, id, sample_fmt, name, long_name)
PCM_DECODER                        \
PCM_DECODER_3(CONFIG_ ## id ## _DECODER, id, sample_fmt, name, long_name)
PCM_CODEC                    \
PCM_ENCODER(id, sample_fmt_, name, long_name_);                     \
PCM_DECODER(id, sample_fmt_, name, long_name_)
PCM_CODEC  (PCM_ALAW,         AV_SAMPLE_FMT_S16, pcm_alaw,         );
PCM_CODEC  (PCM_F32BE,        AV_SAMPLE_FMT_FLT, pcm_f32be,        );
PCM_CODEC  (PCM_F32LE,        AV_SAMPLE_FMT_FLT, pcm_f32le,        );
PCM_CODEC  (PCM_F64BE,        AV_SAMPLE_FMT_DBL, pcm_f64be,        );
PCM_CODEC  (PCM_F64LE,        AV_SAMPLE_FMT_DBL, pcm_f64le,        );
PCM_DECODER(PCM_LXF,          AV_SAMPLE_FMT_S32P,pcm_lxf,          );
PCM_CODEC  (PCM_MULAW,        AV_SAMPLE_FMT_S16, pcm_mulaw,        );
PCM_CODEC  (PCM_S8,           AV_SAMPLE_FMT_U8,  pcm_s8,           );
PCM_CODEC  (PCM_S8_PLANAR,    AV_SAMPLE_FMT_U8P, pcm_s8_planar,    );
PCM_CODEC  (PCM_S16BE,        AV_SAMPLE_FMT_S16, pcm_s16be,        );
PCM_CODEC  (PCM_S16BE_PLANAR, AV_SAMPLE_FMT_S16P,pcm_s16be_planar, );
PCM_CODEC  (PCM_S16LE,        AV_SAMPLE_FMT_S16, pcm_s16le,        );
PCM_CODEC  (PCM_S16LE_PLANAR, AV_SAMPLE_FMT_S16P,pcm_s16le_planar, );
PCM_CODEC  (PCM_S24BE,        AV_SAMPLE_FMT_S32, pcm_s24be,        );
PCM_CODEC  (PCM_S24DAUD,      AV_SAMPLE_FMT_S16, pcm_s24daud,      );
PCM_CODEC  (PCM_S24LE,        AV_SAMPLE_FMT_S32, pcm_s24le,        );
PCM_CODEC  (PCM_S24LE_PLANAR, AV_SAMPLE_FMT_S32P,pcm_s24le_planar, );
PCM_CODEC  (PCM_S32BE,        AV_SAMPLE_FMT_S32, pcm_s32be,        );
PCM_CODEC  (PCM_S32LE,        AV_SAMPLE_FMT_S32, pcm_s32le,        );
PCM_CODEC  (PCM_S32LE_PLANAR, AV_SAMPLE_FMT_S32P,pcm_s32le_planar, );
PCM_CODEC  (PCM_U8,           AV_SAMPLE_FMT_U8,  pcm_u8,           );
PCM_CODEC  (PCM_U16BE,        AV_SAMPLE_FMT_S16, pcm_u16be,        );
PCM_CODEC  (PCM_U16LE,        AV_SAMPLE_FMT_S16, pcm_u16le,        );
PCM_CODEC  (PCM_U24BE,        AV_SAMPLE_FMT_S32, pcm_u24be,        );
PCM_CODEC  (PCM_U24LE,        AV_SAMPLE_FMT_S32, pcm_u24le,        );
PCM_CODEC  (PCM_U32BE,        AV_SAMPLE_FMT_S32, pcm_u32be,        );
PCM_CODEC  (PCM_U32LE,        AV_SAMPLE_FMT_S32, pcm_u32le,        );
PCM_DECODER(PCM_ZORK,         AV_SAMPLE_FMT_U8,  pcm_zork,         );
PCM_CODEC  (PCM_S64BE,        AV_SAMPLE_FMT_S64, pcm_s64be,        );
PCM_CODEC  (PCM_S64LE,        AV_SAMPLE_FMT_S64, pcm_s64le,        );
