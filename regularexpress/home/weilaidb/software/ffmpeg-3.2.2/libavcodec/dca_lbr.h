#define AVCODEC_DCA_LBR_H
#define DCA_LBR_CHANNELS        6
#define DCA_LBR_CHANNELS_TOTAL  32
#define DCA_LBR_SUBBANDS        32
#define DCA_LBR_TONES           512
#define DCA_LBR_TIME_SAMPLES    128
#define DCA_LBR_TIME_HISTORY    8
typedef struct DCALbrTone  DCALbrTone;
typedef struct DCALbrDecoder  DCALbrDecoder;
ff_dca_lbr_parse;
ff_dca_lbr_filter_frame;
ff_dca_lbr_flush;
ff_dca_lbr_init;
ff_dca_lbr_close;
