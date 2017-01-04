typedef struct PCMAudioDemuxerContext  PCMAudioDemuxerContext;
static int pcm_read_header(AVFormatContext *s)
static const AVOption pcm_options[] = ;
#define PCMDEF(name_, long_name_, ext, codec)               \
static const AVClass name_ ## _demuxer_class = ;                                                          \
AVInputFormat ff_pcm_ ## name_ ## _demuxer = ;
PCMDEF(f64be, "PCM 64-bit floating-point big-endian",
NULL, AV_CODEC_ID_PCM_F64BE)
PCMDEF(f64le, "PCM 64-bit floating-point little-endian",
NULL, AV_CODEC_ID_PCM_F64LE)
PCMDEF(f32be, "PCM 32-bit floating-point big-endian",
NULL, AV_CODEC_ID_PCM_F32BE)
PCMDEF(f32le, "PCM 32-bit floating-point little-endian",
NULL, AV_CODEC_ID_PCM_F32LE)
PCMDEF(s32be, "PCM signed 32-bit big-endian",
NULL, AV_CODEC_ID_PCM_S32BE)
PCMDEF(s32le, "PCM signed 32-bit little-endian",
NULL, AV_CODEC_ID_PCM_S32LE)
PCMDEF(s24be, "PCM signed 24-bit big-endian",
NULL, AV_CODEC_ID_PCM_S24BE)
PCMDEF(s24le, "PCM signed 24-bit little-endian",
NULL, AV_CODEC_ID_PCM_S24LE)
PCMDEF(s16be, "PCM signed 16-bit big-endian",
AV_NE("sw", NULL), AV_CODEC_ID_PCM_S16BE)
PCMDEF(s16le, "PCM signed 16-bit little-endian",
AV_NE(NULL, "sw"), AV_CODEC_ID_PCM_S16LE)
PCMDEF(s8, "PCM signed 8-bit",
"sb", AV_CODEC_ID_PCM_S8)
PCMDEF(u32be, "PCM unsigned 32-bit big-endian",
NULL, AV_CODEC_ID_PCM_U32BE)
PCMDEF(u32le, "PCM unsigned 32-bit little-endian",
NULL, AV_CODEC_ID_PCM_U32LE)
PCMDEF(u24be, "PCM unsigned 24-bit big-endian",
NULL, AV_CODEC_ID_PCM_U24BE)
PCMDEF(u24le, "PCM unsigned 24-bit little-endian",
NULL, AV_CODEC_ID_PCM_U24LE)
PCMDEF(u16be, "PCM unsigned 16-bit big-endian",
AV_NE("uw", NULL), AV_CODEC_ID_PCM_U16BE)
PCMDEF(u16le, "PCM unsigned 16-bit little-endian",
AV_NE(NULL, "uw"), AV_CODEC_ID_PCM_U16LE)
PCMDEF(u8, "PCM unsigned 8-bit",
"ub", AV_CODEC_ID_PCM_U8)
PCMDEF(alaw, "PCM A-law",
"al", AV_CODEC_ID_PCM_ALAW)
PCMDEF(mulaw, "PCM mu-law",
"ul", AV_CODEC_ID_PCM_MULAW)
static const AVOption sln_options[] = ;
static const AVClass sln_demuxer_class = ;
AVInputFormat ff_sln_demuxer = ;
