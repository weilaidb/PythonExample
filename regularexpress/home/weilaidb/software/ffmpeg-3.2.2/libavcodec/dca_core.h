#define AVCODEC_DCA_CORE_H
#define DCA_CHANNELS            7
#define DCA_SUBBANDS            32
#define DCA_SUBBANDS_X96        64
#define DCA_SUBFRAMES           16
#define DCA_SUBBAND_SAMPLES     8
#define DCA_PCMBLOCK_SAMPLES    32
#define DCA_ADPCM_COEFFS        4
#define DCA_LFE_HISTORY         8
#define DCA_ABITS_MAX           26
#define DCA_CORE_CHANNELS_MAX       6
#define DCA_DMIX_CHANNELS_MAX       4
#define DCA_XXCH_CHANNELS_MAX       2
#define DCA_EXSS_CHANNELS_MAX       8
#define DCA_EXSS_CHSETS_MAX         4
#define DCA_FILTER_MODE_X96     0x01
#define DCA_FILTER_MODE_FIXED   0x02
typedef struct DCADSPData  DCADSPData;
typedef struct DCACoreDecoder  DCACoreDecoder;
ff_dca_core_map_spkr
ff_dca_core_parse;
ff_dca_core_parse_exss;
ff_dca_core_filter_fixed;
ff_dca_core_filter_frame;
ff_dca_core_flush;
ff_dca_core_init;
ff_dca_core_close;
