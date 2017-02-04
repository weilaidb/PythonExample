typedef struct TrellisPath  TrellisPath;
typedef struct TrellisNode  TrellisNode;
typedef struct ADPCMEncodeContext  ADPCMEncodeContext;
#define FREEZE_INTERVAL 128
adpcm_encode_close;
adpcm_encode_init
adpcm_encode_close
adpcm_ima_compress_sample
adpcm_ima_qt_compress_sample
adpcm_ms_compress_sample
adpcm_yamaha_compress_sample
adpcm_compress_trellis
adpcm_encode_frame
static const enum AVSampleFormat sample_fmts[] = ;
static const enum AVSampleFormat sample_fmts_p[] = ;
ADPCM_ENCODER \
AVCodec ff_ ## name_ ## _encoder =
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_IMA_QT,  adpcm_ima_qt,  sample_fmts_p, );
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_IMA_WAV, adpcm_ima_wav, sample_fmts_p, );
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_MS,      adpcm_ms,      sample_fmts,   );
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_SWF,     adpcm_swf,     sample_fmts,   );
ADPCM_ENCODER(AV_CODEC_ID_ADPCM_YAMAHA,  adpcm_yamaha,  sample_fmts,   );
