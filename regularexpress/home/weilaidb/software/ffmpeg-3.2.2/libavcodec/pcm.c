static av_cold int pcm_encode_init(AVCodecContext *avctx)
#define ENCODE(type, endian, src, dst, n, shift, offset)                \
samples_ ## type = (const type *) src;                              \
for (; n > 0; n--)
#define ENCODE_PLANAR(type, endian, dst, n, shift, offset)              \
n /= avctx->channels;                                               \
for (c = 0; c < avctx->channels; c++)
static int pcm_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
typedef struct PCMDecode  PCMDecode;
static av_cold int pcm_decode_init(AVCodecContext *avctx)
#define DECODE(size, endian, src, dst, n, shift, offset)                \
for (; n > 0; n--)
#define DECODE_PLANAR(size, endian, src, dst, n, shift, offset)         \
n /= avctx->channels;                                               \
for (c = 0; c < avctx->channels; c++)
static int pcm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define PCM_ENCODER_0(id_, sample_fmt_, name_, long_name_)
#define PCM_ENCODER_1(id_, sample_fmt_, name_, long_name_)                  \
AVCodec ff_ ## name_ ## _encoder =
#define PCM_ENCODER_2(cf, id, sample_fmt, name, long_name)                  \
PCM_ENCODER_ ## cf(id, sample_fmt, name, long_name)
#define PCM_ENCODER_3(cf, id, sample_fmt, name, long_name)                  \
PCM_ENCODER_2(cf, id, sample_fmt, name, long_name)
#define PCM_ENCODER(id, sample_fmt, name, long_name)                        \
PCM_ENCODER_3(CONFIG_ ## id ## _ENCODER, id, sample_fmt, name, long_name)
#define PCM_DECODER_0(id, sample_fmt, name, long_name)
#define PCM_DECODER_1(id_, sample_fmt_, name_, long_name_)                  \
AVCodec ff_ ## name_ ## _decoder =
#define PCM_DECODER_2(cf, id, sample_fmt, name, long_name)                  \
PCM_DECODER_ ## cf(id, sample_fmt, name, long_name)
#define PCM_DECODER_3(cf, id, sample_fmt, name, long_name)                  \
PCM_DECODER_2(cf, id, sample_fmt, name, long_name)
#define PCM_DECODER(id, sample_fmt, name, long_name)                        \
PCM_DECODER_3(CONFIG_ ## id ## _DECODER, id, sample_fmt, name, long_name)
#define PCM_CODEC(id, sample_fmt_, name, long_name_)                    \
PCM_ENCODER(id, sample_fmt_, name, long_name_);                     \
PCM_DECODER(id, sample_fmt_, name, long_name_)
PCM_CODEC  (PCM_ALAW,         AV_SAMPLE_FMT_S16, pcm_alaw,         "PCM A-law / G.711 A-law");
PCM_CODEC  (PCM_F32BE,        AV_SAMPLE_FMT_FLT, pcm_f32be,        "PCM 32-bit floating point big-endian");
PCM_CODEC  (PCM_F32LE,        AV_SAMPLE_FMT_FLT, pcm_f32le,        "PCM 32-bit floating point little-endian");
PCM_CODEC  (PCM_F64BE,        AV_SAMPLE_FMT_DBL, pcm_f64be,        "PCM 64-bit floating point big-endian");
PCM_CODEC  (PCM_F64LE,        AV_SAMPLE_FMT_DBL, pcm_f64le,        "PCM 64-bit floating point little-endian");
PCM_DECODER(PCM_LXF,          AV_SAMPLE_FMT_S32P,pcm_lxf,          "PCM signed 20-bit little-endian planar");
PCM_CODEC  (PCM_MULAW,        AV_SAMPLE_FMT_S16, pcm_mulaw,        "PCM mu-law / G.711 mu-law");
PCM_CODEC  (PCM_S8,           AV_SAMPLE_FMT_U8,  pcm_s8,           "PCM signed 8-bit");
PCM_CODEC  (PCM_S8_PLANAR,    AV_SAMPLE_FMT_U8P, pcm_s8_planar,    "PCM signed 8-bit planar");
PCM_CODEC  (PCM_S16BE,        AV_SAMPLE_FMT_S16, pcm_s16be,        "PCM signed 16-bit big-endian");
PCM_CODEC  (PCM_S16BE_PLANAR, AV_SAMPLE_FMT_S16P,pcm_s16be_planar, "PCM signed 16-bit big-endian planar");
PCM_CODEC  (PCM_S16LE,        AV_SAMPLE_FMT_S16, pcm_s16le,        "PCM signed 16-bit little-endian");
PCM_CODEC  (PCM_S16LE_PLANAR, AV_SAMPLE_FMT_S16P,pcm_s16le_planar, "PCM signed 16-bit little-endian planar");
PCM_CODEC  (PCM_S24BE,        AV_SAMPLE_FMT_S32, pcm_s24be,        "PCM signed 24-bit big-endian");
PCM_CODEC  (PCM_S24DAUD,      AV_SAMPLE_FMT_S16, pcm_s24daud,      "PCM D-Cinema audio signed 24-bit");
PCM_CODEC  (PCM_S24LE,        AV_SAMPLE_FMT_S32, pcm_s24le,        "PCM signed 24-bit little-endian");
PCM_CODEC  (PCM_S24LE_PLANAR, AV_SAMPLE_FMT_S32P,pcm_s24le_planar, "PCM signed 24-bit little-endian planar");
PCM_CODEC  (PCM_S32BE,        AV_SAMPLE_FMT_S32, pcm_s32be,        "PCM signed 32-bit big-endian");
PCM_CODEC  (PCM_S32LE,        AV_SAMPLE_FMT_S32, pcm_s32le,        "PCM signed 32-bit little-endian");
PCM_CODEC  (PCM_S32LE_PLANAR, AV_SAMPLE_FMT_S32P,pcm_s32le_planar, "PCM signed 32-bit little-endian planar");
PCM_CODEC  (PCM_U8,           AV_SAMPLE_FMT_U8,  pcm_u8,           "PCM unsigned 8-bit");
PCM_CODEC  (PCM_U16BE,        AV_SAMPLE_FMT_S16, pcm_u16be,        "PCM unsigned 16-bit big-endian");
PCM_CODEC  (PCM_U16LE,        AV_SAMPLE_FMT_S16, pcm_u16le,        "PCM unsigned 16-bit little-endian");
PCM_CODEC  (PCM_U24BE,        AV_SAMPLE_FMT_S32, pcm_u24be,        "PCM unsigned 24-bit big-endian");
PCM_CODEC  (PCM_U24LE,        AV_SAMPLE_FMT_S32, pcm_u24le,        "PCM unsigned 24-bit little-endian");
PCM_CODEC  (PCM_U32BE,        AV_SAMPLE_FMT_S32, pcm_u32be,        "PCM unsigned 32-bit big-endian");
PCM_CODEC  (PCM_U32LE,        AV_SAMPLE_FMT_S32, pcm_u32le,        "PCM unsigned 32-bit little-endian");
PCM_DECODER(PCM_ZORK,         AV_SAMPLE_FMT_U8,  pcm_zork,         "PCM Zork");
PCM_CODEC  (PCM_S64BE,        AV_SAMPLE_FMT_S64, pcm_s64be,        "PCM signed 64-bit big-endian");
PCM_CODEC  (PCM_S64LE,        AV_SAMPLE_FMT_S64, pcm_s64le,        "PCM signed 64-bit little-endian");
