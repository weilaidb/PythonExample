#define AVCODEC_DCA_XLL_H
#define DCA_XLL_CHSETS_MAX              3
#define DCA_XLL_CHANNELS_MAX            8
#define DCA_XLL_BANDS_MAX               2
#define DCA_XLL_ADAPT_PRED_ORDER_MAX    16
#define DCA_XLL_DECI_HISTORY_MAX        8
#define DCA_XLL_DMIX_SCALES_MAX         ((DCA_XLL_CHSETS_MAX - 1) * DCA_XLL_CHANNELS_MAX)
#define DCA_XLL_DMIX_COEFFS_MAX         (DCA_XLL_DMIX_SCALES_MAX * DCA_XLL_CHANNELS_MAX)
#define DCA_XLL_PBR_BUFFER_MAX          (240 << 10)
#define DCA_XLL_SAMPLE_BUFFERS_MAX      3
typedef struct DCAXllBand  DCAXllBand;
typedef struct DCAXllChSet  DCAXllChSet;
typedef struct DCAXllDecoder  DCAXllDecoder;
int ff_dca_xll_parse(DCAXllDecoder *s, uint8_t *data, DCAExssAsset *asset);
int ff_dca_xll_filter_frame(DCAXllDecoder *s, AVFrame *frame);
av_cold void ff_dca_xll_flush(DCAXllDecoder *s);
av_cold void ff_dca_xll_close(DCAXllDecoder *s);
