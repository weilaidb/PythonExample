#define AVCODEC_DCA_LBR_H
#define DCA_LBR_CHANNELS        6
#define DCA_LBR_CHANNELS_TOTAL  32
#define DCA_LBR_SUBBANDS        32
#define DCA_LBR_TONES           512
#define DCA_LBR_TIME_SAMPLES    128
#define DCA_LBR_TIME_HISTORY    8
typedef struct DCALbrTone  DCALbrTone;
typedef struct DCALbrDecoder  DCALbrDecoder;
int ff_dca_lbr_parse(DCALbrDecoder *s, uint8_t *data, DCAExssAsset *asset);
int ff_dca_lbr_filter_frame(DCALbrDecoder *s, AVFrame *frame);
av_cold void ff_dca_lbr_flush(DCALbrDecoder *s);
av_cold int ff_dca_lbr_init(DCALbrDecoder *s);
av_cold void ff_dca_lbr_close(DCALbrDecoder *s);
