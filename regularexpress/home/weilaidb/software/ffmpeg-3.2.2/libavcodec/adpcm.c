static const int xa_adpcm_table[5][2] = ;
static const int ea_adpcm_table[] = ;
static const int swf_index_tables[4][16] = ;
typedef struct ADPCMDecodeContext  ADPCMDecodeContext;
adpcm_decode_init
adpcm_ima_expand_nibble
adpcm_ima_wav_expand_nibble
adpcm_ima_qt_expand_nibble
adpcm_ms_expand_nibble
adpcm_ima_oki_expand_nibble
adpcm_ct_expand_nibble
adpcm_sbpro_expand_nibble
adpcm_yamaha_expand_nibble
adpcm_mtaf_expand_nibble
xa_decode
adpcm_swf_decode
get_nb_samples
adpcm_decode_frame
adpcm_flush
static const enum AVSampleFormat sample_fmts_s16[]  = ;
static const enum AVSampleFormat sample_fmts_s16p[] = ;
static const enum AVSampleFormat sample_fmts_both[] = ;
ADPCM_DECODER \
AVCodec ff_ ## name_ ## _decoder =
ADPCM_DECODER(AV_CODEC_ID_ADPCM_4XM,         sample_fmts_s16p, adpcm_4xm,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_AFC,         sample_fmts_s16p, adpcm_afc,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_AICA,        sample_fmts_s16p, adpcm_aica,        );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_CT,          sample_fmts_s16,  adpcm_ct,          );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_DTK,         sample_fmts_s16p, adpcm_dtk,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA,          sample_fmts_s16,  adpcm_ea,          );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_MAXIS_XA, sample_fmts_s16,  adpcm_ea_maxis_xa, );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R1,       sample_fmts_s16p, adpcm_ea_r1,       );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R2,       sample_fmts_s16p, adpcm_ea_r2,       );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_R3,       sample_fmts_s16p, adpcm_ea_r3,       );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_EA_XAS,      sample_fmts_s16p, adpcm_ea_xas,      );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_AMV,     sample_fmts_s16,  adpcm_ima_amv,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_APC,     sample_fmts_s16,  adpcm_ima_apc,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DAT4,    sample_fmts_s16,  adpcm_ima_dat4,    );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DK3,     sample_fmts_s16,  adpcm_ima_dk3,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_DK4,     sample_fmts_s16,  adpcm_ima_dk4,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_EA_EACS, sample_fmts_s16,  adpcm_ima_ea_eacs, );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_EA_SEAD, sample_fmts_s16,  adpcm_ima_ea_sead, );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_ISS,     sample_fmts_s16,  adpcm_ima_iss,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_OKI,     sample_fmts_s16,  adpcm_ima_oki,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_QT,      sample_fmts_s16p, adpcm_ima_qt,      );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_RAD,     sample_fmts_s16,  adpcm_ima_rad,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_SMJPEG,  sample_fmts_s16,  adpcm_ima_smjpeg,  );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_WAV,     sample_fmts_s16p, adpcm_ima_wav,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_IMA_WS,      sample_fmts_both, adpcm_ima_ws,      );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_MS,          sample_fmts_s16,  adpcm_ms,          );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_MTAF,        sample_fmts_s16p, adpcm_mtaf,        );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_PSX,         sample_fmts_s16p, adpcm_psx,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_2,     sample_fmts_s16,  adpcm_sbpro_2,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_3,     sample_fmts_s16,  adpcm_sbpro_3,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SBPRO_4,     sample_fmts_s16,  adpcm_sbpro_4,     );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_SWF,         sample_fmts_s16,  adpcm_swf,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_THP_LE,      sample_fmts_s16p, adpcm_thp_le,      );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_THP,         sample_fmts_s16p, adpcm_thp,         );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_XA,          sample_fmts_s16p, adpcm_xa,          );
ADPCM_DECODER(AV_CODEC_ID_ADPCM_YAMAHA,      sample_fmts_s16,  adpcm_yamaha,      );
